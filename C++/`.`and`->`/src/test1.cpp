#include <iostream>
#include "CP_A.h"
using namespace std;//记得加分号

#define N 1

int main ( int argc, char *argv[])
{
#if N == 0
	CP_A *p ;
	int a=10;
	(*p).m_a = &a;
	cout <<"first "<<*(*p).m_a<<endl<<"second "<<*p->m_a<<endl;//endl相当于加换行
	return 0;
#elif N == 1
	cout<<"size:"<<sizeof(int)<<endl;
#endif
	return 0;
}
//0:
//结论：(*p).m_a <=> p->m_a,完成了自己的解运算并指向m_a, 注意不是* m_a
//即：->是自己的解运算，在CP_A p ;*p.m_a <=> *(p).m_a 这里的*是m_a的解运算

//1:
//结论:void 1 byte ,void* 8 byte
