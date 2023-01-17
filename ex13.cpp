/* Схема БД https://www.sql-ex.ru/help/select13.php#db_1 
Задание: 13 (Serge I: 2002-11-02)
Найдите среднюю скорость ПК, выпущенных производителем A. */

SELECT AVG (PC.speed)
FROM Product, PC
WHERE PC.model = Product.model and Product.maker = 'A'
