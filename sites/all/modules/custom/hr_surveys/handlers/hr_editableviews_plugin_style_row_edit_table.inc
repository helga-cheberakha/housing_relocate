<?php
/**
 * @file
 * Definition of hr_editableviews_plugin_style_row_edit_table.
 */

/**
 * Plugin class for the RH Editable Table style.
 *
 * Override editableviews_plugin_style_row_edit_table class.
 */
class hr_editableviews_plugin_style_row_edit_table extends editableviews_plugin_style_row_edit_table {

  /**
   * Insert the field form elements into the rendered View fields.
   *
   * @param $result
   *   The result array from $view->result
   */
  function insert_form_elements($result) {
    // Get our edit field handlers.
    $edit_field_handlers = $this->get_edit_field_handlers();
    if (empty($edit_field_handlers)) {
      // There's nothing to do!
      return;
    }

    $relationship_handlers = $this->display->handler->get_handlers('relationship');

    // Build an array of the field names to make editable.
    // The keys are the id keys of the Views handlers.
    // For non-field-API fields, the definition must include this property.
    $edit_fields = array();
    // Create the keys in this so they exist even for relationships with no
    // editable fields.
    $edit_field_handlers_grouped = array_fill_keys(array_keys($relationship_handlers), array());
    $edit_field_handlers_grouped[$this->view->base_table] = array();

    foreach ($edit_field_handlers as $handler_id => $handler) {
      $edit_fields[$handler_id] = $handler->field_name();

      // Build an array of handlers grouped by relationship ID.
      // This is for the form builder to only work on the handlers that are
      // relevant to the entity's relationship.
      $field_handler_relationship_id = $handler->options['relationship'];
      if ($field_handler_relationship_id == 'none') {
        $field_handler_relationship_id = $this->view->base_table;
      }

      $edit_field_handlers_grouped[$field_handler_relationship_id][$handler_id] = $handler;
    }

    // Build an array of entities that we should be working with. We load the
    // that are implicit in the view result, creating new ones if there are any
    // gaps.
    // The entity ID fields have been added to the view result by query().
    $result_entities = array();
    foreach ($result as $index => $result_row) {
      foreach ($this->helper->relationship_entity_fields as $relationship_id => $relationship_entity_data) {
        $entity_type = $relationship_entity_data['entity_type'];
        // Get the entity ID out of the result.
        $entity_id = $result_row->{$relationship_entity_data['id_field_alias']};

        // Get the entities we work with, and build an array of them.
        if (isset($entity_id)) {
          $entity = entity_load_single($entity_type, $entity_id);

          $result_entities[$entity_type][$entity_id] = $entity;
        }
        else {
          if (count($edit_field_handlers_grouped[$relationship_id])) {
            // If there is no entity, and the relationship has editable fields,
            // we create one (i.e., make the object without saving it). We give
            // this a fake entity id, composed of the relationship handler id
            // and the index so it's unique.
            $entity_id = $relationship_id . ':' . $index;

            $entity = $this->helper->entity_create($relationship_id);

            $result_entities[$entity_type][$entity_id] = $entity;
          }
        }

        // Build a lookup from entity type and entity to the result row index
        // and relationship. It helps to conceptualize this as giving us
        // coordinates for where the entity has fields in the view table:
        // the index gives the row, and the relationship gives the column(s).
        // This is for the form builder to be able to get to the right result
        // row and to know which handlers to get form elements from.
        $result_indexes[$entity_type][$entity_id] = array($relationship_id, $index);

        // Build a lookup array of the same coordinates, but towards the entity:
        // keys are relationship ID then index, values are entity type and entity.
        $result_indexes_reverse[$relationship_id][$index] = array($entity_type, $entity_id);
      }
    }
    
    // Make a combined array of coordinate lookups, both forward and reverse.
    // TODO: eventually replace everything to work with this arrays instead of
    // the two separate ones.
    $results_coordinates = array(
      'entities_to_results' => $result_indexes,
      'results_to_entities' => $result_indexes_reverse,
    );

    // Build up some lookups pertaining to field handlers, and set the editable
    // fields on new entities.
    $result_entity_ids = array();
    foreach ($result as $index => $result_row) {
      foreach ($edit_field_handlers as $handler_id => $handler) {
        // Get the entity type and entity for this field handler from the
        // relationship lookup.
        $field_handler_relationship_id = $handler->options['relationship'];
        if ($field_handler_relationship_id == 'none') {
          $field_handler_relationship_id = $this->view->base_table;
        }

        // Add the field_name for this field handler to the list on the entity
        // which keeps track of them.
        list($entity_type, $entity_id) = $result_indexes_reverse[$field_handler_relationship_id][$index];
        if (!is_numeric($entity_id)) {
          $entity = $result_entities[$entity_type][$entity_id];
          $entity->editableviews_exposed_fields[] = $handler->field_name();
        }

        // Build a lookup array from index and field handler to the entity type
        // and entity. This is to get to the right form element to include when
        // we finally render our fields.
        // Just get the entity coordinates from the relationship lookup.
        $result_entity_ids[$index][$handler_id] = $result_indexes_reverse[$field_handler_relationship_id][$index];
      }
    }
    
    // Now we have built up all our entities, go over them again and add
    // the connecting properties to any new ones.
    // In other words:
    //  - On a forward relationship, the existing entity on the relationship's
    //    base needs to point to the new entity that is (potentially) about to
    //    be saved.
    //  - On a reverse relationship, the new entity that is about to be created
    //    needs to point back to the existing entity on the relationship's base.
    // Here we figure out the id we need to point to, and the property to point
    // to it in.
    $this->helper->connect_new_entities($result_entities, $results_coordinates, $edit_field_handlers_grouped);
    
    // Load up the form render array.
    $this->get_form($result_entities, $results_coordinates, $edit_field_handlers_grouped);

    // Attach js to form
    $this->form['#attached']['js'][] = drupal_get_path('module', 'hr_surveys') . '/js/hr-surveys-form.js';
    $this->form['#attached']['css'][] = drupal_get_path('module', 'hr_surveys') . '/css/hr-surveys-form.css';
    // Doctor the view's rendered fields to add in the form elements for
    // the appropriate entity and field.
    foreach ($this->rendered_fields as $index => $rendered_fields) {
      foreach ($edit_fields as $handler_id => $field_name) {
        // Get the already rendered field.
        $rendered_field = $this->rendered_fields[$index][$handler_id];

        // Get the entity type and entity that this field handler shows from our
        // lookup array, so that we can pick out the form element to render
        // for it.
        list($entity_type, $entity_id) = $result_entity_ids[$index][$handler_id];

        // Do not display required marker if there isn't a title
        $lang = (isset($this->form[$entity_type][$entity_id][$field_name]['#language'])) ? $this->form[$entity_type][$entity_id][$field_name]['#language'] : LANGUAGE_NONE;
        if (isset($this->form[$entity_type][$entity_id][$field_name][$lang]['#title']) && empty($this->form[$entity_type][$entity_id][$field_name][$lang]['#title'])) {
          $this->form[$entity_type][$entity_id][$field_name][$lang]['#title_display'] = 'none';
        }

        // Display editable form element as roll up block
        $btn_edit = TRUE;
        if (isset($this->form[$entity_type][$entity_id][$field_name][$lang]['#options']) && empty($this->form[$entity_type][$entity_id][$field_name][$lang]['#options'])) {
          $btn_edit = FALSE;
        }
        
        // Display saved values
        // Display editable form element as roll up block
        $this->rendered_fields[$index][$handler_id] = '<div class="views-row-edit-wrap">';
        $this->rendered_fields[$index][$handler_id] .= '<div class="views-row-edit-static-wrap">';
        if ($btn_edit) {
          $this->rendered_fields[$index][$handler_id] .= '<div class="rollup-btn-wrap"><span class="rollup-btn">' . t('edit') . '</span></div>';
        }
        $this->rendered_fields[$index][$handler_id] .= '<div class="views-row-edit-static">' . $rendered_field . '</div>';
        $this->rendered_fields[$index][$handler_id] .= '</div>';
        $this->rendered_fields[$index][$handler_id] .= '<div class="views-row-edit-edit" style="display:none;">' . drupal_render($this->form[$entity_type][$entity_id][$field_name]) . '</div>';
        $this->rendered_fields[$index][$handler_id] .= '</div>';
      }
    }
  }
}