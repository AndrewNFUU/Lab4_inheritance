#pragma once
#include <iostream>
#include "Person.h"

using namespace std;

class Student : public Person
{
public:
    Student();

    Student(string name, int age, string university, string specialty, string group, int course, double averageMark);

    string GetUniversity() const;

    string GetSpecialty() const;

    string GetGroup() const;

    int GetCourse() const;

    double GetAverageMark() const;

    void SetUniversity(string newUniversity);

    void SetSpecialty(string newSpecialty);

    void SetGroup(string newGroup);

    void SetCourse(int newCourse);

    void SetAverageMark(double newAverageMark);

    void PrintInfo() const override;

    friend istream& operator>>(istream& is, Student& s);

    friend ostream& operator<<(ostream& os, const Student& s);

private:
    string university;
    string specialty;
    string group;
    int course;
    double averageMark;
};

