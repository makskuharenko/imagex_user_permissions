## User Permissions

[ TODO: Complete readme documentation ]

#### Updating This Feature

To make permissions conditional this feature/module automatically re-groups exported permissions by module and wraps each group in a `module_exists` function call when the feature is recreated.

**NOTE:** This requires a patch to features to function: [https://raw.github.com/imagex/imagex_patches/7.x/contrib/features/](https://raw.github.com/imagex/imagex_patches/7.x/contrib/features/)

Example output from `imagex_user_permissions.features.user_permission.inc`:
```
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
```

This allow permissions to be stored in this feature without enforcing related modules to be enabled and modules providing permissions can be turned off without showing the feature as overridden. 

***To maintain this you should export permissions but exclude the providing module as a dependency. Features, node, system and user are the only required dependencies.*** 