<?php
/**
 * @file
 * feature_hr_surveys.default_field_validation_rules.inc
 */

/**
 * Implements hook_default_field_validation_rule().
 */
function feature_hr_surveys_default_field_validation_rule() {
  $export = array();

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'Applicant email';
  $rule->name = 'applicant_email';
  $rule->field_name = 'field_applicant_email';
  $rule->col = 'value';
  $rule->entity_type = 'entityform';
  $rule->bundle = 'survey';
  $rule->validator = 'field_validation_email_validator';
  $rule->settings = array(
    'bypass' => 0,
    'roles' => array(
      1 => 0,
      2 => 0,
      6 => 0,
      4 => 0,
      5 => 0,
      3 => 0,
    ),
    'errors' => 1,
    'condition' => 0,
    'condition_wrapper' => array(
      'condition_field' => '',
      'condition_operator' => 'equals',
      'condition_value' => '',
    ),
  );
  $rule->error_message = 'Please enter a valid email address';
  $export['applicant_email'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'Applicant email ALL-INKL';
  $rule->name = 'applicant_email_all_inkl';
  $rule->field_name = 'field_applicant_email_allinkl';
  $rule->col = 'value';
  $rule->entity_type = 'entityform';
  $rule->bundle = 'survey';
  $rule->validator = 'field_validation_email_validator';
  $rule->settings = array(
    'bypass' => 0,
    'roles' => array(
      1 => 0,
      2 => 0,
      3 => 0,
      4 => 0,
      5 => 0,
    ),
    'errors' => 1,
    'condition' => 0,
    'condition_wrapper' => array(
      'condition_field' => '',
      'condition_operator' => 'equals',
      'condition_value' => '',
    ),
  );
  $rule->error_message = 'Please enter a valid email address';
  $export['applicant_email_all_inkl'] = $rule;

  return $export;
}
