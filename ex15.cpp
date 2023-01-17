/* Схема БД https://www.sql-ex.ru/help/select13.php#db_1 
Задание: 15 (Serge I: 2003-02-03)
Найдите размеры жестких дисков, совпадающих у двух и более PC. Вывести: HD */

SELECT hd 
FROM pc 
GROUP BY (hd) 
HAVING COUNT(model) >= 2
