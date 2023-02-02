#include "HomeAppliances.h"
#include <iostream>


HomeAppliances::HomeAppliances(const std::string name, const std::string manufacturer, unsigned int price) :
	_name(name), _manufacturer(manufacturer), _price(price) {
	// Testing
	//std::cout << " Base class constructed " << std::endl;
}

HomeAppliances::HomeAppliances(){
	// Testing
		//std::cout << " Base class constructed " << std::endl;
}

HomeAppliances::~HomeAppliances(){
	// Testing
		//std::cout << " Base class destructed " << std::endl;
}


void HomeAppliances::showInformation(){
	std::cout << _manufacturer;
	std::cout << " " << _name;
	std::cout << "       Цена: " << _price << std::endl;
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


