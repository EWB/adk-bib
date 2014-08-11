<?php
/**
 * @file
 * citation_builder.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function citation_builder_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'authors';
  $feeds_importer->config = array(
    'name' => 'Authors',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'direct' => FALSE,
        'allowed_extensions' => 'txt csv tsv xml opml',
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => 'TAB',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'bundle' => 'person',
        'update_existing' => '1',
        'expire' => '-1',
        'mappings' => array(
          0 => array(
            'source' => 'id',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'Title',
            'target' => 'title',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'Last Name',
            'target' => 'field_last_name',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'First Name',
            'target' => 'field_first_name',
            'unique' => FALSE,
          ),
        ),
        'input_format' => 'plain_text',
        'author' => 0,
        'authorize' => 1,
        'skip_hash_check' => 0,
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['authors'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'book_importer';
  $feeds_importer->config = array(
    'name' => 'Book Importer',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'direct' => FALSE,
        'allowed_extensions' => 'txt csv tsv xml opml',
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'bundle' => 'book',
        'update_existing' => '1',
        'expire' => '-1',
        'mappings' => array(
          0 => array(
            'source' => 'Title Primary',
            'target' => 'title',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'Authors, Primary',
            'target' => 'field_author:label',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'Pub Year',
            'target' => 'field_book_published_date:start',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Place Of Publication',
            'target' => 'field_place_of_publication',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'Abstract',
            'target' => 'body',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'User 2',
            'target' => 'field_sub_genre',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          6 => array(
            'source' => 'Keywords',
            'target' => 'field_subjects',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          7 => array(
            'source' => 'Call Number',
            'target' => 'field_call_number',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'Publisher',
            'target' => 'field_publisher:label',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'Pub Year',
            'target' => 'field_published_date_integer',
            'unique' => FALSE,
          ),
        ),
        'input_format' => 'plain_text',
        'author' => 0,
        'authorize' => 1,
        'skip_hash_check' => 0,
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['book_importer'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'publisher';
  $feeds_importer->config = array(
    'name' => 'Publisher',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'direct' => FALSE,
        'allowed_extensions' => 'txt csv tsv xml opml',
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => 'TAB',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'bundle' => 'publisher',
        'update_existing' => '1',
        'expire' => '-1',
        'mappings' => array(
          0 => array(
            'source' => 'id',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'Publisher',
            'target' => 'title',
            'unique' => 1,
          ),
        ),
        'input_format' => 'plain_text',
        'author' => 0,
        'authorize' => 1,
        'skip_hash_check' => 0,
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['publisher'] = $feeds_importer;

  return $export;
}
