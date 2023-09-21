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



double CalculatorProcessor::CalculationAdd(double num, double num2,wxTextCtrl* nextNum)
{
	
	double result;
	wxStringTokenizer tokenizer(nextNum->GetValue(), "%" "*" "/" "+" "-");
	wxString resultString = "";
	num = wxAtof(tokenizer.GetNextToken());
	result = num + num2;
	result = result;

	return result;
}