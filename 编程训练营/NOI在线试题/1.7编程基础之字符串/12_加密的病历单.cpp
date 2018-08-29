/*
	Name: 12_加密的病历单
	Copyright: 
	Author: 
	Date: 01-09-17 10:58
	Description: 12_加密的病历单
查看 提交 统计 提问
总时间限制: 1000ms 内存限制: 65536kB
描述
小英是药学专业大三的学生，暑假期间获得了去医院药房实习的机会。 
在药房实习期间，小英扎实的专业基础获得了医生的一致好评，得知小英在计算概论中取得过好成绩后，主任又额外交给她一项任务，
解密抗战时期被加密过的一些伤员的名单。 
经过研究，小英发现了如下加密规律（括号中是一个“原文 -> 密文”的例子） 
1. 原文中所有的字符都在字母表中被循环左移了三个位置（dec -> abz） 
2. 逆序存储（abcd -> dcba ） 
3. 大小写反转（abXY -> ABxy） 
输入
一个加密的字符串。（长度小于50且只包含大小写字母）
输出
输出解密后的字符串。
样例输入
GSOOWFASOq
样例输出
Trvdizrrvj
*/
#include <iostream>
#include <cstdio>
#include <cstring>
  
using namespace std;  
  
const int N = 101;  
char S[N];   
char *A="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char *B="defghijklmnopqrstuvwxyzabcDEFGHIJKLMNOPQRSTUVWXYZABC";
char L[255]; 
  
int main()   
{  
	for (int i=0; A[i]!='\0'; i++)//获取转化关系表 
	{
		L[A[i]] = B[i];
	}  
	gets(S);  
    int n = strlen(S);
    for (int i=n-1; i>=0; i--)  
    {  
        cout << L[S[i]];
    }  
    cout << endl;
    
    return 0;     
} 
