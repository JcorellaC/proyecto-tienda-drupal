<?php
/**
 * @file
 * juicebox_configuration.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function juicebox_configuration_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: management_juicebox:admin/config/media/juicebox.
  $menu_links['management_juicebox:admin/config/media/juicebox'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/media/juicebox',
    'router_path' => 'admin/config/media/juicebox',
    'link_title' => 'Juicebox',
    'options' => array(
      'attributes' => array(
        'title' => 'Adjust global Juicebox settings.',
      ),
      'identifier' => 'management_juicebox:admin/config/media/juicebox',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_media:admin/config/media',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Juicebox');

  return $menu_links;
}
