# ConsoleGameEngine
Консольный движок для текстовый игр 

Исходные коды https://github.com/Microfcorp/GameEngineSource

Игры могут храниться в папке games и иметь расширение *.gam (Открытый файл с игрой) или *gam.cyt (Зашифрованный файл с игрой). Расширения *.gaminc и *gam.inc для подключаемый фалов (через include и including)
Также можно открывать игры через "Открыть с помощью" и выбирать там game.exe

Gam Files.xml - UDL файл синтаксиса для notepad++

## Гайд по написанию игры:
Каждая функция - новая строка.<br>Коментарии строки - ##. <br>
Блок комментария с /* по */<br>
Блок функции с { по }

Константы:
```gam
getcurrentdirect: ##Текущая папка С ИГРОЙ
currentuser: ##Текущее имя пользователя
consoleprint: ##Псевдочисло консоли
newline: ##Новая строка
newlines: ##Новая строка только для переменной (тестовая функция)
```
Команды:
```gam
mess;Хай-Хай ##сообщение $string или $int выведет переменную с этим именем

string;text1:helloy ##Создать текстовую переменную с именем text1 и значением helloy
string;text2:helloyT ##Создать текстовую переменную с именем text2 и значением helloyT

int;numm1:0 ##Создать числовую переменную с именем numm1 и значением 0
int;rnd:0 ##Создать числовую переменную с именем rnd и значением 0

conststring;ct:Привет ##Создать константу с именем ct и значением Привет
constint;ci:2 ##Создать константу ci и значением 2

let;1+1:numm1 ##Сложить 2 числа и поместить результат в переменную numm1 (consoleprint выведит результат в консоль) (Такме можно вычесть, умножить и разделить)
intlet;numm1;+;numm1:numm1 ##Сложить 2 переменные и поместить результат в переменную numm1 (consoleprint выведит результат в консоль) 

random;0-10:rnd ##Получить случайное число и поместить его в переменную rnd (consoleprint выведит результат в консоль)

close; ##закрыть игру

set;text1;Start ##Присваивание переменной text1 значение Start

read;Введите новое значение;text1 ##Запрос у пользователя нового значения переменной text1

connectstring;text1;text2:consoleprint: ##Соеденить две строки (переменный) и записать их в переменную (consoleprint выведит результат в консоль)

replace;$ServerRequstConnect;|;^;ServerRequstConnect ##Заменить строке, все вхождения, на, записать в переменную (consoleprint выведит результат в консоль)

pause;Please wait ##подождать пользователя

ascllart;getcurrentdirect:art1.art,1-34 ##Выводит ascll картинку из файла art1.art со строк 1-34

include;getcurrentdirect:include.gam ##Подключает после строки с командой текущей игры код из данного файла (он должен начинаться на includingas;) (файл не должен содержать функции)
including;getcurrentdirect:QuestModule.gaminc ##Подключение файла QuestModule.gaminc на этапе препроцессинга (файл может содержать функции, но тогда подключение должно происходить в самом конце файла)

includingas; ##Сигнатура подключаемого файла

isfunction; ##Сигнатура начала функции

playmusic;getcurrentdirect:music1.wav ##Воспроизводит WAV файл

cls; ##отчистить консоль

newmodule;DS;DialogSystem.dll ##Подключение дополнительного модуля с именем DS. (Отдельный Гайд).
module;DS;AddPers:Name=Лехап,Age=55 ##Выполнить команду модуля с именем DS. Название AppPers, Параметры Name со значением Лехап, а так же Age со значением 55

messas;12-19 ##вывести текст со строки с 12 по 19 (строка должна начинаться на messin;, в ходе общего кода выводиться не будет)
messin; ##Сигнатура подключаемой строки

printimg;getcurrentdirect:Бармалей.jpg ##Вывод изображения (RGB) (Псевдографика)

setbackphoto;getcurrentdirect:Бармалей.jpg ##Вывод изображения на фон (B/W)

finish;Финиш ##Вывести сообщение и ожидать нажатия клавишь, после чего завершить приложение

crash;Стоп ##Вызовет "Краш" приложения с описанием "Стоп"

cryptogam;getcurrentdirect:cryptoinc.gam;getcurrentdirect:cryptoinc.gam.cyt ##Зашифрует данный файл секретным ключом шифрования
encryptogam;getcurrentdirect:cryptoinc.gam.cyt;getcurrentdirect:cryptoinc.gam ##Расшифрует данный файл использую секретный ключ шифрования

func;PrintText ##Вызов функции PrintText

repet; ##Повторить вызов текущей функции

Applications;Resize;500;600 ##Класс Applications, вызов функции изменения размера буфера консоли
Applications;Start;programm.exe;atribut ##Класс Applications, запуск приложения с атрибутами

Logical;ifs;$QuestRequest;==;Zero;QuestStop ##Класс Logical, метов if (если), строка с 1 частью условия, условие равенства, строка со 2 частью условия, вызов функции если условие верно
Logical;ifs;$QuestRequest;!=;Zero;SteepQuestReadPrintMess ##Класс Logical, метов if (если), строка с 1 частью условия, условие не равенства, строка со 2 частью условия, вызов функции если условие верно

Setting;Color;0 ##Класс Setting, параметр Color, значение 0 (аналог sett;)
Setting;Title;GG ##Класс Setting, параметр Title, значение GG (аналог sett;)
Setting;AutoElse;false ##Класс Setting, параметр AutoElse, значение false (аналог sett;)
Setting;Razm;true ##Класс Setting, параметр Razm, значение true (аналог sett;)

goto;14 ##переводит вополнение кода на строку 14

Ethernetconnection;{ ##подключение к серверу за игрой (игра должена начинаться на includingas;)
Server;127.0.0.1 ##адрес сервера
Login;admin ##логин
Password;admin ##пароль
Socet;/gameeng.php ##файл сокета (см. gameeng.php)
Game;games/OTS.gam ##путь к игре на сервере
} ##закрытие тега

cashe;127.0.0.1/games;Musicinc.gam,art1.art ##кэшировать все нужные для игры файлы с сервера и папки 

sett;razm:false,title:Game1,autoelse:true,color:0 ##Настройки;Имеется ли зависимость к регистру в условиях (true false);Название окна игры; Автоматическое else в if (достаточно написать просто else:);цвет окна из таблицы цветов (color.txt)


if;$string,нет,else ##условие, потом варианты ответа, потом количество ответов, если необходимо - else
$string:closegame;Игра закроется через 1,5 секунды
да:mess;Сообщение и продолжение вополнения кода ##вариант ответа, соответствующий "да", через : действие
else:closegame;Введите: Налево или направо. Игра окончена ##Вариант ответа если никакое из условий не выполнено
endif; ##завершение условия

function;PrintText{ ##объявление функции (объявлять функции можно только в конце файла)
isfunction; ##сигнатура начала функции
mess;Функция, функция ##тело функции
mess;Тело, тело ##доступны любые комманды
}
```
