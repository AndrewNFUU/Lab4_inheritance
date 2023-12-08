#include "Student.h"

Student::Student()
{
}

Student::Student(string name, int age, string university, string specialty, string group, int course, double averageMark)
	: Person(name, age), university(university), specialty(specialty), group(group), course(course), averageMark(averageMark) {}

// ----------------------GETTERS----------------------------
string Student::GetUniversity() const
{
	return university;
}

string Student::GetSpecialty() const
{
	return specialty;
}

string Student::GetGroup() const
{
	return group;
}

int Student::GetCourse() const
{
	return course;
}

double Student::GetAverageMark() const
{
	return averageMark;
}

// ----------------------SETTERS----------------------------
void Student::SetUniversity(string newUniversity)
{
	this->university = newUniversity;
}

void Student::SetSpecialty(string newSpecialty)
{
	this->specialty = newSpecialty;
}

void Student::SetGroup(string newGroup)
{
	this->group = newGroup;
}

void Student::SetCourse(int newCourse)
{
	this->course = newCourse;
}

void Student::SetAverageMark(double newAverageMark)
{
	this->averageMark = newAverageMark;
}

void Student::PrintInfo() const
{
	Person::PrintInfo();
	cout << "University: " << university << endl;
	cout << "Specialty: " << specialty << endl;
	cout << "Group: " << group << endl;
	cout << "Course: " << course << endl;
	cout << "Average Mark: " << averageMark << endl;
}

ostream& operator<<(ostream& os, const Student& s)
{
	os << (Person)s;
	os << "University: " << s.university << endl;
	os << "Specialty: " << s.specialty << endl;
	os << "Group: " << s.group << endl;
	os << "Course: " << s.course << endl;
	os << "Average mark: " << s.averageMark << endl;
	return os;
}

istream& operator>>(istream& is, Student& s)
{
	is >> (Person&)s;
	cout << "Enter university: ";
	is >> s.university;
	cout << "Enter specialty: ";
	is >> s.specialty;
	cout << "Enter group: ";
	is >> s.group;
	cout << "Enter course: ";
	is >> s.course;
	cout << "Enter average mark: ";
	is >> s.averageMark;
	return is;
}
