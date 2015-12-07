<?php
/**
 * @file
 * feature_hr_surveys.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function feature_hr_surveys_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'agency_single';
  $context->description = '';
  $context->tag = 'Single page';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'agency' => 'agency',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-hr_agencies-block_agency_info' => array(
          'module' => 'views',
          'delta' => 'hr_agencies-block_agency_info',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Single page');
  $export['agency_single'] = $context;

  return $export;
}
