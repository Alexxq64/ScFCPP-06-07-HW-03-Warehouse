#include "RobotVacuunCleaner.h"
#include <iostream>

RobotVacuumCleaner::RobotVacuumCleaner(std::string name, std::string manufacturer, unsigned int price, int power) :
	VacuumCleaner::VacuumCleaner(name, manufacturer, price, power), Computer:: Computer(name, manufacturer, price) {
	_name = name;
	_manufacturer = manufacturer;
	_price = price;
};


void RobotVacuumCleaner::showInformation(){
	std::cout << "Робот-пылесос.        ";
	std::cout << "Мощность: " << _power << std::endl;
	std::cout << "Процессор: " << _processor;
	std::cout << "   Объем памяти: " << _memory << std::endl;
	HomeAppliances::showInformation();
}
