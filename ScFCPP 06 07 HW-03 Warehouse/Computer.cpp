#include <iostream>
#include "Computer.h"

Computer::Computer(std::string name, std::string manufacturer, unsigned int price, std::string processor, int hardDrive) :
	HomeAppliances::HomeAppliances(name, manufacturer, price), _processor(processor), _hardDrive(hardDrive) {}
Computer::Computer(std::string name, std::string manufacturer, unsigned int price) :
	Computer::Computer(name, manufacturer, price, "Noname", 10) {}

Computer::Computer() :Computer::Computer("NoName", "NoName", 0) {
}

void Computer::showInformation() {
	HomeAppliances::showInformation();
	std::cout << "��������� ����" << std::endl;
	std::cout << "���������: " << _processor << std::endl;
	std::cout << "����� �������� �����: " << _hardDrive << std::endl;
}
