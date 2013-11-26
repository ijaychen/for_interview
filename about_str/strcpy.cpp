/*************************************************************************
	> File Name: srcpy.cpp
	> Author: cjj
	> Created Time: 2013年11月26日 星期二 13时27分04秒
	> 说明：实现strcpy函数，并且理解strcpy为什么要返回char *？
 ************************************************************************/

char * my_strcpy(char * strDest, const char * strSrc)
{
	//1、若源字符串为空，则返回空
	if(!strSrc || !strDest)
		return 0;
	char * pTemp = strDest;
	while((*strDest++ = *strSrc++) != 0)
	{
	}
	return pTemp;

}

