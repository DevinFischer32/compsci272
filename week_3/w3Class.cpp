#include <iostream>
#include <vector>

using namespace std;

class Student
{
private:
    char finalGrade;

public:
    char getFinalGrade()
    {
        int total = (score1 + score2) / 2;
        switch (total)
        {
        case 90 ... 100:
            return 'A';
            break;

        default:
            break;
        }
        return 0;
    }
    string name;
    int age;
    int score1;
    int score2;
    Student() {}

    Student(string name, int age, int score)
    {
        this->name = name;
        this->age = age;
        this->score = score;
    }
};

int main()
{
    Student stu1("Chris", 19, 100)

        return 0;
}
