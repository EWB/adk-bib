<?php
/**
 * @file
 * citation_builder.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function citation_builder_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
}
