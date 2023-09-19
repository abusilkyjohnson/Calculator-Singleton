#include "Window.h"
#include "ButtonFactory.h"
#include <wx/tokenzr.h>


wxBEGIN_EVENT_TABLE(Window, wxFrame)
EVT_BUTTON(wxID_ANY, Window::OnButtonClick)//we could specified the button id but instead used any in the () the afterwards EVT relates to the click which rn we have wx button
wxEND_EVENT_TABLE()

Window::Window() : wxFrame(nullptr, 100, "Abu Calculator", wxPoint(400, 200), wxSize(385, 650))//null is the parent
{
	_textbox = new wxTextCtrl(this, 101, "", wxPoint(10, 10), wxSize(350, 150));//this is the parent since the window is an invoking object


	//_zeroButt = new wxButton(this, ZERO, "0", wxPoint(70, 550), wxSize(50, 50));
	_zeroButt = ButtonFactory::CreateZeroButton(this);
	_oneButt = ButtonFactory::CreateOneButton(this);
	_twoButt = ButtonFactory::CreateTwoButton(this);
	_threeButt = ButtonFactory::CreateThreeButton(this);
	_fourButt = ButtonFactory::CreateFourButton(this);
	_fiveButt = ButtonFactory::CreateFiveButton(this);
	_sixButt = ButtonFactory::CreateSixButton(this);
	_sevenButt = ButtonFactory::CreateSevenButton(this);
	_eightButt = ButtonFactory::CreateEightButton(this);
	_nineButt = ButtonFactory::CreateNineButton(this);


	_cosButt = ButtonFactory::CreateCosButton(this);
	_sinButt = ButtonFactory::CreateSinButton(this);
	_tanButt = ButtonFactory::CreateTanButton(this);
	_cosButt->Disable();
	_sinButt->Disable();
	_tanButt->Disable();

	_modButt = new wxButton(this, MOD, "%", wxPoint(70, 165), wxSize(50, 50));
	_multiplicationButt = new wxButton(this, MULT, "*", wxPoint(70, 220), wxSize(50, 50));
	_divisionButt = new wxButton(this, DIVI, "/", wxPoint(70, 275), wxSize(50, 50));
	
	_additionButt = new wxButton(this, ADD, "+", wxPoint(130, 165), wxSize(50, 50));
	_subtractionButt = new wxButton(this, SUBTRACT, "-", wxPoint(130, 220), wxSize(50, 50));
	_negativeButt = new wxButton(this, NEG, "(-N)", wxPoint(130, 275), wxSize(50, 50));
	_negativeButt->Disable();

	_equalsButt = new wxButton(this, EQUAL, "=", wxPoint(240, 450), wxSize(80, 60));
	_backSpaceButt = new wxButton(this, BKSPC, "BKSPC", wxPoint(250, 220), wxSize(100, 50));
	_clearButt = new wxButton(this, CLEAR, "CLR", wxPoint(250, 275), wxSize(100, 50));

	_dotFloatButt = new wxButton(this, DECIMALDOT, ".", wxPoint(130, 550), wxSize(50, 50));

	
}

void Window::OnButtonClick(wxCommandEvent& evt)
{
	double rightNum, leftNum;
	double num, secondNum;
	double result;
	wxString rightString, leftString, resultString;
	wxObject* invoker = evt.GetEventObject();
	wxButton* evtButton = static_cast<wxButton*>(invoker);
	if(evtButton->GetId() == EQUAL)
	{
		//not sure on how to try caTCH commented for final commit
			wxStringTokenizer tokenizer(_textbox->GetValue(), "%" "*" "/" "+" "-");
			leftString = (tokenizer.GetNextToken());
			leftNum = wxAtof(leftString);
			leftNum = leftNum;
			 if (tokenizer.HasMoreTokens() == true)
			{
				rightString = tokenizer.GetString();
				rightNum = wxAtof(rightString);
				rightNum = rightNum;
			}

			if (tokenizer.GetLastDelimiter() == '+')
			{
				result = leftNum + rightNum;
				result = result;
				resultString = wxString::Format(wxT("%f"), result);
				_textbox->Clear();
				_textbox->AppendText(resultString);

			}
			else if (tokenizer.GetLastDelimiter() == '-')
			{
				result = leftNum - rightNum;
				result = result;
				resultString = wxString::Format(wxT("%f"), result);
				_textbox->Clear();
				_textbox->AppendText(resultString);

			}
			else if (tokenizer.GetLastDelimiter() == '/')
			{
				result = leftNum / rightNum;
				result = result;
				resultString = wxString::Format(wxT("%f"), result);
				_textbox->Clear();
				_textbox->AppendText(resultString);

			}
			else if (tokenizer.GetLastDelimiter() == '*')
			{
				result = leftNum * rightNum;
				result = result;
				resultString = wxString::Format(wxT("%f"), result);
				_textbox->Clear();
				_textbox->AppendText(resultString);

			}
			else if (tokenizer.GetLastDelimiter() == '%')
			{
				result = (int)leftNum % (int)rightNum;
				result = result;
				resultString = wxString::Format(wxT("%f"), result);
				_textbox->Clear();
				_textbox->AppendText(resultString);
				
			}
	}



	if (evtButton->GetId() == BKSPC)
	{
		wxString toDelete = _textbox->GetValue().RemoveLast();
		_textbox->Clear();
		_textbox->AppendText(toDelete);
	}
	if(evtButton->GetId() != BKSPC && evtButton->GetId() != EQUAL)//controls all my other label show but back space
	{
		_textbox->AppendText(evtButton->GetLabel());
	}
	if (evtButton->GetId() == CLEAR)
	{
		_textbox->Clear();
		
	}
}

