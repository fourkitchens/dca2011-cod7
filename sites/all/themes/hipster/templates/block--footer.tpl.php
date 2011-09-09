<?php
/**
 * @file
 * Basic block-footer.tpl.php structure of a single Drupal page
 *
 */
?>
<section id="<?php print $block_html_id; ?>" class="grid-8"<?php print $attributes; ?>>

  <article class="content"<?php print $content_attributes; ?>>
    <?php print $content; ?>
  </article>

</section><!-- /.block -->
