#include "MainCalculator.h"
#include "Window.h"
wxIMPLEMENT_APP(MainCalculator);

bool MainCalculator::OnInit()
{

    _window = new Window();
    _window->Show();
    return true;
}
