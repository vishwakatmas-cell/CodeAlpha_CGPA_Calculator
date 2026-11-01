#include "student.h"

// Constructor
Student::Student(string name) {
    studentName = name;
}

// Add subject
void Student::addSubject(Subject s) {
    subjects.push_back(s);
}

// Calculate GPA
double Student::calculateGPA() {

    double totalGradePoints = 0;
    int totalCredits = 0;

    for (int i = 0; i < subjects.size(); i++) {

        totalGradePoints += subjects[i].getGradePoint()
                            * subjects[i].getCreditHours();

        totalCredits += subjects[i].getCreditHours();
    }

    if (totalCredits == 0) {
        return 0;
    }

    return totalGradePoints / totalCredits;
}

// Display result
void Student::displayResult() {

    cout << "\n===== STUDENT RESULT =====" << endl;

    cout << "Student Name: " << studentName << endl;

    cout << "\nSubject Details:\n";

    for (int i = 0; i < subjects.size(); i++) {
        subjects[i].displaySubject();
        cout << "------------------" << endl;
    }

    cout << "Final GPA: " << calculateGPA() << endl;
}