<?php
/**
 * @file
 * adov_audio_schedule.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function adov_audio_schedule_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'bypass workbench moderation'.
  $permissions['bypass workbench moderation'] = array(
    'name' => 'bypass workbench moderation',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'create audio_schedule content'.
  $permissions['create audio_schedule content'] = array(
    'name' => 'create audio_schedule content',
    'roles' => array(
      'Agency user' => 'Agency user',
      'Campaign manager' => 'Campaign manager',
      'Group admin' => 'Group admin',
      'Local market admin' => 'Local market admin',
      'Media editor' => 'Media editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any audio_schedule content'.
  $permissions['delete any audio_schedule content'] = array(
    'name' => 'delete any audio_schedule content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own audio_schedule content'.
  $permissions['delete own audio_schedule content'] = array(
    'name' => 'delete own audio_schedule content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any audio_schedule content'.
  $permissions['edit any audio_schedule content'] = array(
    'name' => 'edit any audio_schedule content',
    'roles' => array(
      'Campaign manager' => 'Campaign manager',
      'Group admin' => 'Group admin',
      'Local market admin' => 'Local market admin',
      'Media editor' => 'Media editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own audio_schedule content'.
  $permissions['edit own audio_schedule content'] = array(
    'name' => 'edit own audio_schedule content',
    'roles' => array(
      'Agency user' => 'Agency user',
      'Campaign manager' => 'Campaign manager',
      'Group admin' => 'Group admin',
      'Local market admin' => 'Local market admin',
      'Media editor' => 'Media editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'moderate audio_schedule state from draft to needs_review'.
  $permissions['moderate audio_schedule state from draft to needs_review'] = array(
    'name' => 'moderate audio_schedule state from draft to needs_review',
    'roles' => array(
      'Accessories Manager' => 'Accessories Manager',
      'Agency user' => 'Agency user',
      'Campaign manager' => 'Campaign manager',
      'Deployment support' => 'Deployment support',
      'Group admin' => 'Group admin',
      'Local market admin' => 'Local market admin',
      'Media editor' => 'Media editor',
      'Pricing Approver' => 'Pricing Approver',
      'Pricing Editor' => 'Pricing Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate audio_schedule state from needs_review to draft'.
  $permissions['moderate audio_schedule state from needs_review to draft'] = array(
    'name' => 'moderate audio_schedule state from needs_review to draft',
    'roles' => array(
      'Agency user' => 'Agency user',
      'Campaign manager' => 'Campaign manager',
      'Group admin' => 'Group admin',
      'Local market admin' => 'Local market admin',
      'Media editor' => 'Media editor',
      'administrator' => 'administrator',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate audio_schedule state from needs_review to published'.
  $permissions['moderate audio_schedule state from needs_review to published'] = array(
    'name' => 'moderate audio_schedule state from needs_review to published',
    'roles' => array(
      'Accessories Manager' => 'Accessories Manager',
      'Campaign manager' => 'Campaign manager',
      'Group admin' => 'Group admin',
      'Local market admin' => 'Local market admin',
      'Pricing Approver' => 'Pricing Approver',
      'administrator' => 'administrator',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate audio_schedule state from needs_review to rejected'.
  $permissions['moderate audio_schedule state from needs_review to rejected'] = array(
    'name' => 'moderate audio_schedule state from needs_review to rejected',
    'roles' => array(
      'Campaign manager' => 'Campaign manager',
      'Group admin' => 'Group admin',
      'Local market admin' => 'Local market admin',
      'administrator' => 'administrator',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate audio_schedule state from published to draft'.
  $permissions['moderate audio_schedule state from published to draft'] = array(
    'name' => 'moderate audio_schedule state from published to draft',
    'roles' => array(
      'Agency user' => 'Agency user',
      'Campaign manager' => 'Campaign manager',
      'Deployment support' => 'Deployment support',
      'Group admin' => 'Group admin',
      'Local market admin' => 'Local market admin',
      'Media editor' => 'Media editor',
      'Pricing Approver' => 'Pricing Approver',
      'Pricing Editor' => 'Pricing Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate audio_schedule state from rejected to draft'.
  $permissions['moderate audio_schedule state from rejected to draft'] = array(
    'name' => 'moderate audio_schedule state from rejected to draft',
    'roles' => array(
      'Agency user' => 'Agency user',
      'Campaign manager' => 'Campaign manager',
      'Deployment support' => 'Deployment support',
      'Group admin' => 'Group admin',
      'Local market admin' => 'Local market admin',
      'Media editor' => 'Media editor',
      'Pricing Approver' => 'Pricing Approver',
      'Pricing Editor' => 'Pricing Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate audio_schedule state from rejected to needs_review'.
  $permissions['moderate audio_schedule state from rejected to needs_review'] = array(
    'name' => 'moderate audio_schedule state from rejected to needs_review',
    'roles' => array(
      'Agency user' => 'Agency user',
      'Campaign manager' => 'Campaign manager',
      'Deployment support' => 'Deployment support',
      'Group admin' => 'Group admin',
      'Local market admin' => 'Local market admin',
      'Media editor' => 'Media editor',
      'Pricing Approver' => 'Pricing Approver',
      'Pricing Editor' => 'Pricing Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'workbench_moderation',
  );

  return $permissions;
}
