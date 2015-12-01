/**
 * @file
 * Surveys functionality module.
 */

(function ($) {

  Drupal.behaviors.hr_surveys_form = {
    attach: function(context) {
      $('.views-row-edit-wrap', context).once(function() {
        var $wrapper = $(this);
        var $region = $wrapper.find('.views-row-edit-edit');
        var $btn = $wrapper.find('.rollup-btn');

        $btn.click(function() {
          $region.slideToggle();
        });
      });
    }
  };
})(jQuery);
