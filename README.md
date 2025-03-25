# Нулевая группа вопросов:   

1. Для работы с потоками в WinAPI использовались следующие функции:
   1) HANDLE CreateThread(  
    LPSECURITY_ATTRIBUTES lpThreadAttributes,  // Атрибуты безопасности (обычно NULL)  
    SIZE_T dwStackSize,                        // Размер стека (обычно 0 = по умолчанию)  
    LPTHREAD_START_ROUTINE lpStartAddress,     // Функция, выполняемая в потоке  
    LPVOID lpParameter,                        // Аргумент, передаваемый в поток  
    DWORD dwCreationFlags,                     // Флаги создания (обычно 0)  
    LPDWORD lpThreadId                         // Указатель на идентификатор потока 
);  
   2) WaitForSingleObject(hThread, INFINITE);  
   3) CloseHandle(hThread);  
   4) Sleep(10);  

2. В Windows под процессом понимается объект ядра, которому принадлежат системные ресурсы, 
используемые приложением.
Каждый процесс в Windows:
Имеет свое адресное пространство (память).  
Может запускать другие процессы (CreateProcess).  
Содержит как минимум один поток (основной).

3. Участок программы, на протяжении которого поток ведет работу с критическим ресурсом, называется критической секцией по отношению к этому ресурсу. Критический ресурс - это любой ресурс, на доступ к которому претендуют не менее двух параллельных потоков    

4. Семафор – это неотрицательная целая переменная, значение которой может изменяться только при помощи неделимых операций. Под понятием неделимая операция мы понимаем такую операцию, выполнение 
которой не может быть прервано. Семафор считается свободным, если его значение больше нуля, в противном случае семафор считается занятым.

5.  C++98 без Boost vs. C++98 с Boost  
С++98 без Boost → стандартные возможности ограничены:  
Только базовые типы данных (std::vector, std::string).  
Нет nullptr, auto, lambda и move semantics.  
Нет встроенных многопоточных возможностей (std::thread отсутствует).  
  
C++98 + Boost → библиотека Boost расширяет стандарт:  
Boost.Thread → позволяет работать с потоками (альтернатива std::thread).  
Boost.SmartPtr → улучшенные умные указатели (boost::shared_ptr).  
Boost.Filesystem → удобная работа с файлами.  
Boost.Asio → асинхронный ввод/вывод.  
Вывод: C++98 без Boost сильно ограничен, а с Boost можно писать код, похожий на C++11.    

# Общие вопросы:  

1. Объектно-Ориентированное Программирование (ООП) – это парадигма программирования, в которой данные и методы, работающие с ними, объединяются в объекты.  
Основные принципы ООП:  
Инкапсуляция – скрытие деталей реализации.  
Наследование – создание новых классов на основе существующих.  
Полиморфизм – возможность работать с разными объектами через один интерфейс.  
Абстракция – выделение важных характеристик объекта.

2. Число 7 ± 2 – это когнитивный предел, сколько элементов человек может держать в памяти.  
Примеры из IT:  
IP-адрес - 4 группы чисел (легко запомнить, не перегружает мозг).    
Номер телефона - 7-значный формат (в старых системах).  
Количество регистров в CPU - около 7–9 (эффективное управление).    
Максимум вкладок в браузере - 5-7 комфортны, больше — хаос.  
Размер "краткой памяти" в интерфейсах - кнопки быстрого доступа (около 7).  
Число потоков в средних задачах многопоточности → часто выбирается 4–8  

3. Энтропия ПО – это степень неопределенности, хаоса и сложности в программном обеспечении.  
Негативные примеры энтропии ПО:  
Спагетти-код – код без структуры, где трудно понять логику.  
Отсутствие комментариев – сложный код без пояснений.  
code duplication – повторяющийся код без рефакторинга.    
Глобальные переменные – вызывают хаос в больших проектах.  
Большие монолитные функции – функции по 500 строк, сложно поддерживать.

4. Гради Буч выделил 5 признаков сложных систем:
Иерархия  
Пример: В OSLab1 есть структура employee и три модуля (main, creator, reporter). Они работают иерархично.  
Абстракция  
Пример: В OSLab2 вынесли данные в ThreadData, а логику потоков в thread_functions.cpp.  
Инкапсуляция  
Пример: В OSLab1 структура employee скрывает детали хранения данных сотрудников.  
Многократное использование  
Пример: В OSLab2 одни и те же потоки (findMinMax, calculateAverage) могут работать с разными массивами.  
Эволюция  
Пример: Мы обновили OSLab1 с CTest, а затем вернулись и переделали на Google Test в OSLab2.

5. Закон Седова: Усложнение системы в одной области приводит к упрощению в другой.  
5 исторических примеров из IT:    
Переход от malloc/free к std::shared_ptr   
- Код сложнее, но упрощает работу с памятью.    
Язык C++ сложнее, чем C, но код проще  
- ООП делает код читаемым, но требует больше ресурсов.  
Python проще, но медленнее, чем C++  
- Легче писать код, но медленнее в исполнении.  
Отказ от глобальных переменных в пользу std::map и классов  
- Код стал сложнее, но исчезли конфликты данных.  
Git сложнее, чем FTP, но управление кодом легче  
- Сложный инструмент, но решает проблему версионности.  


