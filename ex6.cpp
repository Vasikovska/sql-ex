/* Схема БД https://www.sql-ex.ru/help/select13.php#db_1 
Задание: 6 (Serge I: 2002-10-28)
Для каждого производителя, выпускающего ПК-блокноты c объёмом жесткого диска не менее 10 Гбайт, найти скорости таких ПК-блокнотов. Вывод: производитель, скорость.*/

SELECT DISTINCT Product.maker, Laptop.speed
FROM Product, Laptop
WHERE Laptop.hd>=10 and Product.type='Laptop'
