#include <iostream>
#include <vector>
#include "Student.h"
using namespace std;

string Student::emailDomain = "@my.yosemite.edu";
int Student::Count = 0;

int main()
{
    vector<Student> students;
    Student s1;
    s1.address.City = "Modesto";
    Student s2("John", "Doe", "johndoe@gmail.com", "944817");
    Student s3(s2);
    Student s4(s2, "123");

    students.push_back(s1);
    students.push_back(s2);
    students.push_back(s3);
    students.push_back(s4);

    for (auto student : students)
    {
        cout << student.toString() << endl;
    }

    return 0;
}