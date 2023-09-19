#include "ButtonFactory.h"
#include "Window.h"

 wxButton* ButtonFactory::Generate(wxWindow* parent, int ID, const wxString& label,
	const wxPoint& position, const wxSize& size)
{
	wxButton* button = new wxButton(parent, ID, label, position, size);
	return button;
	
}

 wxTextCtrl* ButtonFactory::CreateTextBox(wxFrame* screen)
 {
	 wxTextCtrl* textBox = new wxTextCtrl(screen, 101, "", wxPoint(10, 10), wxSize(350, 150));
	 return textBox;
 }

 wxButton* ButtonFactory::CreateZeroButton(wxFrame* screen)
{
	wxButton* zero = Generate(screen, ZERO, "0", wxPoint(70, 550), wxSize(50, 50));
	
	return zero;
}

wxButton* ButtonFactory::CreateOneButton(wxFrame* screen)
{
	wxButton* one = Generate(screen, ONE, "1", wxPoint(10, 350), wxSize(50, 50));
	return one;
}

wxButton* ButtonFactory::CreateTwoButton(wxFrame* screen)
{
	wxButton* two = Generate(screen, TWO, "2", wxPoint(70, 350), wxSize(50, 50));
	return two;
}

wxButton* ButtonFactory::CreateThreeButton(wxFrame* screen)
{
	wxButton* three = Generate(screen, THREE, "3", wxPoint(130, 350), wxSize(50, 50));
	return three;
}

wxButton* ButtonFactory::CreateFourButton(wxFrame* screen)
{
	wxButton* four = Generate(screen, FOUR, "4", wxPoint(10, 420), wxSize(50, 50));
	return four;
}

wxButton* ButtonFactory::CreateFiveButton(wxFrame* screen)
{
	wxButton* five = Generate(screen, FIVE, "5", wxPoint(70, 420), wxSize(50, 50));
	return five;
}

wxButton* ButtonFactory::CreateSixButton(wxFrame* screen)
{
	wxButton* six = Generate(screen, SIX, "6", wxPoint(130, 420), wxSize(50, 50));
	return six;
}

wxButton* ButtonFactory::CreateSevenButton(wxFrame* screen)
{
	wxButton* seven = Generate(screen, SEVEN, "7", wxPoint(10, 490), wxSize(50, 50));
	return seven;
}

wxButton* ButtonFactory::CreateEightButton(wxFrame* screen)
{
	wxButton* eight = Generate(screen, EIGHT, "8", wxPoint(70, 490), wxSize(50, 50));
	return eight;
}

wxButton* ButtonFactory::CreateNineButton(wxFrame* screen)
{
	wxButton* nine = Generate(screen, NINE, "9", wxPoint(130, 490), wxSize(50, 50));

	return nine;
}




wxButton* ButtonFactory::CreateCosButton(wxFrame* screen)
{
	wxButton* cos = Generate(screen, COS, "cos", wxPoint(10, 165), wxSize(50, 50));
	return cos;
}

wxButton* ButtonFactory::CreateSinButton(wxFrame* screen)
{
	wxButton* sin = Generate(screen, SIN, "sin", wxPoint(10, 220), wxSize(50, 50));
	return sin;
}

wxButton* ButtonFactory::CreateTanButton(wxFrame* screen)
{
	wxButton* tan = Generate(screen, TAN, "tan", wxPoint(10, 275), wxSize(50, 50));
	return tan;
}



wxButton* ButtonFactory::CreateModButton(wxFrame* screen)
{
	wxButton* mod = Generate(screen, MOD, "%", wxPoint(70, 165), wxSize(50, 50));
	return mod;
}

wxButton* ButtonFactory::CreateMultiplicationButton(wxFrame* screen)
{
	wxButton* multiplication = Generate(screen, MULT, "*", wxPoint(70, 220), wxSize(50, 50));
	return multiplication;
}

wxButton* ButtonFactory::CreateDivisionButton(wxFrame* screen)
{
	wxButton* divide = Generate(screen, DIVI, "/", wxPoint(70, 275), wxSize(50, 50));
	return divide;
}



wxButton* ButtonFactory::CreateAddButton(wxFrame* screen)
{
	wxButton* add = Generate(screen, ADD, "+", wxPoint(130, 165), wxSize(50, 50));
	return add;
}

wxButton* ButtonFactory::CreateSubtractionButton(wxFrame* screen)
{
	wxButton* subtraction = Generate(screen, SUBTRACT, "-", wxPoint(130, 220), wxSize(50, 50));
	return subtraction;
}

wxButton* ButtonFactory::CreateNegativeButton(wxFrame* screen)
{
	wxButton* neg = Generate(screen, NEG, "(-N)", wxPoint(130, 275), wxSize(50, 50));
	return neg;
}



wxButton* ButtonFactory::CreateEqualButton(wxFrame* screen)
{
	wxButton* equals = Generate(screen, EQUAL, "=", wxPoint(240, 450), wxSize(80, 60));
	return equals;
}

wxButton* ButtonFactory::CreateBackSpaceButton(wxFrame* screen)
{
	wxButton* bkSpc = Generate(screen, BKSPC, "BKSPC", wxPoint(250, 220), wxSize(100, 50));
	return bkSpc;
}

wxButton* ButtonFactory::CreateClearButton(wxFrame* screen)
{
	wxButton* clear = Generate(screen, CLEAR, "CLR", wxPoint(250, 275), wxSize(100, 50));
	return clear;
}



wxButton* ButtonFactory::CreateDeciDotButton(wxFrame* screen)
{
	wxButton* decidot = Generate(screen, DECIMALDOT, ".", wxPoint(130, 550), wxSize(50, 50));
	return decidot;
}
