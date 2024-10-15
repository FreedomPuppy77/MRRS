#pragma once 
#include <iostream>
#include "identity.h"
class Teacher : public Identity {
public:
    Teacher();
    Teacher(int empid, string name, string pwd);
    virtual void ShowOperMenu(Identity * & identity);
    void ShowAllOrder();
    void validOrder();
    int m_EmpId; // 职工编号
};