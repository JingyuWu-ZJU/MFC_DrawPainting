// paint2019mashengnanDoc.h : interface of the CPaint2019mashengnanDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_PAINT2019MASHENGNANDOC_H__AFF67CBD_CA80_49CD_9CF9_6411F71B2A7B__INCLUDED_)
#define AFX_PAINT2019MASHENGNANDOC_H__AFF67CBD_CA80_49CD_9CF9_6411F71B2A7B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CPaint2019mashengnanDoc : public CDocument
{
protected: // create from serialization only
	CPaint2019mashengnanDoc();
	DECLARE_DYNCREATE(CPaint2019mashengnanDoc)

// Attributes
public:
	int model;
	int color;
	int thickness;
	int wm_width;
	int wm_height;

// Operations
public:
	void SetTitle(LPCTSTR lpszTitle);
// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CPaint2019mashengnanDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CPaint2019mashengnanDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CPaint2019mashengnanDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_PAINT2019MASHENGNANDOC_H__AFF67CBD_CA80_49CD_9CF9_6411F71B2A7B__INCLUDED_)
