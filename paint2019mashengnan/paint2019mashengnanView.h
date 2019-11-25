// paint2019mashengnanView.h : interface of the CPaint2019mashengnanView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_PAINT2019MASHENGNANVIEW_H__5523B8ED_443D_4115_A3B9_E708303EEE16__INCLUDED_)
#define AFX_PAINT2019MASHENGNANVIEW_H__5523B8ED_443D_4115_A3B9_E708303EEE16__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CPaint2019mashengnanView : public CView
{
protected: // create from serialization only
	CPaint2019mashengnanView();
	DECLARE_DYNCREATE(CPaint2019mashengnanView)

// Attributes
public:
	CPaint2019mashengnanDoc* GetDocument();
	bool m_click;
	CPoint m_point;
		// 鼠标左键点击次数
	bool nClick;
	// 绘图类型
	int flag;
	CPoint m_Start;
	CPoint m_End;

// Operations
public:
	void DrawLine(bool isRubber, CPoint ptStart, CPoint ptEnd);
	void DrawCircle(bool isRubber, CPoint ptCenter, CPoint ptOnCircle);
	void DrawRect(bool isRubber, CPoint ptUL, CPoint ptLR);
	void DrawEllipse(bool isRubber, CPoint ptUL, CPoint ptLR);
// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CPaint2019mashengnanView)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CPaint2019mashengnanView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CPaint2019mashengnanView)
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnSize(UINT nType, int cx, int cy);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in paint2019mashengnanView.cpp
inline CPaint2019mashengnanDoc* CPaint2019mashengnanView::GetDocument()
   { return (CPaint2019mashengnanDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_PAINT2019MASHENGNANVIEW_H__5523B8ED_443D_4115_A3B9_E708303EEE16__INCLUDED_)
