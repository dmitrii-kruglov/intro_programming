# intro_programming
To start practicing C++

# Условные обозначения
### **HW - Домашняя работа**
Должна соответсвовать следующим критериям:
- для каждой домашней работы создается новая ветка в личном репозитории в системе GIT
- для отправки на проверку необходимо создать pull request с добавлением в rewivers проверяющего преподавателя
- действия, кроме ввода и вывода, необходимо распределить в отдельные функции
- информацию о цели создания функции разместить в комментарии перед соответсвующей функцией
- запрещено использовать глобальные переменные для передачи значений между функциями
- переменные и функции имеют осмысленные названия
- функции должны быть компактными, так чтобы одна функция выполняла одну задачу
- оператор goto в программах использовать нельзя
- отступы показывают уровень вложенности операторов
- основные операторы пишутся с однократным отступом, вложенные операторы пишутся с однократным отступом по отношению к тем операторам, в которые они вложены
- в теле функции новая строка начинается тогда и только тогда, когда встречается: новое описание переменных, новый оператор(в том числе else), { или }

### **BP - best practices** - лучшие практики написания кода, применяемые при современной разработке ПО

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
- массив через указатели
- вводятся размер одномерного массива и его элементы. Вывести сумму всех его элементов.
- многомерность

## HW-04
- Вводятся размер одномерного массива и его элементы. Переставить в массиве максимальный и минимальный элементы и вывести его.
- Вводятся размеры двумерного массива и его элементы. Вывести сумму положительных элементов массива. 

# Семинар 10 марта 2022
- защита лабораторной работы
- динамические массивы
- строки

## HW-05
- Вводится строка. Разделитель слов – пробел. Продублировать в строке все слова, начинающиеся с «A», и вывести.

# Семинар 17 марта 2022
- защита лабораторной работы
- подведение итогов по HW

# Семинар 24 марта 2022
