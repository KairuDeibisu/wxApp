#include "App.h"
#include "MainFrame.h"
#include <wx/wx.h>

#ifdef __NT__
    #include <windows.h>
#endif

namespace Program {

    bool App::OnInit() {

        #ifdef __NT__
            SetProcessDPIAware();
        #else
            App::SetUseBestVisual(true);
        #endif

        const auto defaultSizeWithoutDPI = wxDefaultSize;
        auto *frame = new MainFrame("Hello World", wxDefaultPosition, defaultSizeWithoutDPI);
        const auto defaultSizeWithDPI = frame->FromDIP(defaultSizeWithoutDPI);
        frame->SetClientSize(defaultSizeWithDPI);
        frame->Show(true);
        return true;
    }
}

wxIMPLEMENT_APP(Program::App);
