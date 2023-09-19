#pragma once
#include "wx/wx.h"
class Window;
class ButtonFactory
{



public:
	static wxButton* Generate(wxWindow* parent, int ID, const wxString& label,
		const wxPoint& position, const wxSize& size);


	static wxTextCtrl* CreateTextBox(wxFrame* screen);

	static wxButton* CreateZeroButton(wxFrame* screen);
	static wxButton* CreateOneButton(wxFrame* screen);
	static wxButton* CreateTwoButton(wxFrame* screen);
	static wxButton* CreateThreeButton(wxFrame* screen);
	static wxButton* CreateFourButton(wxFrame* screen);
	static wxButton* CreateFiveButton(wxFrame* screen);
	static wxButton* CreateSixButton(wxFrame* screen);
	static wxButton* CreateSevenButton(wxFrame* screen);
	static wxButton* CreateEightButton(wxFrame* screen);
	static wxButton* CreateNineButton(wxFrame* screen);
	
	static wxButton* CreateCosButton(wxFrame* screen);
	static wxButton* CreateSinButton(wxFrame* screen);
	static wxButton* CreateTanButton(wxFrame* screen);


	static wxButton* CreateModButton(wxFrame* screen);
	static wxButton* CreateMultiplicationButton(wxFrame* screen);
	static wxButton* CreateDivisionButton(wxFrame* screen);


	static wxButton* CreateAddButton(wxFrame* screen);
	static wxButton* CreateSubtractionButton(wxFrame* screen);
	static wxButton* CreateNegativeButton(wxFrame* screen);
	
	
	static wxButton* CreateEqualButton(wxFrame* screen);
	static wxButton* CreateBackSpaceButton(wxFrame* screen);
	static wxButton* CreateClearButton(wxFrame* screen);

	static wxButton* CreateDeciDotButton(wxFrame* screen);



};

