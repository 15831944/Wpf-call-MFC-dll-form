// DIALOG_Test.cpp : 实现文件
//

#include "stdafx.h"
#include "MFCLibrary2.h"
#include "DIALOG_Test.h"
#include "afxdialogex.h"


// DIALOG_Test 对话框

IMPLEMENT_DYNAMIC(DIALOG_Test, CDialogEx)

DIALOG_Test::DIALOG_Test(CWnd* pParent /*=NULL*/)
	: CDialogEx(DIALOG_Test::IDD, pParent)
{

}

DIALOG_Test::~DIALOG_Test()
{
}

void DIALOG_Test::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(DIALOG_Test, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON2, &DIALOG_Test::OnBnClickedButton2)
END_MESSAGE_MAP()


// DIALOG_Test 消息处理程序


void DIALOG_Test::OnBnClickedButton1()
{
	// TODO:  在此添加控件通知处理程序代码
	AfxMessageBox(_T("bt1"));
}


void DIALOG_Test::OnBnClickedButton2()
{
	// TODO:  在此添加控件通知处理程序代码
	AfxMessageBox(_T("bt2"));
}
