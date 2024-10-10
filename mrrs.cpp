#include <iostream>
#include "mrrs.h"
using namespace std;
MRRS::MRRS() {

}
void MRRS::ShowMenu() {
    cout << "----------------欢迎来到机房预约系统----------------------" << endl;
    cout << "请输入您的身份: " << endl;
    cout << "\t\t-----------------------------------\n" << endl;
    cout << "\t\t|              1.学生代表          |\n" << endl;
    cout << "\t\t|              2.老    师          |\n" << endl;
    cout << "\t\t|              3.管理员            |\n" << endl;
    cout << "\t\t|              0.退出              |\n" << endl;
    cout << "\t\t-----------------------------------\n" << endl;
    
}
void MRRS::ExitMenu() {
    cout << "欢迎下次使用机房预约系统!" << endl;
    exit(0);
}
MRRS::~MRRS() {

}