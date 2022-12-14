#ifndef STUDENT_H
#define STUDENT_H
#pragma once

#include <iostream>
#include <string>
#include "degree.h"
using namespace std;

// Define Student Class - Section D2.a

class Student {
public:
    Student();

    // DECLARE ACCESSORS - Section D2.a
    string getStudentID() const;
    string getFirstName() const;
    string getLastName() const;
    string getEmailAddress() const;
    int getAge() const;
    int* getDaysInCourse() const;
    degreeProgram getDegree() const;

    // DECCLARE MUTATORS - Section D2.b
    void setStudentID(string studentID);
    void setFirstName(string firstName);
    void setLastName(string lastName);
    void setEmailAddress(string emailAddress);
    void setAge(int age);
    void setDaysInCourse(int daysInCourse[]);
    void setDegree(degreeProgram degree);
    void print(); //print student data


    // CONSTRUCTOR - Section D2.d
    Student(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse[], degreeProgram degree);

    

private:

    // Data Members - Section D1
    string studentID;
    string firstName;
    string lastName;
    string emailAddress;
    int age;
    int* daysInCourse;
    degreeProgram degree;
};

#endif
