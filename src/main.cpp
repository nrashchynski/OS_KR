#include <iostream>
#include "fibonacci.h"
#include "palindrome.h"
#include "linked_list.cpp"

int main() {
    setlocale(LC_ALL, "ru");
    int choice;
    std::cout << "�������� ������:\n1. ����� ���������\n2. �������� �� ���������\n3. �������� ������\n> ";
    std::cin >> choice;

    switch (choice) {
    case 1: {
        int n;
        std::cout << "������� n: ";
        std::cin >> n;
        auto fib = fibonacci(n);
        for (int num : fib) std::cout << num << " ";
        break;
    }
    case 2: {
        int num;
        std::cout << "������� �����: ";
        std::cin >> num;
        std::cout << (is_palindrome(num) ? "���������" : "�� ���������");
        break;
    }
    case 3: {
        LinkedList list;
        list.push(1); list.push(2); list.push(3);
        std::cout << "�� ���������: "; list.print();
        list.reverse();
        std::cout << "�����: "; list.print();
        break;
    }
    }
    return 0;
}