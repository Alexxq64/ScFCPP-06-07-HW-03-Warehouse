#include "HomeAppliances.h"
#include <iostream>


HomeAppliances::HomeAppliances(const std::string name, const std::string manufacturer, unsigned int price) :
	_name(name), _manufacturer(manufacturer), _price(price) {}

HomeAppliances::HomeAppliances(){
}


void HomeAppliances::showInformation(){
	std::cout << "Производитель: " << _manufacturer << std::endl;
	std::cout << "Наименование: " << _name << std::endl;
	std::cout << "Цена: " << _price << std::endl;
}

std::string HomeAppliances::getName(){
	return _name;
}

std::string HomeAppliances::getManufacturer(){
	return _manufacturer;
}

int HomeAppliances::getPrice(){
	return _price;
}


