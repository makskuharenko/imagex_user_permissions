<?php
/**
 * @file
 * imagex_user_permissions.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function imagex_user_permissions_user_default_permissions() {
  $permissions = array();

  // Exported permissions from: block module
  if (module_exists('block')) {
    // Exported permission: 'administer blocks'.
    $permissions['administer blocks'] = array(
      'name' => 'administer blocks',
      'roles' => array(
        'administrator' => 'administrator',
      ),
      'module' => 'block',
    );
  }

  // Exported permissions from: backup_migrate module
  if (module_exists('backup_migrate')) {
    // Exported permission: 'access backup and migrate'.
    $permissions['access backup and migrate'] = array(
      'name' => 'access backup and migrate',
      'roles' => array(
        'administrator' => 'administrator',
      ),
      'module' => 'backup_migrate',
    );
    // Exported permission: 'perform backup'.
    $permissions['perform backup'] = array(
      'name' => 'perform backup',
      'roles' => array(
        'administrator' => 'administrator',
      ),
      'module' => 'backup_migrate',
    );
    // Exported permission: 'access backup files'.
    $permissions['access backup files'] = array(
      'name' => 'access backup files',
      'roles' => array(
        'administrator' => 'administrator',
      ),
      'module' => 'backup_migrate',
    );
    // Exported permission: 'delete backup files'.
    $permissions['delete backup files'] = array(
      'name' => 'delete backup files',
      'roles' => array(
        'administrator' => 'administrator',
      ),
      'module' => 'backup_migrate',
    );
    // Exported permission: 'restore from backup'.
    $permissions['restore from backup'] = array(
      'name' => 'restore from backup',
      'roles' => array(
        'administrator' => 'administrator',
      ),
      'module' => 'backup_migrate',
    );
    // Exported permission: 'administer backup and migrate'.
    $permissions['administer backup and migrate'] = array(
      'name' => 'administer backup and migrate',
      'roles' => array(
        'administrator' => 'administrator',
      ),
      'module' => 'backup_migrate',
    );
  }

  // Exported permissions from: comment module
  if (module_exists('comment')) {
    // Exported permission: 'administer comments'.
    $permissions['administer comments'] = array(
      'name' => 'administer comments',
      'roles' => array(
        'Content Administrator' => 'Content Administrator',
        'Content Creator' => 'Content Creator',
        'Content Manager' => 'Content Manager',
        'Content Moderator' => 'Content Moderator',
        'administrator' => 'administrator',
      ),
      'module' => 'comment',
    );
    // Exported permission: 'access comments'.
    $permissions['access comments'] = array(
      'name' => 'access comments',
      'roles' => array(
        'administrator' => 'administrator',
      ),
      'module' => 'comment',
    );
    // Exported permission: 'post comments'.
    $permissions['post comments'] = array(
      'name' => 'post comments',
      'roles' => array(
        'administrator' => 'administrator',
      ),
      'module' => 'comment',
    );
    // Exported permission: 'skip comment approval'.
    $permissions['skip comment approval'] = array(
      'name' => 'skip comment approval',
      'roles' => array(
        'administrator' => 'administrator',
      ),
      'module' => 'comment',
    );
    // Exported permission: 'edit own comments'.
    $permissions['edit own comments'] = array(
      'name' => 'edit own comments',
      'roles' => array(
        'administrator' => 'administrator',
      ),
      'module' => 'comment',
    );
  }

  // Exported permissions from: contextual module
  if (module_exists('contextual')) {
    // Exported permission: 'access contextual links'.
    $permissions['access contextual links'] = array(
      'name' => 'access contextual links',
      'roles' => array(
        'administrator' => 'administrator',
      ),
      'module' => 'contextual',
    );
  }

  // Exported permissions from: dashboard module
  if (module_exists('dashboard')) {
    // Exported permission: 'access dashboard'.
    $permissions['access dashboard'] = array(
      'name' => 'access dashboard',
      'roles' => array(
        'administrator' => 'administrator',
      ),
      'module' => 'dashboard',
    );
  }

  // Exported permissions from: field_collection module
  if (module_exists('field_collection')) {
    // Exported permission: 'administer field collections'.
    $permissions['administer field collections'] = array(
      'name' => 'administer field collections',
      'roles' => array(
        'administrator' => 'administrator',
      ),
      'module' => 'field_collection',
    );
  }

  // Exported permissions from: menu module
  if (module_exists('menu')) {
    // Exported permission: 'administer menu'.
    $permissions['administer menu'] = array(
      'name' => 'administer menu',
      'roles' => array(
        'administrator' => 'administrator',
      ),
      'module' => 'menu',
    );
  }

  // Exported permissions from: metatag module
  if (module_exists('metatag')) {
    // Exported permission: 'administer meta tags'.
    $permissions['administer meta tags'] = array(
      'name' => 'administer meta tags',
      'roles' => array(
        'administrator' => 'administrator',
      ),
      'module' => 'metatag',
    );
    // Exported permission: 'edit meta tags'.
    $permissions['edit meta tags'] = array(
      'name' => 'edit meta tags',
      'roles' => array(
        'administrator' => 'administrator',
      ),
      'module' => 'metatag',
    );
  }

  // Exported permissions from: module_filter module
  if (module_exists('module_filter')) {
    // Exported permission: 'administer module filter'.
    $permissions['administer module filter'] = array(
      'name' => 'administer module filter',
      'roles' => array(
        'administrator' => 'administrator',
      ),
      'module' => 'module_filter',
    );
  }

  // Exported permissions from: node module
  if (module_exists('node')) {
    // Exported permission: 'bypass node access'.
    $permissions['bypass node access'] = array(
      'name' => 'bypass node access',
      'roles' => array(
        'administrator' => 'administrator',
      ),
      'module' => 'node',
    );
    // Exported permission: 'access content'.
    $permissions['access content'] = array(
      'name' => 'access content',
      'roles' => array(
        'administrator' => 'administrator',
        'anonymous user' => 'anonymous user',
        'authenticated user' => 'authenticated user',
      ),
      'module' => 'node',
    );
    // Exported permission: 'view own unpublished content'.
    $permissions['view own unpublished content'] = array(
      'name' => 'view own unpublished content',
      'roles' => array(
        'administrator' => 'administrator',
      ),
      'module' => 'node',
    );
    // Exported permission: 'view revisions'.
    $permissions['view revisions'] = array(
      'name' => 'view revisions',
      'roles' => array(
        'administrator' => 'administrator',
      ),
      'module' => 'node',
    );
    // Exported permission: 'revert revisions'.
    $permissions['revert revisions'] = array(
      'name' => 'revert revisions',
      'roles' => array(
        'administrator' => 'administrator',
      ),
      'module' => 'node',
    );
    // Exported permission: 'delete revisions'.
    $permissions['delete revisions'] = array(
      'name' => 'delete revisions',
      'roles' => array(
        'administrator' => 'administrator',
      ),
      'module' => 'node',
    );
  }

  // Exported permissions from: path module
  if (module_exists('path')) {
    // Exported permission: 'administer url aliases'.
    $permissions['administer url aliases'] = array(
      'name' => 'administer url aliases',
      'roles' => array(
        'administrator' => 'administrator',
      ),
      'module' => 'path',
    );
    // Exported permission: 'create url aliases'.
    $permissions['create url aliases'] = array(
      'name' => 'create url aliases',
      'roles' => array(
        'administrator' => 'administrator',
      ),
      'module' => 'path',
    );
  }

  // Exported permissions from: redirect module
  if (module_exists('redirect')) {
    // Exported permission: 'administer redirects'.
    $permissions['administer redirects'] = array(
      'name' => 'administer redirects',
      'roles' => array(
        'administrator' => 'administrator',
      ),
      'module' => 'redirect',
    );
  }

  // Exported permissions from: remote_stream_wrapper module
  if (module_exists('remote_stream_wrapper')) {
    // Exported permission: 'add media from remote urls'.
    $permissions['add media from remote urls'] = array(
      'name' => 'add media from remote urls',
      'roles' => array(
        'administrator' => 'administrator',
      ),
      'module' => 'remote_stream_wrapper',
    );
  }

  // Exported permissions from: search module
  if (module_exists('search')) {
    // Exported permission: 'administer search'.
    $permissions['administer search'] = array(
      'name' => 'administer search',
      'roles' => array(
        'administrator' => 'administrator',
      ),
      'module' => 'search',
    );
    // Exported permission: 'search content'.
    $permissions['search content'] = array(
      'name' => 'search content',
      'roles' => array(
        'administrator' => 'administrator',
      ),
      'module' => 'search',
    );
    // Exported permission: 'use advanced search'.
    $permissions['use advanced search'] = array(
      'name' => 'use advanced search',
      'roles' => array(
        'administrator' => 'administrator',
      ),
      'module' => 'search',
    );
  }

  // Exported permissions from: shortcut module
  if (module_exists('shortcut')) {
    // Exported permission: 'administer shortcuts'.
    $permissions['administer shortcuts'] = array(
      'name' => 'administer shortcuts',
      'roles' => array(
        'administrator' => 'administrator',
      ),
      'module' => 'shortcut',
    );
    // Exported permission: 'customize shortcut links'.
    $permissions['customize shortcut links'] = array(
      'name' => 'customize shortcut links',
      'roles' => array(
        'administrator' => 'administrator',
      ),
      'module' => 'shortcut',
    );
    // Exported permission: 'switch shortcut sets'.
    $permissions['switch shortcut sets'] = array(
      'name' => 'switch shortcut sets',
      'roles' => array(
        'administrator' => 'administrator',
      ),
      'module' => 'shortcut',
    );
  }

  // Exported permissions from: system module
  if (module_exists('system')) {
    // Exported permission: 'administer modules'.
    $permissions['administer modules'] = array(
      'name' => 'administer modules',
      'roles' => array(
        'administrator' => 'administrator',
      ),
      'module' => 'system',
    );
    // Exported permission: 'administer site configuration'.
    $permissions['administer site configuration'] = array(
      'name' => 'administer site configuration',
      'roles' => array(
        'administrator' => 'administrator',
      ),
      'module' => 'system',
    );
    // Exported permission: 'administer themes'.
    $permissions['administer themes'] = array(
      'name' => 'administer themes',
      'roles' => array(
        'administrator' => 'administrator',
      ),
      'module' => 'system',
    );
    // Exported permission: 'administer software updates'.
    $permissions['administer software updates'] = array(
      'name' => 'administer software updates',
      'roles' => array(
        'administrator' => 'administrator',
      ),
      'module' => 'system',
    );
    // Exported permission: 'administer actions'.
    $permissions['administer actions'] = array(
      'name' => 'administer actions',
      'roles' => array(
        'administrator' => 'administrator',
      ),
      'module' => 'system',
    );
    // Exported permission: 'access administration pages'.
    $permissions['access administration pages'] = array(
      'name' => 'access administration pages',
      'roles' => array(
        'administrator' => 'administrator',
      ),
      'module' => 'system',
    );
    // Exported permission: 'access site in maintenance mode'.
    $permissions['access site in maintenance mode'] = array(
      'name' => 'access site in maintenance mode',
      'roles' => array(
        'administrator' => 'administrator',
      ),
      'module' => 'system',
    );
    // Exported permission: 'view the administration theme'.
    $permissions['view the administration theme'] = array(
      'name' => 'view the administration theme',
      'roles' => array(
        'administrator' => 'administrator',
      ),
      'module' => 'system',
    );
    // Exported permission: 'access site reports'.
    $permissions['access site reports'] = array(
      'name' => 'access site reports',
      'roles' => array(
        'administrator' => 'administrator',
      ),
      'module' => 'system',
    );
    // Exported permission: 'block IP addresses'.
    $permissions['block IP addresses'] = array(
      'name' => 'block IP addresses',
      'roles' => array(
        'administrator' => 'administrator',
      ),
      'module' => 'system',
    );
  }

  // Exported permissions from: taxonomy module
  if (module_exists('taxonomy')) {
    // Exported permission: 'administer taxonomy'.
    $permissions['administer taxonomy'] = array(
      'name' => 'administer taxonomy',
      'roles' => array(
        'administrator' => 'administrator',
      ),
      'module' => 'taxonomy',
    );
  }

  // Exported permissions from: user module
  if (module_exists('user')) {
    // Exported permission: 'administer permissions'.
    $permissions['administer permissions'] = array(
      'name' => 'administer permissions',
      'roles' => array(
        'administrator' => 'administrator',
      ),
      'module' => 'user',
    );
    // Exported permission: 'administer users'.
    $permissions['administer users'] = array(
      'name' => 'administer users',
      'roles' => array(
        'administrator' => 'administrator',
      ),
      'module' => 'user',
    );
    // Exported permission: 'access user profiles'.
    $permissions['access user profiles'] = array(
      'name' => 'access user profiles',
      'roles' => array(
        'administrator' => 'administrator',
      ),
      'module' => 'user',
    );
    // Exported permission: 'change own username'.
    $permissions['change own username'] = array(
      'name' => 'change own username',
      'roles' => array(
        'administrator' => 'administrator',
      ),
      'module' => 'user',
    );
    // Exported permission: 'cancel account'.
    $permissions['cancel account'] = array(
      'name' => 'cancel account',
      'roles' => array(
        'administrator' => 'administrator',
      ),
      'module' => 'user',
    );
    // Exported permission: 'select account cancellation method'.
    $permissions['select account cancellation method'] = array(
      'name' => 'select account cancellation method',
      'roles' => array(
        'administrator' => 'administrator',
      ),
      'module' => 'user',
    );
  }

  // Exported permissions from: uuid module
  if (module_exists('uuid')) {
    // Exported permission: 'administer uuid'.
    $permissions['administer uuid'] = array(
      'name' => 'administer uuid',
      'roles' => array(
        'administrator' => 'administrator',
      ),
      'module' => 'uuid',
    );
  }

  // Exported permissions from: pathauto module
  if (module_exists('pathauto')) {
    // Exported permission: 'administer pathauto'.
    $permissions['administer pathauto'] = array(
      'name' => 'administer pathauto',
      'roles' => array(
        'administrator' => 'administrator',
      ),
      'module' => 'pathauto',
    );
    // Exported permission: 'notify of path changes'.
    $permissions['notify of path changes'] = array(
      'name' => 'notify of path changes',
      'roles' => array(
        'administrator' => 'administrator',
      ),
      'module' => 'pathauto',
    );
  }

  // Exported permissions from: views module
  if (module_exists('views')) {
    // Exported permission: 'administer views'.
    $permissions['administer views'] = array(
      'name' => 'administer views',
      'roles' => array(
        'administrator' => 'administrator',
      ),
      'module' => 'views',
    );
    // Exported permission: 'access all views'.
    $permissions['access all views'] = array(
      'name' => 'access all views',
      'roles' => array(
        'administrator' => 'administrator',
      ),
      'module' => 'views',
    );
  }

  // Exported permissions from: features module
  if (module_exists('features')) {
    // Exported permission: 'administer features'.
    $permissions['administer features'] = array(
      'name' => 'administer features',
      'roles' => array(
        'administrator' => 'administrator',
      ),
      'module' => 'features',
    );
    // Exported permission: 'manage features'.
    $permissions['manage features'] = array(
      'name' => 'manage features',
      'roles' => array(
        'administrator' => 'administrator',
      ),
      'module' => 'features',
    );
  }

  // Exported permissions from: rules module
  if (module_exists('rules')) {
    // Exported permission: 'administer rules'.
    $permissions['administer rules'] = array(
      'name' => 'administer rules',
      'roles' => array(
        'administrator' => 'administrator',
      ),
      'module' => 'rules',
    );
    // Exported permission: 'bypass rules access'.
    $permissions['bypass rules access'] = array(
      'name' => 'bypass rules access',
      'roles' => array(
        'administrator' => 'administrator',
      ),
      'module' => 'rules',
    );
    // Exported permission: 'access rules debug'.
    $permissions['access rules debug'] = array(
      'name' => 'access rules debug',
      'roles' => array(
        'administrator' => 'administrator',
      ),
      'module' => 'rules',
    );
  }

  // Exported permissions from: better_formats module
  if (module_exists('better_formats')) {
    // Exported permission: 'show format tips'.
    $permissions['show format tips'] = array(
      'name' => 'show format tips',
      'roles' => array(
        'administrator' => 'administrator',
      ),
      'module' => 'better_formats',
    );
    // Exported permission: 'show more format tips link'.
    $permissions['show more format tips link'] = array(
      'name' => 'show more format tips link',
      'roles' => array(
        'administrator' => 'administrator',
      ),
      'module' => 'better_formats',
    );
    // Exported permission: 'show format selection for comment'.
    $permissions['show format selection for comment'] = array(
      'name' => 'show format selection for comment',
      'roles' => array(
        'administrator' => 'administrator',
      ),
      'module' => 'better_formats',
    );
    // Exported permission: 'show format selection for field_collection_item'.
    $permissions['show format selection for field_collection_item'] = array(
      'name' => 'show format selection for field_collection_item',
      'roles' => array(
        'administrator' => 'administrator',
      ),
      'module' => 'better_formats',
    );
    // Exported permission: 'show format selection for node'.
    $permissions['show format selection for node'] = array(
      'name' => 'show format selection for node',
      'roles' => array(
        'administrator' => 'administrator',
      ),
      'module' => 'better_formats',
    );
    // Exported permission: 'show format selection for file'.
    $permissions['show format selection for file'] = array(
      'name' => 'show format selection for file',
      'roles' => array(
        'administrator' => 'administrator',
      ),
      'module' => 'better_formats',
    );
    // Exported permission: 'show format selection for taxonomy_term'.
    $permissions['show format selection for taxonomy_term'] = array(
      'name' => 'show format selection for taxonomy_term',
      'roles' => array(
        'administrator' => 'administrator',
      ),
      'module' => 'better_formats',
    );
    // Exported permission: 'show format selection for user'.
    $permissions['show format selection for user'] = array(
      'name' => 'show format selection for user',
      'roles' => array(
        'administrator' => 'administrator',
      ),
      'module' => 'better_formats',
    );
    // Exported permission: 'show format selection for rules_config'.
    $permissions['show format selection for rules_config'] = array(
      'name' => 'show format selection for rules_config',
      'roles' => array(
        'administrator' => 'administrator',
      ),
      'module' => 'better_formats',
    );
  }

  features_alter_code('user_permission', $permissions);

  return $permissions;
}
