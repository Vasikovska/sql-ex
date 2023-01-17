/* Схема БД https://www.sql-ex.ru/help/select13.php#db_1 
Задание: 10 (Serge I: 2002-09-23)
Найдите модели принтеров, имеющих самую высокую цену. Вывести: model, price */

SELECT model, price  
FROM Printer  
WHERE price = (SELECT MAX(price) 
FROM Printer)
