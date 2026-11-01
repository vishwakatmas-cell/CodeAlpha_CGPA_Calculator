#ifndef SUBJECT_H
#define SUBJECT_H

#include <iostream>
#include <string>
using namespace std;

class Subject {

private:
    string subjectName;
    double gradePoint;
    int creditHours;

public:
    Subject(string name, double grade, int credit);

    void displaySubject();

    double getGradePoint();
    int getCreditHours();
};

#endif