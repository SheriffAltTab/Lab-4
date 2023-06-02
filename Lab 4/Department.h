#pragma once
#include "Teacher.h"
#include <vector>
#include <iostream>
#include "Object.h"
using namespace std;


class Department : public Object {
private:
    string name;
    vector<Teacher*> teachers;  // Вектор для збереження вчителів кафедри
public:
    Department(string name);  // Конструктор

    ~Department();  // Деструктор

    string getDepartmentName();

    void addTeacher(Teacher* teacher);  // Додавання вчителя до кафедри

    void printTeachers();  // Виведення списку вчителів
};
