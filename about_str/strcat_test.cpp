/*************************************************************************
	> File Name: strcat_test.cpp
	> Author: cjj
	> Created Time: 2013年11月26日 星期二 14时03分07秒
 ************************************************************************/
#include <iostream>
using namespace std;

char * my_strcat(char *, const char *);

int main()
{
	char str[20] = {'c', 'j','j'};
	cout << my_strcat(str, " ijaychen") << endl;
	return 0;
}
