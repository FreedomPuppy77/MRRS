#include <iostream>
#include "teacher.h"
#include <string>
using namespace std;
Teacher::Teacher() {

}
Teacher::Teacher(int empid, string name, string pwd) {
    this->m_EmpId = empid;
    this->m_Name = name;
    this->m_Pwd = pwd;
}
void Teacher::ShowOperMenu(Identity * & identity) {

}
void Teacher::ShowAllOrder() {

}
void Teacher::validOrder() {
    
}