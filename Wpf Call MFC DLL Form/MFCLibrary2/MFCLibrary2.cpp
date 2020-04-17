// MFCLibrary2.cpp : 定义 DLL 的初始化例程。
//

#include "stdafx.h"
#include "MFCLibrary2.h"
#include "DIALOG_Test.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

//
//TODO:  如果此 DLL 相对于 MFC DLL 是动态链接的，
//		则从此 DLL 导出的任何调入
//		MFC 的函数必须将 AFX_MANAGE_STATE 宏添加到
//		该函数的最前面。
//
//		例如: 
//
//		extern "C" BOOL PASCAL EXPORT ExportedFunction()
//		{
//			AFX_MANAGE_STATE(AfxGetStaticModuleState());
//			// 此处为普通函数体
//		}
//
//		此宏先于任何 MFC 调用
//		出现在每个函数中十分重要。  这意味着
//		它必须作为函数中的第一个语句
//		出现，甚至先于所有对象变量声明，
//		这是因为它们的构造函数可能生成 MFC
//		DLL 调用。
//
//		有关其他详细信息，
//		请参阅 MFC 技术说明 33 和 58。
//

// CMFCLibrary2App

BEGIN_MESSAGE_MAP(CMFCLibrary2App, CWinApp)
END_MESSAGE_MAP()


// CMFCLibrary2App 构造

CMFCLibrary2App::CMFCLibrary2App()
{
	// TODO:  在此处添加构造代码，
	// 将所有重要的初始化放置在 InitInstance 中
}


// 唯一的一个 CMFCLibrary2App 对象

CMFCLibrary2App theApp;
DIALOG_Test* g_DIALOG_Test = NULL;

// CMFCLibrary2App 初始化

BOOL CMFCLibrary2App::InitInstance()
{
	CWinApp::InitInstance();
	if (NULL == g_DIALOG_Test)
	{
		g_DIALOG_Test = new DIALOG_Test;
		//g_DIALOG_Test->Create(IDD_DIALOG_Test);
	}
	
	return TRUE;
}


int __stdcall ShowDialogTest(HWND hWnd)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());
	if (g_DIALOG_Test)
	{
		CWnd   *pWndParent = CWnd::FromHandle(hWnd);
		g_DIALOG_Test->Create(IDD_DIALOG_Test, pWndParent);
		//g_DIALOG_Test->SetParent(pWndParent);
		g_DIALOG_Test->ShowWindow(SW_SHOW);
		//g_DIALOG_Test->DoModal();
	}
	

	return 0;
}

CWnd* __stdcall ShowFormTest(CWnd* hWnd)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());

	DIALOG_Test* t_DIALOG_Test = new DIALOG_Test;
	CWnd   *pWndParent = CWnd::FromHandle(hWnd->GetSafeHwnd());
	t_DIALOG_Test->Create(IDD_DIALOG_Test, pWndParent);
	t_DIALOG_Test->ShowWindow(SW_NORMAL);

	return t_DIALOG_Test;
}