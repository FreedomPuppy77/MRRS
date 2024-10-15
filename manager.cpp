#include <iostream>
#include "manager.h"
#include <string>
using namespace std;
Manager::Manager() {

}
Manager::Manager(string name, string pwd) {
    this->m_Name = name;
    this->m_Pwd = pwd;
}
void Manager::ShowOperMenu(Identity * & manager) {
    while (true)
    {
        cout << "欢迎管理员："<< this->m_Name << "登录！" << endl;
        cout << "\t\t ---------------------------------\n";
        cout << "\t\t|                                |\n";
        cout << "\t\t|          1.添加账号            |\n";
        cout << "\t\t|                                |\n";
        cout << "\t\t|          2.查看账号            |\n";
        cout << "\t\t|                                |\n";
        cout << "\t\t|          3.查看机房            |\n";
        cout << "\t\t|                                |\n";
        cout << "\t\t|          4.清空预约            |\n";
        cout << "\t\t|                                |\n";
        cout << "\t\t|          0.注销登录            |\n";
        cout << "\t\t|                                |\n";
        cout << "\t\t ---------------------------------\n";
        cout << "请选择您的操作： " << endl;

        int choice = 0;
        cin >> choice;
        switch(choice) {
            case 1:// 添加账号
                this->AddPersoon();
                break;
            case 2://查看账号
                this->ShowPerson();
                break;
            case 3://查看机房
                this->ShowComputer();
                break;
            case 4://清空预约
                this->cleanFile();
                cout << "预约已清空!" << endl;
                break;
            case 0:
                cout << "欢迎下次使用！" << endl;
                //system("pause");
                return;
            default:
                delete manager;
                cout << "注销成功!" << endl;
                break;
        }
    }    
}
void Manager::AddPersoon() {
    cout << "请输入添加账号的类型: " << endl;
    cout << "1.添加学生" << endl;
    cout << "2.添加老师" << endl;

    string fileName;
    string tip;
    ofstream ofs;

    int select;
    cin >> select;
    if (select == 1)
    {
        fileName = STUDENT_FILE;
        tip = "请输入学号: ";
    }
    else
    {
        fileName = TEACHER_FILE;
        tip = "请输入职工号: ";
    }
    ofs.open(fileName, ios::out | ios::app);//利用追加的方式写内容
    int id;
    string name;
    string pwd;
    cout << tip << endl;
    cin >> id;
    cout << "请输入姓名: " << endl;
    cin >> name;
    cout << "请输入密码: " << endl;
    cin >> pwd;
    ofs << id << " " << name << " " << pwd << endl;//添加数据
    ofs.close();
    cout << "添加账号成功!" << endl;
}
void Manager::ShowPerson() {

}
void Manager::ShowComputer() {

}
void Manager::cleanFile() {

}