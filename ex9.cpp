/* Схема БД https://www.sql-ex.ru/help/select13.php#db_1 
Задание: 9 (Serge I: 2002-11-02)
Найдите производителей ПК с процессором не менее 450 Мгц. Вывести: Maker */

SELECT DISTINCT maker 
FROM Product INNER JOIN 
PC ON PC.model = PRODUCT.model
WHERE PC.speed >= 450
