/**
 * @file
 * Javascript file for D7 training task 6.
 */

(function ($) {
  Drupal.ajax.prototype.commands.task6_user_registration_message = function (ajax, response, status) {
    alert(Drupal.settings['task6-string']);
  };
  Drupal.ajax.prototype.commands.task6_make_secure_text = function (ajax, response, status) {
    $('#edit-textarea').val(Drupal.checkPlain(Drupal.settings['task6-string']));
  };
})(jQuery);
