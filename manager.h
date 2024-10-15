#pragma once 
#include <iostream>
#include <fstream>
#include "identity.h"
#include "globalfile.h"
class Manager : public Identity {
public:
    Manager();
    Manager(string name, string pwd);
    virtual void ShowOperMenu(Identity * & identity);
    void AddPersoon();
    void ShowPerson();
    void ShowComputer();
    void cleanFile();
};