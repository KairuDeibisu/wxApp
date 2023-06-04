//
// Created by kyled on 6/4/2023.
//

#include "MainFrame.h"
#include <wx/splitter.h>

namespace Program {
MainFrame::MainFrame(const wxString &title, const wxPoint &pos,
                     const wxSize &size)
    : wxFrame(nullptr, wxID_ANY, title, pos, size) {
  auto *splitter =
      new wxSplitterWindow(this, wxID_ANY, wxDefaultPosition, wxDefaultSize,
                           wxSP_BORDER | wxSP_LIVE_UPDATE);

  auto *rightSplitter =
      new wxSplitterWindow(splitter, wxID_ANY, wxDefaultPosition, wxDefaultSize,
                           wxSP_BORDER | wxSP_LIVE_UPDATE);

  auto *left = new wxPanel(splitter, wxID_ANY);
  auto *right = new wxPanel(rightSplitter, wxID_ANY);
  auto *bottom = new wxPanel(rightSplitter, wxID_ANY);

  left->SetBackgroundColour(wxColour(200, 100, 100));
  right->SetBackgroundColour(wxColour(100, 200, 100));
  bottom->SetBackgroundColour(wxColour(200, 200, 100));

  rightSplitter->SetMinimumPaneSize(100);
  rightSplitter->SplitHorizontally(right, bottom);

  splitter->SetMinimumPaneSize(200);

  splitter->SplitVertically(left, rightSplitter);
}
} // namespace Program
