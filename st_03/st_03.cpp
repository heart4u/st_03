// st_03.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "MyConst.h"
#include <cstdarg>
#include <new>
#include <typeinfo>
#include <utility>
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

//template<class T>
//class Area
//{
//public:
//	int operator()(T length,T width)
//	{
//		return length*width;
//	}
//};

//void printArea(int length,int width,Area& area);

//class CText
//{
//private:
//	char* pText;
//public:
//	void ShowIt()const
//	{
//		cout << pText << endl;
//	}
//
//	CText(const char* pStr = "No text")
//	{
//		cout << "CText constructor called." << endl;
//		size_t len(strlen(pStr)+1);
//		pText = new char[len];
//		strcpy_s(pText,len,pStr);
//	}
//
//	CText(const CText& txt)
//	{
//		cout << "CText copy constructor called." << endl;
//		size_t len(strlen(txt.pText)+1);
//		pText = new char[len];
//		strcpy_s(pText,len,txt.pText);
//	}
//
//	CText(CText&& txt)
//	{
//		cout <<"CText move constructor called." << endl;
//		pText = txt.pText;
//		txt.pText = nullptr;
//	}
//
//	~CText()
//	{
//		cout << "CText destructor called." << endl;
//		delete [] pText;
//	}
//
//	CText& operator=(const CText &txt)
//	{
//		cout << "CText assignment operator function called." << endl;
//		if(this == & txt)
//		{
//			return *this;
//		}
//
//		delete [] pText;
//		size_t len(strlen(txt.pText)+1);
//		pText = new char[len];
//
//		strcpy_s(pText,len,txt.pText);
//		return *this;
//	}
//
//	CText& operator=(CText&& txt)
//	{
//		cout << "CText move assignment operator function called." << endl;
//		delete[] pText;
//		pText = txt.pText;
//		txt.pText = nullptr;
//		return *this;
//	}
//
//	CText operator+(const CText& txt)const
//	{
//		cout << "CText add operator function called." << endl;
//		size_t len(strlen(pText) + strlen(txt.pText) +1);
//		CText aText;
//		aText.pText = new char[len];
//		strcpy_s(aText.pText,len,pText);
//		strcat_s(aText.pText,len,txt.pText);
//		return aText;
//	}
//};
//class CMessage
//{
//private:
//	CText text;
//public:
//	void ShowIt()
//	{
//		text.ShowIt();
//	}
//
//	CMessage operator+(const CMessage& aMess) const
//	{
//		cout << "CMessage add operator function called." << endl;
//		CMessage message;
//		message.text = text + aMess.text;
//		return message;
//	}
//
//	CMessage& operator=(const CMessage& aMess)
//	{
//		cout << "CMessage assignment operator function call." << endl;
//		if(this == &aMess)
//			return *this;
//
//		text = aMess.text;
//		return *this;
//	}
//	CMessage& operator=(CMessage&& aMess)
//	{
//		cout << "CMessage move assignment operator function called." << endl;
//		text = move(aMess.text);
//		return *this;
//	}
//
//	CMessage(const char* str="Default message")
//	{
//		cout << "CMessage constructor called." << endl;
//		text = CText(str);
//	}
//
//	CMessage(const CMessage& aMess)
//	{
//		cout << "CMessage copy constructor called." << endl;
//		text = aMess.text;
//	}
//
//	CMessage(CMessage&& aMess)
//	{
//		cout << "CMessage move constructor called." << endl;
//		text = move(aMess.text);
//	}
//};

class CBox
{
public:
	CBox(int l=0,int w=0,int h=0):m_l(l),m_w(w),m_h(h)
	{
		cout << "CBox constructor" << endl;
	}
	int Volume()const
	{
		return m_h*m_l*m_w;
	}
	int o;
protected:
	int m_l;
	int m_w;
	int m_h;
};

class CCandyBox:protected CBox
{
public:
	CCandyBox(int l=0,int w=0,int h=0,const char* c="Candy"):CBox(l,w,h)
	{
		m_contents = new char[strlen(c)+1];
		strcpy_s(m_contents,strlen(c)+1,c);
	}
	void Show(void)
	{
		cout <<m_contents <<  Volume() << endl;
	}
	void ShowData(void)
	{
		cout << "Contents:" << m_contents << endl;
		cout << "Width:" << m_w << endl;
		cout << "Height:" << m_h << endl;
		cout << "Length:" << m_l << endl;
	}
	~CCandyBox()
	{
		delete [] m_contents;
	}
private:
	char *m_contents;
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

	/*CMessage motto1("The devil takes care of his own.");
	CMessage motto2("If you sup with the devil use a long spoon.\n");
	

	cout << "Executing:CMessage motto3(motto1+motto2) " << endl;
	CMessage motto3(motto1+motto2);
	cout << "Done!! " << endl << endl << "motto3 contains - ";
	motto3.ShowIt();

	CMessage motto4;
	cout << endl <<"Executing: motto4 = motto3 + motto2 " << endl;
	motto4 = motto3  + motto2;
	cout << "Done!! " << endl << endl << "motto4 contains - ";

	motto4.ShowIt();
	cout << endl;
	Area<int> aa;
	cout << aa(20,30) << endl;*/
	CCandyBox box(1,2,3,"Ok");
	box.ShowData();
	box.Show();
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