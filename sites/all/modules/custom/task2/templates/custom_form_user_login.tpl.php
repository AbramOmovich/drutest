<table>
  <tbody>
    <tr>
      <td><?php print render($form['name']); ?></td>
    </tr>
    <tr>
      <td><?php print render($form['pass']); ?></td>
    </tr>
    <tr>
      <td><?php print render($form['secret_key']); ?></td>
    </tr>
  </tbody>
</table>
<?php print drupal_render_children($form);
