#pragma once
#include <iostream>
using namespace std;


// Клас Object є базовим класом для ієрархії об'єктів
class Object {
public:
    virtual ~Object(); // Віртуальний деструктор для поліморфного видалення об'єктів
};
