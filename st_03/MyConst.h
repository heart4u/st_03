char* const  aMsg[] = {"1","2","3","4"};
const size_t aMsgCount = (sizeof aMsg) / (sizeof aMsg[0]);

typedef struct _MRECORD{
	char sName[8];
	char sNote[8];
	int nSelect;
	int nCount;
	int nJCount;
}* LPMRECORD;

//_MRECORD aRecord[] = {
//	{
//		"1","11",5,11,(sizeof int)
//	},
//	{
//		"2","22",5,11,(sizeof int)
//	}
//};
