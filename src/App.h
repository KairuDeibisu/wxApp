#pragma once

#include <wx/wx.h>

namespace Program {

    class App: public wxApp
    {
    public:
        virtual bool OnInit();
    };

}

