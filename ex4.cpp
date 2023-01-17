/* Схема БД https://www.sql-ex.ru/help/select13.php#db_1 
Задание: 4 (Serge I: 2002-09-21)
Найдите все записи таблицы Printer для цветных принтеров. */

Select code, model, color, type, price
From Printer
Where (color = 'y')
