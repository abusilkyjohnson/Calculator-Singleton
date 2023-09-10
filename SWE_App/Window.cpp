#include "Window.h"
wxBEGIN_EVENT_TABLE(Window, wxFrame)
EVT_BUTTON(wxID_ANY, Window::OnButtonClick)//we could specified the button id but instead used any in the () the afterwards EVT relates to the click which rn we have wx button
wxEND_EVENT_TABLE()

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


	_cosButt = new wxButton(this, COS, "cos", wxPoint(10, 165), wxSize(50, 50));
	_sinButt = new wxButton(this, SIN, "sin", wxPoint(10, 220), wxSize(50, 50));
	_tanButt = new wxButton(this, TAN, "tan", wxPoint(10, 275), wxSize(50, 50));
	_cosButt->Disable();
	_sinButt->Disable();
	_tanButt->Disable();

	_modButt = new wxButton(this, MOD, "%M", wxPoint(70, 165), wxSize(50, 50));
	_multiplicationButt = new wxButton(this, MULT, "*", wxPoint(70, 220), wxSize(50, 50));
	_divisionButt = new wxButton(this, DIVI, "/", wxPoint(70, 275), wxSize(50, 50));
	
	_additionButt = new wxButton(this, ADD, "+", wxPoint(130, 165), wxSize(50, 50));
	_subtractionButt = new wxButton(this, SUBTRACT, "-", wxPoint(130, 220), wxSize(50, 50));
	_negativeButt = new wxButton(this, NEG, "(-N)", wxPoint(130, 275), wxSize(50, 50));

	_equalsButt = new wxButton(this, EQUAL, "=", wxPoint(240, 450), wxSize(80, 60));
	_backSpaceButt = new wxButton(this, BKSPC, "BKSPC", wxPoint(250, 220), wxSize(100, 50));
	_clearButt = new wxButton(this, CLEAR, "CLR", wxPoint(250, 275), wxSize(100, 50));



}

void Window::OnButtonClick(wxCommandEvent& evt)
{
	int num;
	
	wxObject* invoker = evt.GetEventObject();
	wxButton* evtButton = static_cast<wxButton*>(invoker);
	if (evtButton->GetId() <= 10)
	{
		num = evtButton->GetId();
	}
	_textbox->AppendText(evtButton->GetLabel());
	if (evtButton->GetId() == 21)
	{
		_textbox->Clear();
	}
}

