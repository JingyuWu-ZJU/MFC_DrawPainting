; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=Login_Dialog
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "paint2019mashengnan.h"
LastPage=0

ClassCount=6
Class1=CPaint2019mashengnanApp
Class2=CPaint2019mashengnanDoc
Class3=CPaint2019mashengnanView
Class4=CMainFrame

ResourceCount=3
Resource1=IDR_MAINFRAME
Class5=CAboutDlg
Resource2=IDD_ABOUTBOX
Class6=Login_Dialog
Resource3=IDD_LOGIN

[CLS:CPaint2019mashengnanApp]
Type=0
HeaderFile=paint2019mashengnan.h
ImplementationFile=paint2019mashengnan.cpp
Filter=N

[CLS:CPaint2019mashengnanDoc]
Type=0
HeaderFile=paint2019mashengnanDoc.h
ImplementationFile=paint2019mashengnanDoc.cpp
Filter=N

[CLS:CPaint2019mashengnanView]
Type=0
HeaderFile=paint2019mashengnanView.h
ImplementationFile=paint2019mashengnanView.cpp
Filter=C
BaseClass=CView
VirtualFilter=VWC
LastObject=CPaint2019mashengnanView


[CLS:CMainFrame]
Type=0
HeaderFile=MainFrm.h
ImplementationFile=MainFrm.cpp
Filter=T
LastObject=CMainFrame
BaseClass=CFrameWnd
VirtualFilter=fWC




[CLS:CAboutDlg]
Type=0
HeaderFile=paint2019mashengnan.cpp
ImplementationFile=paint2019mashengnan.cpp
Filter=D

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[MNU:IDR_MAINFRAME]
Type=1
Class=CMainFrame
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_FILE_SAVE_AS
Command5=ID_FILE_PRINT
Command6=ID_FILE_PRINT_PREVIEW
Command7=ID_FILE_PRINT_SETUP
Command8=ID_FILE_MRU_FILE1
Command9=ID_APP_EXIT
Command10=ID_EDIT_UNDO
Command11=ID_EDIT_CUT
Command12=ID_EDIT_COPY
Command13=ID_EDIT_PASTE
Command14=ID_VIEW_TOOLBAR
Command15=ID_VIEW_STATUS_BAR
Command16=ID_APP_ABOUT
Command17=ID_BLUE
Command18=ID_GREEN
Command19=ID_RED
Command20=ID_BLACK
Command21=ID_YELLOW
Command22=ID_THIN
Command23=ID_NORMAL
Command24=ID_CRUDE
CommandCount=24

[ACL:IDR_MAINFRAME]
Type=1
Class=CMainFrame
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_FILE_PRINT
Command5=ID_EDIT_UNDO
Command6=ID_EDIT_CUT
Command7=ID_EDIT_COPY
Command8=ID_EDIT_PASTE
Command9=ID_EDIT_UNDO
Command10=ID_EDIT_CUT
Command11=ID_EDIT_COPY
Command12=ID_EDIT_PASTE
Command13=ID_NEXT_PANE
Command14=ID_PREV_PANE
CommandCount=14

[TB:IDR_MAINFRAME]
Type=1
Class=CMainFrame
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_EDIT_CUT
Command5=ID_EDIT_COPY
Command6=ID_EDIT_PASTE
Command7=ID_FILE_PRINT
Command8=ID_APP_ABOUT
Command9=ID_PEN
Command10=ID_CIRCLE
Command11=ID_TANGLE
Command12=ID_LINE
Command13=ID_ELIPS
CommandCount=13

[DLG:IDD_LOGIN]
Type=1
Class=Login_Dialog
ControlCount=7
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_MONTHCALENDAR1,SysMonthCal32,1342242832
Control4=IDC_STATIC,static,1342308352
Control5=IDC_STATIC,static,1342308352
Control6=IDC_USERNAME,edit,1350631552
Control7=IDC_PASSWORD,edit,1350631584

[CLS:Login_Dialog]
Type=0
HeaderFile=Login_Dialog.h
ImplementationFile=Login_Dialog.cpp
BaseClass=CDialog
Filter=D
LastObject=IDOK
VirtualFilter=dWC

