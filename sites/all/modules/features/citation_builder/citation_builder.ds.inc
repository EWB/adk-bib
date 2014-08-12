<?php
/**
 * @file
 * citation_builder.ds.inc
 */

/**
 * Implements hook_ds_view_modes_info().
 */
function citation_builder_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'search_ds_ewb';
  $ds_view_mode->label = 'search-ds-ewb';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['search_ds_ewb'] = $ds_view_mode;

  return $export;
}
