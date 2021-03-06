///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Sep  8 2010)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "wx/wxprec.h"

#ifdef __BORLANDC__
#pragma hdrstop
#endif //__BORLANDC__

#ifndef WX_PRECOMP
#include <wx/wx.h>
#endif //WX_PRECOMP

#include "GUIDialog.h"

///////////////////////////////////////////////////////////////////////////

GUIDialog::GUIDialog( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer3;
	bSizer3 = new wxBoxSizer( wxVERTICAL );
	
	m_panel1 = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxSize( -1,-1 ), wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer4;
	bSizer4 = new wxBoxSizer( wxVERTICAL );
	
	top_image = new wxStaticBitmap( m_panel1, wxID_ANY, wxBitmap( wxT("Imgs/logo_fit.bmp"), wxBITMAP_TYPE_ANY ), wxPoint( -1,-1 ), wxSize( -1,-1 ), 0 );
	bSizer4->Add( top_image, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	m_panel1->SetSizer( bSizer4 );
	m_panel1->Layout();
	bSizer4->Fit( m_panel1 );
	bSizer3->Add( m_panel1, 0, wxEXPAND | wxALL, 5 );
	
	wxBoxSizer* bSizer6;
	bSizer6 = new wxBoxSizer( wxHORIZONTAL );
	
	m_Canvas = new wxScrolledWindow( this, wxID_ANY, wxDefaultPosition, wxSize( 700,560 ), wxHSCROLL|wxVSCROLL );
	m_Canvas->SetScrollRate( 5, 5 );
	m_Canvas->SetMinSize( wxSize( 700,560 ) );
	m_Canvas->SetMaxSize( wxSize( 700,560 ) );
	
	bSizer6->Add( m_Canvas, 0, wxALL, 5 );
	
	m_button2 = new wxButton( this, wxID_ANY, wxT("CreateMapTest"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer6->Add( m_button2, 0, wxALL, 5 );
	
	m_buttonExplode = new wxButton( this, wxID_ANY, wxT("Explode"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer6->Add( m_buttonExplode, 0, wxALL, 5 );
	
	bSizer3->Add( bSizer6, 5, wxEXPAND, 5 );
	
	bSizer1->Add( bSizer3, 2, wxEXPAND, 5 );
	
	this->SetSizer( bSizer1 );
	this->Layout();
	
	// Connect Events
	this->Connect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( GUIDialog::OnClose ) );
	m_Canvas->Connect( wxEVT_KEY_DOWN, wxKeyEventHandler( GUIDialog::key_function ), NULL, this );
	m_Canvas->Connect( wxEVT_PAINT, wxPaintEventHandler( GUIDialog::m_CanvasOnPaint ), NULL, this );
	m_button2->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GUIDialog::m_button2OnButtonClick ), NULL, this );
	m_buttonExplode->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GUIDialog::m_buttonExplodeOnButtonClick ), NULL, this );
}

GUIDialog::~GUIDialog()
{
	// Disconnect Events
	this->Disconnect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( GUIDialog::OnClose ) );
	m_Canvas->Disconnect( wxEVT_KEY_DOWN, wxKeyEventHandler( GUIDialog::key_function ), NULL, this );
	m_Canvas->Disconnect( wxEVT_PAINT, wxPaintEventHandler( GUIDialog::m_CanvasOnPaint ), NULL, this );
	m_button2->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GUIDialog::m_button2OnButtonClick ), NULL, this );
	m_buttonExplode->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GUIDialog::m_buttonExplodeOnButtonClick ), NULL, this );
	
}
