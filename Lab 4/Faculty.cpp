#include "Faculty.h"
using namespace std;


Faculty::Faculty(string name)
{
    this->name = name;
}

Faculty::~Faculty()
{
    for (Department* department : departments) {
        delete department;
    }
    for (StudentGroup* studentGroup : studentGroups) {
        delete studentGroup;
    }
}

void Faculty::addDepartment(Department* department)
{
    departments.push_back(department);  // Додавання кафедри до списку кафедр факультету
}


void Faculty::addStudentGroup(StudentGroup* studentGroup)
{
    studentGroups.push_back(studentGroup);  // Додавання студентської групи до списку студентських груп факультету
}

std::string Faculty::getFacultyName()
{
    return this->name;
}

void Faculty::printDepartments()
{
    cout << "Departments in the Faculty:" << name << endl;  // Вивід заголовка
    for (Department* department : departments) {
        cout << department->getDepartmentName() << " - Department" << endl;  // Вивід інформації про кафедру
    }
}


void Faculty::printStudentGroups()
{
    cout << "Student Groups in the Faculty:" << name << endl;  // Вивід заголовка
    for (StudentGroup* studentGroup : studentGroups) {
        cout << studentGroup->getGroupName() << " - Student Group" << endl;  // Вивід інформації про студентську групу
    }
}
