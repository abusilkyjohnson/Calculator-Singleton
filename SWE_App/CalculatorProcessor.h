#pragma once

class Window;


class CalculatorProcessor // my singleton
{

protected:

	static CalculatorProcessor* calcProcessorSingleton_;
	CalculatorProcessor(){};

public:
	CalculatorProcessor(CalculatorProcessor& other) = delete;
	void operator=(const CalculatorProcessor&) = delete;


	static CalculatorProcessor* GetInstance();
	wxString CalculationAdd(wxString sign);
};

