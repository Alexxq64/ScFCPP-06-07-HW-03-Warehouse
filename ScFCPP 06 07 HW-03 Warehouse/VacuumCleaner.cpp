#include "VacuumCleaner.h"
#include <iostream>

VacuumCleaner::VacuumCleaner(std::string name, std::string manufacturer, unsigned int price, int power) :
	HomeAppliances::HomeAppliances(name, manufacturer, price), _power(power) {}

void VacuumCleaner::showInformation() {
	HomeAppliances::showInformation();
	std::cout << "Пылесос." << std::endl;
	std::cout << "Мощность: " << _power << std::endl;
}


