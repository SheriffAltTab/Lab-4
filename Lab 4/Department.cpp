#include "Department.h"
using namespace std;


Department::Department(string name)
{
    this->name = name;
}

Department::~Department()
{
    for (Teacher* teacher : teachers) {
        delete teacher;
    }
}

string Department::getDepartmentName()
{
    return this->name;
}

void Department::addTeacher(Teacher* teacher)
{
    teachers.push_back(teacher);  // Додавання вчителя до списку вчителів кафедри
}

void Department::printTeachers()
{
    cout << "Teachers in the Department:" << endl;  // Вивід заголовка
    for (Teacher* teacher : teachers) {
        cout << teacher->getTeacherName() << " - Teacher" << endl;  // Вивід інформації про вчителя
    }
}
