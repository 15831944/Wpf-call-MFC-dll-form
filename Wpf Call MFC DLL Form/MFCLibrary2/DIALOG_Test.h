#pragma once


// DIALOG_Test �Ի���

class DIALOG_Test : public CDialogEx
{
	DECLARE_DYNAMIC(DIALOG_Test)

public:
	DIALOG_Test(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~DIALOG_Test();

// �Ի�������
	enum { IDD = IDD_DIALOG_Test };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
};
