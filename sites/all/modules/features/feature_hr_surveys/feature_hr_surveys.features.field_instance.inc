<?php
/**
 * @file
 * feature_hr_surveys.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function feature_hr_surveys_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'entityform-survey-field_applicant_agencies'.
  $field_instances['entityform-survey-field_applicant_agencies'] = array(
    'bundle' => 'survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_applicant_agencies',
    'label' => 'Agencies',
    'required' => 0,
    'settings' => array(
      'hr_surveys_question' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'entityform-survey-field_applicant_email'.
  $field_instances['entityform-survey-field_applicant_email'] = array(
    'bundle' => 'survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'hr_surveys',
        'settings' => array(),
        'type' => 'hr_surveys_textemail',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_applicant_email',
    'label' => 'Email',
    'required' => 1,
    'settings' => array(
      'rh_surveys_question' => 1,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'entityform-survey-field_applicant_email_allinkl'.
  $field_instances['entityform-survey-field_applicant_email_allinkl'] = array(
    'bundle' => 'survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_applicant_email_allinkl',
    'label' => 'Email ALL-INKL',
    'required' => 0,
    'settings' => array(
      'hr_surveys_question' => 0,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'entityform-survey-field_applicant_name'.
  $field_instances['entityform-survey-field_applicant_name'] = array(
    'bundle' => 'survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_applicant_name',
    'label' => 'Name',
    'required' => 1,
    'settings' => array(
      'rh_surveys_question' => 1,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'entityform-survey-field_habitation_checkin'.
  $field_instances['entityform-survey-field_habitation_checkin'] = array(
    'bundle' => 'survey',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
        ),
        'type' => 'date_default',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_habitation_checkin',
    'label' => 'Mietbeginn:',
    'required' => 1,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'hr_surveys_question' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'm/d/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'no_fieldset' => 0,
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'entityform-survey-field_habitation_maxprice'.
  $field_instances['entityform-survey-field_habitation_maxprice'] = array(
    'bundle' => 'survey',
    'default_value' => array(
      0 => array(
        'value' => 5000,
        'container' => array(
          'max_value' => 5000,
          'min_value' => 0,
        ),
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_habitation_maxprice',
    'label' => 'Max. Pauschalmiete:',
    'required' => 0,
    'settings' => array(
      'hr_surveys_question' => 1,
      'max' => 5000,
      'min' => 0,
      'prefix' => '&euro;',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'sliderfield',
      'settings' => array(
        'sliderfield_settings' => array(
          'adjust_field_max' => '',
          'adjust_field_min' => '',
          'animate' => 1,
          'display_bubble' => 0,
          'display_bubble_format' => '%{value}%&euro;',
          'display_ignore_button' => 0,
          'display_values' => 1,
          'display_values_format' => '%{value}%&euro;',
          'hide_inputs' => 0,
          'hide_slider_handle_when_no_value' => 0,
          'multi_value' => 0,
          'orientation' => 'horizontal',
          'range' => 'min',
          'slider_length' => '97%',
          'slider_style' => 'steel-blue',
          'step' => 1,
        ),
      ),
      'type' => 'sliderfield',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'entityform-survey-field_habitation_naddress'.
  $field_instances['entityform-survey-field_habitation_naddress'] = array(
    'bundle' => 'survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_habitation_naddress',
    'label' => 'Suche in der Nähe von:',
    'required' => 0,
    'settings' => array(
      'hr_surveys_question' => 1,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 2,
      ),
      'type' => 'text_textarea',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'entityform-survey-field_habitation_pets'.
  $field_instances['entityform-survey-field_habitation_pets'] = array(
    'bundle' => 'survey',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'hr_surveys',
        'settings' => array(),
        'type' => 'hr_surveys_boolean_yesno',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_habitation_pets',
    'label' => 'Haustier (ja/nein und welches):',
    'required' => 0,
    'settings' => array(
      'hr_surveys_question' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'entityform-survey-field_habitation_pets_info'.
  $field_instances['entityform-survey-field_habitation_pets_info'] = array(
    'bundle' => 'survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_habitation_pets_info',
    'label' => 'Pets',
    'required' => 0,
    'settings' => array(
      'hr_surveys_question' => 1,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 2,
      ),
      'type' => 'text_textarea',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'entityform-survey-field_habitation_rent_term'.
  $field_instances['entityform-survey-field_habitation_rent_term'] = array(
    'bundle' => 'survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_habitation_rent_term',
    'label' => 'Mindestmietdauer:',
    'required' => 1,
    'settings' => array(
      'hr_surveys_question' => 1,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'entityform-survey-field_habitation_request'.
  $field_instances['entityform-survey-field_habitation_request'] = array(
    'bundle' => 'survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_habitation_request',
    'label' => 'Sonderwünsche:',
    'required' => 0,
    'settings' => array(
      'hr_surveys_question' => 1,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'entityform-survey-field_habitation_town'.
  $field_instances['entityform-survey-field_habitation_town'] = array(
    'bundle' => 'survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_habitation_town',
    'label' => 'In Frage kommende Bezirke:',
    'required' => 1,
    'settings' => array(
      'hr_surveys_question' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'entityform-survey-field_occupants_adults'.
  $field_instances['entityform-survey-field_occupants_adults'] = array(
    'bundle' => 'survey',
    'default_value' => array(
      0 => array(
        'value' => 1,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_occupants_adults',
    'label' => 'Erwachsenen',
    'required' => 1,
    'settings' => array(
      'hr_surveys_question' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 23,
    ),
  );

  // Exported field_instance: 'entityform-survey-field_occupants_kids'.
  $field_instances['entityform-survey-field_occupants_kids'] = array(
    'bundle' => 'survey',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_occupants_kids',
    'label' => 'Kinder',
    'required' => 1,
    'settings' => array(
      'hr_surveys_question' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 24,
    ),
  );

  // Exported field_instance: 'entityform-survey-field_survey_status'.
  $field_instances['entityform-survey-field_survey_status'] = array(
    'bundle' => 'survey',
    'default_value' => array(
      0 => array(
        'value' => 1,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_survey_status',
    'label' => 'Status',
    'required' => 1,
    'settings' => array(
      'hr_surveys_question' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-agency-body'.
  $field_instances['node-agency-body'] = array(
    'bundle' => 'agency',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => FALSE,
    'settings' => array(
      'display_summary' => TRUE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => -4,
    ),
  );

  // Exported field_instance: 'node-agency-field_agency_contact'.
  $field_instances['node-agency-field_agency_contact'] = array(
    'bundle' => 'agency',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'links' => 1,
          'view_mode' => 'token',
        ),
        'type' => 'entityreference_entity_view',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_agency_contact',
    'label' => 'Contact',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => -2,
    ),
  );

  // Exported field_instance: 'node-agency-field_agency_town'.
  $field_instances['node-agency-field_agency_town'] = array(
    'bundle' => 'agency',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => 0,
        ),
        'type' => 'entityreference_label',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_agency_town',
    'label' => 'Town',
    'required' => 1,
    'settings' => array(
      'behaviors' => array(
        'taxonomy-index' => array(
          'status' => TRUE,
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => -3,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Agencies');
  t('Body');
  t('Contact');
  t('Email');
  t('Email ALL-INKL');
  t('Erwachsenen');
  t('Haustier (ja/nein und welches):');
  t('In Frage kommende Bezirke:');
  t('Kinder');
  t('Max. Pauschalmiete:');
  t('Mietbeginn:');
  t('Mindestmietdauer:');
  t('Name');
  t('Pets');
  t('Sonderwünsche:');
  t('Status');
  t('Suche in der Nähe von:');
  t('Town');

  return $field_instances;
}
