<?php
/**
 * @file
 * feature_hr_surveys.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function feature_hr_surveys_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_account_info|entityform|survey|form';
  $field_group->group_name = 'group_account_info';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'survey';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Account',
    'weight' => '0',
    'children' => array(
      0 => 'field_applicant_email',
      1 => 'field_applicant_firstname',
      2 => 'field_applicant_lastname',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Account',
      'instance_settings' => array(
        'required_fields' => 0,
        'id' => '',
        'classes' => 'group-account-info field-group-div hr-group-inline',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_account_info|entityform|survey|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_additional_table|entityform|survey|default';
  $field_group->group_name = 'group_additional_table';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'survey';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Additional information',
    'weight' => '3',
    'children' => array(
      0 => 'field_habitation_pets',
      1 => 'field_habitation_pets_info',
      2 => 'field_habitation_request',
    ),
    'format_type' => 'table',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'label_visibility' => 3,
        'desc' => '',
        'first_column' => '',
        'second_column' => '',
        'empty_label_behavior' => 1,
        'table_row_striping' => FALSE,
        'always_show_field_label' => FALSE,
        'classes' => 'group-additional-table field-group-table',
      ),
    ),
  );
  $export['group_additional_table|entityform|survey|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_admin_table|entityform|survey|default';
  $field_group->group_name = 'group_admin_table';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'survey';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Administration information',
    'weight' => '5',
    'children' => array(
      0 => 'field_applicant_agencies',
      1 => 'field_applicant_email_allinkl',
      2 => 'field_survey_status',
    ),
    'format_type' => 'table',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'label_visibility' => 3,
        'desc' => '',
        'first_column' => '',
        'second_column' => '',
        'empty_label_behavior' => 1,
        'table_row_striping' => FALSE,
        'always_show_field_label' => FALSE,
        'classes' => 'group-admin-table field-group-table',
      ),
    ),
  );
  $export['group_admin_table|entityform|survey|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_agency_info|node|agency|default';
  $field_group->group_name = 'group_agency_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'agency';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Main information',
    'weight' => '1',
    'children' => array(
      0 => 'field_agency_contact',
      1 => 'field_agency_town',
    ),
    'format_type' => 'hidden',
    'format_settings' => array(
      'label' => 'Main information',
      'instance_settings' => array(
        'label_visibility' => '1',
        'desc' => '',
        'first_column' => '',
        'second_column' => '',
        'empty_label_behavior' => '1',
        'table_row_striping' => 0,
        'always_show_field_label' => 0,
        'classes' => 'group-agency-info field-group-table',
      ),
      'formatter' => '',
    ),
  );
  $export['group_agency_info|node|agency|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_habitation_occupants|entityform|survey|form';
  $field_group->group_name = 'group_habitation_occupants';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'survey';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_left_colm';
  $field_group->data = array(
    'label' => 'Anzahl der Erwachsenen und Kinder:',
    'weight' => '11',
    'children' => array(
      0 => 'field_occupants_adults',
      1 => 'field_occupants_kids',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Anzahl der Erwachsenen und Kinder:',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-habitation-occupants field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_habitation_occupants|entityform|survey|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_left_colm|entityform|survey|form';
  $field_group->group_name = 'group_left_colm';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'survey';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_two_colm';
  $field_group->data = array(
    'label' => 'Left column',
    'weight' => '2',
    'children' => array(
      0 => 'field_habitation_maxprice',
      1 => 'group_habitation_occupants',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Left column',
      'instance_settings' => array(
        'required_fields' => 0,
        'id' => '',
        'classes' => 'group-left-colm field-group-div two-columns',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_left_colm|entityform|survey|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_location_table|entityform|survey|default';
  $field_group->group_name = 'group_location_table';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'survey';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Location information',
    'weight' => '2',
    'children' => array(
      0 => 'field_habitation_town',
      1 => 'field_habitation_naddress',
    ),
    'format_type' => 'table',
    'format_settings' => array(
      'label' => 'Location information',
      'instance_settings' => array(
        'label_visibility' => '3',
        'desc' => '',
        'first_column' => '',
        'second_column' => '',
        'empty_label_behavior' => '1',
        'table_row_striping' => 0,
        'always_show_field_label' => 0,
        'classes' => 'group-location-table field-group-table',
      ),
    ),
  );
  $export['group_location_table|entityform|survey|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main_table|entityform|survey|default';
  $field_group->group_name = 'group_main_table';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'survey';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Main information',
    'weight' => '1',
    'children' => array(
      0 => 'field_habitation_checkin',
      1 => 'field_habitation_maxprice',
      2 => 'field_occupants_adults',
      3 => 'field_occupants_kids',
      4 => 'field_habitation_rent_term',
    ),
    'format_type' => 'table',
    'format_settings' => array(
      'label' => 'Main information',
      'instance_settings' => array(
        'label_visibility' => '1',
        'desc' => '',
        'first_column' => '',
        'second_column' => '',
        'empty_label_behavior' => '1',
        'table_row_striping' => 0,
        'always_show_field_label' => 0,
        'classes' => 'group-main-table field-group-table',
      ),
    ),
  );
  $export['group_main_table|entityform|survey|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_right_colm|entityform|survey|form';
  $field_group->group_name = 'group_right_colm';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'survey';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_two_colm';
  $field_group->data = array(
    'label' => 'Right column',
    'weight' => '3',
    'children' => array(
      0 => 'field_habitation_checkin',
      1 => 'field_habitation_rent_term',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Right column',
      'instance_settings' => array(
        'required_fields' => 0,
        'id' => '',
        'classes' => 'group-right-colm field-group-div two-columns',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_right_colm|entityform|survey|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_service_info|entityform|survey|form';
  $field_group->group_name = 'group_service_info';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'survey';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Service information',
    'weight' => '6',
    'children' => array(
      0 => 'field_applicant_agencies',
      1 => 'field_applicant_email_allinkl',
      2 => 'field_survey_status',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-service-info field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_service_info|entityform|survey|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_table|entityform|survey|default';
  $field_group->group_name = 'group_table';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'survey';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contact information',
    'weight' => '0',
    'children' => array(
      0 => 'field_applicant_email',
      1 => 'field_applicant_firstname',
      2 => 'field_applicant_lastname',
    ),
    'format_type' => 'table',
    'format_settings' => array(
      'label' => 'Contact information',
      'instance_settings' => array(
        'label_visibility' => '3',
        'desc' => '',
        'first_column' => '',
        'second_column' => '',
        'empty_label_behavior' => '2',
        'table_row_striping' => 0,
        'always_show_field_label' => 0,
        'classes' => 'group-table field-group-table',
      ),
    ),
  );
  $export['group_table|entityform|survey|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_two_colm|entityform|survey|form';
  $field_group->group_name = 'group_two_colm';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'survey';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Two columns',
    'weight' => '1',
    'children' => array(
      0 => 'group_left_colm',
      1 => 'group_right_colm',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Two columns',
      'instance_settings' => array(
        'required_fields' => 0,
        'id' => '',
        'classes' => 'group-two-colm field-group-div hr-group-inline',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_two_colm|entityform|survey|form'] = $field_group;

  return $export;
}
