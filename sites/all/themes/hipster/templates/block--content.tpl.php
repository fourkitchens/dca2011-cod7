<?php
/**
 * @file
 * Basic block--content.tpl.php structure of a single Drupal page
 *
 */
?>
<section class="<?php print $classes; ?>"<?php print $attributes; ?>>

  <?php print render($title_prefix); ?>
  <?php if ($title): ?>
    <h2<?php print $title_attributes; ?>><?php print $title; ?></h2>
  <?php endif; ?>
  <?php print render($title_suffix); ?>

  <article class="content"<?php print $content_attributes; ?>>
    <?php print $content; ?>
  </article>

</section><!-- /.block -->
