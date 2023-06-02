#pragma once
#include <string>
#include "Object.h"
using namespace std;


class Teacher : public Object {
private:
    string name;
public:
    Teacher(string name);  // Конструктор

    ~Teacher();  // Деструктор

    string getTeacherName();
};
