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
    departments.push_back(department);  // ��������� ������� �� ������ ������ ����������
}


void Faculty::addStudentGroup(StudentGroup* studentGroup)
{
    studentGroups.push_back(studentGroup);  // ��������� ����������� ����� �� ������ ������������ ���� ����������
}

std::string Faculty::getFacultyName()
{
    return this->name;
}

void Faculty::printDepartments()
{
    cout << "Departments in the Faculty:" << name << endl;  // ���� ���������
    for (Department* department : departments) {
        cout << department->getDepartmentName() << " - Department" << endl;  // ���� ���������� ��� �������
    }
}


void Faculty::printStudentGroups()
{
    cout << "Student Groups in the Faculty:" << name << endl;  // ���� ���������
    for (StudentGroup* studentGroup : studentGroups) {
        cout << studentGroup->getGroupName() << " - Student Group" << endl;  // ���� ���������� ��� ����������� �����
    }
}
