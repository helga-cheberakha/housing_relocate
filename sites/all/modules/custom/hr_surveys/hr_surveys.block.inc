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
    $name = $user->name;
    $account = user_load($user->uid);

    $field_full_name = field_get_items('user', $account, 'field_user_full_name');
    if (isset($field_full_name[0]['value']) && !empty($field_full_name[0]['value'])) {
      $name = $field_full_name[0]['value'];
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
    // Get node by contact uid (reference field).
    $query = new EntityFieldQuery();
    $entities = $query->entityCondition('entity_type', 'node')
      ->entityCondition('bundle', 'agency')
      ->propertyCondition('status', 1)
      ->fieldCondition('field_agency_contact', 'target_id', $user->uid, '=')
      ->execute();

    if (isset($entities['node']) && !empty($entities['node'])) {
      $agency_node = array_shift($entities['node']);
      if (isset($agency_node->nid)) {
        $agency_nid = $agency_node->nid;
      }
    }

    if (isset($agency_nid)) {
      $links[] = array(
        'title' => t('Online surveys'),
        'href' => 'user/agency/' . $agency_nid . '/applicants',
        'attributes' => array('class' => array('navbar-brand')),
      );
    }
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
