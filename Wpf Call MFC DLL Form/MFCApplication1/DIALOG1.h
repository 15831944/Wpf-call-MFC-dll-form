#pragma once


// IDD_DIALOG1 �Ի���

class DIALOG1 : public CDialogEx
{
	DECLARE_DYNAMIC(DIALOG1)

public:
	DIALOG1(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~DIALOG1();

// �Ի�������
	enum { IDD = IDD_DIALOG1 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
};
