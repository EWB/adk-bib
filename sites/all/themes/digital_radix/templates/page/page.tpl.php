<?php

/**
 * @file
 * Default theme implementation to display a single Drupal page.
 *
 * @see template_preprocess()
 * @see template_preprocess_page()
 * @see template_process()
 * @see html.tpl.php
 */
?>
<!-- ewb -->
<div id="top_bar_container">
      <div id="top_bar">
        <div id="slu">
        <a href="http://www.stlawu.edu"><img id="stlaw" src="http://dev.stlawu.edu/ksp/sites/all/themes/digitalradix/images/slu-horizontal-white.png" alt="St. Lawrence University" height="38"/></a>
         </div>
      </div> 
</div>       
<!-- ewb done -->
<header id="header" class="header" role="header">
  <div class="container">
    <nav class="navbar navbar-default" role="navigation">
      <!-- Brand and toggle get grouped for better mobile display -->
      <div class="navbar-header">
        <button type="button" class="navbar-toggle" data-toggle="collapse" data-target="#navbar-collapse">
          <span class="sr-only"><?php print t('Toggle navigation'); ?></span>
          <span class="icon-bar"></span>
          <span class="icon-bar"></span>
          <span class="icon-bar"></span>
        </button>
        <a href="<?php print $front_page; ?>" id="logo" class="navbar-brand">
          <?php print $site_name; ?>
        </a>
      </div> <!-- /.navbar-header -->

      <!-- Collect the nav links, forms, and other content for toggling -->
      <div class="collapse navbar-collapse" id="navbar-collapse">
        <?php if ($main_menu): ?>
          <ul id="main-menu" class="menu nav navbar-nav">
            <?php print render($main_menu); ?>
          </ul>
        <?php endif; ?>
        <?php if ($search_form): ?>
          <?php //print $search_form; ?>
          <?php
            $form = drupal_get_form('search_block_form');
            $form['#attributes']['class'][] = "navbar-form";
            $form['#attributes']['class'][] = "navbar-right";
            $form['search_block_form']['#attributes']['placeholder'] = "Search";
            //dsm($form);
            print render($form);
          ?>
        <?php endif; ?>
      </div><!-- /.navbar-collapse -->
    </nav><!-- /.navbar -->
  </div> <!-- /.container -->
</header>

<div id="main-wrapper">
  <div id="main" class="main">
    <div class="container">
      <?php if ($breadcrumb): ?>
        <div id="breadcrumb" class="visible-desktop">
          <?php print $breadcrumb; ?>
        </div>
      <?php endif; ?>
      <?php if ($messages): ?>
        <div id="messages">
          <?php print $messages; ?>
        </div>
      <?php endif; ?>
      <div id="page-header">
        <?php if ($title): ?>
          <div class="page-header">
            <h1 class="title"><?php print $title; ?></h1>
          </div>
        <?php endif; ?>
        <?php if ($tabs): ?>
          <div class="tabs">
            <?php print render($tabs); ?>
          </div>
        <?php endif; ?>
        <?php if ($action_links): ?>
          <ul class="action-links">
            <?php print render($action_links); ?>
          </ul>
        <?php endif; ?>
      </div>
    </div>
    <div id="content" class="<?php print (!$is_panel) ? 'container' : ''; ?>">
      <?php print render($page['content']); ?>
    </div>
  </div> <!-- /#main -->
</div> <!-- /#main-wrapper -->

<footer id="footer" class="footer" role="footer">
  <div class="container">
    <?php if ($copyright): ?>
      <small class="copyright pull-left"><?php print $copyright; ?></small>
    <?php endif; ?>
    <small class="pull-right"><a href="#"><?php print t('Back to Top'); ?></a></small>
  </div>
</footer>