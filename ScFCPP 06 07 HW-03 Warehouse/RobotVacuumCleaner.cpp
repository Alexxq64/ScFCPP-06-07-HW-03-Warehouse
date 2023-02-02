#include "RobotVacuunCleaner.h"
#include <iostream>

RobotVacuumCleaner::RobotVacuumCleaner(std::string name, std::string manufacturer, unsigned int price, int power) :
	VacuumCleaner::VacuumCleaner(name, manufacturer, price, power), Computer:: Computer(name, manufacturer, price) {
	std::cout << "!!!!!!!!!" << name << std::endl;
	std::cout << "!!!!!!!!!" << RobotVacuumCleaner::_name << std::endl;
	std::cout << "!!!!!!!!!" << VacuumCleaner::_name << std::endl;
	std::cout << "!!!!!!!!!" << HomeAppliances::_name << std::endl;
	//std::cout << "!!!!!!!!!" << manufacturer << std::endl;
	//std::cout << "!!!!!!!!!" << price << std::endl;
	//std::cout << "!!!!!!!!!" << power << std::endl;
};


void RobotVacuumCleaner::showInformation(){
	std::cout << "�����-�������." << std::endl;
	HomeAppliances::showInformation();
	//std::cout << "�������������: " << RobotVacuumCleaner::_manufacturer << std::endl;
	//std::cout << "������������: " << getName() << std::endl;
	std::cout << "��������: " << _power << std::endl;
	//std::cout << "����: " << _price << std::endl;
}
