<?php
/**
 * @file
 * feature_hr_access.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function feature_hr_access_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access administration menu'.
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      'administrator' => 'administrator',
      'super administrator' => 'super administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'access administration pages'.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      'administrator' => 'administrator',
      'super administrator' => 'super administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'super administrator' => 'super administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access content overview'.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'administrator' => 'administrator',
      'super administrator' => 'super administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access site in maintenance mode'.
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(
      'administrator' => 'administrator',
      'super administrator' => 'super administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access site reports'.
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      'super administrator' => 'super administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access user profiles'.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'administrator' => 'administrator',
      'super administrator' => 'super administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer content types'.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      'super administrator' => 'super administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer entityform types'.
  $permissions['administer entityform types'] = array(
    'name' => 'administer entityform types',
    'roles' => array(
      'administrator' => 'administrator',
      'super administrator' => 'super administrator',
    ),
    'module' => 'entityform',
  );

  // Exported permission: 'administer nodes'.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      'super administrator' => 'super administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer permissions'.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      'administrator' => 'administrator',
      'super administrator' => 'super administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer site configuration'.
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(
      'administrator' => 'administrator',
      'super administrator' => 'super administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer taxonomy'.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      'super administrator' => 'super administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'administer users'.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      'administrator' => 'administrator',
      'super administrator' => 'super administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'cancel account'.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(
      'administrator' => 'administrator',
      'super administrator' => 'super administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'change own username'.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      'administrator' => 'administrator',
      'super administrator' => 'super administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'create agency content'.
  $permissions['create agency content'] = array(
    'name' => 'create agency content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create page content'.
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(
      'administrator' => 'administrator',
      'super administrator' => 'super administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any agency content'.
  $permissions['delete any agency content'] = array(
    'name' => 'delete any agency content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any entityform'.
  $permissions['delete any entityform'] = array(
    'name' => 'delete any entityform',
    'roles' => array(
      'administrator' => 'administrator',
      'super administrator' => 'super administrator',
    ),
    'module' => 'entityform',
  );

  // Exported permission: 'delete any page content'.
  $permissions['delete any page content'] = array(
    'name' => 'delete any page content',
    'roles' => array(
      'administrator' => 'administrator',
      'super administrator' => 'super administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own agency content'.
  $permissions['delete own agency content'] = array(
    'name' => 'delete own agency content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own entityform'.
  $permissions['delete own entityform'] = array(
    'name' => 'delete own entityform',
    'roles' => array(
      'administrator' => 'administrator',
      'super administrator' => 'super administrator',
    ),
    'module' => 'entityform',
  );

  // Exported permission: 'delete own page content'.
  $permissions['delete own page content'] = array(
    'name' => 'delete own page content',
    'roles' => array(
      'administrator' => 'administrator',
      'super administrator' => 'super administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in tags'.
  $permissions['delete terms in tags'] = array(
    'name' => 'delete terms in tags',
    'roles' => array(
      'administrator' => 'administrator',
      'super administrator' => 'super administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in towns'.
  $permissions['delete terms in towns'] = array(
    'name' => 'delete terms in towns',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any agency content'.
  $permissions['edit any agency content'] = array(
    'name' => 'edit any agency content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any entityform'.
  $permissions['edit any entityform'] = array(
    'name' => 'edit any entityform',
    'roles' => array(
      'administrator' => 'administrator',
      'super administrator' => 'super administrator',
    ),
    'module' => 'entityform',
  );

  // Exported permission: 'edit any page content'.
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
    'roles' => array(
      'administrator' => 'administrator',
      'super administrator' => 'super administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own agency content'.
  $permissions['edit own agency content'] = array(
    'name' => 'edit own agency content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own entityform'.
  $permissions['edit own entityform'] = array(
    'name' => 'edit own entityform',
    'roles' => array(
      'administrator' => 'administrator',
      'super administrator' => 'super administrator',
    ),
    'module' => 'entityform',
  );

  // Exported permission: 'edit own page content'.
  $permissions['edit own page content'] = array(
    'name' => 'edit own page content',
    'roles' => array(
      'administrator' => 'administrator',
      'super administrator' => 'super administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in tags'.
  $permissions['edit terms in tags'] = array(
    'name' => 'edit terms in tags',
    'roles' => array(
      'administrator' => 'administrator',
      'super administrator' => 'super administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in towns'.
  $permissions['edit terms in towns'] = array(
    'name' => 'edit terms in towns',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'flush caches'.
  $permissions['flush caches'] = array(
    'name' => 'flush caches',
    'roles' => array(
      'administrator' => 'administrator',
      'super administrator' => 'super administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'login via url'.
  $permissions['login via url'] = array(
    'name' => 'login via url',
    'roles' => array(
      'agency' => 'agency',
    ),
    'module' => 'hr_access',
  );

  // Exported permission: 'select account cancellation method'.
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(
      'administrator' => 'administrator',
      'super administrator' => 'super administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'view any entityform'.
  $permissions['view any entityform'] = array(
    'name' => 'view any entityform',
    'roles' => array(
      'administrator' => 'administrator',
      'super administrator' => 'super administrator',
    ),
    'module' => 'entityform',
  );

  // Exported permission: 'view own entityform'.
  $permissions['view own entityform'] = array(
    'name' => 'view own entityform',
    'roles' => array(
      'administrator' => 'administrator',
      'super administrator' => 'super administrator',
    ),
    'module' => 'entityform',
  );

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'administrator' => 'administrator',
      'super administrator' => 'super administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view the administration theme'.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      'administrator' => 'administrator',
      'super administrator' => 'super administrator',
    ),
    'module' => 'system',
  );

  return $permissions;
}
