Menu:

1)     Создать пункт меню с адресом training/menu и с заголовком «Training Landing Page», пункт меню должен находиться в “Navigation” меню. Пункт меню должен быть раскрыт по умолчанию.
2)      При переходе на эту страницу должен отображаться текст «This is the landing page of the Training module»
3)      Создать пункт меню с адресом training/menu/custom_access и с заголовком «Custom Access Menu Item». Пункт меню должен быть виден только авторизованным пользователям.  Роль «authenticated user».
4)      Создать пункт меню с адресом training/menu/permissioned и с заголовком «Permissioned Menu Item». Пункт меню должен быть виден только пользователям с правом  «access protected menu example».
5)      Создать пункт меню с адресом training/menu/callback. Этот пункт не должен попасть ни в одно меню. На странице должна быть надпись «The menu entry for this page is of type MENU_CALLBACK»
6)      Создать Пункты меню с табами. Табы начинаются по адресе training/menu/tabs, заголовок верхнего уровня «Tabs». На странице должна выводиться надпись «This is the "tabs" menu entry». У этого должны быть следующие закладки.
training/menu/tabs/second
training/menu/tabs/third
training/menu/tabs/fourth
Каждая закладка должна выводить текст по шаблону
«This is the tab "%name" in the "basic tabs" example» где %name – second, third, fourth
7)      В первой закладке открывается новый уровень закладок
training/menu/tabs
training/menu/tabs/default/second
training/menu/tabs/default/third
8)      Создать пункт меню, который может принимать и обрабатывать 2 аргумента.
training/menu/arguments/%1/%2
Сама страница должна печатать эти агрументы
training/menu/arguments/one/two отобразит
Argument 1=one
Argument 2=two
Страница может не принимать параметры.
9)      Создать страницу с динамическим адресом training/menu/placeholder/%/display.
Страница должна выводить динамический аргумент <div>%</div>
10)   Сделать обработчик аргумента. Страница с шаблоном адреса training/menu/default_arg/%
Должна обрабатывать аргумент и выводить его обработанное значение
1 => 'one',
2 => 'two',
3 => 'three',
99 => 'Almost there'
При других значениях аргумента должна показываться страница 404.
11)   Создать страницу по адресу training/menu/title с динамическим заголовком по шаблону “Dynamic title: username= %username”. Где %username – имя залогиненого пользователя, для анонима выводить  anonymous.
12) Создать пункт меню training/menu/main с заголовком “Item in main menu” которое будет размещено в главном меню (main-menu)

Themes
1	Создать пункт меню “training/theme”, на странице отобразить нумерованны список из ссылок на все страницы проверки тем:
○	theme/list - List
○	theme/table - Table
○	theme/image - image
○	theme/access - Access
Заголовок списка - “Links to themes”. 
2	Создать страницу training/theme/table и отобразить таблицу с 3мя колонками. 
○	Заголовк таблицы “Theme table sample”, айдишник “table-test”. 
○	Заголовки столбцов “header 1”, “header 2”, “header 3”. 
○	У строк должен быть класс “rowClass” и черестрочное “even”-“odd”. 
○	Вторая ячейка должна занимать 2 ячейки.
3	Создать страницу training/theme/image и отобразить следующие картинки
○	modules/image/sample.png с классом simple-image
○	Применить все доступные стили изображения к этой картинке и вывести их списком
4	Создать страницу training/theme/access и отобразить следующий текст
○	“Custom access for rendered content” для пользователей у которых есть право “access protected content”.
○	“Custom access inversed for rendered content” для пользователей у которых нет права “access protected content”.
