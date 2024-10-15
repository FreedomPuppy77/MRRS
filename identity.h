#pragma once
#include <iostream>
#include <string>
using namespace std; //头文件中不建议使用这个
//把学生, 老师, 管理员抽象出一个基类, 然后不同身份继承这个基类, 并且重写这个纯虚类
class Identity {
public:
    virtual void ShowOperMenu(Identity * & identity) = 0;
    string m_Name;
    string m_Pwd;

};