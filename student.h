#pragma once 
#include <iostream>
#include "identity.h"
class Student : public Identity {
public:
    Student();
    Student(int id, string name, string pwd);
    virtual void ShowOperMenu(Identity * & identity);
    void ApplyOrder();
    void ShowMyOrder();
    void ShowAllOrder();
    void CancelOrder();
    ~Student();
    int m_Id; //学号
};