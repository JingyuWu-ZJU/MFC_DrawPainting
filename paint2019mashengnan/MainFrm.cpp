// MainFrm.cpp : implementation of the CMainFrame class
//

#include "stdafx.h"
#include "paint2019mashengnan.h"
#include "paint2019mashengnanDoc.h"
#include "MainFrm.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMainFrame

IMPLEMENT_DYNCREATE(CMainFrame, CFrameWnd)

BEGIN_MESSAGE_MAP(CMainFrame, CFrameWnd)
	//{{AFX_MSG_MAP(CMainFrame)
	ON_WM_CREATE()
	ON_COMMAND(ID_PEN, OnPen)
	ON_COMMAND(ID_CIRCLE, OnCircle)
	ON_COMMAND(ID_TANGLE, OnTangle)
	ON_COMMAND(ID_LINE, OnLine)
	ON_COMMAND(ID_ELIPS, OnElips)
	ON_COMMAND(ID_BLACK, OnBlack)
	ON_COMMAND(ID_BLUE, OnBlue)
	ON_COMMAND(ID_GREEN, OnGreen)
	ON_COMMAND(ID_RED, OnRed)
	ON_COMMAND(ID_YELLOW, OnYellow)
	ON_COMMAND(ID_CRUDE, OnCrude)
	ON_COMMAND(ID_NORMAL, OnNormal)
	ON_COMMAND(ID_THIN, OnThin)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

static UINT indicators[] =
{
	ID_SEPARATOR,           // status line indicator
	ID_INDICATOR_CAPS,
	ID_INDICATOR_NUM,
	ID_INDICATOR_SCRL,
};

/////////////////////////////////////////////////////////////////////////////
// CMainFrame construction/destruction

CMainFrame::CMainFrame()
{
	// TODO: add member initialization code here
	
}

CMainFrame::~CMainFrame()
{
}

int CMainFrame::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CFrameWnd::OnCreate(lpCreateStruct) == -1)
		return -1;
	
	if (!m_wndToolBar.CreateEx(this, TBSTYLE_FLAT, WS_CHILD | WS_VISIBLE | CBRS_TOP
		| CBRS_GRIPPER | CBRS_TOOLTIPS | CBRS_FLYBY | CBRS_SIZE_DYNAMIC) ||
		!m_wndToolBar.LoadToolBar(IDR_MAINFRAME))
	{
		TRACE0("Failed to create toolbar\n");
		return -1;      // fail to create
	}

	if (!m_wndStatusBar.Create(this) ||
		!m_wndStatusBar.SetIndicators(indicators,
		  sizeof(indicators)/sizeof(UINT)))
	{
		TRACE0("Failed to create status bar\n");
		return -1;      // fail to create
	}

	// TODO: Delete these three lines if you don't want the toolbar to
	//  be dockable
	m_wndToolBar.EnableDocking(CBRS_ALIGN_ANY);
	EnableDocking(CBRS_ALIGN_ANY);
	DockControlBar(&m_wndToolBar);

	return 0;
}

BOOL CMainFrame::PreCreateWindow(CREATESTRUCT& cs)
{
	if( !CFrameWnd::PreCreateWindow(cs) )
		return FALSE;
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return TRUE;
}

/////////////////////////////////////////////////////////////////////////////
// CMainFrame diagnostics

#ifdef _DEBUG
void CMainFrame::AssertValid() const
{
	CFrameWnd::AssertValid();
}

void CMainFrame::Dump(CDumpContext& dc) const
{
	CFrameWnd::Dump(dc);
}

#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMainFrame message handlers


void CMainFrame::OnPen() 
{
	// TODO: Add your command handler code here
	CPaint2019mashengnanDoc* pDoc = (CPaint2019mashengnanDoc*) GetActiveDocument();
	pDoc->model = 0;
}

void CMainFrame::OnCircle() 
{
	// TODO: Add your command handler code here
	CPaint2019mashengnanDoc* pDoc = (CPaint2019mashengnanDoc*) GetActiveDocument();
	pDoc->model = 1;
}

void CMainFrame::OnTangle() 
{
	// TODO: Add your command handler code here
	CPaint2019mashengnanDoc* pDoc = (CPaint2019mashengnanDoc*) GetActiveDocument();
	pDoc->model = 2;
}

void CMainFrame::OnLine() 
{
	// TODO: Add your command handler code here
	CPaint2019mashengnanDoc* pDoc = (CPaint2019mashengnanDoc*) GetActiveDocument();
	pDoc->model = 3;
}

void CMainFrame::OnElips() 
{
	// TODO: Add your command handler code here
	CPaint2019mashengnanDoc* pDoc = (CPaint2019mashengnanDoc*) GetActiveDocument();
	pDoc->model = 4;
}

void CMainFrame::OnBlack() 
{
	// TODO: Add your command handler code here
	CPaint2019mashengnanDoc* pDoc = (CPaint2019mashengnanDoc*) GetActiveDocument();
	pDoc->color = RGB(0,0,0);
}

void CMainFrame::OnBlue() 
{
	// TODO: Add your command handler code here
	CPaint2019mashengnanDoc* pDoc = (CPaint2019mashengnanDoc*) GetActiveDocument();
	pDoc->color = RGB(0,0,255);
}

void CMainFrame::OnGreen() 
{
	// TODO: Add your command handler code here
	CPaint2019mashengnanDoc* pDoc = (CPaint2019mashengnanDoc*) GetActiveDocument();
	pDoc->color = RGB(0,255,0);
}

void CMainFrame::OnRed() 
{
	// TODO: Add your command handler code here
	CPaint2019mashengnanDoc* pDoc = (CPaint2019mashengnanDoc*) GetActiveDocument();
	pDoc->color = RGB(255,0,0);
}

void CMainFrame::OnYellow() 
{
	// TODO: Add your command handler code here
	CPaint2019mashengnanDoc* pDoc = (CPaint2019mashengnanDoc*) GetActiveDocument();
	pDoc->color = RGB(255,255,0);
}

void CMainFrame::OnCrude() 
{
	// TODO: Add your command handler code here
	CPaint2019mashengnanDoc* pDoc = (CPaint2019mashengnanDoc*) GetActiveDocument();
	pDoc->thickness = 5;
}

void CMainFrame::OnNormal() 
{
	// TODO: Add your command handler code here
	CPaint2019mashengnanDoc* pDoc = (CPaint2019mashengnanDoc*) GetActiveDocument();
	pDoc->thickness = 3;
}

void CMainFrame::OnThin() 
{
	// TODO: Add your command handler code here
	CPaint2019mashengnanDoc* pDoc = (CPaint2019mashengnanDoc*) GetActiveDocument();
	pDoc->thickness = 1;
}
