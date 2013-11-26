/*************************************************************************
	> File Name: left_lotation_test.cpp
	> Author: cjj
	> Created Time: 2013年11月26日 星期二 17时06分28秒
 ************************************************************************/

#include<iostream>
#include<string.h>
using namespace std;

char * left_rotation(char*, unsigned int);

int main()
{
	char str[10] = {0};
	strcpy(str, "cjjijaychen");
	cout << left_rotation(str, 3) << endl;
	return 0;
}

