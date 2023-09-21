#pragma once
#include "Window.h"
#include <wx/tokenzr.h>
#include "ButtonFactory.h"

class Window;


class CalculatorProcessor // my singleton
{

private:

	static CalculatorProcessor* calcProcessorSingleton_;
	CalculatorProcessor(){};// private so it cant be constructed anywhere else hence singleton

public:
	CalculatorProcessor(CalculatorProcessor& other) = delete;
	void operator=(const CalculatorProcessor&) = delete;


	static CalculatorProcessor* GetInstance();
	double CalculationAdd(double num, double num2,wxTextCtrl* nextNum);
};

