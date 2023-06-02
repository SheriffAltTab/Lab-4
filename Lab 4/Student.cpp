#include "Student.h"
using namespace std;


Student::Student(string name)
{
	this->name = name;
}

Student::~Student()
{
}

void Student::addGrade1(const string& subject, float grade)
{
	grades.push_back(make_pair(subject, grade));
	// ������ ������ �� ������� �� ������ ������ ��������
}

float Student::getGrade1(const string& subject)
{
	// ����� ������ �� �������� ��������� � ������ ������ ��������
	for (const auto& grade : grades) {
		if (grade.first == subject) {
			return grade.second;
		}
	}
	return -1.0;  // ������ �� ������� �� ��������
}

void Student::addGrade2(const string& subject, float grade)
{
	grades.push_back(make_pair(subject, grade));
	// ������ ������ �� ������� �� ������ ������ ��������
}

float Student::getGrade2(const string& subject)
{
	// ����� ������ �� �������� ��������� � ������ ������ ��������
	for (const auto& grade : grades) {
		if (grade.first == subject) {
			return grade.second;
		}
	}
	return -1.0;  // ������ �� ������� �� ��������
}

void Student::addGrade3(const string& subject, float grade)
{
	grades.push_back(make_pair(subject, grade));
	// ������ ������ �� ������� �� ������ ������ ��������
}

float Student::getGrade3(const string& subject)
{
	// ����� ������ �� �������� ��������� � ������ ������ ��������
	for (const auto& grade : grades) {
		if (grade.first == subject) {
			return grade.second;
		}
	}
	return -1.0;  // ������ �� ������� �� ��������
}

void Student::addGrade4(const string& subject, float grade)
{
	grades.push_back(make_pair(subject, grade));
	// ������ ������ �� ������� �� ������ ������ ��������
}

float Student::getGrade4(const string& subject)
{
	// ����� ������ �� �������� ��������� � ������ ������ ��������
	for (const auto& grade : grades) {
		if (grade.first == subject) {
			return grade.second;
		}
	}
	return -1.0;  // ������ �� ������� �� ��������
}

string Student::getStudentName()
{
	return this->name;
}
