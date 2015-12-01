<?php
/**
 * @file
 * feature_hr_surveys.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function feature_hr_surveys_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['hr_surveys-hr_surveys_user_agency_block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'hr_surveys_user_agency_block',
    'module' => 'hr_surveys',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(
      'agency' => 4,
    ),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'hr' => array(
        'region' => 'navigation',
        'status' => 1,
        'theme' => 'hr',
        'weight' => -11,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['hr_surveys-hr_surveys_user_block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'hr_surveys_user_block',
    'module' => 'hr_surveys',
    'node_types' => array(),
    'pages' => 'online-survey',
    'roles' => array(
      'agency' => 4,
      'anonymous user' => 1,
    ),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'hr' => array(
        'region' => 'navigation',
        'status' => 1,
        'theme' => 'hr',
        'weight' => -12,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  return $export;
}
