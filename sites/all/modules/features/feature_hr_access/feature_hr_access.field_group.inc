<?php
/**
 * @file
 * feature_hr_access.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function feature_hr_access_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_info|user|user|default';
  $field_group->group_name = 'group_user_info';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'User information',
    'weight' => '0',
    'children' => array(
      0 => 'field_user_full_name',
      1 => 'field_agency_hash',
    ),
    'format_type' => 'table',
    'format_settings' => array(
      'label' => 'User information',
      'instance_settings' => array(
        'label_visibility' => '1',
        'desc' => '',
        'first_column' => '',
        'second_column' => '',
        'empty_label_behavior' => '1',
        'table_row_striping' => 0,
        'always_show_field_label' => 0,
        'classes' => 'group-user-info field-group-table',
      ),
    ),
  );
  $export['group_user_info|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_info|user|user|full';
  $field_group->group_name = 'group_user_info';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'User information',
    'weight' => '0',
    'children' => array(
      0 => 'field_user_full_name',
      1 => 'field_agency_hash',
    ),
    'format_type' => 'table',
    'format_settings' => array(
      'label' => 'User information',
      'instance_settings' => array(
        'label_visibility' => '1',
        'desc' => '',
        'first_column' => '',
        'second_column' => '',
        'empty_label_behavior' => '1',
        'table_row_striping' => 0,
        'always_show_field_label' => 0,
        'classes' => 'group-user-info field-group-table',
      ),
    ),
  );
  $export['group_user_info|user|user|full'] = $field_group;

  return $export;
}
