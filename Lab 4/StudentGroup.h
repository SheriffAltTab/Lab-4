#pragma once
#include "Student.h"
#include <vector>
#include <iostream>
#include <string>
#include "Object.h"
using namespace std;


class StudentGroup : public Object {
private:
    vector<Student*> students;  // Вектор для збереження студентів у студентській групі
    string name;
public:
    StudentGroup(string name);  // Конструктор

    ~StudentGroup();  // Деструктор

    void addStudent(Student* student);  // Додавання студента до студентської групи

    void printStudents();  // Виведення списку студентів у студентській групі

    float calculateAverageGrade(const string& subject);  // Обчислення середнього балу по предмету для всіх студентів у групі
    float calculateAverageGrade2(const string& subject);  // Обчислення середнього балу по предмету для всіх студентів у групі
    float calculateAverageGrade3(const string& subject);  // Обчислення середнього балу по предмету для всіх студентів у групі
    float calculateAverageGrade4(const string& subject);  // Обчислення середнього балу по предмету для всіх студентів у групі

    string getGroupName();
};
