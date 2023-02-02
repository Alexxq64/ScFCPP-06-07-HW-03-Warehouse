#include <iostream>
#include "Computer.h"

Computer::Computer(std::string name, std::string manufacturer, unsigned int price, std::string processor, int memory) :
	HomeAppliances::HomeAppliances(name, manufacturer, price), _processor(processor), _memory(memory) {}
Computer::Computer(std::string name, std::string manufacturer, unsigned int price) :
	Computer::Computer(name, manufacturer, price, "NoMatter", 5) {}

Computer::Computer() :Computer::Computer("NoName", "NoName", 0) {
}

void Computer::showInformation() {
	std::cout << "��������� ����.      ";
	std::cout << "���������: " << _processor;
	std::cout << "  ����� ������: " << _memory << std::endl;
	HomeAppliances::showInformation();
}
