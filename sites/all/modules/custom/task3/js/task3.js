/**
 * @file
 * Javascript file for D7 training task 3.
 */

(function ($) {
  Drupal.behaviors.drawTable = {
    attach: function (context, settings) {

      if (!Drupal.settings.loaded){

        var $filesTable = $('#filelist-table');
        $filesTable.find('tr:not(:first)').remove();

        if (typeof Drupal.settings.files !== 'undefined' && Drupal.settings.files.length > 0) {

          var row = '';
          Drupal.settings.files.forEach(function (element) {

            row += '<tr><td>' + element.fid + '</td>';
            row += '<td>' + element.uid + '</td>';
            row += '<td>' + element.uri + '</td>';
            row += '<td>' + element.status + '</td>';
            row += '<td>' + '<a href="' + element.uri + '" target="_blank" download>Download</a>' + '</td>';
            row += '</tr>';

            if (element.uid === Drupal.settings.UID){
              row = $(row).addClass('current-user-file');
            }

            $filesTable.append(row);
            row = '';
            Drupal.settings.loaded = true;
          })
        }
      }
    }
  };
}(jQuery));
