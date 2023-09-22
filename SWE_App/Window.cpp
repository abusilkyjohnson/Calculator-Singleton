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
	//std::vector<double> numHolder;
	double rightNum = 0, leftNum = 0;
	//double num, secondNum;
	//double result;
	wxObject* invoker = evt.GetEventObject();
	wxButton* evtButton = static_cast<wxButton*>(invoker);
	wxStringTokenizer tokenizer(_textbox->GetValue(), "%" "*" "/" "+" "-");
	wxString leftS = tokenizer.GetNextToken();
	if (evtButton->GetId() == EQUAL)
	{

		/*if (_textbox->GetValue().empty() == false)
		{

			for (int i = 0; i <= numHolder.size(); i++)
			{

			}
		}*/

		if (tokenizer.GetLastDelimiter() == '+')
		{
			double answerHolder = CalculatorProcessor::GetInstance()->CalculationAdd(leftNum, rightNum, _textbox->GetValue());
			_textbox->Clear();
			wxString resultString = wxString::Format(wxT("%f"), answerHolder);;
			_textbox->AppendText(resultString);
			
		}
		else if (tokenizer.GetLastDelimiter() == '-')
		{
			double answerHolder = CalculatorProcessor::GetInstance()->CalculationSubtract(leftNum, rightNum, _textbox->GetValue());
			_textbox->Clear();
			wxString resultString = wxString::Format(wxT("%f"), answerHolder);;
			_textbox->AppendText(resultString);
			
		}
		else if (tokenizer.GetLastDelimiter() == '/')
		{
			double answerHolder = CalculatorProcessor::GetInstance()->Calculationdivide(leftNum, rightNum, _textbox->GetValue());
			_textbox->Clear();
			wxString resultString = wxString::Format(wxT("%f"), answerHolder);;
			_textbox->AppendText(resultString);

		}
		else if (tokenizer.GetLastDelimiter() == '*')
		{
			double answerHolder = CalculatorProcessor::GetInstance()->CalculationMultiply(leftNum, rightNum, _textbox->GetValue());
			_textbox->Clear();
			wxString resultString = wxString::Format(wxT("%f"), answerHolder);;
			_textbox->AppendText(resultString);

		}
		else if (tokenizer.GetLastDelimiter() == '%')
		{
			double answerHolder = CalculatorProcessor::GetInstance()->CalculationMod(leftNum, rightNum, _textbox->GetValue());
			_textbox->Clear();
			wxString resultString = wxString::Format(wxT("%f"), answerHolder);;
			_textbox->AppendText(resultString);

		}

	}



	if (evtButton->GetId() == BKSPC)
	{
		wxString toDelete = _textbox->GetValue().RemoveLast();
		_textbox->Clear();
		_textbox->AppendText(toDelete);
	}
	 else if (evtButton->GetId() == COS)
	{
		double answerHolder = CalculatorProcessor::GetInstance()->CalculationCos(leftNum, _textbox->GetValue());
		_textbox->Clear();
		wxString resultString = wxString::Format(wxT("%f"), answerHolder);;
		_textbox->AppendText(resultString);

	}
	else if (evtButton->GetId() == SIN)
	{
		double answerHolder = CalculatorProcessor::GetInstance()->CalculationSin(leftNum, _textbox->GetValue());
		_textbox->Clear();
		wxString resultString = wxString::Format(wxT("%f"), answerHolder);;
		_textbox->AppendText(resultString);

	}
	else if (evtButton->GetId() == TAN)
	{
		double answerHolder = CalculatorProcessor::GetInstance()->CalculationTan(leftNum, _textbox->GetValue());
		_textbox->Clear();
		wxString resultString = wxString::Format(wxT("%f"), answerHolder);;
		_textbox->AppendText(resultString);

	}
	else if (evtButton->GetId() != BKSPC && evtButton->GetId() != EQUAL && evtButton->GetId() != COS && evtButton->GetId() != TAN && evtButton->GetId() != SIN)//controls all my other label show but back space
	{
		_textbox->AppendText(evtButton->GetLabel());
	}
	 if (evtButton->GetId() == CLEAR)
	{
		_textbox->Clear();

	}
}

