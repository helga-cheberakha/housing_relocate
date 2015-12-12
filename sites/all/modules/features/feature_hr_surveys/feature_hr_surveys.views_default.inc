<?php
/**
 * @file
 * feature_hr_surveys.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function feature_hr_surveys_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'agencies_by_town';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Agencies by town';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_agency_town_target_id']['id'] = 'field_agency_town_target_id';
  $handler->display->display_options['relationships']['field_agency_town_target_id']['table'] = 'field_data_field_agency_town';
  $handler->display->display_options['relationships']['field_agency_town_target_id']['field'] = 'field_agency_town_target_id';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Town */
  $handler->display->display_options['fields']['field_agency_town']['id'] = 'field_agency_town';
  $handler->display->display_options['fields']['field_agency_town']['table'] = 'field_data_field_agency_town';
  $handler->display->display_options['fields']['field_agency_town']['field'] = 'field_agency_town';
  $handler->display->display_options['fields']['field_agency_town']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_agency_town']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_agency_town']['delta_offset'] = '0';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['relationship'] = 'field_agency_town_target_id';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'agency' => 'agency',
  );

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_agencies_bytown');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $translatables['agencies_by_town'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Taxonomy term entity referenced from field_agency_town'),
    t('Town'),
    t('All'),
    t('Entity Reference'),
  );
  $export['agencies_by_town'] = $view;

  $view = new view();
  $view->name = 'agencies_contact';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Agencies contact';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: User: First name */
  $handler->display->display_options['fields']['field_user_firstname']['id'] = 'field_user_firstname';
  $handler->display->display_options['fields']['field_user_firstname']['table'] = 'field_data_field_user_firstname';
  $handler->display->display_options['fields']['field_user_firstname']['field'] = 'field_user_firstname';
  $handler->display->display_options['fields']['field_user_firstname']['label'] = '';
  $handler->display->display_options['fields']['field_user_firstname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_firstname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_firstname']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: User: Last name */
  $handler->display->display_options['fields']['field_user_lastname']['id'] = 'field_user_lastname';
  $handler->display->display_options['fields']['field_user_lastname']['table'] = 'field_data_field_user_lastname';
  $handler->display->display_options['fields']['field_user_lastname']['field'] = 'field_user_lastname';
  $handler->display->display_options['fields']['field_user_lastname']['label'] = '';
  $handler->display->display_options['fields']['field_user_lastname']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_user_lastname']['alter']['text'] = '[field_user_firstname] [field_user_lastname]';
  $handler->display->display_options['fields']['field_user_lastname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_lastname']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    4 => '4',
  );

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'field_user_firstname' => 'field_user_firstname',
    'field_user_lastname' => 'field_user_lastname',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;

  /* Display: Seite */
  $handler = $view->new_display('page', 'Seite', 'page_agency_profile');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'flipped';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_user_firstname' => 'field_user_firstname',
    'field_user_lastname' => 'field_user_lastname',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_user_firstname' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_lastname' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['flipped_table_header_first_field'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: First name */
  $handler->display->display_options['fields']['field_user_firstname']['id'] = 'field_user_firstname';
  $handler->display->display_options['fields']['field_user_firstname']['table'] = 'field_data_field_user_firstname';
  $handler->display->display_options['fields']['field_user_firstname']['field'] = 'field_user_firstname';
  $handler->display->display_options['fields']['field_user_firstname']['label'] = '';
  $handler->display->display_options['fields']['field_user_firstname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_firstname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_firstname']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: User: Last name */
  $handler->display->display_options['fields']['field_user_lastname']['id'] = 'field_user_lastname';
  $handler->display->display_options['fields']['field_user_lastname']['table'] = 'field_data_field_user_lastname';
  $handler->display->display_options['fields']['field_user_lastname']['field'] = 'field_user_lastname';
  $handler->display->display_options['fields']['field_user_lastname']['label'] = 'Full name';
  $handler->display->display_options['fields']['field_user_lastname']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_user_lastname']['alter']['text'] = '[field_user_firstname] [field_user_lastname]';
  $handler->display->display_options['fields']['field_user_lastname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_lastname']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['label'] = 'E-Mail';
  /* Field: User: Last login */
  $handler->display->display_options['fields']['login']['id'] = 'login';
  $handler->display->display_options['fields']['login']['table'] = 'users';
  $handler->display->display_options['fields']['login']['field'] = 'login';
  $handler->display->display_options['fields']['login']['label'] = 'Letzte Anmeldung';
  $handler->display->display_options['fields']['login']['date_format'] = 'long';
  $handler->display->display_options['fields']['login']['second_date_format'] = 'long';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['uid']['validate']['fail'] = 'access denied';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  $handler->display->display_options['path'] = 'user/%';
  $translatables['agencies_contact'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('[field_user_firstname] [field_user_lastname]'),
    t('Entity Reference'),
    t('Seite'),
    t('Full name'),
    t('E-Mail'),
    t('Letzte Anmeldung'),
    t('Alle'),
  );
  $export['agencies_contact'] = $view;

  $view = new view();
  $view->name = 'hr_agencies';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Agencies';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Agencies';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    6 => '6',
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<ul class="action-links"><li><a href="/admin/people/create/agency">Add agency</a></li></ul>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_agency_contact_target_id']['id'] = 'field_agency_contact_target_id';
  $handler->display->display_options['relationships']['field_agency_contact_target_id']['table'] = 'field_data_field_agency_contact';
  $handler->display->display_options['relationships']['field_agency_contact_target_id']['field'] = 'field_agency_contact_target_id';
  $handler->display->display_options['relationships']['field_agency_contact_target_id']['label'] = 'Benutzer entity referenced from field_agency_contact';
  $handler->display->display_options['relationships']['field_agency_contact_target_id']['required'] = TRUE;
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['relationship'] = 'field_agency_contact_target_id';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: User: First name */
  $handler->display->display_options['fields']['field_user_firstname']['id'] = 'field_user_firstname';
  $handler->display->display_options['fields']['field_user_firstname']['table'] = 'field_data_field_user_firstname';
  $handler->display->display_options['fields']['field_user_firstname']['field'] = 'field_user_firstname';
  $handler->display->display_options['fields']['field_user_firstname']['relationship'] = 'field_agency_contact_target_id';
  $handler->display->display_options['fields']['field_user_firstname']['label'] = '';
  $handler->display->display_options['fields']['field_user_firstname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_firstname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_firstname']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: User: Last name */
  $handler->display->display_options['fields']['field_user_lastname']['id'] = 'field_user_lastname';
  $handler->display->display_options['fields']['field_user_lastname']['table'] = 'field_data_field_user_lastname';
  $handler->display->display_options['fields']['field_user_lastname']['field'] = 'field_user_lastname';
  $handler->display->display_options['fields']['field_user_lastname']['relationship'] = 'field_agency_contact_target_id';
  $handler->display->display_options['fields']['field_user_lastname']['label'] = 'Contact name';
  $handler->display->display_options['fields']['field_user_lastname']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_user_lastname']['alter']['text'] = '[field_user_firstname] [field_user_lastname]';
  $handler->display->display_options['fields']['field_user_lastname']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_user_lastname']['alter']['path'] = 'user/[uid]';
  $handler->display->display_options['fields']['field_user_lastname']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['relationship'] = 'field_agency_contact_target_id';
  $handler->display->display_options['fields']['mail']['label'] = 'Contact email';
  /* Field: Content: Town */
  $handler->display->display_options['fields']['field_agency_town']['id'] = 'field_agency_town';
  $handler->display->display_options['fields']['field_agency_town']['table'] = 'field_data_field_agency_town';
  $handler->display->display_options['fields']['field_agency_town']['field'] = 'field_agency_town';
  $handler->display->display_options['fields']['field_agency_town']['label'] = 'Towns';
  $handler->display->display_options['fields']['field_agency_town']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_agency_town']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_agency_town']['multi_type'] = 'ul';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'View';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Operation';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '&nbsp;&nbsp;[view_node]&nbsp;&nbsp;[edit_node]';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'agency' => 'agency',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status_1']['id'] = 'status_1';
  $handler->display->display_options['filters']['status_1']['table'] = 'users';
  $handler->display->display_options['filters']['status_1']['field'] = 'status';
  $handler->display->display_options['filters']['status_1']['relationship'] = 'field_agency_contact_target_id';
  $handler->display->display_options['filters']['status_1']['value'] = '1';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/surveys/agencies';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Agencies';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Agency information (Block) */
  $handler = $view->new_display('block', 'Agency information (Block)', 'block_agency_info');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'flipped';
  $handler->display->display_options['style_options']['columns'] = array(
    'uid' => 'uid',
    'title' => 'title',
    'field_user_firstname' => 'field_user_firstname',
    'field_user_lastname' => 'field_user_lastname',
    'mail' => 'mail',
    'field_agency_town' => 'field_agency_town',
    'edit_node' => 'edit_node',
    'view_node' => 'view_node',
    'nothing' => 'nothing',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'uid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_firstname' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_lastname' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'mail' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_agency_town' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'view_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['flipped_table_header_first_field'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['relationship'] = 'field_agency_contact_target_id';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['relationship'] = 'field_agency_contact_target_id';
  $handler->display->display_options['fields']['mail']['label'] = '';
  $handler->display->display_options['fields']['mail']['exclude'] = TRUE;
  $handler->display->display_options['fields']['mail']['element_label_colon'] = FALSE;
  /* Field: User: First name */
  $handler->display->display_options['fields']['field_user_firstname']['id'] = 'field_user_firstname';
  $handler->display->display_options['fields']['field_user_firstname']['table'] = 'field_data_field_user_firstname';
  $handler->display->display_options['fields']['field_user_firstname']['field'] = 'field_user_firstname';
  $handler->display->display_options['fields']['field_user_firstname']['relationship'] = 'field_agency_contact_target_id';
  $handler->display->display_options['fields']['field_user_firstname']['label'] = '';
  $handler->display->display_options['fields']['field_user_firstname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_firstname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_firstname']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: User: Last name */
  $handler->display->display_options['fields']['field_user_lastname']['id'] = 'field_user_lastname';
  $handler->display->display_options['fields']['field_user_lastname']['table'] = 'field_data_field_user_lastname';
  $handler->display->display_options['fields']['field_user_lastname']['field'] = 'field_user_lastname';
  $handler->display->display_options['fields']['field_user_lastname']['relationship'] = 'field_agency_contact_target_id';
  $handler->display->display_options['fields']['field_user_lastname']['label'] = '';
  $handler->display->display_options['fields']['field_user_lastname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_lastname']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_user_lastname']['alter']['text'] = '[field_user_firstname] [field_user_lastname]';
  $handler->display->display_options['fields']['field_user_lastname']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_user_lastname']['alter']['path'] = 'user/[uid]';
  $handler->display->display_options['fields']['field_user_lastname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_lastname']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Contact info */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Contact info';
  $handler->display->display_options['fields']['nothing']['label'] = 'Contact';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_user_lastname], [mail]';
  /* Field: Content: Town */
  $handler->display->display_options['fields']['field_agency_town']['id'] = 'field_agency_town';
  $handler->display->display_options['fields']['field_agency_town']['table'] = 'field_data_field_agency_town';
  $handler->display->display_options['fields']['field_agency_town']['field'] = 'field_agency_town';
  $handler->display->display_options['fields']['field_agency_town']['label'] = 'Towns';
  $handler->display->display_options['fields']['field_agency_town']['settings'] = array(
    'link' => 0,
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  $handler->display->display_options['fields']['field_agency_town']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'agency' => 'agency',
  );
  $translatables['hr_agencies'] = array(
    t('Master'),
    t('Agencies'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('<ul class="action-links"><li><a href="/admin/people/create/agency">Add agency</a></li></ul>'),
    t('Benutzer entity referenced from field_agency_contact'),
    t('Title'),
    t('Contact name'),
    t('[field_user_firstname] [field_user_lastname]'),
    t('Contact email'),
    t('Towns'),
    t('Edit'),
    t('View'),
    t('Operation'),
    t('&nbsp;&nbsp;[view_node]&nbsp;&nbsp;[edit_node]'),
    t('Page'),
    t('Agency information (Block)'),
    t('Contact'),
    t('[field_user_lastname], [mail]'),
    t('All'),
  );
  $export['hr_agencies'] = $view;

  $view = new view();
  $view->name = 'online_surveys';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'entityform';
  $view->human_name = 'Online surveys';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Applicants';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    6 => '6',
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['style_plugin'] = 'hr_editableviews_table';
  $handler->display->display_options['style_options']['columns'] = array(
    'entityform_id' => 'entityform_id',
    'uid' => 'uid',
    'field_user_firstname' => 'field_user_firstname',
    'field_user_lastname' => 'field_user_lastname',
    'field_habitation_town' => 'field_habitation_town',
    'field_applicant_agencies_editable' => 'field_applicant_agencies_editable',
    'field_habitation_checkin' => 'field_habitation_checkin',
    'field_habitation_maxprice' => 'field_habitation_maxprice',
    'edit_entityform' => 'edit_entityform',
    'link_entityform' => 'link_entityform',
    'nothing_1' => 'nothing_1',
    'field_applicant_agencies' => 'field_applicant_agencies',
    'field_survey_status_editable' => 'field_survey_status_editable',
    'nothing' => 'nothing',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'entityform_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'uid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_firstname' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_lastname' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_habitation_town' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_applicant_agencies_editable' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_habitation_checkin' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_habitation_maxprice' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_entityform' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'link_entityform' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_applicant_agencies' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_survey_status_editable' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['batch_size'] = '10';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There are not any applicants.';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Relationship: Entityform Submission: User uid */
  $handler->display->display_options['relationships']['user']['id'] = 'user';
  $handler->display->display_options['relationships']['user']['table'] = 'entityform';
  $handler->display->display_options['relationships']['user']['field'] = 'user';
  $handler->display->display_options['relationships']['user']['required'] = TRUE;
  /* Field: Entityform Submission: Entityform submission ID */
  $handler->display->display_options['fields']['entityform_id']['id'] = 'entityform_id';
  $handler->display->display_options['fields']['entityform_id']['table'] = 'entityform';
  $handler->display->display_options['fields']['entityform_id']['field'] = 'entityform_id';
  $handler->display->display_options['fields']['entityform_id']['exclude'] = TRUE;
  /* Field: Entityform Submission: In Frage kommende Bezirke: */
  $handler->display->display_options['fields']['field_habitation_town']['id'] = 'field_habitation_town';
  $handler->display->display_options['fields']['field_habitation_town']['table'] = 'field_data_field_habitation_town';
  $handler->display->display_options['fields']['field_habitation_town']['field'] = 'field_habitation_town';
  $handler->display->display_options['fields']['field_habitation_town']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_habitation_town']['element_class'] = 'views-field-holder';
  $handler->display->display_options['fields']['field_habitation_town']['settings'] = array(
    'link' => 0,
  );
  /* Field: Entityform Submission: Agencies (editable) */
  $handler->display->display_options['fields']['field_applicant_agencies_editable']['id'] = 'field_applicant_agencies_editable';
  $handler->display->display_options['fields']['field_applicant_agencies_editable']['table'] = 'field_data_field_applicant_agencies';
  $handler->display->display_options['fields']['field_applicant_agencies_editable']['field'] = 'field_applicant_agencies_editable';
  $handler->display->display_options['fields']['field_applicant_agencies_editable']['label'] = 'Agencies';
  $handler->display->display_options['fields']['field_applicant_agencies_editable']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_applicant_agencies_editable']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_applicant_agencies_editable']['multi_type'] = 'ul';
  $handler->display->display_options['fields']['field_applicant_agencies_editable']['widget_type'] = 'options_buttons';
  $handler->display->display_options['fields']['field_applicant_agencies_editable']['suppress_label'] = 1;
  $handler->display->display_options['fields']['field_applicant_agencies_editable']['suppress_description'] = 1;
  /* Field: Entityform Submission: Mietbeginn: */
  $handler->display->display_options['fields']['field_habitation_checkin']['id'] = 'field_habitation_checkin';
  $handler->display->display_options['fields']['field_habitation_checkin']['table'] = 'field_data_field_habitation_checkin';
  $handler->display->display_options['fields']['field_habitation_checkin']['field'] = 'field_habitation_checkin';
  $handler->display->display_options['fields']['field_habitation_checkin']['label'] = 'Check in';
  $handler->display->display_options['fields']['field_habitation_checkin']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_habitation_checkin']['element_class'] = 'views-field-medium';
  $handler->display->display_options['fields']['field_habitation_checkin']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Entityform Submission: Max. Pauschalmiete: */
  $handler->display->display_options['fields']['field_habitation_maxprice']['id'] = 'field_habitation_maxprice';
  $handler->display->display_options['fields']['field_habitation_maxprice']['table'] = 'field_data_field_habitation_maxprice';
  $handler->display->display_options['fields']['field_habitation_maxprice']['field'] = 'field_habitation_maxprice';
  $handler->display->display_options['fields']['field_habitation_maxprice']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_habitation_maxprice']['element_class'] = 'views-field-medium';
  $handler->display->display_options['fields']['field_habitation_maxprice']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Entityform Submission: Status (editable) */
  $handler->display->display_options['fields']['field_survey_status_editable']['id'] = 'field_survey_status_editable';
  $handler->display->display_options['fields']['field_survey_status_editable']['table'] = 'field_data_field_survey_status';
  $handler->display->display_options['fields']['field_survey_status_editable']['field'] = 'field_survey_status_editable';
  $handler->display->display_options['fields']['field_survey_status_editable']['label'] = 'Status';
  $handler->display->display_options['fields']['field_survey_status_editable']['widget_type'] = 'options_select';
  $handler->display->display_options['fields']['field_survey_status_editable']['suppress_label'] = 1;
  $handler->display->display_options['fields']['field_survey_status_editable']['suppress_description'] = 1;
  /* Field: Entityform Submission: Edit Link */
  $handler->display->display_options['fields']['edit_entityform']['id'] = 'edit_entityform';
  $handler->display->display_options['fields']['edit_entityform']['table'] = 'entityform';
  $handler->display->display_options['fields']['edit_entityform']['field'] = 'edit_entityform';
  $handler->display->display_options['fields']['edit_entityform']['label'] = '';
  $handler->display->display_options['fields']['edit_entityform']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_entityform']['element_type'] = 'span';
  $handler->display->display_options['fields']['edit_entityform']['element_class'] = 'views-field-small';
  $handler->display->display_options['fields']['edit_entityform']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_entityform']['text'] = 'Edit';
  /* Field: Entityform Submission: Link */
  $handler->display->display_options['fields']['link_entityform']['id'] = 'link_entityform';
  $handler->display->display_options['fields']['link_entityform']['table'] = 'entityform';
  $handler->display->display_options['fields']['link_entityform']['field'] = 'link_entityform';
  $handler->display->display_options['fields']['link_entityform']['label'] = '';
  $handler->display->display_options['fields']['link_entityform']['exclude'] = TRUE;
  $handler->display->display_options['fields']['link_entityform']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['link_entityform']['text'] = 'View';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Operation';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '&nbsp;&nbsp;[link_entityform]&nbsp;&nbsp;[edit_entityform]';
  $handler->display->display_options['fields']['nothing']['element_type'] = 'span';
  /* Filter criterion: Entityform Submission: Entityform Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'entityform';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'survey' => 'survey',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Entityform Submission: Entityform submission ID */
  $handler->display->display_options['fields']['entityform_id']['id'] = 'entityform_id';
  $handler->display->display_options['fields']['entityform_id']['table'] = 'entityform';
  $handler->display->display_options['fields']['entityform_id']['field'] = 'entityform_id';
  $handler->display->display_options['fields']['entityform_id']['exclude'] = TRUE;
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['relationship'] = 'user';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Field: User: First name */
  $handler->display->display_options['fields']['field_user_firstname']['id'] = 'field_user_firstname';
  $handler->display->display_options['fields']['field_user_firstname']['table'] = 'field_data_field_user_firstname';
  $handler->display->display_options['fields']['field_user_firstname']['field'] = 'field_user_firstname';
  $handler->display->display_options['fields']['field_user_firstname']['relationship'] = 'user';
  $handler->display->display_options['fields']['field_user_firstname']['label'] = '';
  $handler->display->display_options['fields']['field_user_firstname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_firstname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_firstname']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: User: Last name */
  $handler->display->display_options['fields']['field_user_lastname']['id'] = 'field_user_lastname';
  $handler->display->display_options['fields']['field_user_lastname']['table'] = 'field_data_field_user_lastname';
  $handler->display->display_options['fields']['field_user_lastname']['field'] = 'field_user_lastname';
  $handler->display->display_options['fields']['field_user_lastname']['relationship'] = 'user';
  $handler->display->display_options['fields']['field_user_lastname']['label'] = 'Full name';
  $handler->display->display_options['fields']['field_user_lastname']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_user_lastname']['alter']['text'] = '[field_user_firstname] [field_user_lastname]';
  $handler->display->display_options['fields']['field_user_lastname']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Entityform Submission: In Frage kommende Bezirke: */
  $handler->display->display_options['fields']['field_habitation_town']['id'] = 'field_habitation_town';
  $handler->display->display_options['fields']['field_habitation_town']['table'] = 'field_data_field_habitation_town';
  $handler->display->display_options['fields']['field_habitation_town']['field'] = 'field_habitation_town';
  $handler->display->display_options['fields']['field_habitation_town']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_habitation_town']['element_class'] = 'views-field-holder';
  $handler->display->display_options['fields']['field_habitation_town']['type'] = 'hr_surveys_taxonomy_terms_tree';
  $handler->display->display_options['fields']['field_habitation_town']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  $handler->display->display_options['fields']['field_habitation_town']['delta_offset'] = '0';
  /* Field: Entityform Submission: Agencies (editable) */
  $handler->display->display_options['fields']['field_applicant_agencies_editable']['id'] = 'field_applicant_agencies_editable';
  $handler->display->display_options['fields']['field_applicant_agencies_editable']['table'] = 'field_data_field_applicant_agencies';
  $handler->display->display_options['fields']['field_applicant_agencies_editable']['field'] = 'field_applicant_agencies_editable';
  $handler->display->display_options['fields']['field_applicant_agencies_editable']['label'] = 'Agencies';
  $handler->display->display_options['fields']['field_applicant_agencies_editable']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_applicant_agencies_editable']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_applicant_agencies_editable']['multi_type'] = 'ul';
  $handler->display->display_options['fields']['field_applicant_agencies_editable']['widget_type'] = 'options_buttons';
  $handler->display->display_options['fields']['field_applicant_agencies_editable']['suppress_label'] = 1;
  $handler->display->display_options['fields']['field_applicant_agencies_editable']['suppress_description'] = 1;
  /* Field: Entityform Submission: Mietbeginn: */
  $handler->display->display_options['fields']['field_habitation_checkin']['id'] = 'field_habitation_checkin';
  $handler->display->display_options['fields']['field_habitation_checkin']['table'] = 'field_data_field_habitation_checkin';
  $handler->display->display_options['fields']['field_habitation_checkin']['field'] = 'field_habitation_checkin';
  $handler->display->display_options['fields']['field_habitation_checkin']['label'] = 'Check in';
  $handler->display->display_options['fields']['field_habitation_checkin']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_habitation_checkin']['element_class'] = 'views-field-medium';
  $handler->display->display_options['fields']['field_habitation_checkin']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Entityform Submission: Max. Pauschalmiete: */
  $handler->display->display_options['fields']['field_habitation_maxprice']['id'] = 'field_habitation_maxprice';
  $handler->display->display_options['fields']['field_habitation_maxprice']['table'] = 'field_data_field_habitation_maxprice';
  $handler->display->display_options['fields']['field_habitation_maxprice']['field'] = 'field_habitation_maxprice';
  $handler->display->display_options['fields']['field_habitation_maxprice']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_habitation_maxprice']['element_class'] = 'views-field-medium';
  $handler->display->display_options['fields']['field_habitation_maxprice']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Entityform Submission: Edit Link */
  $handler->display->display_options['fields']['edit_entityform']['id'] = 'edit_entityform';
  $handler->display->display_options['fields']['edit_entityform']['table'] = 'entityform';
  $handler->display->display_options['fields']['edit_entityform']['field'] = 'edit_entityform';
  $handler->display->display_options['fields']['edit_entityform']['label'] = '';
  $handler->display->display_options['fields']['edit_entityform']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_entityform']['element_type'] = 'span';
  $handler->display->display_options['fields']['edit_entityform']['element_class'] = 'views-field-small';
  $handler->display->display_options['fields']['edit_entityform']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_entityform']['text'] = 'Edit';
  /* Field: Entityform Submission: Link */
  $handler->display->display_options['fields']['link_entityform']['id'] = 'link_entityform';
  $handler->display->display_options['fields']['link_entityform']['table'] = 'entityform';
  $handler->display->display_options['fields']['link_entityform']['field'] = 'link_entityform';
  $handler->display->display_options['fields']['link_entityform']['label'] = '';
  $handler->display->display_options['fields']['link_entityform']['exclude'] = TRUE;
  $handler->display->display_options['fields']['link_entityform']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['link_entityform']['text'] = 'View';
  /* Field: Notify the agency */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Notify the agency';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'Notify the agency';
  $handler->display->display_options['fields']['nothing_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['path'] = 'survey/[entityform_id]/applicant/[uid]/agency/notify';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Field: Show notify the agency */
  $handler->display->display_options['fields']['field_applicant_agencies']['id'] = 'field_applicant_agencies';
  $handler->display->display_options['fields']['field_applicant_agencies']['table'] = 'field_data_field_applicant_agencies';
  $handler->display->display_options['fields']['field_applicant_agencies']['field'] = 'field_applicant_agencies';
  $handler->display->display_options['fields']['field_applicant_agencies']['ui_name'] = 'Show notify the agency';
  $handler->display->display_options['fields']['field_applicant_agencies']['label'] = '';
  $handler->display->display_options['fields']['field_applicant_agencies']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_applicant_agencies']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_applicant_agencies']['alter']['text'] = '<br>&nbsp;&nbsp;[nothing_1]';
  $handler->display->display_options['fields']['field_applicant_agencies']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_applicant_agencies']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_applicant_agencies']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_applicant_agencies']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_applicant_agencies']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_applicant_agencies']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_applicant_agencies']['delta_offset'] = '0';
  /* Field: Entityform Submission: Status (editable) */
  $handler->display->display_options['fields']['field_survey_status_editable']['id'] = 'field_survey_status_editable';
  $handler->display->display_options['fields']['field_survey_status_editable']['table'] = 'field_data_field_survey_status';
  $handler->display->display_options['fields']['field_survey_status_editable']['field'] = 'field_survey_status_editable';
  $handler->display->display_options['fields']['field_survey_status_editable']['label'] = 'Status';
  $handler->display->display_options['fields']['field_survey_status_editable']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  $handler->display->display_options['fields']['field_survey_status_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_survey_status_editable']['suppress_label'] = 1;
  $handler->display->display_options['fields']['field_survey_status_editable']['suppress_description'] = 1;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Operation';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '&nbsp;&nbsp;[link_entityform]&nbsp;|&nbsp;[edit_entityform]
[field_applicant_agencies]';
  $handler->display->display_options['fields']['nothing']['element_type'] = 'span';
  $handler->display->display_options['path'] = 'admin/surveys/applicants';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'Applicants';
  $handler->display->display_options['menu']['weight'] = '-100';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Online surveys';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $handler->display->display_options['tab_options']['name'] = 'management';

  /* Display: Applicants by agency(Page) */
  $handler = $view->new_display('page', 'Applicants by agency(Page)', 'page_agency_applicants');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    4 => '4',
    6 => '6',
  );
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entityform Submission: User uid */
  $handler->display->display_options['relationships']['user']['id'] = 'user';
  $handler->display->display_options['relationships']['user']['table'] = 'entityform';
  $handler->display->display_options['relationships']['user']['field'] = 'user';
  $handler->display->display_options['relationships']['user']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_applicant_agencies_target_id']['id'] = 'field_applicant_agencies_target_id';
  $handler->display->display_options['relationships']['field_applicant_agencies_target_id']['table'] = 'field_data_field_applicant_agencies';
  $handler->display->display_options['relationships']['field_applicant_agencies_target_id']['field'] = 'field_applicant_agencies_target_id';
  $handler->display->display_options['relationships']['field_applicant_agencies_target_id']['label'] = 'Inhalt entity referenced from field_applicant_agencies';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_agency_contact_target_id']['id'] = 'field_agency_contact_target_id';
  $handler->display->display_options['relationships']['field_agency_contact_target_id']['table'] = 'field_data_field_agency_contact';
  $handler->display->display_options['relationships']['field_agency_contact_target_id']['field'] = 'field_agency_contact_target_id';
  $handler->display->display_options['relationships']['field_agency_contact_target_id']['relationship'] = 'field_applicant_agencies_target_id';
  $handler->display->display_options['relationships']['field_agency_contact_target_id']['label'] = 'Benutzer entity referenced from field_agency_contact';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Entityform Submission: Entityform submission ID */
  $handler->display->display_options['fields']['entityform_id']['id'] = 'entityform_id';
  $handler->display->display_options['fields']['entityform_id']['table'] = 'entityform';
  $handler->display->display_options['fields']['entityform_id']['field'] = 'entityform_id';
  $handler->display->display_options['fields']['entityform_id']['exclude'] = TRUE;
  /* Field: User: First name */
  $handler->display->display_options['fields']['field_user_firstname']['id'] = 'field_user_firstname';
  $handler->display->display_options['fields']['field_user_firstname']['table'] = 'field_data_field_user_firstname';
  $handler->display->display_options['fields']['field_user_firstname']['field'] = 'field_user_firstname';
  $handler->display->display_options['fields']['field_user_firstname']['relationship'] = 'user';
  $handler->display->display_options['fields']['field_user_firstname']['label'] = '';
  $handler->display->display_options['fields']['field_user_firstname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_firstname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_firstname']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: User: Last name */
  $handler->display->display_options['fields']['field_user_lastname']['id'] = 'field_user_lastname';
  $handler->display->display_options['fields']['field_user_lastname']['table'] = 'field_data_field_user_lastname';
  $handler->display->display_options['fields']['field_user_lastname']['field'] = 'field_user_lastname';
  $handler->display->display_options['fields']['field_user_lastname']['relationship'] = 'user';
  $handler->display->display_options['fields']['field_user_lastname']['label'] = 'Full name';
  $handler->display->display_options['fields']['field_user_lastname']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_user_lastname']['alter']['text'] = '[field_user_firstname] [field_user_lastname]';
  $handler->display->display_options['fields']['field_user_lastname']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Entityform Submission: In Frage kommende Bezirke: */
  $handler->display->display_options['fields']['field_habitation_town']['id'] = 'field_habitation_town';
  $handler->display->display_options['fields']['field_habitation_town']['table'] = 'field_data_field_habitation_town';
  $handler->display->display_options['fields']['field_habitation_town']['field'] = 'field_habitation_town';
  $handler->display->display_options['fields']['field_habitation_town']['label'] = 'In Frage kommende Bezirke';
  $handler->display->display_options['fields']['field_habitation_town']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_habitation_town']['element_class'] = 'views-field-holder';
  $handler->display->display_options['fields']['field_habitation_town']['type'] = 'hr_surveys_taxonomy_terms_tree';
  $handler->display->display_options['fields']['field_habitation_town']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  $handler->display->display_options['fields']['field_habitation_town']['delta_offset'] = '0';
  /* Field: Entityform Submission: Mietbeginn: */
  $handler->display->display_options['fields']['field_habitation_checkin']['id'] = 'field_habitation_checkin';
  $handler->display->display_options['fields']['field_habitation_checkin']['table'] = 'field_data_field_habitation_checkin';
  $handler->display->display_options['fields']['field_habitation_checkin']['field'] = 'field_habitation_checkin';
  $handler->display->display_options['fields']['field_habitation_checkin']['label'] = 'Check in';
  $handler->display->display_options['fields']['field_habitation_checkin']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_habitation_checkin']['element_class'] = 'views-field-medium';
  $handler->display->display_options['fields']['field_habitation_checkin']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Entityform Submission: Max. Pauschalmiete: */
  $handler->display->display_options['fields']['field_habitation_maxprice']['id'] = 'field_habitation_maxprice';
  $handler->display->display_options['fields']['field_habitation_maxprice']['table'] = 'field_data_field_habitation_maxprice';
  $handler->display->display_options['fields']['field_habitation_maxprice']['field'] = 'field_habitation_maxprice';
  $handler->display->display_options['fields']['field_habitation_maxprice']['label'] = 'Max. Pauschalmiete';
  $handler->display->display_options['fields']['field_habitation_maxprice']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_habitation_maxprice']['element_class'] = 'views-field-medium';
  $handler->display->display_options['fields']['field_habitation_maxprice']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Entityform Submission: Status */
  $handler->display->display_options['fields']['field_survey_status']['id'] = 'field_survey_status';
  $handler->display->display_options['fields']['field_survey_status']['table'] = 'field_data_field_survey_status';
  $handler->display->display_options['fields']['field_survey_status']['field'] = 'field_survey_status';
  $handler->display->display_options['fields']['field_survey_status']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Entityform Submission: Link */
  $handler->display->display_options['fields']['link_entityform']['id'] = 'link_entityform';
  $handler->display->display_options['fields']['link_entityform']['table'] = 'entityform';
  $handler->display->display_options['fields']['link_entityform']['field'] = 'link_entityform';
  $handler->display->display_options['fields']['link_entityform']['label'] = '';
  $handler->display->display_options['fields']['link_entityform']['exclude'] = TRUE;
  $handler->display->display_options['fields']['link_entityform']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['link_entityform']['text'] = 'View';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Operation';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '&nbsp;&nbsp;[link_entityform]';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'field_agency_contact_target_id';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['uid']['validate']['type'] = 'user';
  $handler->display->display_options['arguments']['uid']['validate_options']['restrict_roles'] = TRUE;
  $handler->display->display_options['arguments']['uid']['validate_options']['roles'] = array(
    4 => '4',
  );
  $handler->display->display_options['path'] = 'agency/applicants';
  $handler->display->display_options['menu']['title'] = 'Agency Online surveys';
  $handler->display->display_options['menu']['weight'] = '-10';
  $handler->display->display_options['menu']['name'] = 'devel';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Applicants submission */
  $handler = $view->new_display('page', 'Applicants submission', 'page_applicant_submission');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Applicants survey';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    4 => '4',
    6 => '6',
  );
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'flipped';
  $handler->display->display_options['style_options']['columns'] = array(
    'entityform_id' => 'entityform_id',
    'nothing' => 'nothing',
    'field_user_firstname' => 'field_user_firstname',
    'field_user_lastname' => 'field_user_lastname',
    'mail' => 'mail',
    'nothing_1' => 'nothing_1',
    'field_habitation_maxprice' => 'field_habitation_maxprice',
    'field_occupants_adults' => 'field_occupants_adults',
    'field_occupants_kids' => 'field_occupants_kids',
    'field_habitation_rent_term' => 'field_habitation_rent_term',
    'field_habitation_checkin_1' => 'field_habitation_checkin_1',
    'nothing_3' => 'nothing_3',
    'nothing_2' => 'nothing_2',
    'field_habitation_town' => 'field_habitation_town',
    'nothing_4' => 'nothing_4',
    'nothing_5' => 'nothing_5',
    'field_habitation_pets' => 'field_habitation_pets',
    'field_habitation_pets_info' => 'field_habitation_pets_info',
    'field_habitation_request' => 'field_habitation_request',
    'nothing_6' => 'nothing_6',
    'field_survey_status' => 'field_survey_status',
    'field_applicant_agencies' => 'field_applicant_agencies',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'entityform_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_firstname' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_lastname' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'mail' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_habitation_maxprice' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_occupants_adults' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_occupants_kids' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_habitation_rent_term' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_habitation_checkin_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'nothing_3' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing_2' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_habitation_town' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'nothing_4' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing_5' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_habitation_pets' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_habitation_pets_info' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_habitation_request' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'nothing_6' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_survey_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_applicant_agencies' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
  );
  $handler->display->display_options['style_options']['override'] = FALSE;
  $handler->display->display_options['style_options']['flipped_table_header_first_field'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entityform Submission: User uid */
  $handler->display->display_options['relationships']['user']['id'] = 'user';
  $handler->display->display_options['relationships']['user']['table'] = 'entityform';
  $handler->display->display_options['relationships']['user']['field'] = 'user';
  $handler->display->display_options['relationships']['user']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_applicant_agencies_target_id']['id'] = 'field_applicant_agencies_target_id';
  $handler->display->display_options['relationships']['field_applicant_agencies_target_id']['table'] = 'field_data_field_applicant_agencies';
  $handler->display->display_options['relationships']['field_applicant_agencies_target_id']['field'] = 'field_applicant_agencies_target_id';
  $handler->display->display_options['relationships']['field_applicant_agencies_target_id']['label'] = 'Inhalt entity referenced from field_applicant_agencies';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_agency_contact_target_id']['id'] = 'field_agency_contact_target_id';
  $handler->display->display_options['relationships']['field_agency_contact_target_id']['table'] = 'field_data_field_agency_contact';
  $handler->display->display_options['relationships']['field_agency_contact_target_id']['field'] = 'field_agency_contact_target_id';
  $handler->display->display_options['relationships']['field_agency_contact_target_id']['relationship'] = 'field_applicant_agencies_target_id';
  $handler->display->display_options['relationships']['field_agency_contact_target_id']['label'] = 'Benutzer entity referenced from field_agency_contact';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Entityform Submission: Entityform submission ID */
  $handler->display->display_options['fields']['entityform_id']['id'] = 'entityform_id';
  $handler->display->display_options['fields']['entityform_id']['table'] = 'entityform';
  $handler->display->display_options['fields']['entityform_id']['field'] = 'entityform_id';
  $handler->display->display_options['fields']['entityform_id']['exclude'] = TRUE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Contact information:';
  /* Field: User: First name */
  $handler->display->display_options['fields']['field_user_firstname']['id'] = 'field_user_firstname';
  $handler->display->display_options['fields']['field_user_firstname']['table'] = 'field_data_field_user_firstname';
  $handler->display->display_options['fields']['field_user_firstname']['field'] = 'field_user_firstname';
  $handler->display->display_options['fields']['field_user_firstname']['relationship'] = 'user';
  $handler->display->display_options['fields']['field_user_firstname']['label'] = '';
  $handler->display->display_options['fields']['field_user_firstname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_firstname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_firstname']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: User: Last name */
  $handler->display->display_options['fields']['field_user_lastname']['id'] = 'field_user_lastname';
  $handler->display->display_options['fields']['field_user_lastname']['table'] = 'field_data_field_user_lastname';
  $handler->display->display_options['fields']['field_user_lastname']['field'] = 'field_user_lastname';
  $handler->display->display_options['fields']['field_user_lastname']['relationship'] = 'user';
  $handler->display->display_options['fields']['field_user_lastname']['label'] = 'Full name';
  $handler->display->display_options['fields']['field_user_lastname']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_user_lastname']['alter']['text'] = '[field_user_firstname] [field_user_lastname]';
  $handler->display->display_options['fields']['field_user_lastname']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['relationship'] = 'user';
  /* Field: Separator */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Separator';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '&nbsp;';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Field: Entityform Submission: Max. Pauschalmiete: */
  $handler->display->display_options['fields']['field_habitation_maxprice']['id'] = 'field_habitation_maxprice';
  $handler->display->display_options['fields']['field_habitation_maxprice']['table'] = 'field_data_field_habitation_maxprice';
  $handler->display->display_options['fields']['field_habitation_maxprice']['field'] = 'field_habitation_maxprice';
  $handler->display->display_options['fields']['field_habitation_maxprice']['label'] = 'Max. Pauschalmiete';
  $handler->display->display_options['fields']['field_habitation_maxprice']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_habitation_maxprice']['element_class'] = 'views-field-medium';
  $handler->display->display_options['fields']['field_habitation_maxprice']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_habitation_maxprice']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Entityform Submission: Erwachsenen */
  $handler->display->display_options['fields']['field_occupants_adults']['id'] = 'field_occupants_adults';
  $handler->display->display_options['fields']['field_occupants_adults']['table'] = 'field_data_field_occupants_adults';
  $handler->display->display_options['fields']['field_occupants_adults']['field'] = 'field_occupants_adults';
  $handler->display->display_options['fields']['field_occupants_adults']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Entityform Submission: Kinder */
  $handler->display->display_options['fields']['field_occupants_kids']['id'] = 'field_occupants_kids';
  $handler->display->display_options['fields']['field_occupants_kids']['table'] = 'field_data_field_occupants_kids';
  $handler->display->display_options['fields']['field_occupants_kids']['field'] = 'field_occupants_kids';
  $handler->display->display_options['fields']['field_occupants_kids']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Entityform Submission: Mindestmietdauer */
  $handler->display->display_options['fields']['field_habitation_rent_term']['id'] = 'field_habitation_rent_term';
  $handler->display->display_options['fields']['field_habitation_rent_term']['table'] = 'field_data_field_habitation_rent_term';
  $handler->display->display_options['fields']['field_habitation_rent_term']['field'] = 'field_habitation_rent_term';
  $handler->display->display_options['fields']['field_habitation_rent_term']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Entityform Submission: Mietbeginn: */
  $handler->display->display_options['fields']['field_habitation_checkin_1']['id'] = 'field_habitation_checkin_1';
  $handler->display->display_options['fields']['field_habitation_checkin_1']['table'] = 'field_data_field_habitation_checkin';
  $handler->display->display_options['fields']['field_habitation_checkin_1']['field'] = 'field_habitation_checkin';
  $handler->display->display_options['fields']['field_habitation_checkin_1']['label'] = 'Mietbeginn';
  $handler->display->display_options['fields']['field_habitation_checkin_1']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Separator */
  $handler->display->display_options['fields']['nothing_3']['id'] = 'nothing_3';
  $handler->display->display_options['fields']['nothing_3']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_3']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_3']['ui_name'] = 'Separator';
  $handler->display->display_options['fields']['nothing_3']['label'] = '';
  $handler->display->display_options['fields']['nothing_3']['alter']['text'] = '&nbsp;';
  $handler->display->display_options['fields']['nothing_3']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['label'] = 'Location information:';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = '&nbsp;';
  /* Field: Entityform Submission: In Frage kommende Bezirke: */
  $handler->display->display_options['fields']['field_habitation_town']['id'] = 'field_habitation_town';
  $handler->display->display_options['fields']['field_habitation_town']['table'] = 'field_data_field_habitation_town';
  $handler->display->display_options['fields']['field_habitation_town']['field'] = 'field_habitation_town';
  $handler->display->display_options['fields']['field_habitation_town']['label'] = 'In Frage kommende Bezirke';
  $handler->display->display_options['fields']['field_habitation_town']['type'] = 'hr_surveys_taxonomy_terms_tree';
  $handler->display->display_options['fields']['field_habitation_town']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  $handler->display->display_options['fields']['field_habitation_town']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_habitation_town']['multi_type'] = 'ul';
  /* Field: Separator */
  $handler->display->display_options['fields']['nothing_4']['id'] = 'nothing_4';
  $handler->display->display_options['fields']['nothing_4']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_4']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_4']['ui_name'] = 'Separator';
  $handler->display->display_options['fields']['nothing_4']['label'] = '';
  $handler->display->display_options['fields']['nothing_4']['alter']['text'] = '&nbsp;';
  $handler->display->display_options['fields']['nothing_4']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_5']['id'] = 'nothing_5';
  $handler->display->display_options['fields']['nothing_5']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_5']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_5']['label'] = 'Additional information:';
  $handler->display->display_options['fields']['nothing_5']['alter']['text'] = '&nbsp;';
  /* Field: Entityform Submission: Haustier (ja/nein und welches): */
  $handler->display->display_options['fields']['field_habitation_pets']['id'] = 'field_habitation_pets';
  $handler->display->display_options['fields']['field_habitation_pets']['table'] = 'field_data_field_habitation_pets';
  $handler->display->display_options['fields']['field_habitation_pets']['field'] = 'field_habitation_pets';
  $handler->display->display_options['fields']['field_habitation_pets']['label'] = 'Haustier (ja/nein und welches)';
  $handler->display->display_options['fields']['field_habitation_pets']['type'] = 'hr_surveys_boolean_yesno';
  $handler->display->display_options['fields']['field_habitation_pets']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Entityform Submission: Pets */
  $handler->display->display_options['fields']['field_habitation_pets_info']['id'] = 'field_habitation_pets_info';
  $handler->display->display_options['fields']['field_habitation_pets_info']['table'] = 'field_data_field_habitation_pets_info';
  $handler->display->display_options['fields']['field_habitation_pets_info']['field'] = 'field_habitation_pets_info';
  $handler->display->display_options['fields']['field_habitation_pets_info']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Entityform Submission: Sonderwünsche: */
  $handler->display->display_options['fields']['field_habitation_request']['id'] = 'field_habitation_request';
  $handler->display->display_options['fields']['field_habitation_request']['table'] = 'field_data_field_habitation_request';
  $handler->display->display_options['fields']['field_habitation_request']['field'] = 'field_habitation_request';
  $handler->display->display_options['fields']['field_habitation_request']['label'] = 'Sonderwünsche';
  $handler->display->display_options['fields']['field_habitation_request']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Separator */
  $handler->display->display_options['fields']['nothing_6']['id'] = 'nothing_6';
  $handler->display->display_options['fields']['nothing_6']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_6']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_6']['ui_name'] = 'Separator';
  $handler->display->display_options['fields']['nothing_6']['label'] = '';
  $handler->display->display_options['fields']['nothing_6']['alter']['text'] = '&nbsp;';
  $handler->display->display_options['fields']['nothing_6']['element_label_colon'] = FALSE;
  /* Field: Entityform Submission: Status */
  $handler->display->display_options['fields']['field_survey_status']['id'] = 'field_survey_status';
  $handler->display->display_options['fields']['field_survey_status']['table'] = 'field_data_field_survey_status';
  $handler->display->display_options['fields']['field_survey_status']['field'] = 'field_survey_status';
  $handler->display->display_options['fields']['field_survey_status']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Entityform Submission: Agencies */
  $handler->display->display_options['fields']['field_applicant_agencies']['id'] = 'field_applicant_agencies';
  $handler->display->display_options['fields']['field_applicant_agencies']['table'] = 'field_data_field_applicant_agencies';
  $handler->display->display_options['fields']['field_applicant_agencies']['field'] = 'field_applicant_agencies';
  $handler->display->display_options['fields']['field_applicant_agencies']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_applicant_agencies']['settings'] = array(
    'link' => 0,
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  $handler->display->display_options['fields']['field_applicant_agencies']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_applicant_agencies']['multi_type'] = 'ul';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Entityform Submission: Entityform submission ID */
  $handler->display->display_options['arguments']['entityform_id']['id'] = 'entityform_id';
  $handler->display->display_options['arguments']['entityform_id']['table'] = 'entityform';
  $handler->display->display_options['arguments']['entityform_id']['field'] = 'entityform_id';
  $handler->display->display_options['arguments']['entityform_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['entityform_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['entityform_id']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['entityform_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['entityform_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['entityform_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['path'] = 'entityform/%';
  $handler->display->display_options['menu']['title'] = 'Agency Online surveys';
  $handler->display->display_options['menu']['weight'] = '-10';
  $handler->display->display_options['menu']['name'] = 'devel';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['online_surveys'] = array(
    t('Master'),
    t('Applicants'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('There are not any applicants.'),
    t('User'),
    t('Entityform submission ID'),
    t('.'),
    t(','),
    t('In Frage kommende Bezirke:'),
    t('Agencies'),
    t('Check in'),
    t('Max. Pauschalmiete:'),
    t('Status'),
    t('Edit'),
    t('View'),
    t('Operation'),
    t('&nbsp;&nbsp;[link_entityform]&nbsp;&nbsp;[edit_entityform]'),
    t('Page'),
    t('Full name'),
    t('[field_user_firstname] [field_user_lastname]'),
    t('Notify the agency'),
    t('<br>&nbsp;&nbsp;[nothing_1]'),
    t('&nbsp;&nbsp;[link_entityform]&nbsp;|&nbsp;[edit_entityform]
[field_applicant_agencies]'),
    t('Applicants by agency(Page)'),
    t('Inhalt entity referenced from field_applicant_agencies'),
    t('Benutzer entity referenced from field_agency_contact'),
    t('In Frage kommende Bezirke'),
    t('Max. Pauschalmiete'),
    t('&nbsp;&nbsp;[link_entityform]'),
    t('Alle'),
    t('Applicants submission'),
    t('Applicants survey'),
    t('Contact information:'),
    t('E-mail'),
    t('&nbsp;'),
    t('Erwachsenen'),
    t('Kinder'),
    t('Mindestmietdauer'),
    t('Mietbeginn'),
    t('Location information:'),
    t('Additional information:'),
    t('Haustier (ja/nein und welches)'),
    t('Pets'),
    t('Sonderwünsche'),
    t('All'),
  );
  $export['online_surveys'] = $view;

  $view = new view();
  $view->name = 'towns_and_areas';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Towns and areas';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'towns' => 'towns',
  );
  /* Filter criterion: Taxonomy term: Parent term */
  $handler->display->display_options['filters']['parent']['id'] = 'parent';
  $handler->display->display_options['filters']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['filters']['parent']['field'] = 'parent';
  $handler->display->display_options['filters']['parent']['value']['value'] = '0';

  /* Display: Towns (Entity Reference) */
  $handler = $view->new_display('entityreference', 'Towns (Entity Reference)', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'name' => 'name',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;

  /* Display: Towns areas (Entity Reference) */
  $handler = $view->new_display('entityreference', 'Towns areas (Entity Reference)', 'entityreference_town_areas');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'name' => 'name',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Parent term */
  $handler->display->display_options['arguments']['parent']['id'] = 'parent';
  $handler->display->display_options['arguments']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['arguments']['parent']['field'] = 'parent';
  $handler->display->display_options['arguments']['parent']['default_action'] = 'default';
  $handler->display->display_options['arguments']['parent']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['parent']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['parent']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['parent']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'towns' => 'towns',
  );
  /* Filter criterion: Taxonomy term: Parent term */
  $handler->display->display_options['filters']['parent']['id'] = 'parent';
  $handler->display->display_options['filters']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['filters']['parent']['field'] = 'parent';
  $handler->display->display_options['filters']['parent']['operator'] = '!=';
  $handler->display->display_options['filters']['parent']['value']['value'] = '0';
  $translatables['towns_and_areas'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Towns (Entity Reference)'),
    t('Towns areas (Entity Reference)'),
    t('All'),
  );
  $export['towns_and_areas'] = $view;

  return $export;
}
