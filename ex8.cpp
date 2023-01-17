/* Схема БД https://www.sql-ex.ru/help/select13.php#db_1 
Задание: 8 (Serge I: 2003-02-03)
Найдите производителя, выпускающего ПК, но не ПК-блокноты. */

SELECT maker FROM Product
WHERE Product.type = 'PC'
EXCEPT
SELECT DISTINCT product.maker
FROM product
Where type = 'laptop'
