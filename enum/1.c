#include<stdio.h>
enum weeks{Sun,mon,tue,wed,thu,fri,sat};//Enum decleartion,By default enum Variable start from 0 th value
int main()
{
	enum weeks day;//create Variable
	day=wed;
	printf("%d\n",day);//print 3.
}
