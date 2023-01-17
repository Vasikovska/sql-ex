/* Схема БД https://www.sql-ex.ru/help/select13.php#db_1 
Задание: 2 (Serge I: 2002-09-21)
Найдите производителей принтеров. Вывести: maker */

SELECT DISTINCT maker 
FROM Product
WHERE (type = 'Printer')
