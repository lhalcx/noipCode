/*
	Name: 03:其他基本数据类型存储空间大小
	Copyright: 
	Author: 
	Date: 10-07-16 09:56
	Description: 
	03:其他基本数据类型存储空间大小
总时间限制: 1000ms 内存限制: 65536kB
描述
分别定义bool，char类型的变量各一个，并依次输出它们的存储空间大小（单位：字节）。

输入
无。
输出
一行，两个整数，分别是两个变量的存储空间大小，用一个空格隔开。
样例输入
（无）
样例输出
（不提供）
提交人	 结果	   分数	内存	时间	代码长度	语言	提交时间
巧若拙	Accepted	10	252kB	0ms	    134 B    	G++      10-07-16 10:00
*/
#include <iostream>
using namespace std;

int main( )
{
	bool a;
	char b;
	
	cout << sizeof(a) << ' ' << sizeof(b);
	
    return 0;
}

