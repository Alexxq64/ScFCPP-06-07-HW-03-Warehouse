#pragma once
#include "VacuumCleaner.h"
#include "Computer.h"

// diamond inheritance
class RobotVacuumCleaner final: public VacuumCleaner, Computer {
public:
    RobotVacuumCleaner(std::string name, std::string manufacturer, unsigned int price, int power);
    void showInformation();

};

