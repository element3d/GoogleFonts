#include "Application.h"
#include <e3/Element.h>
#include <e3/Text.h>
#include <GoogleFonts.h>

Application::Application(const std::string& applicationName, e3::EE3OS os, e3::EE3Target target, e3::Size2i windowSize, e3::Size2i resolution) 
	: ApplicationBase(applicationName, os, target, windowSize, resolution)
{
	e3::Element* pMainElement = new e3::Element();
	e3::Text* pText = new e3::Text();
	pText->SetText("Google fonts");
	pText->SetFontSize(18);
	pText->SetFont(GoogleFonts::Montserrat());
	pMainElement->AddElement(pText);
	PushElement(pMainElement);
}

void Application::OnResize(float width, float height)
{

}
