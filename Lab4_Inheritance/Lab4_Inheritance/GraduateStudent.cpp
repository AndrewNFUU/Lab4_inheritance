#include "GraduateStudent.h"

GraduateStudent::GraduateStudent(string name, int age, string university, string specialty, double averageMark, string group, string thesisTitle)
	: Student(name, age, university, specialty, group, 4, averageMark), thesisTitle(thesisTitle) {}

string GraduateStudent::GetThesisTitle() const
{
	return thesisTitle;
}

void GraduateStudent::SetThesisTitle(string newThesisTitle)
{
	this->thesisTitle = newThesisTitle;
}

void GraduateStudent::PrintInfo() const
{
	Student::PrintInfo();
	cout << "Thesis Title: " << thesisTitle << endl;
}

ostream& operator<<(ostream& os, const GraduateStudent& gs)
{
	os << (Student)gs;
	os << "Thesis title: " << gs.thesisTitle << endl;
	return os;
}

istream& operator>>(istream& is, GraduateStudent& gs)
{
	is >> (Student&)gs;
	cout << "Enter thesis title: ";
	is >> gs.thesisTitle;
	return is;
}