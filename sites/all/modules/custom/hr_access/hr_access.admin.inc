<?php

/**
 * Menu callback
 */
function hr_access_admin_form() {
  $form = array();

  // Attach style to admin form
  $form['#attached']['css'] = array(
    drupal_get_path('module', 'hr_access') . '/css/admin-style.css',
  );

  $form['hr_access_key_generate'] = array(
    '#type' => 'fieldset',
    '#title' => t('Security key for agency access'),
  );

  $key = variable_get('hr_access_private_key', FALSE);
  $btn = t('Generate a new security key');
  if ($key) {
    $btn = t('Regenerate the security key');

    $form['hr_access_key_generate']['security_key'] = array(
      '#markup' => '<div class="panel panel-default">
                      <div class="panel-heading">' . t('Security agencies key:') . '</div>
                      <div class="panel-body">' . $key . '</div>
                    </div>',
    );
  }

  $form['hr_access_key_generate']['generate'] = array(
    '#markup' => l($btn, 'admin/config/system/agency_key/generate', array(
      'attributes' => array(
        'class' => array('submit-btn', 'button'),
      ),
    )),
  );

  return system_settings_form($form);
}

function hr_access_key_generate_confirm($form, &$form_state) {
  $form = confirm_form($form,
    t('Are you sure you want to generate new security agencies key?'),
    'admin/config/system/agency_key',
    t('This action cannot be undone. Note that all existing agencies access link will be invalid.'),
    t('Generate'),
    t('Cancel')
  );

  return $form;
}

/**
 * Submit handler for the security key generate.
 */
function hr_access_key_generate_confirm_submit($form, &$form_state) {
  if (module_exists('uuid')) {
    module_load_include('inc', 'uuid', 'uuid');
    $key = uuid_generate();
  }
  else {
    $key = md5(uniqid(rand()));
  }

  variable_set('hr_access_private_key', $key);
  drupal_set_message(t('Security key has been generated.'));
  $form_state['redirect'] = 'admin/config/system/agency_key';
}