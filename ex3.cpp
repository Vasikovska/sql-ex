/* Схема БД https://www.sql-ex.ru/help/select13.php#db_1 
Задание: 3 (Serge I: 2002-09-30)
Найдите номер модели, объем памяти и размеры экранов ПК-блокнотов, цена которых превышает 1000 дол. */

SELECT model, ram, screen
FROM Laptop
WHERE price > 1000
