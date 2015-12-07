<?php
/**
 * @file
 * Surveys functionality module.
 */

/**
 * Display User information block.
 */
function hr_surveys_user_block() {
  global $user;
  $links = array();

  // If user isn't logged in.
  if (!$user->uid) {
    // Add link to login form.
    $links[] = array(
      'title' => t('Log in'),
      'href' => 'user',
    );
  }
  else {
    $name_array = array();
    $account = user_load($user->uid);

    // Get full name of the user
    $field_user_firstname = field_get_items('user', $account, 'field_user_firstname');
    $field_user_lastname = field_get_items('user', $account, 'field_user_lastname');
    // Set first user name
    if (isset($field_user_firstname[0]['value']) && !empty($field_user_firstname[0]['value'])) {
      $name_array[] = $field_user_firstname[0]['value'];
    }
    // Set last user name
    if (isset($field_user_lastname[0]['value']) && !empty($field_user_lastname[0]['value'])) {
      $name_array[] = $field_user_lastname[0]['value'];
    }

    if ($name_array) {
      $name = implode(' ', $name_array);
    }
    else {
      $name = $user->name;
    }

    // Add link to account.
    $links[] = array(
      'title' => t('Hello') . ' <strong>' . $name . '</strong>',
      'href' => 'user/' . $user->uid,
      'html' => TRUE,
    );
    // Add link to logout.
    $links[] = array(
      'title' => t('Log out'),
      'href' => 'user/logout',
    );
  }

  if ($links) {
    return theme('links', array(
      'links' => $links,
      'attributes' => array(
        'class' => array('links', 'inline', 'hr-user-block'),
      ),
    ));
  }
}

/**
 * Display link to own agency surveys.
 */
function hr_surveys_user_agency_block() {
  global $user;
  $links = array();

  if (user_is_logged_in() && isset($user->roles) && in_array(HR_AGENCY_ROLE, $user->roles)) {
    $links[] = array(
      'title' => t('Online surveys'),
      'href' => 'agency/applicants',
      'attributes' => array('class' => array('btn', 'btn-primary', 'btn-lg')),
    );
  }

  if ($links) {
    return theme('links', array(
      'links' => $links,
      'attributes' => array(
        'class' => array('links', 'hr-user-agency-block', 'nav', 'nav-pills'),
      ),
    ));
  }
}
