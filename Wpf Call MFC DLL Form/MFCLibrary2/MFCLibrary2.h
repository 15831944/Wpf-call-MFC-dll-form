// MFCLibrary2.h : MFCLibrary2 DLL ����ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CMFCLibrary2App
// �йش���ʵ�ֵ���Ϣ������� MFCLibrary2.cpp
//

class CMFCLibrary2App : public CWinApp
{
public:
	CMFCLibrary2App();

// ��д
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
