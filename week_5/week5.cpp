#include <iostream>
#include <vector>
#include "Classes.h"

using namespace std;

int main()
{
    int num1, num2;
    char symbol;

    cout << "Enter Number 1: " << endl;
    cin >> num1;
    cout << "Enter Number 2: " << endl;
    cin >> num2;
    cout << "Enter (+ - / *): " << endl;
    cin >> symbol;

    if (symbol == '+')
    {
        return num1 + num2;
    }
    else if (symbol == '-')
    {
        return num1 - num2;
    }
    else if (symbol == '/')
    {
        return num1 / num2;
    }
    else if (symbol == '*')
    {
        return num1 * num2;
    }
    else
        cout << "Please Enter Valid Symbol" << endl;

    return 0;
}
