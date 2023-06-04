//
// Created by kyled on 6/4/2023.
//

#include "MainFrame.h"
#include <wx/gdicmn.h>
#include <wx/sizer.h>

namespace Program {
    MainFrame::MainFrame(const wxString &title, const wxPoint &pos, const wxSize &size)
            : wxFrame(nullptr, wxID_ANY, title, pos, size)
    {
        auto *pTop = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxSize(200, 100));
        pTop->SetBackgroundColour(wxColour(100, 100, 200));

        auto *pBottom = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxSize(200, 100));
        pBottom->SetBackgroundColour(wxColour(100, 200, 100));

        auto *pBottomRight = new wxPanel(pBottom, wxID_ANY, wxDefaultPosition, wxSize(100, 100));
        pBottomRight->SetBackgroundColour(wxColour(200, 200, 100));

        auto *vBoxTop = new wxBoxSizer(wxVERTICAL);
        vBoxTop->Add(pTop, 1, wxEXPAND);
        vBoxTop->Add(pBottom, 1, wxEXPAND);

        auto *hBoxBottom = new wxBoxSizer(wxVERTICAL);
        hBoxBottom->Add(pBottomRight, 1, wxALIGN_RIGHT);

        pBottom->SetSizer(hBoxBottom);


        this->SetSizerAndFit(vBoxTop);
    }
}

