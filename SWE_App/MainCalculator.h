#pragma once
#include "wx/wx.h"//abu always include first to avoid error
#include "Window.h"
class MainCalculator : public wxApp
{
	Window* _window = nullptr;



public :
	
	bool OnInit(); // Must be spelled exactly as this since function already exist
};

