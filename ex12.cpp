/* Схема БД https://www.sql-ex.ru/help/select13.php#db_1 
Задание: 12 (Serge I: 2002-11-02)
Найдите среднюю скорость ПК-блокнотов, цена которых превышает 1000 дол. */

SELECT AVG(speed)
FROM Laptop
WHERE price >1000
