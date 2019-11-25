// paint2019mashengnanView.cpp : implementation of the CPaint2019mashengnanView class
//

#include "stdafx.h"
#include "paint2019mashengnan.h"
#include "math.h"
#include "paint2019mashengnanDoc.h"
#include "paint2019mashengnanView.h"
#include "MainFrm.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CPaint2019mashengnanView

IMPLEMENT_DYNCREATE(CPaint2019mashengnanView, CView)

BEGIN_MESSAGE_MAP(CPaint2019mashengnanView, CView)
	//{{AFX_MSG_MAP(CPaint2019mashengnanView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
	ON_WM_SIZE()
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CPaint2019mashengnanView construction/destruction

CPaint2019mashengnanView::CPaint2019mashengnanView()
{
	// TODO: add construction code here

}

CPaint2019mashengnanView::~CPaint2019mashengnanView()
{
}

BOOL CPaint2019mashengnanView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CPaint2019mashengnanView drawing

void CPaint2019mashengnanView::OnDraw(CDC* pDC)
{
	CPaint2019mashengnanDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
	pDC->MoveTo(0,pDoc->wm_height/2);
	pDC->LineTo(pDoc->wm_width,pDoc->wm_height/2);
	pDC->MoveTo(pDoc->wm_width/2,0);
	pDC->LineTo(pDoc->wm_width/2,pDoc->wm_height);
}

/////////////////////////////////////////////////////////////////////////////
// CPaint2019mashengnanView printing

BOOL CPaint2019mashengnanView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CPaint2019mashengnanView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CPaint2019mashengnanView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CPaint2019mashengnanView diagnostics

#ifdef _DEBUG
void CPaint2019mashengnanView::AssertValid() const
{
	CView::AssertValid();
}

void CPaint2019mashengnanView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CPaint2019mashengnanDoc* CPaint2019mashengnanView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CPaint2019mashengnanDoc)));
	return (CPaint2019mashengnanDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CPaint2019mashengnanView message handlers

void CPaint2019mashengnanView::OnLButtonDown(UINT nFlags, CPoint point) 
{
	CPaint2019mashengnanDoc *pDoc = GetDocument();
	if(pDoc->model == 0)
	{
		//把当前点击的点的位置赋给点m_point
		m_point = point;
		m_click = true;
	}
	else if(pDoc->model == 1)
	{	
		flag = 2;
		if( false==nClick)
		{
			m_Start = m_End = point;
			DrawCircle(false,m_Start,m_End);
			nClick=true;
		}
		else
		{
			DrawCircle(false,m_Start,m_End);
			nClick=false;
		}
	}
	else if(pDoc->model == 2)
	{
		flag = 3;
		if( false==nClick)
		{
			m_Start = m_End = point;
			DrawRect(false,m_Start,m_End);
			nClick=true;
		}
		else
		{
			DrawRect(false,m_Start,m_End);
			nClick=false;
		}
	}
	else if(pDoc->model == 3)
	{
		flag = 1;
		// 绘制直线
		if( false==nClick)
		{
			m_Start = m_End = point;
			DrawLine(false,m_Start,m_End);
			nClick=true;
		}
		else
		{
			DrawLine(false,m_Start,m_End);
			nClick=false;
		}
	}
	else if(pDoc->model == 4)
	{
		flag = 4;
		if( false==nClick)
		{
			m_Start = m_End = point;
			DrawEllipse(false,m_Start,m_End);
			nClick=true;
		}
		else
		{
			DrawEllipse(false,m_Start,m_End);
			nClick=false;
		}
	}
	CView::OnLButtonDown(nFlags, point);
}

void CPaint2019mashengnanView::OnLButtonUp(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	CPaint2019mashengnanDoc *pDoc = GetDocument();
	if(pDoc->model == 0)
	{
		m_click = false;
	}
	CView::OnLButtonUp(nFlags, point);
}

void CPaint2019mashengnanView::OnMouseMove(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	CString str1; 
	str1.Format (_T("x=%d,y=%d  "),point.x,point.y); 
	CString str2; //获取系统时间 　　
	CTime tm;
	tm = CTime::GetCurrentTime();
	str2=tm.Format("现在时间是%Y年%m月%d日 %X");
	((CMainFrame *)GetParent())->SetMessageText (str1+str2); 
	
	CPaint2019mashengnanDoc *pDoc = GetDocument();
	if(pDoc->model == 0)
	{
			//画图	
		CDC *p=GetDC();
		CPen pen(PS_SOLID, pDoc->thickness, pDoc->color);
		p->SelectObject(pen);
 
		//鼠标按下进行绘制
		if(m_click==true)
		{
			p->MoveTo(m_point);
			p->LineTo(point);
			m_point = point;
		}
	}
	else if(pDoc->model == 1)
	{
		if(nClick)
		{
			DrawCircle(true,m_Start,m_End);
			DrawCircle(true,m_Start,point);
			m_End=point;
		}
	}
	else if(pDoc->model == 2)
	{
		if(nClick)
		{
			DrawRect(true,m_Start,m_End);
			DrawRect(true,m_Start,point);
			m_End=point;
		}
	}
	else if(pDoc->model == 3)
	{
		if(nClick)
		{
			DrawLine(true,m_Start,m_End);
			DrawLine(true,m_Start,point);
			m_End=point;
		}
	}
	else if(pDoc->model == 4)
	{
		if(nClick)
		{
			DrawEllipse(true,m_Start,m_End);
			DrawEllipse(true,m_Start,point);
			m_End=point;
		}
	}
	CView::OnMouseMove(nFlags, point);
}

void CPaint2019mashengnanView::DrawCircle(bool isRubber, CPoint ptCenter, CPoint ptOnCircle)
{
	CDC* pDC = GetDC();
	// 半径计算
	CPaint2019mashengnanDoc *pDoc = GetDocument();
	float r1 = (float)((ptCenter.x-ptOnCircle.x)*(ptCenter.x-ptOnCircle.x) + (ptCenter.y-ptOnCircle.y)*(ptCenter.y-ptOnCircle.y));
	LONG r = sqrt(r1);
	// 设置透明画刷
	CBrush *pBrush=CBrush::FromHandle((HBRUSH)GetStockObject(NULL_BRUSH));
	CBrush *pOldBrush =pDC->SelectObject(pBrush);
	if(isRubber)
	{
		pDC->SetROP2(R2_NOT);
		pDC->MoveTo(ptCenter.x,ptCenter.y);
		pDC->LineTo(ptOnCircle.x,ptOnCircle.y);
		// 半径
		pDC->Ellipse(ptCenter.x-r,ptCenter.y-r,ptCenter.x+r,ptCenter.y+r);
	}
	else
	{
		CPen pen(PS_SOLID,pDoc->thickness,pDoc->color);
		CPen *pOldPen = pDC->SelectObject(&pen);
		pDC->Ellipse(ptCenter.x-r,ptCenter.y-r,ptCenter.x+r,ptCenter.y+r);
		pDC->SelectObject(pOldPen);
		pDC->SetROP2(R2_NOT);
		pDC->MoveTo(ptCenter.x,ptCenter.y);
		pDC->LineTo(ptOnCircle.x,ptOnCircle.y);
	}
	ReleaseDC(pDC);
}

// 绘制矩形，ptUL: 左上，ptLR: 右下
void CPaint2019mashengnanView::DrawRect(bool isRubber, CPoint ptUL, CPoint ptLR)
{
	CDC* pDC = GetDC();
	CPaint2019mashengnanDoc *pDoc = GetDocument();
	// 设置透明画刷
	CBrush *pBrush=CBrush::FromHandle((HBRUSH)GetStockObject(NULL_BRUSH));
	CBrush *pOldBrush =pDC->SelectObject(pBrush);
	if(isRubber)
	{
		pDC->SetROP2(R2_NOT);
		pDC->Rectangle(ptUL.x,ptUL.y,ptLR.x,ptLR.y);
	}
	else
	{
		CPen pen(PS_SOLID,pDoc->thickness,pDoc->color);
		CPen *pOldPen = pDC->SelectObject(&pen);
		pDC->Rectangle(ptUL.x,ptUL.y,ptLR.x,ptLR.y);
	}
	ReleaseDC(pDC);
}

void CPaint2019mashengnanView::DrawLine(bool isRubber, CPoint ptStart, CPoint ptEnd)
{
	CDC* pDC = GetDC();
	CPaint2019mashengnanDoc *pDoc = GetDocument();
	if(isRubber)
	{
		pDC->SetROP2(R2_NOT);
	}
	CPen pen(PS_SOLID,pDoc->thickness,pDoc->color);
	CPen *pOldPen = pDC->SelectObject(&pen);
	pDC->MoveTo(ptStart.x,ptStart.y);
	pDC->LineTo(ptEnd.x,ptEnd.y);
	pDC->SelectObject(pOldPen);
	ReleaseDC(pDC);
}
void CPaint2019mashengnanView::DrawEllipse(bool isRubber, CPoint ptUL, CPoint ptLR)
{
	CDC* pDC = GetDC();
	CPaint2019mashengnanDoc *pDoc = GetDocument();
	// 设置透明画刷
	CBrush *pBrush=CBrush::FromHandle((HBRUSH)GetStockObject(NULL_BRUSH));
	CBrush *pOldBrush =pDC->SelectObject(pBrush);
	if(isRubber)
	{
		pDC->SetROP2(R2_NOT);
		pDC->Ellipse(ptUL.x,ptUL.y,ptLR.x,ptLR.y);
	}
	else
	{
		CPen pen(PS_SOLID,pDoc->thickness,pDoc->color);
		CPen *pOldPen = pDC->SelectObject(&pen);
		pDC->Ellipse(ptUL.x,ptUL.y,ptLR.x,ptLR.y);
	}
	ReleaseDC(pDC);
}

void CPaint2019mashengnanView::OnSize(UINT nType, int cx, int cy) 
{
	CView::OnSize(nType, cx, cy);
	// TODO: Add your message handler code here
	CPaint2019mashengnanDoc *pDoc = GetDocument();
	pDoc->wm_height = cy;
	pDoc->wm_width = cx;
}
