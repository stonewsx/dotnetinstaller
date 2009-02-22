// dotNetInstallerDlg.h : file di intestazione
//

#pragma once

#include "installerTypes.h"
#include "afxwin.h"
#include "HyperlinkStatic.h"

// finestra di dialogo CdotNetInstallerDlg
class CdotNetInstallerDlg : public CDialog
{
// Costruzione
public:
	CdotNetInstallerDlg(CWnd* pParent = NULL);	// costruttore standard

// Dati della finestra di dialogo
	enum { IDD = IDD_DOTNETINSTALLER_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// supporto DDX/DDV


// Implementazione
protected:
	HICON m_hIcon;

	// Funzioni generate per la mappa dei messaggi
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
private:
	bool LoadXmlSettings(void);

	installerSetting m_Settings;
public:
	CButton m_btnInstall;
	CButton m_btCancel;
	CStatic m_lblMessage;
	CListBox m_ListBoxComponents;
	CStatic m_PictureBox;
	CStatic m_lblOperatingSystem;
	afx_msg void OnBnClickedInstall();
	bool LoadComponentsList(void);
	afx_msg void OnBnClickedAdvanced();
	CButton m_btAdvanced;
	CHyperlinkStatic m_InfoLink;
	afx_msg void OnDestroy();
	afx_msg void OnBnClickedCancel();
};
