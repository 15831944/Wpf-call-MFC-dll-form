// IDD_DIALOG1.cpp : 实现文件
//

#include "stdafx.h"
#include "MFCApplication1.h"
#include "DIALOG1.h"
#include "afxdialogex.h"


// IDD_DIALOG1 对话框

IMPLEMENT_DYNAMIC(DIALOG1, CDialogEx)

DIALOG1::DIALOG1(CWnd* pParent /*=NULL*/)
	: CDialogEx(DIALOG1::IDD, pParent)
{

}

DIALOG1::~DIALOG1()
{
}

void DIALOG1::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(DIALOG1, CDialogEx)
END_MESSAGE_MAP()


// IDD_DIALOG1 消息处理程序
