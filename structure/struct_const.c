#include<stdio.h>
const struct st //constant structure declear
{
 int i;
// const int i;// can't modify it will show error
};
int main()
{ 
 struct st a;
	a.i=10;
	a.i=20;
	printf("%d\n",a.i);//output i=20,updated value
}
