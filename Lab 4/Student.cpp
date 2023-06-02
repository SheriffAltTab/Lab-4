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
	// Додати оцінку за предмет до списку оцінок студента
}

float Student::getGrade1(const string& subject)
{
	// Пошук оцінки за вказаним предметом у списку оцінок студента
	for (const auto& grade : grades) {
		if (grade.first == subject) {
			return grade.second;
		}
	}
	return -1.0;  // Оцінка за предмет не знайдена
}

void Student::addGrade2(const string& subject, float grade)
{
	grades.push_back(make_pair(subject, grade));
	// Додати оцінку за предмет до списку оцінок студента
}

float Student::getGrade2(const string& subject)
{
	// Пошук оцінки за вказаним предметом у списку оцінок студента
	for (const auto& grade : grades) {
		if (grade.first == subject) {
			return grade.second;
		}
	}
	return -1.0;  // Оцінка за предмет не знайдена
}

void Student::addGrade3(const string& subject, float grade)
{
	grades.push_back(make_pair(subject, grade));
	// Додати оцінку за предмет до списку оцінок студента
}

float Student::getGrade3(const string& subject)
{
	// Пошук оцінки за вказаним предметом у списку оцінок студента
	for (const auto& grade : grades) {
		if (grade.first == subject) {
			return grade.second;
		}
	}
	return -1.0;  // Оцінка за предмет не знайдена
}

void Student::addGrade4(const string& subject, float grade)
{
	grades.push_back(make_pair(subject, grade));
	// Додати оцінку за предмет до списку оцінок студента
}

float Student::getGrade4(const string& subject)
{
	// Пошук оцінки за вказаним предметом у списку оцінок студента
	for (const auto& grade : grades) {
		if (grade.first == subject) {
			return grade.second;
		}
	}
	return -1.0;  // Оцінка за предмет не знайдена
}

string Student::getStudentName()
{
	return this->name;
}
