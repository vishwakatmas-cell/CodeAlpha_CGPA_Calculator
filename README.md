# CGPA Calculator (C++)

A console-based CGPA Calculator built using C++ and Object-Oriented Programming (OOP) concepts.

## Features
- Enter student details.
- Add multiple subjects.
- Store subject grade points and credit hours.
- Calculate weighted GPA.
- Display subject details and the final GPA.

## Technologies Used
- C++
- Object-Oriented Programming (OOP)
- Classes and Encapsulation
- Constructors
- STL Vector

## Project Structure
- `main.cpp` – Main program.
- `student.h` – Student class declaration.
- `student.cpp` – Student class implementation.
- `subject.h` – Subject class declaration.
- `subject.cpp` – Subject class implementation.

## GPA Formula

GPA = Sum of (Grade Point × Credit Hours) / Sum of Credit Hours

## How to Compile and Run

Make sure a C++ compiler (such as g++) is installed.

Open the terminal in the project folder and run:

```bash
g++ main.cpp student.cpp subject.cpp -o cgpa
```

Then run:

```powershell
.\cgpa
```

## Author
GitHub: https://github.com/vishwakatmas-cell