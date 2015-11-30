<?php
/**
 * @file
 * basic_configuration.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function basic_configuration_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
