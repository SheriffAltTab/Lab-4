#pragma once
#include <string>
#include "Object.h"
#include <vector>
using namespace std;


class Student : public Object {
private:
    string name;
    vector<pair<string, float>> grades; // Вектор для зберігання оцінок студента
public:
    Student(string name); // Конструктор класу Student

    ~Student(); // Деструктор класу Student

    void addGrade1(const string& subject, float grade1); // Додати оцінку за предмет

    float getGrade1(const string& subject); // Отримати оцінку за предмет

    void addGrade2(const string& subject, float grade2); // Додати оцінку за предмет

    float getGrade2(const string& subject); // Отримати оцінку за предмет

    void addGrade3(const string& subject, float grade3); // Додати оцінку за предмет

    float getGrade3(const string& subject); // Отримати оцінку за предмет

    void addGrade4(const string& subject, float grade4); // Додати оцінку за предмет

    float getGrade4(const string& subject); // Отримати оцінку за предмет

    string getStudentName();
};
