#pragma once
#include "HomeAppliances.h"
class VacuumCleaner: virtual public HomeAppliances{
protected:
    int _power;
public:
    VacuumCleaner (std::string name, std::string manufacturer, unsigned int price, int power);
    void showInformation();
};



