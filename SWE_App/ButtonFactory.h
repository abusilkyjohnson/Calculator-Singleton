#pragma once
#include "wx/wx.h"
class Window;
class ButtonFactory
{



public:
	wxButton* Generate(wxWindow* parent, int ID, const wxString& label,
		const wxPoint& position, const wxSize& size);

	wxButton* CreateZeroButton(wxFrame* screen);

};

