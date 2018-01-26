<?php
/**
 * @file
 * adov_audio_schedule.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function adov_audio_schedule_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-context-menu_add-audio-playlist:menutoken/5991d0b12b535.
  $menu_links['menu-context-menu_add-audio-playlist:menutoken/5991d0b12b535'] = array(
    'menu_name' => 'menu-context-menu',
    'link_path' => 'menutoken/5991d0b12b535',
    'router_path' => 'menutoken/%',
    'link_title' => 'Add Audio Playlist',
    'options' => array(
      'field_product_types' => array(
        'ld' => 0,
        'sdm' => 0,
      ),
      'attributes' => array(
        'title' => '',
      ),
      'menu_token_link_path' => 'node/add/audio-playlist',
      'alter' => TRUE,
      'menu_token_link_uuid' => 'menutoken/5991d0b12b535',
      'menu_token_data' => array(),
      'menu_token_options' => array(
        'clear' => 0,
        'title_localize' => 0,
      ),
      'identifier' => 'menu-context-menu_add-audio-playlist:menutoken/5991d0b12b535',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-context-menu_audio-schedules-list:menutoken/5991d0accca80',
  );
  // Exported menu link: menu-context-menu_add-audio-schedule:menutoken/5991d0b5d5a83.
  $menu_links['menu-context-menu_add-audio-schedule:menutoken/5991d0b5d5a83'] = array(
    'menu_name' => 'menu-context-menu',
    'link_path' => 'menutoken/5991d0b5d5a83',
    'router_path' => 'menutoken/%',
    'link_title' => 'Add Audio Schedule',
    'options' => array(
      'field_product_types' => array(
        'ld' => 0,
        'sdm' => 0,
      ),
      'attributes' => array(
        'title' => '',
      ),
      'menu_token_link_path' => 'node/add/audio-schedule',
      'alter' => TRUE,
      'menu_token_link_uuid' => 'menutoken/5991d0b5d5a83',
      'menu_token_data' => array(),
      'menu_token_options' => array(
        'clear' => 0,
        'title_localize' => 0,
      ),
      'identifier' => 'menu-context-menu_add-audio-schedule:menutoken/5991d0b5d5a83',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-context-menu_audio-schedules-list:menutoken/5991d0accca80',
  );
  // Exported menu link: menu-context-menu_add-media:menutoken/5991d0ff58e5f.
  $menu_links['menu-context-menu_add-media:menutoken/5991d0ff58e5f'] = array(
    'menu_name' => 'menu-context-menu',
    'link_path' => 'menutoken/5991d0ff58e5f',
    'router_path' => 'menutoken/%',
    'link_title' => 'Add Media',
    'options' => array(
      'field_product_types' => array(
        'ld' => 0,
        'sdm' => 0,
      ),
      'menu_token_link_path' => 'node/add/media',
      'alter' => TRUE,
      'menu_token_link_uuid' => 'menutoken/5991d0ff58e5f',
      'menu_token_data' => array(),
      'menu_token_options' => array(
        'clear' => 0,
        'title_localize' => 0,
      ),
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-context-menu_add-media:menutoken/5991d0ff58e5f',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-context-menu_audio-schedules-list:menutoken/5991d0accca80',
  );
  // Exported menu link: menu-context-menu_audio-schedules-list:menutoken/5991d0accca80.
  $menu_links['menu-context-menu_audio-schedules-list:menutoken/5991d0accca80'] = array(
    'menu_name' => 'menu-context-menu',
    'link_path' => 'menutoken/5991d0accca80',
    'router_path' => 'menutoken/%',
    'link_title' => 'Audio schedules list',
    'options' => array(
      'field_product_types' => array(
        'ld' => 0,
        'sdm' => 0,
      ),
      'attributes' => array(
        'title' => '',
      ),
      'menu_token_link_path' => 'content/audio-schedules',
      'alter' => TRUE,
      'menu_token_link_uuid' => 'menutoken/5991d0accca80',
      'menu_token_data' => array(),
      'menu_token_options' => array(
        'clear' => 0,
        'title_localize' => 0,
      ),
      'identifier' => 'menu-context-menu_audio-schedules-list:menutoken/5991d0accca80',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Add Audio Playlist');
  t('Add Audio Schedule');
  t('Add Media');
  t('Audio schedules list');

  return $menu_links;
}
