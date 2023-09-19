#pragma once
#include "wx/wx.h"
class Window;
class ButtonFactory
{



public:
	static wxButton* Generate(wxWindow* parent, int ID, const wxString& label,
		const wxPoint& position, const wxSize& size);

	static wxButton* CreateZeroButton();

};

