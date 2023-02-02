#pragma once
#include "HomeAppliances.h"
#include <string>

class Computer : virtual public HomeAppliances {
protected:
    int _memory;
    std::string _processor;
public:
    Computer(std::string name, std::string manufacturer, unsigned int price, std::string processor, int memory);
    Computer(std::string name, std::string manufacturer, unsigned int price);
    Computer();
    void showInformation();
};

