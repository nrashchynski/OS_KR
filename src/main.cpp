#include <iostream>
#include "fibonacci.h"
#include "palindrome.h"
#include "linked_list.cpp"

int main() {
    setlocale(LC_ALL, "ru");
    int choice;
    std::cout << "Выберите задачу:\n1. Числа Фибоначчи\n2. Проверка на палиндром\n3. Разворот списка\n> ";
    std::cin >> choice;

    switch (choice) {
    case 1: {
        int n;
        std::cout << "Введите n: ";
        std::cin >> n;
        auto fib = fibonacci(n);
        for (int num : fib) std::cout << num << " ";
        break;
    }
    case 2: {
        int num;
        std::cout << "Введите число: ";
        std::cin >> num;
        std::cout << (is_palindrome(num) ? "Палиндром" : "Не палиндром");
        break;
    }
    case 3: {
        LinkedList list;
        list.push(1); list.push(2); list.push(3);
        std::cout << "До разворота: "; list.print();
        list.reverse();
        std::cout << "После: "; list.print();
        break;
    }
    }
    return 0;
}