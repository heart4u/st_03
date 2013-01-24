// st_03.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "MyConst.h"
#include <cstdarg>

//void SetArray(double const aData[],int iCount);
//int incr10(const int& num);
//int incr20(int && num);
//int sum(int nCount,...);
//double *treble(double data);
double *treble(double data);
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

	double num(5.0);
	double *ptr(nullptr);
	ptr = treble(num);

	std::cout << std::endl << "Three times num = " << 3.0 * num << std::endl;

	std::cout << std::endl << " Result = " << *ptr << std:: endl;

	delete ptr;
	ptr = nullptr;

	return 0;

}

double * treble( double data )
{
	double *result(new double(0.0));
	*result = 3.0 * data;
	return result;
}

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

