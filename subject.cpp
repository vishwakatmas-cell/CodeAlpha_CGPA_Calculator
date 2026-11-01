#include "subject.h"

Subject::Subject(string name, double grade, int credit) {
    subjectName = name;
    gradePoint = grade;
    creditHours = credit;
}

void Subject::displaySubject() {
    cout << "Subject: " << subjectName << endl;
    cout << "Grade Point: " << gradePoint << endl;
    cout << "Credit Hours: " << creditHours << endl;
}

double Subject::getGradePoint() {
    return gradePoint;
}

int Subject::getCreditHours() {
    return creditHours;
}