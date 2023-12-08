#pragma once
#include <iostream>
#include <fstream>

using namespace std;

class Person {
public:
    Person();

    Person(string name, int age);

    string GetName() const;

    int GetAge() const;

    void SetName(string newName);

    void SetAge(int newAge);

    virtual void PrintInfo() const;

    Person& operator=(const Person& other);

    friend ostream& operator<<(ostream& os, const Person& p);

    friend istream& operator>>(istream& is, Person& p);

private:
    string name;
    int age{};
};

