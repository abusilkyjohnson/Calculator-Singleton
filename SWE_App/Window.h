#pragma once
#include "wx/wx.h"

class Window : public wxFrame
{
	wxTextCtrl* _textbox = nullptr;

	wxButton* _zeroButt = nullptr;
	wxButton* _oneButt = nullptr;
	wxButton* _twoButt = nullptr;
	wxButton* _threeButt = nullptr;
	wxButton* _fourButt = nullptr;
	wxButton* _fiveButt = nullptr;
	wxButton* _sixButt = nullptr;
	wxButton* _sevenButt = nullptr;
	wxButton* _eightButt = nullptr;
	wxButton* _nineButt = nullptr;

	wxButton* _cosButt = nullptr;
	wxButton* _sinButt = nullptr;
	wxButton* _tanButt = nullptr;

	wxButton* _modButt = nullptr;
	wxButton* _multiplicationButt = nullptr;
	wxButton* _divisionButt = nullptr;

	wxButton* _additionButt = nullptr;
	wxButton* _subtractionButt = nullptr;
	wxButton* _negativeButt = nullptr;

	wxButton* _equalsButt = nullptr;
	wxButton* _backSpaceButt = nullptr;
	wxButton* _clearButt = nullptr;

	

public:
	Window();

};

