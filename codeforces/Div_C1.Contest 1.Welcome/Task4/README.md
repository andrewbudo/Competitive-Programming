﻿# codeforces
## Div C1, Contest 1. Welcome ##

<p>
    <a href="https://codeforces.com/group/GlNprAEUfR/contest/256059/problem/D">Сайт</a>
</p>

### D. Красивая матрица ###
#### ограничение по времени на тест: 2 seconds ####
#### ограничение по памяти на тест: 256 megabytes ####
#### ввод: стандартный ввод ####
#### вывод: стандартный вывод ####

Перед Вами матрица размера 5 × 5, состоящая из 24-x нулей и единственной единицы. 
Строки матрицы пронумеруем числами от 1 до 5 сверху вниз, 
столбцы матрицы пронумеруем числами от 1 до 5 слева направо. 
За один ход разрешается применить к матрице одно из двух следующих преобразований:

1.Поменять местами две соседние строки матрицы, то есть строки с номерами i и i + 1 для некоторого целого i (1 ≤ i < 5).
2.Поменять местами два соседних столбца матрицы, то есть столбцы с номерами j и j + 1 для некоторого целого j (1 ≤ j < 5).

Вы считаете, что матрица будет выглядеть красиво, если единственная единица этой матрицы будет находиться в ее центре 
(в клетке, которая находится на пересечении третьей строки и третьего столбца). 
Посчитайте, какое минимальное количество ходов потребуется, чтобы сделать матрицу красивой.

##### ВХОДНЫЕ ДАННЫЕ #####
Входные данные состоят из пяти строк, в каждой из которых записаны пять целых чисел: 
j-ое число в i-ой строке входных данных обозначает элемент матрицы, стоящий на пересечении i-ой строки и j-ого столбца. 
Гарантируется, что матрица состоит из 24-x нулей и единственной единицы.

##### ВЫХОДНЫЕ ДАННЫЕ #####
Выведите единственное целое число — минимальное количество действий, которое требуется, чтобы сделать матрицу красивой.


##### ПРИМЕР #####
#### ввод ####
```c++
0 0 0 0 0
0 0 0 0 1
0 0 0 0 0
0 0 0 0 0
0 0 0 0 0
```
#### вывод ####
```c++
3
```

#### ввод ####
```c++
0 0 0 0 0
0 0 0 0 0
0 1 0 0 0
0 0 0 0 0
0 0 0 0 0
```
#### вывод ####
```c++
1
```
