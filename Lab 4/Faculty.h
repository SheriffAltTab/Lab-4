#pragma once
#include <vector>
#include "Department.h"
#include "StudentGroup.h"
#include "Object.h"
using namespace std;

class Faculty : public Object {
private:
    string name;
    vector<Department*> departments;  // Вектор для збереження кафедр факультету
    vector<StudentGroup*> studentGroups;  // Вектор для збереження студентських груп факультету
public:
    Faculty(string name);  // Конструктор

    ~Faculty();  // Деструктор

    void addDepartment(Department* department);  // Додавання кафедри до факультету

    void addStudentGroup(StudentGroup* studentGroup);  // Додавання студентської групи до факультету

    string getFacultyName();

    void printDepartments();  // Виведення списку кафедр факультету

    void printStudentGroups();  // Виведення списку студентських груп факультету
};
