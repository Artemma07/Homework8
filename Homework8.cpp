#include "Header.h"
#include <iostream>
#include <Windows.h>
using namespace std;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Student student;
    cout << "Введите фамилию, имя, город, группу, курс" << endl;
    cin >> student;

    cout << "Вы ввели : " << student << '\n';
    return 0;
}