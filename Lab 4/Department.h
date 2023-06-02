#pragma once
#include "Teacher.h"
#include <vector>
#include <iostream>
#include "Object.h"
using namespace std;


class Department : public Object {
private:
    string name;
    vector<Teacher*> teachers;  // ������ ��� ���������� ������� �������
public:
    Department(string name);  // �����������

    ~Department();  // ����������

    string getDepartmentName();

    void addTeacher(Teacher* teacher);  // ��������� ������� �� �������

    void printTeachers();  // ��������� ������ �������
};
