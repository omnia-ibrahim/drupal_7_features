<?php
/**
 * @file
 * adov_audio_schedule.path_breadcrumbs.inc
 */

/**
 * Implements hook_path_breadcrumbs_settings_info().
 */
function adov_audio_schedule_path_breadcrumbs_settings_info() {
  $export = array();

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'audio_schedule';
  $path_breadcrumb->name = 'Audio Schedule';
  $path_breadcrumb->path = 'node/%node';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'SDM Audio Schedules',
      1 => '!page_title',
    ),
    'paths' => array(
      0 => 'content/audio-schedules',
      1 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(
      'node' => array(
        'position' => 1,
        'argument' => 'entity_id:node',
        'settings' => array(
          'identifier' => 'Node: ID',
        ),
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'audio_schedule' => 'audio_schedule',
            ),
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = 0;
  $export['audio_schedule'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'audio_schedule_add';
  $path_breadcrumb->name = 'Audio Schedule Add';
  $path_breadcrumb->path = 'node/add/audio-schedule';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'SDM Audio Schedules',
    ),
    'paths' => array(
      0 => 'content/audio-schedules',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(),
    'access' => array(),
  );
  $path_breadcrumb->weight = 0;
  $export['audio_schedule_add'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'audio_schedule_edit';
  $path_breadcrumb->name = 'Audio Schedule Edit';
  $path_breadcrumb->path = 'node/%node/*';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'SDM Audio Schedules',
      1 => '%node:title',
    ),
    'paths' => array(
      0 => 'content/audio-schedules',
      1 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(
      'node' => array(
        'position' => 1,
        'argument' => 'entity_id:node',
        'settings' => array(
          'identifier' => 'Node: ID',
        ),
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'audio_schedule' => 'audio_schedule',
            ),
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = 0;
  $export['audio_schedule_edit'] = $path_breadcrumb;

  return $export;
}
