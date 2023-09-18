#pragma once
#include "wx/wx.h"
class Window;
class ButtonFactory
{
	
	wxButton* _oneButt = nullptr;


public:
	static wxButton* GenerateButtons(wxWindow* parent, int ID, const wxString& name,const wxPoint& position, const wxSize& size, bool Enabled = true);

	void SetOne(wxFrame* parent);

	wxButton* GetOne();
};

