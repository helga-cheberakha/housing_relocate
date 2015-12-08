<?php
/**
 * @file
 * feature_hr_surveys.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function feature_hr_surveys_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-administration-menu.
  $menus['menu-administration-menu'] = array(
    'menu_name' => 'menu-administration-menu',
    'title' => 'Administration menu',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Administration menu');

  return $menus;
}
