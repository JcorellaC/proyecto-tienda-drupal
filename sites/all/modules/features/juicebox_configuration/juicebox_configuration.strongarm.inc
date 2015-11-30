<?php
/**
 * @file
 * juicebox_configuration.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function juicebox_configuration_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'juicebox_apply_markup_filter';
  $strongarm->value = 1;
  $export['juicebox_apply_markup_filter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'juicebox_enable_cors';
  $strongarm->value = 0;
  $export['juicebox_enable_cors'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'juicebox_js_scope';
  $strongarm->value = 'header';
  $export['juicebox_js_scope'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'juicebox_multisize_large';
  $strongarm->value = 'juicebox_large';
  $export['juicebox_multisize_large'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'juicebox_multisize_medium';
  $strongarm->value = 'juicebox_medium';
  $export['juicebox_multisize_medium'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'juicebox_multisize_small';
  $strongarm->value = 'juicebox_small';
  $export['juicebox_multisize_small'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'juicebox_translate_base_languagelist';
  $strongarm->value = 'Show Thumbnails|Hide Thumbnails|Expand Gallery|Close Gallery|Open Image in New Window';
  $export['juicebox_translate_base_languagelist'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'juicebox_translate_interface';
  $strongarm->value = 0;
  $export['juicebox_translate_interface'] = $strongarm;

  return $export;
}
