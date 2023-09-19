#include "ButtonFactory.h"
#include "Window.h"

wxButton* ButtonFactory::Generate(wxWindow* parent, int ID, const wxString& label,
	const wxPoint& position, const wxSize& size)
{
	wxButton* button = new wxButton(parent, ID, label, position, size);
	return button;
	
}

wxButton* ButtonFactory::CreateZeroButton(wxFrame* screen)
{
	return Generate(screen, ZERO, "0", wxPoint(70, 550), wxSize(50, 50));
}
