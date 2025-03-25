#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "linked_list.cpp"


std::vector<int> fibonacci(int n) {
    std::vector<int> fib;
    if (n >= 1) fib.push_back(0);
    if (n >= 2) fib.push_back(1);
    for (int i = 2; i < n; ++i) {
        fib.push_back(fib[i - 1] + fib[i - 2]);
    }
    return fib;
}

bool is_palindrome(int num) {
    std::string s = std::to_string(num);
    std::string rev = s;
    std::reverse(rev.begin(), rev.end());
    return s == rev;
}

int main() {
    setlocale(LC_ALL, "ru");
    int choice;
    std::cout << "�������� ������:\n"
        << "1. ����� ���������\n"
        << "2. �������� �� ���������\n"
        << "3. �������� �������� ������\n"
        << "> ";
    std::cin >> choice;

    switch (choice) {
    case 1: {
        int n;
        std::cout << "������� n: ";
        std::cin >> n;
        std::vector<int> fib = fibonacci(n);
        std::cout << "������ " << n << " ����� ���������: ";
        for (int num : fib) std::cout << num << " ";
        std::cout << "\n";
        break;
    }
    case 2: {
        int num;
        std::cout << "������� �����: ";
        std::cin >> num;
        std::cout << "��� " << (is_palindrome(num) ? "���������" : "�� ���������") << "\n";
        break;
    }
    case 3: {
        LinkedList list;
        list.push(1);
        list.push(2);
        list.push(3);
        std::cout << "�������� ������: ";
        list.print();
        list.reverse();
        std::cout << "���������� ������: ";
        list.print();
        break;
    }
    default:
        std::cout << "�������� �����!\n";
    }
    return 0;
}