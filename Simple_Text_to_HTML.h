#ifndef _Simple_Text_to_HTML_Simple_Text_to_HTML_h
#define _Simple_Text_to_HTML_Simple_Text_to_HTML_h

#include <CtrlLib/CtrlLib.h>

using namespace Upp;

#define LAYOUTFILE <Simple_Text_to_HTML/Simple_Text_to_HTML.lay>
#include <CtrlCore/lay.h>

class Simple_Text_to_HTML : public WithSimple_Text_to_HTMLLayout<TopWindow> {
public:
	Simple_Text_to_HTML();
};

#endif
