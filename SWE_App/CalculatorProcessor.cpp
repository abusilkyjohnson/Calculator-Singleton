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



double CalculatorProcessor::CalculationAdd(double num, double num2,wxString nextNum)
{

	double result;
	wxStringTokenizer tokenizer(nextNum, "%" "*" "/" "+" "-");
	wxString resultString = "";
	wxString leftS = tokenizer.GetNextToken();
	num = wxAtof(leftS);
	num = num;
	wxString rightString = tokenizer.GetString();
	num2 = wxAtof(rightString);
	num2 = num2;
	result = num + num2;
	return result;
}