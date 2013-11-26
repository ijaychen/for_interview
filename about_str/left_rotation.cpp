/*************************************************************************
	> File Name: left_lotation.cpp
	> Author: cjj
	> Created Time: 2013年11月26日 星期二 16时54分41秒
	> 说明：实现字符串左旋转
 ************************************************************************/
#include <assert.h>
#include <string.h>

bool inversion(char * begin, char * end)
{
	assert(begin || end);
	char temp;
	while(begin && end && begin < end)
	{
		temp = *begin;
		*begin++ = *end;
		*end = temp;
		end--;
	}
	return true;
}

char * left_rotation(char * strSrc, unsigned int len)
{
	assert(strSrc);
	inversion(strSrc, strSrc + len -1);
	inversion(strSrc + len, strSrc + strlen(strSrc) -1);
	inversion(strSrc, strSrc + strlen(strSrc) -1);
	return strSrc;
}
