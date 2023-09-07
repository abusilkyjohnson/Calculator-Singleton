#include "Window.h"

Window::Window() : wxFrame(nullptr, 100, "Abu Calculator", wxPoint(400, 200), wxSize(385, 650))//null is the parent
{
	_textbox = new wxTextCtrl(this, 101, "", wxPoint(10, 10), wxSize(350, 150));//this is the parent since the window is an invoking object


	_zeroButt = new wxButton(this, ZERO, "0", wxPoint(70, 550), wxSize(50, 50));
	_oneButt = new wxButton(this, ONE, "1", wxPoint(10, 350), wxSize(50, 50));
	_twoButt = new wxButton(this, TWO, "2", wxPoint(70, 350), wxSize(50, 50));
	_threeButt = new wxButton(this, THREE, "3", wxPoint(130, 350), wxSize(50, 50));
	_fourButt = new wxButton(this, FOUR, "4", wxPoint(10, 420), wxSize(50, 50));
	_fiveButt = new wxButton(this, FIVE, "5", wxPoint(70, 420), wxSize(50, 50));
	_sixButt = new wxButton(this, SIX, "6", wxPoint(130, 420), wxSize(50, 50));
	_sevenButt = new wxButton(this, SEVEN, "7", wxPoint(10, 490), wxSize(50, 50));
	_eightButt = new wxButton(this, EIGHT, "8", wxPoint(70, 490), wxSize(50, 50));
	_nineButt = new wxButton(this, NINE, "9", wxPoint(130, 490), wxSize(50, 50));

	_cosButt = new wxButton(this, ZERO, "cos", wxPoint(10, 165), wxSize(50, 50));
	_sinButt = new wxButton(this, ONE, "sin", wxPoint(10, 220), wxSize(50, 50));
	_tanButt = new wxButton(this, TWO, "tan", wxPoint(10, 275), wxSize(50, 50));

	_modButt = new wxButton(this, ZERO, "%M", wxPoint(70, 165), wxSize(50, 50));
	_multiplicationButt = new wxButton(this, ONE, "*", wxPoint(70, 220), wxSize(50, 50));
	_divisionButt = new wxButton(this, TWO, "/", wxPoint(70, 275), wxSize(50, 50));
	
	_additionButt = new wxButton(this, ZERO, "+", wxPoint(130, 165), wxSize(50, 50));
	_subtractionButt = new wxButton(this, ONE, "-", wxPoint(130, 220), wxSize(50, 50));
	_negativeButt = new wxButton(this, TWO, "-N", wxPoint(130, 275), wxSize(50, 50));

	_equalsButt = new wxButton(this, ZERO, "=", wxPoint(240, 450), wxSize(80, 60));
	_backSpaceButt = new wxButton(this, ONE, "BKSPC", wxPoint(250, 220), wxSize(100, 50));
	_clearButt = new wxButton(this, TWO, "CLR", wxPoint(250, 275), wxSize(100, 50));

}

