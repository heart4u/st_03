// st_03.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "MyConst.h"
#include <cstdarg>
#include <new>
#include <typeinfo>
using namespace std;
//void SetArray(double const aData[],int iCount);
//int incr10(const int& num);
//int incr20(int && num);
//int sum(int nCount,...);
//double *treble(double data);
//double *treble(double data);
//template<typename T>T max(T a[],int len);
//
//template<typename T1,typename T2>
//auto product(T1 v1[],T2 v2[],size_t count)->decltype(v1[0]*v2[0]);
//
//auto OutX(int a,long b)->decltype(a*b)
//{
//	decltype(a*b) sum(0);
//	sum = a*b;
//	return sum;
//}
//class CBox
//{
//public:
//	double m_Length;
//	double m_Width;
//	double m_Height;
//	CBox(){
//		cout <<"Constructor CBox() called." << endl;
//	};
//	explicit CBox(double lv):m_Length(lv),m_Width(lv),m_Height(lv)
//	{
//		cout  << "Constructor CBox(double lv) called." << endl;
//	}
//
//	CBox& operator=(const double bb)
//	{
//		cout  << "CBox& operator=(const double bb) called." << endl;
//		m_Length = m_Width = m_Height = bb;
//		return *this;
//	}
//
//	double Volume()
//	{
//		return m_Length*m_Width*m_Height;
//	}
//};

//class Area
//{
//public:
//	int operator()(int length,int width)
//	{
//		return length*width;
//	}
//};

//void printArea(int length,int width,Area& area);
class CMessage
{
private:
	char *pmessage;
public:
	void ShowIt()
	{
		cout << endl << pmessage;
	}

	CMessage operator+(const CMessage& aMess) const
	{
		cout << "Add operator function called." << endl;
		size_t len = strlen(pmessage) + strlen(aMess.pmessage) + 1;
		CMessage message;
		message.pmessage = new char[len];
		strcpy_s(message.pmessage,len,pmessage);
		strcat_s(message.pmessage,len,aMess.pmessage);
		return message;
	}

	CMessage& operator=(const CMessage& aMess)
	{
		cout << "Assignment operator function call." << endl;
		if(this == &aMess)
			return *this;

		delete[] pmessage;
		pmessage = new char[strlen(aMess.pmessage)+1];
		strcpy_s(pmessage,strlen(aMess.pmessage)+1,aMess.pmessage);
		return *this;
	}

	CMessage(const char* text="Default message")
	{
		cout << "Constructor called." << endl;
		pmessage = new char[strlen(text)+1];
		strcpy_s(pmessage,strlen(text)+1,text);
	}

	CMessage(const CMessage& aMess)
	{
		cout << "Copy constructor called." << endl;
		size_t len = strlen(aMess.pmessage)+1;
		pmessage = new char[len];
		strcpy_s(pmessage,len,aMess.pmessage);
	}

	~CMessage()
	{
		cout << "Destructor called." << endl;
		delete [] pmessage;
	}
};
int _tmain(int argc, _TCHAR* argv[])
{
	/*
 unsigned int i=10;
 int k = 20;
 const  int  s = i - k;
 std::cout <<static_cast<int>(i - k) <<" "<< s << std::endl;
 float j=0.0f;
 for(;j != 1.0f;j+=0.2f)
 std::cout <<  j << std::endl;*/

	//int value[5]={1,2,3};
	//int junk[5];
	//long data[100]={0};

	//for each(int v in value)
	//	std::cout << std::setw(2) << v ;
	//std::cout << std::endl;

	//for each(int v in junk)
	//	std::cout << std::setw(11) << v ;
	//std::cout << std::endl;

	//for each(long v in data)
	//	std::cout << std::setw(1) << v;
	//std::cout << std::endl;

	/*char movie_star[15] = "Marilyn Monroe";
	std::cout << movie_star << std::endl;

	char president[] = "Ulysses Grant";
	std::cout << president << std::endl;

	wchar_t president2[] = L"Ulysses Grant";
	std::wclog << president2 << std::endl;

	HANDLE hEventHandle = NULL;
	LPWSTR wsService = L"LiuHui";
	LPCWSTR wsError = L"告诉你一个事情哦！王东是个坏小子！";
	hEventHandle = RegisterEventSource(NULL,wsService);

	if(hEventHandle)
	{
	ReportEvent(hEventHandle,EVENTLOG_INFORMATION_TYPE,0,0,NULL
	,1,0,&wsError,NULL);
	DeregisterEventSource(hEventHandle);
	}*/

	/*int aDate[365][78][5] = {0};
	
	for each(int v in aDate)
		v = 1;

	for each(int v in aDate)
		std::cout << std::setw(2) << v ;*/

	/*for each(char *p in aMsg)
		std::cout << p << std::endl;

	for each(LPMRECORD *p in aRecord)
		std::cout << p->sName << std::endl;*/


	//aMsg[1] = "8";
	//*(aMsg[1]) = '8';
	//for each(const char *p in aMsg)
	//	std::cout << p << std::endl;

	/*long (*p)[4];
	long **t;
	p = new long [3][4];

	delete[]p;*/

	//wchar_t *s = L"I agree with everything.";
	//wchar_t *ss = L"aeiouAEIOU ";
	//size_t i = wcsspn(s,ss);
	//std::wcout << L"The first character that is not a word is'" << s[i] << L"' at position " << i << std::endl;
	//double My[] = {1,2,3,4,5,6,7,8,9};

	//SetArray(My,9);

	//for each(double v in My)
	//	std::cout << std::setw(5) << v ;

	//int k(10);
	//std::cout << incr10(10+8) << std::endl;
	//std::cout << incr20(k+0) << std::endl;
	//std::cout << sum(10,1,2,3,4,5) << std::endl;
	//double num(4.0);
	//double *ptr(nullptr);

	//ptr = treble(num);

	//std::cout << std::endl << "Three times num = " << 3.0 * num << std::endl;

	//std::cout << std::endl << "Result = " << *ptr << std::endl;

	//double num(5.0);
	//double *ptr(nullptr);
	//ptr = treble(num);

	//std::cout << std::endl << "Three times num = " << 3.0 * num << std::endl;

	//std::cout << std::endl << " Result = " << *ptr << std:: endl;

	//delete ptr;
	//ptr = nullptr;

	//char* pdata(nullptr);
	//size_t count = ~static_cast<size_t>(0)/200;
	//try
	//{
	//	pdata = new char[count];
	//	std::cout << "Memory allocated." << std::endl;
	//}
	//catch (std::bad_alloc &ex)
	//{
	//	std::cout << "Memory allocation failed." << count/1024/1024 << std::endl 
	//		<< "The information from the exception object is:"
	//		<< ex.what() << std::endl;
	//}
	//delete[] pdata;

	/*int aa[] = { 3,8,7,22,4,11,228};
	int m = max(aa,sizeof(aa)/sizeof(aa[0]));
	std::cout << m << std::endl;
	double bb[] = {3.0,22.5,8.1,99.3};
	double mm = max(bb,sizeof(bb)/sizeof(bb[0]));
	std::cout << mm << std::endl;*/
	
/*double x[] = {100.5,99.5,88.7,77.8};
short y[] = {3,4,5,6};
long z[] = {11L,12L,13L,14L};
size_t n = 4;



cout << "Result type is " << typeid(product(x,y,n)).name() << endl;
cout << "Result is " << product(x,y,n) << endl;

cout << "Result type is " << typeid(product(z,y,n)).name() << endl;
cout << "Result is " << product(z,y,n) << endl;

cout << typeid(OutX(1,2)).name() << OutX(1,2) << endl;*/

	//CBox box1(8);
	//cout << "Volume:" << box1.Volume() << endl;
	//box1 = 99.0;

	//cout << "Volume:" << box1.Volume() << endl;
	//printArea(20,35,Area());

	CMessage motto1("The devil takes care of his own.");
	CMessage motto2("If you sup with the devil use a long spoon.\n");
	CMessage motto3;

	cout << "Executing: motto3 = motto1 + motto2 " << endl;
	motto3 = motto1 + motto2;
	cout << "Done!!" << endl << endl;

	cout << "Executing: motto3 = motto3 + motto1 + motto2 " << endl;
	motto3 = motto3 + motto1 + motto2;
	cout << "Done!!" << endl << endl;

	cout << "motto3 contains - ";
	motto3.ShowIt();
	cout << endl;
	return 0;

}

//double * treble( double data )
//{
//	double *result(new double(0.0));
//	*result = 3.0 * data;
//	return result;
//}

//int sum( int nCount,... )
//{
//	if (nCount <= 0) return 0;
//
//	va_list arg_ptr;
//	va_start(arg_ptr,nCount);
//
//	int sum(0);
//	for(int i=0;i<nCount;i++)
//		sum += va_arg(arg_ptr,int);
//	va_end(arg_ptr);
//	return sum;
//}

//double * treble( double data )
//{
//	double result(0.0);
//	result = 3.0 * data;
//	return &result;
//}

//int incr10(const int& num)
//{
//	return 10+num;
//}
//
//int incr20( int && num )
//{
//	num += 20;
//	return num;
//}

//void SetArray(double const aData[],int iCount)
//{
//	for(int i=0;i<iCount;++i)
//	{
//		const_cast<double>(aData[i]) = static_cast<double>(i);
//	}
//}
//template<typename T>T max(T x[],int len)
//{
//	T maxnum(x[0]);
//	for(int i=1;i<len;i++)
//	{
//		if(maxnum < x[i])
//			maxnum = x[i];
//	}
//	return maxnum;
//}
//template<typename T1,typename T2>
//auto product(T1 v1[],T2 v2[],size_t count)->decltype(v1[0]*v2[0])
//{
//	decltype(v1[0]*v2[0]) sum(0);
//	for(size_t i=0;i<count;i++)
//		sum += v1[i]*v2[i];
//	return sum;
//}

//void printArea(int length,int width,Area& area)
//{
//	cout << "Area is " << area(length,width) << endl;
//}