//  ��ת��ͷ�ļ� Bas2Txt.h

class Bas2Txt
{
private:
	char *m_Table[116];

	BOOL Rec(CFile *fp,CString *string);

public:
	BOOL Start(CString *szBasFile,CString *szTxtFile);

};

