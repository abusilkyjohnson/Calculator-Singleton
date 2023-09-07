#include "Window.h"

Window::Window() : wxFrame(nullptr, 100, "Abu Calculator", wxPoint(400, 200), wxSize(400, 650))//null is the parent
{
	_textbox = new wxTextCtrl(this, 101, "", wxPoint(10, 10), wxSize(200, 30));//this is the parent since the window is an invoking object


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

}

