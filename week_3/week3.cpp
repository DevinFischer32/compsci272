#include <iostream>
#include <vector>

using namespace std;

struct Student
{
public:
    Student(int age, string name, int score, char finalGrade)
    {
        this->age = age;
        this->name = name;
        this->score = score;
        this->finalGrade = finalGrade;
    }

    string name;
    void setAge(int a)
    {
        if (age >= 16)
        {
            age = a;
        }
    }
    int getAge()
    {
        return age;
    }

private:
    int age;
    int score;
    char finalGrade;
};

int main()
{
    Student(21, "Devin", 92, 'A');

    return 0;
}
