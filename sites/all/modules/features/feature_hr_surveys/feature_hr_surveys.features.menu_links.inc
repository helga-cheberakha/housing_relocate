<?php
/**
 * @file
 * feature_hr_surveys.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function feature_hr_surveys_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-administration-menu_agencies:admin/surveys/agencies.
  $menu_links['menu-administration-menu_agencies:admin/surveys/agencies'] = array(
    'menu_name' => 'menu-administration-menu',
    'link_path' => 'admin/surveys/agencies',
    'router_path' => 'admin/surveys/agencies',
    'link_title' => 'Agencies',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'btn',
          1 => 'btn-primary',
          2 => 'btn-lg',
        ),
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-administration-menu_agencies:admin/surveys/agencies',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-administration-menu_online-surveys:admin/surveys.
  $menu_links['menu-administration-menu_online-surveys:admin/surveys'] = array(
    'menu_name' => 'menu-administration-menu',
    'link_path' => 'admin/surveys',
    'router_path' => 'admin/surveys',
    'link_title' => 'Online surveys',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'btn',
          1 => 'btn-primary',
          2 => 'btn-lg',
        ),
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-administration-menu_online-surveys:admin/surveys',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Agencies');
  t('Online surveys');

  return $menu_links;
}
