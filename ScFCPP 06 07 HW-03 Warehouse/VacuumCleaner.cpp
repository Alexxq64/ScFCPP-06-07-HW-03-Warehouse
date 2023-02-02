#include "VacuumCleaner.h"
#include <iostream>

VacuumCleaner::VacuumCleaner(std::string name, std::string manufacturer, unsigned int price, int power) :
	HomeAppliances::HomeAppliances(name, manufacturer, price), _power(power) {}

void VacuumCleaner::showInformation() {
	std::cout << "Пылесос.        ";
	std::cout << "Мощность: " << _power << std::endl;
	HomeAppliances::showInformation();
}


