<?php
/**
 * @file
 * staff_profile_form.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function staff_profile_form_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_staff_admin_fields|node|staff_profile|form';
  $field_group->group_name = 'group_staff_admin_fields';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'staff_profile';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Admin',
    'weight' => '2',
    'children' => array(
      0 => 'field_staff_advance_id',
      1 => 'field_staff_pub',
      2 => 'field_staff_flag',
      3 => 'field_staff_nationality',
      4 => 'field_staff_notes',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Admin',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-staff-admin-fields field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_staff_admin_fields|node|staff_profile|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_staff_user_fields|node|staff_profile|form';
  $field_group->group_name = 'group_staff_user_fields';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'staff_profile';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'User',
    'weight' => '3',
    'children' => array(
      0 => 'field_staff_news',
      1 => 'field_staff_links',
      2 => 'field_staff_file',
      3 => 'field_staff_title',
      4 => 'field_staff_email',
      5 => 'field_staff_department',
      6 => 'title',
      7 => 'path',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'User',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-staff-user-fields field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_staff_user_fields|node|staff_profile|form'] = $field_group;

  return $export;
}
