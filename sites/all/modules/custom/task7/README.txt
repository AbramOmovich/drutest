Tokens, Rules, Performance, Search, Services

В рамках выполнения домашнего задания необходимо создать модуль со следующим функционалом:
	
	1.	При отображении определенной страницы сайта (lottery) авторизованным пользователем срабатывает правило модуля Rules.
	2.	Генерируется случайное число от 1 до 8 (обозначим его через А). Данное число посредством XML-RPC отправляется в сервис (http://[адрес_сайта]/xmlrpc.php), где вызывается некоторый метод, также генерирующий случайное число (Б). В случае, если числа А и Б совпадают, то сервис возвращает определенную константу (код выигрыша).
	3.	Если сервис вернул код выигрыша, то пользователю отображается некоторое предустановленное шаблонизированное сообщение. 
	4.	Это же сообщение теперь должно отображаться каждый раз, когда пользователь заходит на страницу lottery без запросов к сервису.
	5.	На странице lottery также выводится блок, который состоит из списка последних лотереи. При этом исходные данные списка хранятся в кэше, то есть вся логика организуется посредством функций cache_set / cache_get, и список очищается при стандартной операции сброса кэша.

Замечание: сообщение пользователя должно быть настраиваемым в Action’e модуля Rules и обязательно использовать токены. 

Правило Rules должно быть экспортировано стандартными средствами Rules (кнопкой Export в административном интерфейсе).

