#include <iostream>
#include "Notebook.h"

Notebook::Notebook(std::string name, std::string manufacturer, unsigned int price, int screenDiagonal):
	HomeAppliances::HomeAppliances(name, manufacturer, price), _screenDiagonal(screenDiagonal){}

void Notebook::showInformation(){
	HomeAppliances::showInformation();
	std::cout << "Ноутбук." << std::endl;
	std::cout << "Диагональ: " << _screenDiagonal << std::endl;
}
