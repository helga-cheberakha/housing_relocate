<?php
/**
 * @file
 * Access functionality module.
 */

/**
 * Implements hook_views_plugins().
 *
 * @return array
 *   An array on the form $plugins['PLUGIN TYPE']['PLUGIN NAME']. The plugin
 *   must be one of row, display, display_extender, style, argument default,
 *   argument validator, access, query, cache, pager, exposed_form or
 *   localization. The plugin name should be prefixed with your module name.
 *   The value for each entry is an associative array.
 *
 * @see hook_views_plugins()
 */
function hr_access_views_plugins() {
  $plugins = array(
    // display, style, row, argument default, argument validator and access.
    'access' => array(
      'hr_access_survey_submissions_access' => array(
        'title' => t('Survey submissions - Access to survey submissions'),
        'help' => t('Determines access to Survey submissions.'),
        'handler' => 'hr_access_views_plugin_access_survey_submissions',
        'uses options' => TRUE,
      ),
    ),
  );

  return $plugins;
}
