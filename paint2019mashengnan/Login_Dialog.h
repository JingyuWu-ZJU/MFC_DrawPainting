#if !defined(AFX_LOGIN_DIALOG_H__1A5730B1_926C_41AE_BEA0_0D43093704D2__INCLUDED_)
#define AFX_LOGIN_DIALOG_H__1A5730B1_926C_41AE_BEA0_0D43093704D2__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Login_Dialog.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// Login_Dialog dialog

class Login_Dialog : public CDialog
{
// Construction
public:
	Login_Dialog(CWnd* pParent = NULL);   // standard constructor
	CString username;
	CString password;
// Dialog Data
	//{{AFX_DATA(Login_Dialog)
	enum { IDD = IDD_LOGIN };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(Login_Dialog)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(Login_Dialog)
	virtual void OnCancel();
	virtual void OnOK();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_LOGIN_DIALOG_H__1A5730B1_926C_41AE_BEA0_0D43093704D2__INCLUDED_)
