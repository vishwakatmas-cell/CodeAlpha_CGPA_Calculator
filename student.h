#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>
#include <vector>
#include "subject.h"

using namespace std;

class Student {

private:
    string studentName;
    vector<Subject> subjects;

public:
    Student(string name);

    void addSubject(Subject s);

    double calculateGPA();

    void displayResult();
};

#endif