#include <iostream>
#include "student.h"
#include <string>
using namespace std;
Student::Student() {

}
Student::Student(int id, string name, string pwd) {
    this->m_Id = id;
    this->m_Name = name;
    this->m_Pwd = pwd;
}
void Student::ShowOperMenu(Identity * & identity) {

}
void Student::ApplyOrder() {

}
void Student::ShowMyOrder() {

}
void Student::ShowAllOrder() {

}
void Student::CancelOrder() {

}
Student::~Student() {
    
}