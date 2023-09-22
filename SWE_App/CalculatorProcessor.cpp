#include "CalculatorProcessor.h"
#include "Window.h"
#include <wx/tokenzr.h>
#include "ButtonFactory.h"
#include "stack"
#include "queue"
#include <cmath>



CalculatorProcessor* CalculatorProcessor::calcProcessorSingleton_ = nullptr;


CalculatorProcessor* CalculatorProcessor::GetInstance()
{
	if (calcProcessorSingleton_ == nullptr)
	{
		calcProcessorSingleton_ = new CalculatorProcessor();
	}

	return calcProcessorSingleton_;

}



double CalculatorProcessor::CalculationAdd(double num, double num2, wxString nextNum)
{
	// vector numbers and add to it
	double result;
	wxStringTokenizer tokenizer(nextNum, "%" "*" "/" "+" "-");
	wxString resultString = "";
	wxString leftS = tokenizer.GetNextToken();// my first number
	num = wxAtof(leftS);
	num = num;
	//char abuOperator = ' ';
	wxString rightString = tokenizer.GetString();
	num2 = wxAtof(rightString);
	num2 = num2;
	result = num + num2;
	return result;

	//while (nextNum.length() != 0)
	//{
	//	for (int i = 0; i <= _numHolder.size(); i++)
	//	{
	//		//double result;
	//		double temp;
	//		wxStringTokenizer tokenizer(nextNum, "%" "*" "/" "+" "-");
	//		wxString resultString = "";
	//		wxString leftS = tokenizer.GetString();// my first number
	//		num = wxAtof(leftS);
	//		num = num;
	//		temp = num;
	//		_numHolder.push_back(temp);
	//		wxString nextString2Token = tokenizer.GetString();
	//		num = wxAtof(nextString2Token);

	//		i++;
	//	}
	//}
}

double CalculatorProcessor::CalculationSubtract(double num, double num2, wxString nextNum)
{
	double result;
	wxStringTokenizer tokenizer(nextNum, "%" "*" "/" "+" "-");
	wxString leftS = tokenizer.GetNextToken();// my first number
	num = wxAtof(leftS);
	num = num;
	wxString rightString = tokenizer.GetString();
	num2 = wxAtof(rightString);
	num2 = num2;
	result = num - num2;
	return result;

}

double CalculatorProcessor::Calculationdivide(double num, double num2, wxString nextNum)
{
	double result;
	wxStringTokenizer tokenizer(nextNum, "%" "*" "/" "+" "-");
	wxString leftS = tokenizer.GetNextToken();// my first number
	num = wxAtof(leftS);
	num = num;
	wxString rightString = tokenizer.GetString();
	num2 = wxAtof(rightString);
	num2 = num2;
	result = num / num2;
	return result;

}

double CalculatorProcessor::CalculationMultiply(double num, double num2, wxString nextNum)
{
	double result;
	wxStringTokenizer tokenizer(nextNum, "%" "*" "/" "+" "-");
	wxString leftS = tokenizer.GetNextToken();// my first number
	num = wxAtof(leftS);
	num = num;
	wxString rightString = tokenizer.GetString();
	num2 = wxAtof(rightString);
	num2 = num2;
	result = num * num2;
	return result;

}

double CalculatorProcessor::CalculationMod(double num, double num2, wxString nextNum)
{
	double result;
	wxStringTokenizer tokenizer(nextNum, "%" "*" "/" "+" "-");
	wxString leftS = tokenizer.GetNextToken();// my first number
	num = wxAtof(leftS);
	num = num;
	wxString rightString = tokenizer.GetString();
	num2 = wxAtof(rightString);
	num2 = num2;
	result = (int)num % (int)num2;
	return result;

}

double CalculatorProcessor::CalculationCos(double num, wxString nextNum)
{
	double result;
	wxStringTokenizer tokenizer(nextNum, "%" "*" "/" "+" "-" );
	wxString leftS = tokenizer.GetNextToken();// my first number
	num = wxAtof(nextNum);
	num = num;
	result = cos(num);
	return result;
}

double CalculatorProcessor::CalculationSin(double num, wxString nextNum)
{
	double result;
	wxStringTokenizer tokenizer(nextNum, "%" "*" "/" "+" "-");
	wxString leftS = tokenizer.GetNextToken();// my first number
	num = wxAtof(nextNum);
	num = num;
	result = sin(num);
	return result;
}

double CalculatorProcessor::CalculationTan(double num, wxString nextNum)
{
	double result;
	wxStringTokenizer tokenizer(nextNum, "%" "*" "/" "+" "-");
	wxString leftS = tokenizer.GetNextToken();// my first number
	num = wxAtof(nextNum);
	num = num;
	result = tan(num);
	return result;
}

 CalculatorProcessor::~CalculatorProcessor()
{
	
		delete calcProcessorSingleton_;
		calcProcessorSingleton_ = nullptr;
	
}
