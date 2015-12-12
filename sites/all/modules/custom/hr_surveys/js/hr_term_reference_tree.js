(function($) {

/**
   * Attaches the tree behavior to the term widget form.
   */
  Drupal.behaviors.hr_term_referenceTree = {
    attach: function(context, settings) {
      var checked = 0;

      $('.term-reference-tree > ul.term-reference-tree-level > li > div.form-type-checkbox', context).each(function() {
        $(this).find('input.form-checkbox').each(function() {
          var parent = $(this);
          // Find if isset subterms
          var child_block = $(this).parent().parent().next('ul.term-reference-tree-level');

          if (child_block.length > 0) {
            // Show subterms if parent element si checked
            if ($(this).attr('checked')) {
              child_block.show();
            }
          }
        });

        // Show/hide subterms
        $(this).find('input.form-checkbox').change(function(event) {
          var event_target = $(event.target);
          var child_block = event_target.parent().parent().next('ul.term-reference-tree-level');

          if (child_block.length > 0) {
            var children = child_block.find('input.form-checkbox');

            if(event_target.filter(':checked').length) {
              child_block.show();
            }
            else {
              child_block.hide();
              // Unchecked child elements when parent element is unchecked
              children.each(function() {
                $(this).prop('checked', false);
              });
            }
          }
        });

      });
    }
  };

})(jQuery);
