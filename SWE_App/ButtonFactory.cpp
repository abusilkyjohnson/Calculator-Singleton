#include "ButtonFactory.h"
#include "Window.h"

wxButton* ButtonFactory::GenerateButtons(wxWindow* parent, int ID, const wxString& name, const wxPoint& position, const wxSize& size, bool Enabled)
{
	return nullptr;
}

void ButtonFactory::SetOne(wxFrame* parent)
{
	_oneButt = new wxButton(parent, ONE, "1", wxPoint(10, 350), wxSize(50, 50));
}

wxButton* ButtonFactory::GetOne()
{
	return _oneButt;
}
