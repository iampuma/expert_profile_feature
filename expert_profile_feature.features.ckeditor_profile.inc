<?php
/**
 * @file
 * expert_profile_feature.features.ckeditor_profile.inc
 */

/**
 * Implements hook_ckeditor_profile_defaults().
 */
function expert_profile_feature_ckeditor_profile_defaults() {
  $data = array(
    'Advanced' => array(
      'name' => 'Advanced',
      'settings' => array(
        'ss' => 2,
        'toolbar' => '[
    [\'Bold\',\'Italic\',\'Underline\',\'Strike\'],
    [\'NumberedList\',\'BulletedList\'],
    [\'Image\',\'Link\',\'Unlink\'],
    [\'JustifyLeft\',\'JustifyCenter\',\'JustifyRight\',\'JustifyBlock\',\'Format\'],
    [\'Cut\',\'Copy\',\'Paste\',\'PasteText\',\'PasteFromWord\',\'RemoveFormat\'],
    [\'Undo\',\'Redo\'],
    [\'Maximize\']
]',
        'expand' => 't',
        'default' => 't',
        'show_toggle' => 't',
        'uicolor' => 'default',
        'uicolor_user' => '#FFA273',
        'width' => '100%',
        'lang' => 'en',
        'auto_lang' => 't',
        'language_direction' => 'default',
        'allowed_content' => 't',
        'extraAllowedContent' => '',
        'enter_mode' => 'p',
        'shift_enter_mode' => 'br',
        'font_format' => 'h2;h3;h4',
        'custom_formatting' => 'f',
        'formatting' => array(
          'custom_formatting_options' => array(
            'indent' => 'indent',
            'breakBeforeOpen' => 'breakBeforeOpen',
            'breakAfterOpen' => 'breakAfterOpen',
            'breakAfterClose' => 'breakAfterClose',
            'breakBeforeClose' => 0,
            'pre_indent' => 0,
          ),
        ),
        'css_mode' => 'none',
        'css_path' => '',
        'css_style' => 'theme',
        'styles_path' => '',
        'filebrowser' => 'imce',
        'filebrowser_image' => '',
        'filebrowser_flash' => '',
        'UserFilesPath' => '%b%f/',
        'UserFilesAbsolutePath' => '%d%b%f/',
        'forcePasteAsPlainText' => 't',
        'html_entities' => 'f',
        'scayt_autoStartup' => 'f',
        'theme_config_js' => 'f',
        'js_conf' => '',
        'loadPlugins' => array(
          'autogrow' => array(
            'name' => 'autogrow',
            'desc' => 'Auto Grow plugin. See <a href="http://ckeditor.com/addon/autogrow">addon page</a> for more details.',
            'path' => '//cdn.ckeditor.com/4.4.3/full-all/plugins/autogrow/',
            'buttons' => FALSE,
            'default' => 'f',
          ),
          'counter' => array(
            'name' => 'counter',
            'desc' => 'Plugin to count symbols, symbols without blanks and words',
            'path' => '%plugin_dir%counter/',
            'buttons' => FALSE,
            'default' => 'f',
          ),
          'drupalbreaks' => array(
            'name' => 'drupalbreaks',
            'desc' => 'Plugin for inserting Drupal teaser and page breaks.',
            'path' => '%plugin_dir%drupalbreaks/',
            'buttons' => array(
              'DrupalBreak' => array(
                'label' => 'DrupalBreak',
                'icon' => 'images/drupalbreak.png',
              ),
            ),
            'default' => 't',
          ),
          'stylesheetparser' => array(
            'name' => 'stylesheetparser',
            'desc' => 'Stylesheet Parser plugin. See <a href="http://ckeditor.com/addon/stylesheetparser">addon page</a> for more details.',
            'path' => '//cdn.ckeditor.com/4.4.3/full-all/plugins/stylesheetparser/',
            'buttons' => FALSE,
            'default' => 'f',
          ),
        ),
      ),
      'input_formats' => array(
        'filtered_html' => 'Filtered HTML',
      ),
    ),
    'Full' => array(
      'name' => 'Full',
      'settings' => array(
        'ss' => 2,
        'toolbar' => '[
    [\'Bold\',\'Italic\',\'Underline\',\'Strike\'],
    [\'NumberedList\',\'BulletedList\'],
    [\'Image\',\'Link\',\'Unlink\'],
    [\'JustifyLeft\',\'JustifyCenter\',\'JustifyRight\',\'JustifyBlock\',\'Format\'],
    [\'Cut\',\'Copy\',\'Paste\',\'PasteText\',\'PasteFromWord\',\'RemoveFormat\'],
    [\'Undo\',\'Redo\'],
    [\'Maximize\'],
    \'/\',
    [\'oembed\',\'TextColor\',\'BGColor\',\'Subscript\',\'Superscript\'],
    [\'Styles\',\'Font\',\'FontSize\'],
    [\'widgetcommonQuotebox\'],
    [\'widgetbootstrapAccordion\',\'widgetcommonBox\',\'widgetbootstrapAlert\',\'widgetbootstrapLeftCol\',\'widgetbootstrapRightCol\',\'widgetbootstrapTwoCol\',\'widgetbootstrapThreeCol\',\'FontAwesome\',\'WidgetTemplateMenu\'],
    [\'codeSnippet\',\'Source\']
]',
        'expand' => 't',
        'default' => 't',
        'show_toggle' => 't',
        'uicolor' => 'default',
        'uicolor_user' => '#FFA273',
        'width' => '100%',
        'lang' => 'en',
        'auto_lang' => 't',
        'language_direction' => 'default',
        'allowed_content' => 't',
        'extraAllowedContent' => '',
        'enter_mode' => 'p',
        'shift_enter_mode' => 'br',
        'font_format' => 'h2;h3;h4',
        'custom_formatting' => 'f',
        'formatting' => array(
          'custom_formatting_options' => array(
            'indent' => 'indent',
            'breakBeforeOpen' => 'breakBeforeOpen',
            'breakAfterOpen' => 'breakAfterOpen',
            'breakAfterClose' => 'breakAfterClose',
            'breakBeforeClose' => 0,
            'pre_indent' => 0,
          ),
        ),
        'css_mode' => 'none',
        'css_path' => '',
        'css_style' => 'theme',
        'styles_path' => '',
        'filebrowser' => 'imce',
        'filebrowser_image' => '',
        'filebrowser_flash' => '',
        'UserFilesPath' => '%b%f/',
        'UserFilesAbsolutePath' => '%d%b%f/',
        'forcePasteAsPlainText' => 'f',
        'html_entities' => 'f',
        'scayt_autoStartup' => 'f',
        'theme_config_js' => 'f',
        'js_conf' => 'config.extraPlugins = \'sourcedialog,codemirror\';
',
        'loadPlugins' => array(
          'autogrow' => array(
            'name' => 'autogrow',
            'desc' => 'Auto Grow plugin. See <a href="http://ckeditor.com/addon/autogrow">addon page</a> for more details.',
            'path' => '//cdn.ckeditor.com/4.4.3/full-all/plugins/autogrow/',
            'buttons' => FALSE,
            'default' => 'f',
          ),
          'codemirror' => array(
            'name' => 'codemirror',
            'desc' => 'Plugin file: codemirror',
            'path' => '%plugin_dir%codemirror/',
            'buttons' => FALSE,
            'default' => 'f',
          ),
          'codesnippet' => array(
            'name' => 'codesnippet',
            'desc' => 'Plugin for inserting Code Snippets. See <a href="http://ckeditor.com/addon/codesnippet">addon page</a> for more details. See <a href="/admin/help/ckeditor#codesnippet">help</a> for additional instructions.',
            'path' => '//cdn.ckeditor.com/4.4.3/full-all/plugins/codesnippet/',
            'buttons' => array(
              'CodeSnippet' => array(
                'icon' => 'icons/codesnippet.png',
                'label' => 'Insert Code Snippet',
              ),
            ),
            'default' => 'f',
          ),
          'counter' => array(
            'name' => 'counter',
            'desc' => 'Plugin to count symbols, symbols without blanks and words',
            'path' => '%plugin_dir%counter/',
            'buttons' => FALSE,
            'default' => 'f',
          ),
          'drupalbreaks' => array(
            'name' => 'drupalbreaks',
            'desc' => 'Plugin for inserting Drupal teaser and page breaks.',
            'path' => '%plugin_dir%drupalbreaks/',
            'buttons' => array(
              'DrupalBreak' => array(
                'label' => 'DrupalBreak',
                'icon' => 'images/drupalbreak.png',
              ),
            ),
            'default' => 't',
          ),
          'mathjax' => array(
            'name' => 'mathjax',
            'desc' => 'Plugin for inserting Mathematical Formula (MathJax). See <a href="http://ckeditor.com/addon/mathjax">addon page</a> for more details. See <a href="/admin/help/ckeditor#mathjax">help</a> for additional instructions.',
            'path' => '//cdn.ckeditor.com/4.4.3/full-all/plugins/mathjax/',
            'buttons' => array(
              'Mathjax' => array(
                'icon' => 'icons/mathjax.png',
                'label' => 'Insert Mathematical Formulas',
              ),
            ),
            'default' => 'f',
          ),
          'mediaembed' => array(
            'name' => 'mediaembed',
            'desc' => 'Plugin for inserting Drupal embeded media',
            'path' => '%plugin_dir%mediaembed/',
            'buttons' => array(
              'MediaEmbed' => array(
                'label' => 'MediaEmbed',
                'icon' => 'images/icon.png',
              ),
            ),
            'default' => 'f',
          ),
          'stylesheetparser' => array(
            'name' => 'stylesheetparser',
            'desc' => 'Stylesheet Parser plugin. See <a href="http://ckeditor.com/addon/stylesheetparser">addon page</a> for more details.',
            'path' => '//cdn.ckeditor.com/4.4.3/full-all/plugins/stylesheetparser/',
            'buttons' => FALSE,
            'default' => 'f',
          ),
          'tableresize' => array(
            'name' => 'tableresize',
            'desc' => 'Table Resize plugin. See <a href="http://ckeditor.com/addon/tableresize">addon page</a> for more details.',
            'path' => '//cdn.ckeditor.com/4.4.3/full-all/plugins/tableresize/',
            'buttons' => FALSE,
            'default' => 't',
          ),
          'widgetbootstrap' => array(
            'name' => 'widgetbootstrap',
            'desc' => 'Plugin to add widgets based on Bootstrap elements',
            'path' => '%base_path%sites/all/modules/contrib/ckeditor_widgets/plugins/widgetbootstrap/',
            'buttons' => array(
              'widgetbootstrapLeftCol' => array(
                'icon' => 'icons/widgetbootstrapLeftCol.png',
                'label' => 'Insert left column box',
              ),
              'widgetbootstrapRightCol' => array(
                'icon' => 'icons/widgetbootstrapRightCol.png',
                'label' => 'Insert right column box',
              ),
              'widgetbootstrapTwoCol' => array(
                'icon' => 'icons/widgetbootstrapTwoCol.png',
                'label' => 'Insert two column box',
              ),
              'widgetbootstrapThreeCol' => array(
                'icon' => 'icons/widgetbootstrapThreeCol.png',
                'label' => 'Insert three column box',
              ),
              'widgetbootstrapAlert' => array(
                'icon' => 'icons/widgetbootstrapAlert.png',
                'label' => 'Insert alert box',
              ),
              'widgetbootstrapAccordion' => array(
                'icon' => 'icons/widgetbootstrapAccordion.png',
                'label' => 'Insert accordion box',
              ),
            ),
          ),
          'widgetcommon' => array(
            'name' => 'widgetcommon',
            'desc' => 'Plugin to add common widgets',
            'path' => '%base_path%sites/all/modules/contrib/ckeditor_widgets/plugins/widgetcommon/',
            'buttons' => array(
              'widgetcommonBox' => array(
                'icon' => 'icons/widgetcommonBox.png',
                'label' => 'Insert box',
              ),
              'widgetcommonQuotebox' => array(
                'icon' => 'icons/widgetcommonQuotebox.png',
                'label' => 'Insert quote box',
              ),
            ),
          ),
          'widgettemplatemenu' => array(
            'name' => 'widgettemplatemenu',
            'desc' => 'Plugin for adding an Insert Template dropdown menu',
            'path' => '%base_path%sites/all/modules/contrib/ckeditor_widgets/plugins/widgettemplatemenu/',
            'buttons' => array(
              'oembed' => array(
                'icon' => 'extraIcons/oembed.png',
                'label' => 'Insert media',
              ),
              'codeSnippet' => array(
                'icon' => 'extraIcons/codesnippet.png',
                'label' => 'Insert code snippet',
              ),
              'leaflet' => array(
                'icon' => 'extraIcons/leaflet.png',
                'label' => 'Insert leaflet map',
              ),
              'FontAwesome' => array(
                'icon' => 'extraIcons/fontawesome.png',
                'label' => 'Insert Font Awesome icon',
              ),
              'WidgetTemplateMenu' => array(
                'icon' => 'icons/widgettemplatemenu.png',
                'label' => 'Add Template Menu',
              ),
            ),
          ),
        ),
      ),
      'input_formats' => array(
        'full_html' => 'Full HTML',
      ),
    ),
  );
  return $data;
}
