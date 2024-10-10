#include <iostream>
#include "mrrs.h"
using namespace std;
int main() {
    MRRS mrrs;
    while (true)
    {
        mrrs.ShowMenu();
        int choice;
        cin >> choice;
        switch (choice) {
            case 1: // 学生代表
                
                break;
            case 2: // 老师
                
                break;
            case 3: // 管理员
                
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