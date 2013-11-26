/*************************************************************************
	> File Name: itoa.cpp
	> Author: cjj
	> Created Time: 2013年11月26日 星期二 11时42分34秒
	> 说明：把数字转换成字符串，不使用itoa函数
 ************************************************************************/
#include <iostream>
using namespace std;

bool my_itoa(unsigned int nNumber, char * str, size_t nStrLen)
{
	//1、判断字符串数组的长度是否足够、不足则返回false
	//怎样判断一个数字有多少位？
	int count = 0;
	int temp = 0;
	char strTemp[nStrLen];
	//2、循环取出数字中的每一位，并转换成对应的字符
	while(nNumber)
	{
		temp = nNumber % 10;
		strTemp[count++] = temp + '0';
		nNumber /= 10;
		if(count >= nStrLen)
		{
			break;
		}
	}
	//3、把字符存入字符数组
	for(int j = 0; j < count; j++)
	{
		str[j] = strTemp[count - j - 1];
	}
	return true;
}


int main()
{
	int num = 1234567;
	char str[8] = {0};
	my_itoa(num, str, sizeof(str) - 1);
	cout << str << endl;
	return 0;
}

