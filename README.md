# ConsoleGameEngine
Консольный движок для текстовый игр 

Игры должны храниться в папке games и иметь расширение *.gam
Также можно открывать игры через "Открыть с помощью" и выбирать там game.exe

Gam files.xml - UDL файл синтаксиса для notepad++

Гайд по написанию игры:
Коментарии в коде //. Каждая функция - новая строка.

Константы:

getcurrentdirect: //Текущая папка С ИГРОЙ

Команды:
mess;Хай-Хай //сообщение

close; //закрыть игру

pause; //подождать пользователя

ascllart;getcurrentdirect:art1.art,1-34 //Выводит ascll картинку из файла art1.art со строк 1-34

include;getcurrentdirect:include.gam //Подключает в конец кода текущей игры код из данного файла (он должен начинаться на includingas;)

playmusic;getcurrentdirect:music1.wav //Воспроизводит WAV файл

cls; //отчистить консоль

printimg;getcurrentdirect:Бармалей.jpg //Вывод изображения (RGB)

setbackphoto;getcurrentdirect:Бармалей.jpg //Вывод изображения на фон (B/W)

finish;Финиш //Вывести сообщение и ожидать нажатия клавишь, после чего завершить приложение

pause; //пауза, завершается нажатием любой кнопки

goto;14 //переводит вополнение кода на строку 14

Ethernetconnection;{ //подключение к серверу за игрой (игра должена начинаться на includingas;)
Server;127.0.0.1 //адрес сервера
Login;admin //логин
Password;admin //пароль
Socet;/gameeng.php //файл сокета (см. gameeng.php)
Game;games/OTS.gam //путь к игре на сервере
} //закрытие тега

cashe;127.0.0.1/games;Musicinc.gam,art1.art //кэшировать все нужные для игры файлы с сервера и папки 

sett;razm:false,title:Game1,autoelse:true,color:0 //Настройки;Имеется ли зависимость к регистру в условиях (true false);Название окна игры; Автоматическое else в if (достаточно написать просто else:);цвет окна из таблицы цветов (color.txt)


if;да,нет,else;3 //условие, потом варианты ответа, потом количество ответов, если необходимо - else

нет:closegame;Игра закроется через 1,5 секунды //вариант ответа, соответствующий "нет", через : действие, их всего 8: mess и closegame, goto, messsas, ascllart, playmusic, printimg, setbackphoto

//playmusic;getcurrentdirect:music1.wav //Воспроизводит WAV файл

//printimg;getcurrentdirect:Бармалей.jpg //Вывод изображения (RGB)

//setbackphoto;getcurrentdirect:Бармалей.jpg //Вывод изображения на фон (B/W)

//ascllart;getcurrentdirect:art1.art,1-34 //Выводит ascll картинку из файла art1.art со строк 1-34

//messas;12-19 //вывести текст со строки с 12 по 19 (строка должна начинаться на messin, в ходе общего кода выводиться не будет) (только в условиях)
//goto;12 //Перенести выполнение общего кода на строку 12 (только в условиях)

да:mess;Сообщение и продолжение вополнения кода //вариант ответа, соответствующий "да", через : действие, их всего 4: mess и closegame, goto, messsas

else:closegame;Введите: Налево или направо. Игра окончена //Вариант ответа если никакое из условий не выполнено
