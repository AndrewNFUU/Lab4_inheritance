#pragma once
#include <iostream>
#include "Person.h"
#include "Student.h"

using namespace std;

class GraduateStudent : public Student
{
public:
    GraduateStudent(string name, int age, string university,
        string specialty, double averageMark, string group, string thesisTitle);

    string GetThesisTitle() const;

    void SetThesisTitle(string newThesisTitle);

    void PrintInfo() const override;

    friend ostream& operator<<(ostream& os, const GraduateStudent& gs);

    friend istream& operator>>(istream& is, GraduateStudent& gs);

private:
    string thesisTitle;
};

