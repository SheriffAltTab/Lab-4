#include "Faculty.h"
#include "Department.h"
#include "StudentGroup.h"
#include "Student.h"
using namespace std;


int main() {
    // Створення факультету
    Faculty* faculty = new Faculty("FCIT");

    // Створення та додавання викладачів до кафедр
    Department* department1 = new Department("CS");
    Teacher* teacher1 = new Teacher("Susla M.");
    department1->addTeacher(teacher1);
    faculty->addDepartment(department1);

    Department* department2 = new Department("SW");
    Teacher* teacher2 = new Teacher("Shpintal M.");
    department2->addTeacher(teacher2);
    faculty->addDepartment(department2);

    // Створення та додавання студентів до студентських груп
    StudentGroup* studentGroup1 = new StudentGroup("IPZ-12");
    Student* student1 = new Student("Shevchenko T.");
    student1->addGrade1("Math", 85.0);
    student1->addGrade2("Science", 90.0);
    Student* student2 = new Student("Franko I.");
    student2->addGrade1("Math", 60.0);
    student2->addGrade2("Science", 70.0);
    Student* student3 = new Student("Ukrainka L.");
    student3->addGrade1("Math", 95.0);
    student3->addGrade2("Science", 65.0);
    studentGroup1->addStudent(student1);
    studentGroup1->addStudent(student2);
    studentGroup1->addStudent(student3);
    faculty->addStudentGroup(studentGroup1);

    StudentGroup* studentGroup2 = new StudentGroup("IPZ-11");
    Student* student4 = new Student("Koval A.");
    student4->addGrade3("Math", 75.0);
    student4->addGrade4("Science", 80.0);
    Student* student5 = new Student("Boyko M.");
    student5->addGrade3("Math", 82.0);
    student5->addGrade4("Science", 70.0);
    Student* student6 = new Student("Melnik T.");
    student6->addGrade3("Math", 62.0);
    student6->addGrade4("Science", 96.0);
    studentGroup2->addStudent(student4);
    studentGroup2->addStudent(student5);
    studentGroup2->addStudent(student6);
    faculty->addStudentGroup(studentGroup2);

    // Виведення інформації про кафедри та студентські групи факультету
    faculty->printDepartments();
    faculty->printStudentGroups();
    department1->printTeachers();
    department2->printTeachers();
    studentGroup1->printStudents();
    studentGroup2->printStudents();

    // Обчислення середнього балу за предмет "Math" та "Science" у всіх студентських групах
    float averageMathGrade = studentGroup1->calculateAverageGrade("Math");
    cout << "Average Math Grade in Students Group 1: " << averageMathGrade << endl;
    float averageMathGrade2 = studentGroup1->calculateAverageGrade("Science");
    cout << "Average Science Grade in Students Group 1: " << averageMathGrade2 << endl;
    float averageMathGrade3 = studentGroup2->calculateAverageGrade("Math");
    cout << "Average Math Grade in Students Group 2: " << averageMathGrade3 << endl;
    float averageMathGrade4 = studentGroup2->calculateAverageGrade("Science");
    cout << "Average Science Grade in Students Group 2: " << averageMathGrade4 << endl;

    // Видалення факультету
    delete faculty;

    return 0;
}
