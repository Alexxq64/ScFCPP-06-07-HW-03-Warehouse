#pragma once
#include <string>

class HomeAppliances
{
protected:
	std::string _name;
	std::string _manufacturer;
	unsigned int _price;
public:
	HomeAppliances(const std::string name, const std::string manufacturer, unsigned int price);
	HomeAppliances();
	virtual ~HomeAppliances() = default;
	virtual void showInformation() = 0;
	std::string getName();
	std::string getManufacturer();
	int getPrice();
};

