<?php
/**
 * @file
 * citation_builder.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function citation_builder_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'citation';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Citation';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Citation';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Last Name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_last_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['element_label_colon'] = FALSE;
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_author']['id'] = 'field_author';
  $handler->display->display_options['fields']['field_author']['table'] = 'field_data_field_author';
  $handler->display->display_options['fields']['field_author']['field'] = 'field_author';
  $handler->display->display_options['fields']['field_author']['label'] = '';
  $handler->display->display_options['fields']['field_author']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_author']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_author']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_author']['delta_offset'] = '0';
  /* Field: Content: Publisher */
  $handler->display->display_options['fields']['field_publisher']['id'] = 'field_publisher';
  $handler->display->display_options['fields']['field_publisher']['table'] = 'field_data_field_publisher';
  $handler->display->display_options['fields']['field_publisher']['field'] = 'field_publisher';
  $handler->display->display_options['fields']['field_publisher']['label'] = '';
  $handler->display->display_options['fields']['field_publisher']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_publisher']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_publisher']['delta_offset'] = '0';
  /* Field: Content: Place of Publication */
  $handler->display->display_options['fields']['field_place_of_publication']['id'] = 'field_place_of_publication';
  $handler->display->display_options['fields']['field_place_of_publication']['table'] = 'field_data_field_place_of_publication';
  $handler->display->display_options['fields']['field_place_of_publication']['field'] = 'field_place_of_publication';
  $handler->display->display_options['fields']['field_place_of_publication']['label'] = '';
  $handler->display->display_options['fields']['field_place_of_publication']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_place_of_publication']['element_label_colon'] = FALSE;
  /* Field: Content: Published Date */
  $handler->display->display_options['fields']['field_book_published_date']['id'] = 'field_book_published_date';
  $handler->display->display_options['fields']['field_book_published_date']['table'] = 'field_data_field_book_published_date';
  $handler->display->display_options['fields']['field_book_published_date']['field'] = 'field_book_published_date';
  $handler->display->display_options['fields']['field_book_published_date']['label'] = '';
  $handler->display->display_options['fields']['field_book_published_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_book_published_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_book_published_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_author], <em>[title]</em>. [field_place_of_publication]: [field_publisher]. [field_book_published_date].  Print';
  $handler->display->display_options['fields']['nothing']['element_type'] = 'p';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Author (field_author) */
  $handler->display->display_options['sorts']['field_author_target_id']['id'] = 'field_author_target_id';
  $handler->display->display_options['sorts']['field_author_target_id']['table'] = 'field_data_field_author';
  $handler->display->display_options['sorts']['field_author_target_id']['field'] = 'field_author_target_id';
  $handler->display->display_options['sorts']['field_author_target_id']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_author_target_id']['expose']['label'] = 'Author (field_author)';
  /* Sort criterion: Content: Published Date (field_book_published_date) */
  $handler->display->display_options['sorts']['field_book_published_date_value']['id'] = 'field_book_published_date_value';
  $handler->display->display_options['sorts']['field_book_published_date_value']['table'] = 'field_data_field_book_published_date';
  $handler->display->display_options['sorts']['field_book_published_date_value']['field'] = 'field_book_published_date_value';
  $handler->display->display_options['sorts']['field_book_published_date_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_book_published_date_value']['expose']['label'] = 'Published Date';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'book' => 'book',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Last Name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_last_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['element_label_colon'] = FALSE;
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_author']['id'] = 'field_author';
  $handler->display->display_options['fields']['field_author']['table'] = 'field_data_field_author';
  $handler->display->display_options['fields']['field_author']['field'] = 'field_author';
  $handler->display->display_options['fields']['field_author']['label'] = '';
  $handler->display->display_options['fields']['field_author']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_author']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_author']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_author']['delta_offset'] = '0';
  /* Field: Content: Publisher */
  $handler->display->display_options['fields']['field_publisher']['id'] = 'field_publisher';
  $handler->display->display_options['fields']['field_publisher']['table'] = 'field_data_field_publisher';
  $handler->display->display_options['fields']['field_publisher']['field'] = 'field_publisher';
  $handler->display->display_options['fields']['field_publisher']['label'] = '';
  $handler->display->display_options['fields']['field_publisher']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_publisher']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_publisher']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_publisher']['delta_offset'] = '0';
  /* Field: Content: Place of Publication */
  $handler->display->display_options['fields']['field_place_of_publication']['id'] = 'field_place_of_publication';
  $handler->display->display_options['fields']['field_place_of_publication']['table'] = 'field_data_field_place_of_publication';
  $handler->display->display_options['fields']['field_place_of_publication']['field'] = 'field_place_of_publication';
  $handler->display->display_options['fields']['field_place_of_publication']['label'] = '';
  $handler->display->display_options['fields']['field_place_of_publication']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_place_of_publication']['element_label_colon'] = FALSE;
  /* Field: Content: Published Date */
  $handler->display->display_options['fields']['field_book_published_date']['id'] = 'field_book_published_date';
  $handler->display->display_options['fields']['field_book_published_date']['table'] = 'field_data_field_book_published_date';
  $handler->display->display_options['fields']['field_book_published_date']['field'] = 'field_book_published_date';
  $handler->display->display_options['fields']['field_book_published_date']['label'] = '';
  $handler->display->display_options['fields']['field_book_published_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_book_published_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_book_published_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_author], <em>[title]</em>. [field_place_of_publication]: [field_publisher]. [field_book_published_date].  Print';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Notes';
  $handler->display->display_options['fields']['body']['element_label_type'] = 'h3';
  /* Field: Content: Call Number */
  $handler->display->display_options['fields']['field_call_number']['id'] = 'field_call_number';
  $handler->display->display_options['fields']['field_call_number']['table'] = 'field_data_field_call_number';
  $handler->display->display_options['fields']['field_call_number']['field'] = 'field_call_number';
  $handler->display->display_options['fields']['field_call_number']['label'] = 'Call #';
  $handler->display->display_options['fields']['field_call_number']['element_label_type'] = 'h3';
  $handler->display->display_options['fields']['field_call_number']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_call_number']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_call_number']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_call_number']['type'] = 'text_plain';
  /* Field: Content: Subjects */
  $handler->display->display_options['fields']['field_subjects']['id'] = 'field_subjects';
  $handler->display->display_options['fields']['field_subjects']['table'] = 'field_data_field_subjects';
  $handler->display->display_options['fields']['field_subjects']['field'] = 'field_subjects';
  $handler->display->display_options['fields']['field_subjects']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_subjects']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_subjects']['delta_offset'] = '0';
  /* Field: Content: Sub Genre */
  $handler->display->display_options['fields']['field_sub_genre']['id'] = 'field_sub_genre';
  $handler->display->display_options['fields']['field_sub_genre']['table'] = 'field_data_field_sub_genre';
  $handler->display->display_options['fields']['field_sub_genre']['field'] = 'field_sub_genre';
  $handler->display->display_options['fields']['field_sub_genre']['element_label_type'] = 'h3';
  $handler->display->display_options['fields']['field_sub_genre']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'article' => 'article',
    'book' => 'book',
  );
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );
  $export['citation'] = $view;

  return $export;
}
