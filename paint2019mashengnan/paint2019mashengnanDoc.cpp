// paint2019mashengnanDoc.cpp : implementation of the CPaint2019mashengnanDoc class
//

#include "stdafx.h"
#include "paint2019mashengnan.h"

#include "paint2019mashengnanDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CPaint2019mashengnanDoc

IMPLEMENT_DYNCREATE(CPaint2019mashengnanDoc, CDocument)

BEGIN_MESSAGE_MAP(CPaint2019mashengnanDoc, CDocument)
	//{{AFX_MSG_MAP(CPaint2019mashengnanDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CPaint2019mashengnanDoc construction/destruction

CPaint2019mashengnanDoc::CPaint2019mashengnanDoc()
{
	// TODO: add one-time construction code here
	model = 0;
	color = RGB(0,0,0);
	thickness = 0;
}

CPaint2019mashengnanDoc::~CPaint2019mashengnanDoc()
{
}

BOOL CPaint2019mashengnanDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}
void CPaint2019mashengnanDoc::SetTitle(LPCTSTR lpszTitle)
{
   CDocument::SetTitle("ÂíÊ¤éª");
}
/////////////////////////////////////////////////////////////////////////////
// CPaint2019mashengnanDoc serialization

void CPaint2019mashengnanDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}

/////////////////////////////////////////////////////////////////////////////
// CPaint2019mashengnanDoc diagnostics

#ifdef _DEBUG
void CPaint2019mashengnanDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CPaint2019mashengnanDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CPaint2019mashengnanDoc commands
