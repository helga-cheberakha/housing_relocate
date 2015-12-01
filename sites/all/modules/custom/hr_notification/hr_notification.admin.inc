<?php

/**
 * Menu callback
 */
function hr_notification_notification_admin_form() {
  $form = array();

  $form['hr_notification_fieldset'] = array(
    '#type' => 'fieldset',
    '#title' => t('Agency email notification'),
  );

  $form['hr_notification_fieldset']['hr_notification_agency_esubject'] = array(
    '#type' => 'textfield', 
    '#title' => t('Subject'), 
    '#default_value' => variable_get('hr_notification_agency_esubject', ''),
    '#required' => TRUE,
  );

  $default_body = variable_get('hr_notification_agency_ebody', array());
  $default_format = (isset($default_body['format']) && !empty($default_body['format'])) ? $default_body['format'] : 'full_html';
  $form['hr_notification_fieldset']['hr_notification_agency_ebody'] = array(
    '#type' => 'text_format', 
    '#title' => t('Email text'), 
    '#default_value' => (isset($default_body['value'])) ? t(check_markup($default_body['value'], $default_format)) : '',
    '#format' => $default_format,
    '#required' => TRUE,
  );

  // Add token help section
  $form['token_help'] = array(
    '#title' => t('Replacement patterns'),
    '#type' => 'fieldset',
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );
  $form['token_help']['help'] = array(
    '#theme' => 'token_tree',
    '#token_types' => array('site', 'node', 'user', 'entityform', 'hr_notify'),
    '#global_types' => TRUE,
    '#click_insert' => TRUE,
  );

  return system_settings_form($form);
}