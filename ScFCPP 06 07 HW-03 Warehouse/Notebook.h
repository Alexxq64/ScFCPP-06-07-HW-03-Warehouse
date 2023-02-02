#pragma once
#include "HomeAppliances.h"
#include <string>

class Notebook: public HomeAppliances{
protected:
    int _screenDiagonal;
public:
    Notebook(std::string name, std::string manufacturer, unsigned int price, int screenDiagonal);
    void showInformation();
};

