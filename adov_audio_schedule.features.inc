<?php
/**
 * @file
 * adov_audio_schedule.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function adov_audio_schedule_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "path_breadcrumbs" && $api == "path_breadcrumbs") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function adov_audio_schedule_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function adov_audio_schedule_node_info() {
  $items = array(
    'audio_schedule' => array(
      'name' => t('Audio Schedule'),
      'base' => 'node_content',
      'description' => t('Content type for audio scheduling Playlists.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
