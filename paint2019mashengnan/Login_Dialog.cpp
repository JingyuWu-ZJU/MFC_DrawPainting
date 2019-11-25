// Login_Dialog.cpp : implementation file
//

#include "stdafx.h"
#include "paint2019mashengnan.h"
#include "Login_Dialog.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// Login_Dialog dialog


Login_Dialog::Login_Dialog(CWnd* pParent /*=NULL*/)
	: CDialog(Login_Dialog::IDD, pParent)
{
	//{{AFX_DATA_INIT(Login_Dialog)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
	username = "";
	password = "";
}


void Login_Dialog::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(Login_Dialog)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(Login_Dialog, CDialog)
	//{{AFX_MSG_MAP(Login_Dialog)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// Login_Dialog message handlers

void Login_Dialog::OnCancel() 
{
	// TODO: Add extra cleanup here
	
	CDialog::OnCancel();
}

void Login_Dialog::OnOK() 
{
	// TODO: Add extra validation here
	GetDlgItem(IDC_USERNAME)->GetWindowText(username);
	GetDlgItem(IDC_PASSWORD)->GetWindowText(password);
	CDialog::OnOK();
}
