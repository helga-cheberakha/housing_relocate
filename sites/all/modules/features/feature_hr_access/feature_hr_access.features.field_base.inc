<?php
/**
 * @file
 * feature_hr_access.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function feature_hr_access_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_agency_hash'.
  $field_bases['field_agency_hash'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_agency_hash',
    'field_permissions' => array(
      'type' => 2,
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  return $field_bases;
}
