// paint2019mashengnan.h : main header file for the PAINT2019MASHENGNAN application
//

#if !defined(AFX_PAINT2019MASHENGNAN_H__D56DD254_AC57_4494_BBE6_18463E504748__INCLUDED_)
#define AFX_PAINT2019MASHENGNAN_H__D56DD254_AC57_4494_BBE6_18463E504748__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CPaint2019mashengnanApp:
// See paint2019mashengnan.cpp for the implementation of this class
//

class CPaint2019mashengnanApp : public CWinApp
{
public:
	CPaint2019mashengnanApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CPaint2019mashengnanApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CPaint2019mashengnanApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_PAINT2019MASHENGNAN_H__D56DD254_AC57_4494_BBE6_18463E504748__INCLUDED_)
