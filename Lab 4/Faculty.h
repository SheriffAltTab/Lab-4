#pragma once
#include <vector>
#include "Department.h"
#include "StudentGroup.h"
#include "Object.h"
using namespace std;

class Faculty : public Object {
private:
    string name;
    vector<Department*> departments;  // ������ ��� ���������� ������ ����������
    vector<StudentGroup*> studentGroups;  // ������ ��� ���������� ������������ ���� ����������
public:
    Faculty(string name);  // �����������

    ~Faculty();  // ����������

    void addDepartment(Department* department);  // ��������� ������� �� ����������

    void addStudentGroup(StudentGroup* studentGroup);  // ��������� ����������� ����� �� ����������

    string getFacultyName();

    void printDepartments();  // ��������� ������ ������ ����������

    void printStudentGroups();  // ��������� ������ ������������ ���� ����������
};
