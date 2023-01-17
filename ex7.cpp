/* Схема БД https://www.sql-ex.ru/help/select13.php#db_1 
Задание: 7 (Serge I: 2002-11-02)
Найдите номера моделей и цены всех имеющихся в продаже продуктов (любого типа) производителя B (латинская буква).*/

Select DISTINCT Product.model, PC.price
FROM Product INNER JOIN PC
ON Product.model=PC.model
WHERE Product.maker = 'B'
UNION
Select DISTINCT Product.model, Laptop.price
FROM Product INNER JOIN Laptop
ON Product.model=Laptop.model
WHERE Product.maker = 'B'
UNION
Select DISTINCT Product.model, Printer.price
FROM Product INNER JOIN Printer
ON Product.model=Printer.model
WHERE Product.maker = 'B'
