// MFCLibrary2.cpp : ���� DLL �ĳ�ʼ�����̡�
//

#include "stdafx.h"
#include "MFCLibrary2.h"
#include "DIALOG_Test.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

//
//TODO:  ����� DLL ����� MFC DLL �Ƕ�̬���ӵģ�
//		��Ӵ� DLL �������κε���
//		MFC �ĺ������뽫 AFX_MANAGE_STATE ����ӵ�
//		�ú�������ǰ�档
//
//		����: 
//
//		extern "C" BOOL PASCAL EXPORT ExportedFunction()
//		{
//			AFX_MANAGE_STATE(AfxGetStaticModuleState());
//			// �˴�Ϊ��ͨ������
//		}
//
//		�˺������κ� MFC ����
//		������ÿ��������ʮ����Ҫ��  ����ζ��
//		��������Ϊ�����еĵ�һ�����
//		���֣������������ж������������
//		������Ϊ���ǵĹ��캯���������� MFC
//		DLL ���á�
//
//		�й�������ϸ��Ϣ��
//		����� MFC ����˵�� 33 �� 58��
//

// CMFCLibrary2App

BEGIN_MESSAGE_MAP(CMFCLibrary2App, CWinApp)
END_MESSAGE_MAP()


// CMFCLibrary2App ����

CMFCLibrary2App::CMFCLibrary2App()
{
	// TODO:  �ڴ˴���ӹ�����룬
	// ��������Ҫ�ĳ�ʼ�������� InitInstance ��
}


// Ψһ��һ�� CMFCLibrary2App ����

CMFCLibrary2App theApp;
DIALOG_Test* g_DIALOG_Test = NULL;

// CMFCLibrary2App ��ʼ��

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