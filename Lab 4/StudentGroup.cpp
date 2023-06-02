#include "StudentGroup.h"
using namespace std;


StudentGroup::StudentGroup(string name)
{
    this->name = name;
}

StudentGroup::~StudentGroup()
{
    for (Student* student : students) {
        delete student;
    }
}

void StudentGroup::addStudent(Student* student)
{
    students.push_back(student);  // ������ �������� �� ������ �������� � ����
}

void StudentGroup::printStudents()
{
    cout << "Students in the Student Group:" << name << endl;
    for (Student* student : students) {
        cout << student->getStudentName() << " - Student" << endl;  // �������� ����������� ��� ������� �������� � ����
    }
}

float StudentGroup::calculateAverageGrade(const string& subject)
{
    float sum = 0.0;
    int count = 0;

    for (Student* student : students) {
        float grade = student->getGrade1(subject);  // �������� ������ �������� � ��������� ��������
        if (grade != -1.0) {
            sum += grade;
            count++;
        }
    }

    if (count > 0) {
        return sum / count;  // ���������� ������� ��� � ��������� �������� � ���� ��������
    }
    else {
        return 0.0;  // ���� ���� �������� � �������� ���������, ��������� 0.0
    }
}

float StudentGroup::calculateAverageGrade2(const string& subject)
{
    float sum = 0.0;
    int count = 0;

    for (Student* student : students) {
        float grade = student->getGrade2(subject);  // �������� ������ �������� � ��������� ��������
        if (grade != -1.0) {
            sum += grade;
            count++;
        }
    }

    if (count > 0) {
        return sum / count;  // ���������� ������� ��� � ��������� �������� � ���� ��������
    }
    else {
        return 0.0;  // ���� ���� �������� � �������� ���������, ��������� 0.0
    }
}

float StudentGroup::calculateAverageGrade3(const string& subject)
{
    float sum = 0.0;
    int count = 0;

    for (Student* student : students) {
        float grade = student->getGrade3(subject);  // �������� ������ �������� � ��������� ��������
        if (grade != -1.0) {
            sum += grade;
            count++;
        }
    }

    if (count > 0) {
        return sum / count;  // ���������� ������� ��� � ��������� �������� � ���� ��������
    }
    else {
        return 0.0;  // ���� ���� �������� � �������� ���������, ��������� 0.0
    }
}

float StudentGroup::calculateAverageGrade4(const string& subject)
{
    float sum = 0.0;
    int count = 0;

    for (Student* student : students) {
        float grade = student->getGrade4(subject);  // �������� ������ �������� � ��������� ��������
        if (grade != -1.0) {
            sum += grade;
            count++;
        }
    }

    if (count > 0) {
        return sum / count;  // ���������� ������� ��� � ��������� �������� � ���� ��������
    }
    else {
        return 0.0;  // ���� ���� �������� � �������� ���������, ��������� 0.0
    }
}

string StudentGroup::getGroupName() {
    return this->name;
}
