
// WinmineDlg.h : ͷ�ļ�
//

#pragma once


// CWinmineDlg �Ի���
class CWinmineDlg : public CDialogEx
{
// ����
public:
	CWinmineDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_WINMINE_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	afx_msg
		void Click(int x, int y);
	void OnBnClickedButton3();
	DWORD Calc_Call(DWORD now, DWORD target);
	void Mark(int x, int y);
};
