# intro_programming
To start practicing C++

# Условные обозначения

### **HW - Домашняя работа**
Должна соответсвовать следующим критериям для получения балла по Текущему рейтингу:
- код решает поставленную задачу

Должна соответсвовать следующим критериям для получения балла по Творческому рейтингу:
- для каждой домашней работы создается новая ветка в личном репозитории в системе GIT
- для отправки на проверку необходимо создать pull request с добавлением в rewivers проверяющего преподавателя
- запрещено использовать глобальные переменные для передачи значений между функциями
- выделить часть решения хотя бы в одну функцию
- оператор goto в программах использовать нельзя

### **BP - best practices** - лучшие практики написания кода, применяемые при современной разработке ПО
Существуют следующие замечания, но в баллах не оцениваются:
- информацию о цели создания функции разместить в комментарии перед соответсвующей функцией
- переменные и функции имеют осмысленные названия
- действия, кроме ввода и вывода, необходимо распределить в отдельные функции
- функции должны быть компактными, так чтобы одна функция выполняла одну задачу
- отступы показывают уровень вложенности операторов
- основные операторы пишутся с однократным отступом, вложенные операторы пишутся с однократным отступом по отношению к тем операторам, в которые они вложены
- в теле функции новая строка начинается тогда и только тогда, когда встречается: новое описание переменных, новый оператор(в том числе else), { или }

### **LAB - Лабораторная работа**
Групповой проект выполняет 3-4 студента.
Определены следующие роли:
- _Менеджер проекта_ - распределяет роли, создает график работ и координирует его выполнение, принимает работу, управляет репозиторием, создает блок-схему работы программы
- _Архитектор_ - раздает задания между разработчиками, принимает активное участие в review кода, компонует готовую программу, анализирует код на предмет потенциальных ошибок
- _Разработчик_ - выполняет задания, полученные от архитектора в соответствии с графиком, разработанным менеджером и направляет указанному менеджером тестировщику
- _Тестировщик_ - создает тестовые функции, проверяет изменения программы, проверяет правильность работы программы с различными исходными данными

Результат работы – репозиторий с предоставленным доступом преподавателю и содержащим:
- описание задачи (_Менеджер проекта_)
- распределение ролей среди участников (_Менеджер проекта_)
- архитектура проекта (зависимость функций между собой) (_Архитектор_)
- блок-схема алгоритма (_Менеджер проекта_)
- дневник проекта (краткое описание каждого типа работы и сколько времени потрачено на неё) (_Менеджер проекта_)
- готовый программный код (все участники)
- два полных показательных успешных прогона (копируются из консоли) (_Тестировщик_)

Ограничения:
- _Менеджер проекта_ и _Архитектор_ не пишут программный код, но _Архитектор_ может редактировать main и прописывать прототипы функций
- объем кода, написанным каждым участником(исключая _Менеджера проекта_ и _Архитектора_), не должен отличаться от других более чем на 5 строк
- для измения кода создаются отдельные ветки в репозитории
- изменение кода в основной ветке должно проиходить через pull request, с процессом review членами команды
- библиотечные функции использовать нельзя
- в программном коде структурно выделено не менее двух функций (помимо main())
- избежать повторяющихся фрагментов кода
- действуют те же критерии для написания кода, что и для домашней работы


# GIT
Self learning - https://learngitbranching.js.org/?locale=ru_RU

Microsoft VS clone - https://docs.microsoft.com/ru-ru/visualstudio/get-started/tutorial-open-project-from-repo?view=vs-2019

<details>
  <summary>Посмотреть первый модуль</summary>

# Лекция 09 февраля 2022
- Программирование не только кодинг!
- Структура программы на C++
- Правила именования лексем

# Семинар 10 февраля 2022
- правила оформления блок схемы
- тестирование алгоритма
- передача аргументов по значению/по ссылке
## HW-00
- create repo and add one code file

# Лекция 11 февраля 2022
- примитивные типы (int, double(float), char, bool, void)
- явное/неявное преобразование
- условный оператор
- 3 вида цикла

# Семинар 17 февраля 2022
- git repo, branch, commit, pull-request, merge
- include, namespace
- выделение кода в функцию
- возвращаемое значение из программы
- 11 / 3, 'a' + 4 

## HW-01
- Создать функцию для перевода длины из дюймов в сантиметры. Сделать пример вызова в main.
- Создать функцию для подсчета площади прямоугольника по длине его сторон. Сделать пример вызова в main.

# Лекция 18 февраля 2022
- структурный код
- статический массив, обращение по индексу
- прототип функции
- vector <тип> v; (push_back, size, begin, end)

# Семинар 19 февраля 2022
- продемонстрированы все арифметические операции, отличия ++а от а++
- задачи на семинаре: последняя цифра, число десятков, первая цифра в двухзначном/трехзначном числе и с произвольным кол-вом, сколько цифр в числе
- расмотренно выделение кода в функции и использовании их в main
- создали алгоритм для "перевернуть" число с произвольным количеством цифр
## HW-02
- нужно "перевернуть" число с произвольным количеством цифр.
- Вводятся числа по одному на строке, пока не встретится 0. Вывести, все ли числа положительны. (блок схема + код)

# Семинар 24 февраля 2022
- обсудили решение для второй задачи из HW2
- разница между компилируемым и интерпретируемым языком программирования
- посмотрели на отличия cout от return внутри функции и корректных способах передачи значений в функции
- начали создание алгоритма для HW3

## HW-03
- Вводится позиция на шахматной доске фигуры Конь. Вывести все доступные ходы. (блок схема + код)

# Семинар 26 февраля 2022
- абстракции при создании алгоритма и имплементации их в коде через функции
- логические операции
- создание функции для тестирования
- место тестирования в современной разработке ПО

# Семинар 3 марта 2022
- обсудили лабораторную работу, задания выданы
- создание заголовочного файла(.h) и перенос кода в другой файл
- создание namespace и обращение к нему

# Семинар 5 марта 2022
- объявление статического массива
- обращение с элементу массива
- перебор элементов
  - for 
  - int number : numbers
  - auto
- массив через указатели
- вводятся размер одномерного массива и его элементы. Вывести сумму всех его элементов.
- вводятся размер одномерного массива и его элементы. Вывести среднее арифметическое тех его элементов, которые оканчиваются на цифру 4.
- многомерность

## HW-04
- Вводятся размер одномерного массива и его элементы. Переставить в массиве максимальный и минимальный элементы и вывести его.
- Вводятся размеры двумерного массива и его элементы. Вывести сумму положительных элементов массива. 

# Семинар 10 марта 2022
- защита лабораторной работы
- строки

## HW-05
- Вводится строка. Разделитель слов – пробел. Продублировать в строке все слова, начинающиеся с «A», и вывести.

# Семинар 17 марта 2022
- защита лабораторной работы
- подведение итогов по HW

# Семинар 24 марта 2022
- динамические массивы
- разбор пройденных тем
</details>

# Семинар 07 апреля 2022
- ретросппектива. Action points:
  - решать типовые для дз задания на семинаре
  - не оценивать синтаксис, выносить только предупреждение
  - после выдачи задания нужна подсказка
- просмотр задания для Лабораторной №2 
  
# Лекция 08 апреля 2022
- разработка ПО
- модели проектирования ПО
- адреса и указатели

# Семинар 14 апреля 2022
- сформировать ценности и практики команды. Планирование по Лабораторной работе №2
- простой калькулятор для сложения и вычитания:
  - вводятся число, знак (+/-) и ещё число. Нужно вывести результат операции. 
  - вводятся кол-во элементов массива, первый массив, знак операции(+/-) и второй массив. Нужно вывести результат операции. Операцию производить поэлементно.
## HW-06
- доделать задачу с семинара

# Семинар 21 апреля 2022
- просмотр решения для калькулятора
- промежуточные итоги по Лабораторной работе №2
- задача на указатели
## HW-07
- доделать задачу с семинара
  
# Лекция 22 апреля 2022
-   
  
# Семинар 28 апреля 2022
- просмотр решения для задачи на указатели
- промежуточные итоги по Лабораторной работе №2
- задача по лекции от 22 апреля
## HW-08
-  доделать задачу с семинара
  
# Семинар 05 мая 2022
- презентация результатов по Лабораторной работе №2

# Лекция 06 мая 2022
-   
  
# Семинар 12 мая 2022
- ретросппектива командной работы по Лабораторной работе №2
- просмотр задания Лабораторной работы №3. Сформировать цели команды и планирование работы.

# Семинар 19 мая 2022
- промежуточные итоги по Лабораторной работе №3
- задача по лекции от 06 мая
## HW-09
-  доделать задачу с семинара
  
# Семинар 26 мая 2022
- просмотр решения для задачи
- промежуточные итоги по Лабораторной работе №3
- задача по лекции от 06 мая
## HW-10
- доделать задачу с семинара
  
# Семинар 02 июня 2022
- просмотр решения для задачи
- презентация результатов по Лабораторной работе №3  
  
# Семинар 09 июня 2022
- презентация результатов по Лабораторной работе №3

# Семинар 16 июня 2022
- ретросппектива командная и общая
- разбор пройденных тем
