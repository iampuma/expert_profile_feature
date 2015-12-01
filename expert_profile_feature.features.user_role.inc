<?php
/**
 * @file
 * expert_profile_feature.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function expert_profile_feature_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 3,
  );

  // Exported role: editor.
  $roles['editor'] = array(
    'name' => 'editor',
    'weight' => 4,
  );

  return $roles;
}
