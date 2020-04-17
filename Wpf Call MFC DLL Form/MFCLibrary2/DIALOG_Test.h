#pragma once


// DIALOG_Test 对话框

class DIALOG_Test : public CDialogEx
{
	DECLARE_DYNAMIC(DIALOG_Test)

public:
	DIALOG_Test(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~DIALOG_Test();

// 对话框数据
	enum { IDD = IDD_DIALOG_Test };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
};
