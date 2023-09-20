#include "CalculatorProcessor.h"
#include "Window.h"


CalculatorProcessor* CalculatorProcessor::calcProcessorSingleton_ = nullptr;


CalculatorProcessor* CalculatorProcessor::GetInstance()
{
	if (calcProcessorSingleton_ == nullptr)
	{
		calcProcessorSingleton_ = new CalculatorProcessor();
	}
}