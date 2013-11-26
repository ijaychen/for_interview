/*************************************************************************
	> File Name: strcat.cpp
	> Author: cjj
	> Created Time: 2013年11月26日 星期二 13时59分53秒
	> 说明：实现strcat函数
 ************************************************************************/

char * my_strcat(char * strDest, const char * strSrc)
{
	if(!strDest || !strSrc)
		return 0;
	char * pTemp = strDest;
	while(*strDest)
	{
		strDest++;
	}
	while((*strDest++ = *strSrc++) != 0)
	{
	}
	return pTemp;
}
