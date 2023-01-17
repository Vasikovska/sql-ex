/* Схема БД https://www.sql-ex.ru/help/select13.php#db_1 
Задание: 5 (Serge I: 2002-09-30)
Найдите номер модели, скорость и размер жесткого диска ПК, имеющих 12x или 24x CD и цену менее 600 дол. */

Select model, speed, hd
From PC
Where (cd = '12x' or cd = '24x') and price < 600
