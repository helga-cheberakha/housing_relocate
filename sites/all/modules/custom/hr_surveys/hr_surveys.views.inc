<?php
/**
 * @file
 * Surveys functionality module.
 */

/**
 * Implements hook_views_plugins().
 */
function hr_surveys_views_plugins() {
  $plugins = array();

  // Override style for editable table,
  // plugin $plugins['style']['editableviews_table'].
  if (module_exists('editableviews')) {
    $plugins['style'] = array(
      'hr_editableviews_table' => array(
        'title' => t('HR Editable table'),
        'help' => t('Displays a table whose fields can be edited.'),
        'handler' => 'hr_editableviews_plugin_style_row_edit_table',
        'theme' => 'views_view_table',
        'theme path' => drupal_get_path('module', 'views') . '/theme',
        'uses row class' => TRUE,
        'uses fields' => TRUE,
        'uses options' => TRUE,
        'type' => 'normal',
        'help topic' => 'style-table',
      ),
    );
  }

  return $plugins;
}
