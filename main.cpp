#include <iostream>
#include <string>
#include "student.h"

using namespace std;

int main() {

    string name;
    int n;

    cout << "===== CGPA CALCULATOR =====" << endl;

    cout << "Enter student name: ";
    getline(cin, name);

    cout << "Enter number of subjects: ";
    cin >> n;

    Student s1(name);

    for (int i = 0; i < n; i++) {

        string subjectName;
        double grade;
        int credit;

        cout << "\nEnter subject " << i + 1 << " name: ";
        cin >> subjectName;

        cout << "Enter grade point: ";
        cin >> grade;

        cout << "Enter credit hours: ";
        cin >> credit;

        Subject s(subjectName, grade, credit);

        s1.addSubject(s);
    }

    s1.displayResult();

    return 0;
}