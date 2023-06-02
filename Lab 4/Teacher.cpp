#include "Teacher.h"
using namespace std;


Teacher::Teacher(string name)
{
	this->name = name;
}

Teacher::~Teacher()
{
}

string Teacher::getTeacherName()
{
	return this->name;
}
