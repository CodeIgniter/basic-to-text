//  ��ת��ͷ�ļ� Gbs2Txt.h

class Gbs2Txt
{
private:
	char *m_Table[116];

	BOOL Rec(CFile *fp,CString *string);

public:
	BOOL Start(CString *szGbsFile,CString *szTxtFile);

};

