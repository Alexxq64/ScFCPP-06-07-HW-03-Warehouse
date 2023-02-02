#pragma once
#include "HomeAppliances.h"
#include <string>

class Computer : virtual public HomeAppliances {
protected:
    int _hardDrive;
    std::string _processor;
public:
    Computer(std::string name, std::string manufacturer, unsigned int price, std::string processor, int hardDrive);
    Computer(std::string name, std::string manufacturer, unsigned int price);
    Computer();
    void showInformation();
};

