#pragma once
#include "Student.h"
#include <vector>
#include <iostream>
#include <string>
#include "Object.h"
using namespace std;


class StudentGroup : public Object {
private:
    vector<Student*> students;  // ������ ��� ���������� �������� � ����������� ����
    string name;
public:
    StudentGroup(string name);  // �����������

    ~StudentGroup();  // ����������

    void addStudent(Student* student);  // ��������� �������� �� ����������� �����

    void printStudents();  // ��������� ������ �������� � ����������� ����

    float calculateAverageGrade(const string& subject);  // ���������� ���������� ���� �� �������� ��� ��� �������� � ����
    float calculateAverageGrade2(const string& subject);  // ���������� ���������� ���� �� �������� ��� ��� �������� � ����
    float calculateAverageGrade3(const string& subject);  // ���������� ���������� ���� �� �������� ��� ��� �������� � ����
    float calculateAverageGrade4(const string& subject);  // ���������� ���������� ���� �� �������� ��� ��� �������� � ����

    string getGroupName();
};
