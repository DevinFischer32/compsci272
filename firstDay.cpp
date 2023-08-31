#include <iostream>

using namespace std;

int addNum(int num1, int num2)
{
    return num1 + num2;
}

int main(int argc, char *args[])
{
    int val1 = 23;
    int val2 = 45;
    int sum = addNum(val1, val2);
    return 0;
}