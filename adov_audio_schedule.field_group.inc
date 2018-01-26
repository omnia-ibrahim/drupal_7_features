<?php
/**
 * @file
 * adov_audio_schedule.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function adov_audio_schedule_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_hierarchy_lm|field_collection_item|field_audio_schedules|form';
  $field_group->group_name = 'group_hierarchy_lm';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_audio_schedules';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Hierarchy in LM',
    'weight' => '1',
    'children' => array(
      0 => 'field_local_market',
      1 => 'field_regions',
      2 => 'field_stores',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Hierarchy in LM',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-hierarchy-lm field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'blind',
        'speed' => 'fast',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_hierarchy_lm|field_collection_item|field_audio_schedules|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main|node|audio_schedule|form';
  $field_group->group_name = 'group_main';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'audio_schedule';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Main',
    'weight' => '0',
    'children' => array(
      0 => 'field_schedule_dates',
      1 => 'field_associated_audio_playlist',
      2 => 'field_audio_schedules',
      3 => 'field_apply_immediately',
      4 => 'field_local_market',
      5 => 'title',
      6 => 'workbench_access',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-main field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_main|node|audio_schedule|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_zone_assigment|field_collection_item|field_audio_schedules|form';
  $field_group->group_name = 'group_zone_assigment';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_audio_schedules';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Zone Assignment',
    'weight' => '0',
    'children' => array(
      0 => 'field_zones',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-zone-assigment field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_zone_assigment|field_collection_item|field_audio_schedules|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Hierarchy in LM');
  t('Main');
  t('Zone Assignment');

  return $field_groups;
}
