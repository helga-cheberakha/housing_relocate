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
          var children_block = $(this).parent().parent().next('ul.term-reference-tree-level');

          if (children_block.length > 0) {
            var children = children_block.find('input.form-checkbox');

            // Show subterms if parent element si checked
            if ($(this).attr('checked')) {
              children_block.show();
            }

            // Disable parent element if at least one subterm is checked
            children.each(function() {
              if ($(this).is(':checked')) {
                parent.attr('disabled', 'disabled');
                checked++;
              }
            });

            // Enable parent element if all subterms aren't checked
            children.change(function(event) {
              if($(this).is(':checked')) {
                checked++;
              }
              else {
                checked--;
              }

              if (checked > 0) {
                parent.attr('disabled', 'disabled');
              }
              else {
                parent.attr('disabled', false);
              }
            });

          }
        });

        // Show/hide subterms
        $(this).find('input.form-checkbox').change(function(event) {
          var event_target = $(event.target);
          var children = event_target.parent().parent().next('ul.term-reference-tree-level');
          if(event_target.filter(':checked').length) {
            children.show();
          }
          else {
            children.hide();
          }
        });
      });
    }
  };

})(jQuery);
