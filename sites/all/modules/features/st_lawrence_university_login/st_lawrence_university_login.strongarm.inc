<?php
/**
 * @file
 * st_lawrence_university_login.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function st_lawrence_university_login_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ldap_authentication_conf';
  $strongarm->value = array(
    'sids' => array(
      'slu_directory' => 'slu_directory',
    ),
    'authenticationMode' => 1,
    'loginUIUsernameTxt' => NULL,
    'loginUIPasswordTxt' => NULL,
    'ldapUserHelpLinkUrl' => NULL,
    'ldapUserHelpLinkText' => 'Logon Help',
    'emailOption' => 3,
    'emailUpdate' => 1,
    'allowOnlyIfTextInDn' => array(),
    'excludeIfTextInDn' => array(),
    'allowTestPhp' => '',
    'excludeIfNoAuthorizations' => NULL,
    'ssoRemoteUserStripDomainName' => NULL,
    'ssoExcludedPaths' => array(),
    'seamlessLogin' => NULL,
    'ldapImplementation' => NULL,
    'cookieExpire' => NULL,
  );
  $export['ldap_authentication_conf'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ldap_servers_encryption';
  $strongarm->value = 10;
  $export['ldap_servers_encryption'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ldap_servers_encrypt_key';
  $strongarm->value = 'BVzVW4Dux/';
  $export['ldap_servers_encrypt_key'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ldap_servers_require_ssl_for_credentails';
  $strongarm->value = 0;
  $export['ldap_servers_require_ssl_for_credentails'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ldap_user_conf';
  $strongarm->value = array(
    'drupalAcctProvisionServer' => 'slu_directory',
    'ldapEntryProvisionServer' => 0,
    'drupalAcctProvisionTriggers' => array(
      2 => '2',
      1 => '1',
    ),
    'ldapEntryProvisionTriggers' => array(
      6 => 0,
      7 => 0,
      8 => 0,
      3 => 0,
    ),
    'orphanedDrupalAcctBehavior' => 'ldap_user_orphan_email',
    'orphanedCheckQty' => '100',
    'userConflictResolve' => 2,
    'manualAccountConflict' => '2',
    'acctCreation' => 4,
    'ldapUserSynchMappings' => array(),
    'disableAdminPasswordField' => 1,
  );
  $export['ldap_user_conf'] = $strongarm;

  return $export;
}
