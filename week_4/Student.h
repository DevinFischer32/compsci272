#pragma once
#include <iostream>
using namespace std;

class Student
{
private:
    string fname = "", lname = "";
    string email = "";
    string studentId = "";

    bool isValidEmail(string email)
    {
        if (email.find("@") > -1)
            return false;
        if (email.find(".") > -1)
            return false;
        return true;
    }

public:
    static string emailDomain;

    string getFname() { return fname; }
    void setFname(string fname) { this->fname = fname; }
    string getLname() { return lname; }
    void setLname(string lname) { this->lname = lname; }

    string getEmail() { return email; }
    void setEmail(string email)
    {
        if (isValidEmail(email))
            this->email = email;
    }

    Student()
    {
    }
    Student(string fname, string lname, string email, string studentId)
    {
        this->fname = fname;
        this->lname = lname;
        this->email = email;
        this->studentId = studentId;
    }
    // Copy Constructor for the student class
    Student(const Student &s)
    {
        this->fname = s.fname;
        this->lname = s.lname;
        this->email = s.email;
        this->studentId = s.studentId;
    }
    // Copy of the copy (shallow copy) changes everything but the studentId
    Student(const Student &s, string studentId)
    {
        this->fname = s.fname;
        this->lname = s.lname;
        this->email = s.email;
        this->studentId = studentId;
    }
    ~Student(){};
};