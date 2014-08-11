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
  if ($module == "feeds_tamper" && $api == "feeds_tamper_default") {
    return array("version" => "2");
  }
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function citation_builder_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function citation_builder_node_info() {
  $items = array(
    'book' => array(
      'name' => t('Book'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'person' => array(
      'name' => t('Person'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'publisher' => array(
      'name' => t('Publisher'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
