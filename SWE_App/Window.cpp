#include "Window.h"
#include "ButtonFactory.h"
#include <wx/tokenzr.h>
#include "CalculatorProcessor.h"
#include "vector"


wxBEGIN_EVENT_TABLE(Window, wxFrame)
EVT_BUTTON(wxID_ANY, Window::OnButtonClick)//we could specified the button id but instead used any in the () the afterwards EVT relates to the click which rn we have wx button
wxEND_EVENT_TABLE()

Window::Window() : wxFrame(nullptr, 100, "Abu Calculator", wxPoint(400, 200), wxSize(385, 650))//null is the parent
{
	_textbox = ButtonFactory::CreateTextBox(this);


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

	_modButt = ButtonFactory::CreateModButton(this);
	_multiplicationButt = ButtonFactory::CreateMultiplicationButton(this);
	_divisionButt = ButtonFactory::CreateDivisionButton(this);

	_additionButt = ButtonFactory::CreateAddButton(this);
	_subtractionButt = ButtonFactory::CreateSubtractionButton(this);
	_negativeButt = ButtonFactory::CreateNegativeButton(this);
	_negativeButt->Disable();

	_equalsButt = ButtonFactory::CreateEqualButton(this);
	_backSpaceButt = ButtonFactory::CreateBackSpaceButton(this);
	_clearButt = ButtonFactory::CreateClearButton(this);

	_dotFloatButt = ButtonFactory::CreateDeciDotButton(this);


}

void Window::OnButtonClick(wxCommandEvent& evt)
{
	std::vector<double> NumHolder;
	double rightNum, leftNum;
	double num, secondNum;
	double result;
	wxString rightString, leftString, resultString;
	wxObject* invoker = evt.GetEventObject();
	wxButton* evtButton = static_cast<wxButton*>(invoker);
	if (evtButton->GetId() == EQUAL)
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
			/*for (int i = 0; i <= NumHolder.size(); i++)
			{
				rightString = tokenizer.GetString();
				num = wxAtof(rightString);
				num = CalculatorProcessor::GetInstance()->CalculationAdd(num);
				NumHolder.push_back(num);
			}*/
			//wxString abu = _textbox->GetValue();
			//CalculatorProcessor::GetInstance()->CalculationAdd(rightNum, _textbox);
			//_textbox->Clear();
			_textbox->AppendText(resultString = wxString::Format(wxT("%f"),
				CalculatorProcessor::GetInstance()->CalculationAdd(leftNum, rightNum, _textbox)));

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
	if (evtButton->GetId() != BKSPC && evtButton->GetId() != EQUAL)//controls all my other label show but back space
	{
		_textbox->AppendText(evtButton->GetLabel());
	}
	if (evtButton->GetId() == CLEAR)
	{
		_textbox->Clear();

	}
}

