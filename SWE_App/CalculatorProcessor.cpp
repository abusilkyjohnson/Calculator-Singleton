#include "CalculatorProcessor.h"
#include "Window.h"
#include <wx/tokenzr.h>
#include "ButtonFactory.h"


CalculatorProcessor* CalculatorProcessor::calcProcessorSingleton_ = nullptr;


CalculatorProcessor* CalculatorProcessor::GetInstance()
{
	if (calcProcessorSingleton_ == nullptr)
	{
		calcProcessorSingleton_ = new CalculatorProcessor();
	}

	return calcProcessorSingleton_;
}

wxString* CalculatorProcessor::CalculationAdd()
{
	double rightNum, leftNum;
	double num, secondNum;
	double result;
	leftNum = leftNum;
	{
		result = leftNum + rightNum;
		result = result;
	}
}