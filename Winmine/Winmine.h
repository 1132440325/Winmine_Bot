
// Winmine.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CWinmineApp: 
// �йش����ʵ�֣������ Winmine.cpp
//

class CWinmineApp : public CWinApp
{
public:
	CWinmineApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CWinmineApp theApp;