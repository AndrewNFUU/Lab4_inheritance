#include <iostream>
#include <fstream>
#include "Person.h"
#include "Student.h"
#include "GraduateStudent.h"

using namespace std;

int main() {
    cout << "--------Person Info-------   " << endl;
    Person person1;
    cin >> person1;
    cout << endl << endl;

    Student student1("Alex", 19, "University of Toronto", "Designer", "DS 22/5", 2, 9.6);

    Student student2;
    student2 = student1;

    GraduateStudent graduate_student1("John", 25, "University of Colorado", "Mechanic", 8, "MCh 41/7", "\"Research of engines V8 version\"");

    cout << "-------Student Info-------   " << endl;
    student1.PrintInfo(); cout << endl << endl;

    cout << "---Graduate Student Info---   " << endl;
    graduate_student1.PrintInfo();

    string path = "lab4.txt";

    ofstream outFile(path);

    if (!outFile.is_open()) {
        cout << "Unable to open file";
    }
    else {
        outFile << "--------Person Info-------   " << endl;
        outFile << person1 << endl << endl;

        outFile << "-------Student Info-------   " << endl;
        outFile << student1 << endl << endl;

        outFile.close();
        outFile.open(path, ios_base::app);

        outFile << "-------Check Info-------   " << endl;
        outFile << student2 << endl << endl;

        outFile << "---Graduate Student Info---   " << endl;
        outFile << graduate_student1 << endl;

        outFile.close();
    }

    system("pause"); return 0;
}