<?php
/**
 * @file
 * Definition of hr_access_views_plugin_access_survey_submissions.
 */

/**
 * Access plugin that provides access control for agency roles.
 *
 * This is needed because it's not just based on role or permission - we need
 * to check roles and , and views (actually, Drupal) doesn't allow for an
 * OR in the menu callback.
 *
 * @ingroup views_access_plugins
 */
class hr_access_views_plugin_access_survey_submissions extends views_plugin_access {

  /**
   * Determine if the current user has access or not.
   *
   * @param $account
   *   User account.
   * @return bool
   *   TRUE or FALSE.
   */
  function access($account) {
    $roles = array_filter($this->options['role']);
    return hr_access_views_check_access_survey_submissions($roles, $account);
  }

  /**
   * Determine the access callback and arguments.
   *
   * This information will be embedded in the menu in order to reduce
   * performance hits during menu item access testing, which happens
   * a lot.
   *
   * @return array
   *   the first item should be the function to call, and the second item should
   *   be an array of arguments. The first item may also be TRUE (bool only)
   *   which will indicate no access control.)
   */
  function get_access_callback() {
    $roles = array_filter($this->options['role']);
    return array('hr_access_views_check_access_survey_submissions', array($roles));
  }

  function option_definition() {
    $options = parent::option_definition();
    $options['role'] = array('default' => array());

    return $options;
  }

  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);
    $form['role'] = array(
      '#type' => 'checkboxes',
      '#title' => t('Role'),
      '#default_value' => $this->options['role'],
      '#options' => array_map('check_plain', views_ui_get_roles()),
      '#description' => t('Only the checked roles will be able to access this display.'),
    );
  }

  function options_validate(&$form, &$form_state) {
    if (!array_filter($form_state['values']['access_options']['role'])) {
      form_error($form['role'], t('You must select at least one role if type is "by role"'));
    }
  }

  function options_submit(&$form, &$form_state) {
    $form_state['values']['access_options']['role'] = array_filter($form_state['values']['access_options']['role']);
  }

  /**
   * Return a string to display as the clickable title for the
   * access control.
   */
  function summary_title() {
    return t('HR surveys - Access for survey submissions');
  }
}