#include <iostream>
#include "mrrs.h"
using namespace std;
MRRS::MRRS() {

}
void MRRS::ShowMenu() {
    cout << "======================  欢迎来到传智播客机房预约系统  =====================" 
         << endl;
	cout << "\t\t -------------------------------\n";
	cout << "\t\t|                               |\n";
	cout << "\t\t|          1.学生代表           |\n";
	cout << "\t\t|                               |\n";
	cout << "\t\t|          2.老    师           |\n";
	cout << "\t\t|                               |\n";
	cout << "\t\t|          3.管 理 员           |\n";
	cout << "\t\t|                               |\n";
	cout << "\t\t|          0.退    出           |\n";
	cout << "\t\t|                               |\n";
	cout << "\t\t -------------------------------\n";
    cout << "==========================================================================" 
         << endl;  
    cout  << "请输入您的身份: " << endl; 
}
void MRRS::ExitMenu() {
    cout << "欢迎下次使用机房预约系统!" << endl;
    exit(0);
}
MRRS::~MRRS() {

}