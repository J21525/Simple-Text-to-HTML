#include "Simple_Text_to_HTML.h"

Simple_Text_to_HTML::Simple_Text_to_HTML()
{
	CtrlLayout(*this, "Simple Text to HTML");
}

GUI_APP_MAIN
{
	
	Simple_Text_to_HTML().Run();
}
