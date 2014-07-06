<?php
/**
 * @file
 * staff_profile_form.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function staff_profile_form_user_default_permissions() {
  $permissions = array();

  // Exported permission: create staff_profile content.
  $permissions['create staff_profile content'] = array(
    'name' => 'create staff_profile content',
    'roles' => array(
      0 => 'admin',
      1 => 'anonymous user',
      2 => 'site admin',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own staff_profile content.
  $permissions['edit own staff_profile content'] = array(
    'name' => 'edit own staff_profile content',
    'roles' => array(
      0 => 'admin',
      1 => 'anonymous user',
      2 => 'site admin',
    ),
    'module' => 'node',
  );

  return $permissions;
}
