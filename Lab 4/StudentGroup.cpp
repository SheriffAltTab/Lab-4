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
    students.push_back(student);  // Додаємо студента до списку студентів у групі
}

void StudentGroup::printStudents()
{
    cout << "Students in the Student Group:" << name << endl;
    for (Student* student : students) {
        cout << student->getStudentName() << " - Student" << endl;  // Виводимо повідомлення про кожного студента у групі
    }
}

float StudentGroup::calculateAverageGrade(const string& subject)
{
    float sum = 0.0;
    int count = 0;

    for (Student* student : students) {
        float grade = student->getGrade1(subject);  // Отримуємо оцінку студента з вказаного предмету
        if (grade != -1.0) {
            sum += grade;
            count++;
        }
    }

    if (count > 0) {
        return sum / count;  // Обчислюємо середній бал з вказаного предмету у групі студентів
    }
    else {
        return 0.0;  // Якщо немає студентів з вказаним предметом, повертаємо 0.0
    }
}

float StudentGroup::calculateAverageGrade2(const string& subject)
{
    float sum = 0.0;
    int count = 0;

    for (Student* student : students) {
        float grade = student->getGrade2(subject);  // Отримуємо оцінку студента з вказаного предмету
        if (grade != -1.0) {
            sum += grade;
            count++;
        }
    }

    if (count > 0) {
        return sum / count;  // Обчислюємо середній бал з вказаного предмету у групі студентів
    }
    else {
        return 0.0;  // Якщо немає студентів з вказаним предметом, повертаємо 0.0
    }
}

float StudentGroup::calculateAverageGrade3(const string& subject)
{
    float sum = 0.0;
    int count = 0;

    for (Student* student : students) {
        float grade = student->getGrade3(subject);  // Отримуємо оцінку студента з вказаного предмету
        if (grade != -1.0) {
            sum += grade;
            count++;
        }
    }

    if (count > 0) {
        return sum / count;  // Обчислюємо середній бал з вказаного предмету у групі студентів
    }
    else {
        return 0.0;  // Якщо немає студентів з вказаним предметом, повертаємо 0.0
    }
}

float StudentGroup::calculateAverageGrade4(const string& subject)
{
    float sum = 0.0;
    int count = 0;

    for (Student* student : students) {
        float grade = student->getGrade4(subject);  // Отримуємо оцінку студента з вказаного предмету
        if (grade != -1.0) {
            sum += grade;
            count++;
        }
    }

    if (count > 0) {
        return sum / count;  // Обчислюємо середній бал з вказаного предмету у групі студентів
    }
    else {
        return 0.0;  // Якщо немає студентів з вказаним предметом, повертаємо 0.0
    }
}

string StudentGroup::getGroupName() {
    return this->name;
}
