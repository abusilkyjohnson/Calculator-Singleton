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
	std::vector<double> _numHolder;


public:
	CalculatorProcessor(CalculatorProcessor& other) = delete;
	void operator=(const CalculatorProcessor&) = delete;


	static CalculatorProcessor* GetInstance();


	double CalculationAdd(double num, double num2, wxString nextNum);
	double CalculationSubtract(double num, double num2, wxString nextNum);
	double Calculationdivide(double num, double num2, wxString nextNum);
	double CalculationMultiply(double num, double num2, wxString nextNum);
	double CalculationMod(double num, double num2, wxString nextNum);

	//double CalculationSubtract(double num, double num2, wxString nextNum);
	//double CalculationSubtract(double num, double num2, wxString nextNum);
	//double CalculationSubtract(double num, double num2, wxString nextNum);
};

