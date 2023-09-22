#pragma once
#include <iostream>
using namespace std;

class Address
{
public:
    string Street = "";
    string City = "";
    string State = "";
    string Zip = "";
};

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
        if (email.find(emailDomain) == -1)
            return false;
        return true;
    }

    bool isStudentId(string &studentId)
    {
        string copy = studentId;
        if (copy[0] == 'w')
            copy.erase(0, 1);

        if (studentId.length() != 7)
            return false;

        for (int i = 0; i < studentId.length(); i++)
        {
            if (!isdigit(studentId[i]))
                return false;
        }

        studentId = 'w' + copy;
        return true;
    }

public:
    static string emailDomain;
    static int Count;

    Address address;

    string
    getFname() { return fname; }
    void setFname(string fname) { this->fname = fname; }
    string getLname() { return lname; }
    void setLname(string lname) { this->lname = lname; }

    string getEmail() { return email; }
    void setEmail(string email)
    {
        if (isValidEmail(email))
            this->email = email;
    }

    string getStudentId() { return studentId; }
    void setStudentId(string studentId) { this->studentId = studentId; }

    Student()
    {
        Count += 1;
    }
    Student(string fname, string lname, string email, string studentId)
    {
        // Uses the setter to assign the value; makes it where you can validate before the assignment.
        this->setFname(fname);
        this->setLname(lname);
        this->setEmail(email);
        this->studentId = studentId;
        Count += 1;
    }
    // Copy Constructor for the student class
    Student(const Student &s)
    {
        this->fname = s.fname;
        this->lname = s.lname;
        this->email = s.email;
        this->studentId = s.studentId;
        Count += 1;
    }
    // Copy of the copy (shallow copy) changes everything but the studentId
    Student(const Student &s, string studentId)
    {
        this->fname = s.fname;
        this->lname = s.lname;
        this->email = s.email;
        this->studentId = studentId;
        Count += 1;
    }
    ~Student()
    {
        Count -= 1;
    };

    string toString()
    // Dont use cout as it would tie this function to the terminal. Doing it this way allows for usablitiy in different areas.
    {
        return "\nFirst name: " + fname + "\nLast Name: " + lname + "\nEmail: " + email + "\nStudentId: " + studentId;
    }
};