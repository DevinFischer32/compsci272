#include <iostream>
#include "Student.h"
using namespace std;

int main()
{
    Student s1;
    Student s2("John", "Doe", "johndoe@gmail.com", "944817");
    Student s3(s2);
    Student s4(s2, "123");

    return 0;
}