#include "Person.h"

Person::Person() {}

Person::Person(string name, int age) : name(name), age(age) {}

string Person::GetName() const
{
	return name;
}

int Person::GetAge() const
{
	return age;
}

void Person::SetName(string newName)
{
	this->name = newName;
}

void Person::SetAge(int newAge)
{
	this->age = newAge;
}

void Person::PrintInfo() const
{
	cout << "Name: " << name << endl;
	cout << "Age: " << age << endl;
}

Person& Person::operator=(const Person& other)
{
	if (this != &other) {
		this->name = other.name;
		this->age = other.age;
	}
	return *this;
}

ostream& operator<<(ostream& os, const Person& p)
{
	os << "Name: " << p.name << endl; 
	os << "Age: " << p.age << endl;
	return os;
}

istream& operator>>(istream& is, Person& p)
{
	std::cout << "Enter name: ";
	is >> p.name;
	std::cout << "Enter age: ";
	is >> p.age;
	return is;
}

/*void AppendToFile(const string &file_name, const Person &p)
{
	ofstream file(file_name, ios::app);

	if (file.is_open())
	{
		file << p << endl;
		file.close();
	}
	else {
		cout << "Unable to open file" << endl;
	}
}*/
