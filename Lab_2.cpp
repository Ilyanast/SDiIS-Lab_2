#include "Assistant.h"
#include "Professor.h"
#include "Administator.h"
#include <fstream>
#include <iostream>

using namespace std;
using namespace scientist;

int main() {
	ifstream fin("input.txt");
	string name, subject, degree, publication, admin_role;
	int age, year_of_service, salary, course;
	double mid_mark;
	fin >> name >> age >> salary >> year_of_service;
	Employee obj_employee(name, age, salary, year_of_service);
	fin >> name >> age >> salary >> year_of_service >> subject >> degree;
	Teacher obj_teacher(name, age, salary, year_of_service, subject, degree);
	fin >> name >> age >> admin_role >> salary >> year_of_service;
	Administrator obj_administrator(name, age, admin_role, salary, year_of_service);
	fin >> name >> age >> course >> mid_mark;
	Student obj_student(name, age, course, mid_mark);
	fin >> name >> age >> course >> degree >> mid_mark >> salary >> subject >> year_of_service;
	Assistant obj_assistant(name, age, course, degree, mid_mark, salary, subject, year_of_service);
	fin >> name >> age >> salary >> degree >> subject >> year_of_service >> publication;
	Professor obj_professor(name, age, salary, degree, subject, year_of_service, publication);
	obj_employee.print();
	obj_teacher.print();
	obj_administrator.print();
	obj_student.print();
	obj_assistant.print();
	obj_professor.print();
}