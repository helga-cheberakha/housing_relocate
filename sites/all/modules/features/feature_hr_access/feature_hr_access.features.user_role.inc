<?php
/**
 * @file
 * feature_hr_access.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function feature_hr_access_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 5,
  );

  // Exported role: agency.
  $roles['agency'] = array(
    'name' => 'agency',
    'weight' => 3,
  );

  // Exported role: applicant.
  $roles['applicant'] = array(
    'name' => 'applicant',
    'weight' => 4,
  );

  // Exported role: super administrator.
  $roles['super administrator'] = array(
    'name' => 'super administrator',
    'weight' => 2,
  );

  return $roles;
}
