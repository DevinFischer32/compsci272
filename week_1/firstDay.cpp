#include <iostream>
#include <vector>

using namespace std;
int addNum(int num1, int num2);

int addNum(int num1, int num2)
{
    return num1 + num2;
}
// Overloaded function that behaves same way but can use other types.
// Idea used on type safe languages
double addNum(double a, double b)
{
    return a + b;
}

int main(int argc, char *args[])
{
    int val1 = 23;
    int val2 = 45;
    int sum = addNum(val1, val2);
    return 0;
}
