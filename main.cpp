#include <iostream>
#include "mrrs.h"
#include "identity.h"
#include "globalfile.h"
#include "student.h"
#include "teacher.h"
#include "manager.h"
#include <fstream>
#include <string>
using namespace std;
// 登陆功能全局函数 参数1 操作文件名 参数2 操作身份类型
void LoginIn(string FileName, int type) {
    //父类指针, 指向子类对象
    Identity * person = NULL;
    // 读文件
    ifstream ifs;
    ifs.open(FileName, ios::in);
    //判断文件是否存在
    if (!ifs.is_open()) 
    {
        cout << "文件不存在!" << endl;
        ifs.close();
        return;
    }
    // 准备接受用户信息
    int id = 0;
    string name;
    string pwd;
    //判断身份
    if (type == 1) //学生身份
    {
        cout << "请输入您的学号: " << endl;
        cin >> id;
    }
    else if (type == 2) // 教师身份
    {
        cout << "请输入您的职工号: " << endl;
        cin >> id;
    }
    cout << "请输入您的用户名: " << endl;
    cin >> name;
    cout << "请输入您的密码: " << endl;
    cin >> pwd;
    if (type == 1)
    {
        // 学生身份验证
        int fId;
        string fName;
        string fPwd;
        while (ifs >> fId && ifs >> fName && ifs >> fPwd)
        {
            cout << fName << endl;
            cout << fPwd << endl;
            if (id == fId && name == fName && pwd == fPwd) {
                cout << "学生验证登录成功! " << endl;
                person = new Student(id, name, pwd);
                //进入学生身份的子菜单

                return;
            }
        }    
    }
    else if (type == 2) 
    {
        // 教师身份验证
        int fId;
        string fName;
        string fPwd;
        while (ifs >> fId && ifs >> fName && ifs >> fPwd)
        {
            cout << fName << endl;
            cout << fPwd << endl;
            if (id == fId && name == fName && pwd == fPwd) {
                cout << "老师验证登录成功! " << endl;
                person = new Teacher(id, name, pwd);
                //进入老师的子菜单

                return;
            }
        }
    }
    else if (type == 3)
    {
        // 管理员身份验证
        string fName;
        string fPwd;
        while (ifs >> fName && ifs >> fPwd)
        {
            cout << fName << endl;
            cout << fPwd << endl;
            if (name == fName && pwd == fPwd) {
                cout << "管理员验证登录成功! " << endl;
                person = new Manager(name, pwd);
                //进入管理员的子菜单
                person->ShowOperMenu(person);
                return;
            }
        }
    }
    cout << "验证登录失败!" << endl;
    return;
}
int main() {
    MRRS mrrs;
    while (true)
    {
        mrrs.ShowMenu();
        int choice;
        cin >> choice;
        switch (choice) {
            case 1: // 学生代表 
                LoginIn(STUDENT_FILE, 1); 
                break;
            case 2: // 老师
                LoginIn(TEACHER_FILE, 2); 
                break;
            case 3: // 管理员
                LoginIn(ADMIN_FILE, 3);  
                break;
            case 0: // 退出
                mrrs.ExitMenu();
                break;
                return 0;
            default:
                cout << "输入有误，请重新输入!" << endl;
                break;
        }

    }
    
    return 0;
}