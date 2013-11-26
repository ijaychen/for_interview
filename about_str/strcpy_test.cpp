/*************************************************************************
	> File Name: for_test.cpp
	> Author: cjj
	> Created Time: 2013年11月26日 星期二 13时40分49秒
 ************************************************************************/
#include <iostream>
using namespace std;

char * my_strcpy(char * , const char *);
int main()
{
	char str[10] = {0};
	my_strcpy(str, "ijaychen");
	cout << str << endl;
	return 0;
}

