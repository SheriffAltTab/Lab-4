#pragma once
#include <string>
#include "Object.h"
#include <vector>
using namespace std;


class Student : public Object {
private:
    string name;
    vector<pair<string, float>> grades; // ������ ��� ��������� ������ ��������
public:
    Student(string name); // ����������� ����� Student

    ~Student(); // ���������� ����� Student

    void addGrade1(const string& subject, float grade1); // ������ ������ �� �������

    float getGrade1(const string& subject); // �������� ������ �� �������

    void addGrade2(const string& subject, float grade2); // ������ ������ �� �������

    float getGrade2(const string& subject); // �������� ������ �� �������

    void addGrade3(const string& subject, float grade3); // ������ ������ �� �������

    float getGrade3(const string& subject); // �������� ������ �� �������

    void addGrade4(const string& subject, float grade4); // ������ ������ �� �������

    float getGrade4(const string& subject); // �������� ������ �� �������

    string getStudentName();
};
