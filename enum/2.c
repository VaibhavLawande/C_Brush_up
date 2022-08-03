#include<stdio.h>
enum year{Jan, Feb, Mar, Apr, May, Jun, Jul,
          Aug, Sep, Oct, Nov, Dec};
 
int main()
{
   int i;
   for (i=Jan; i<=Dec; i++)//Moving for loop from Jan to Dec 
      printf("%d ", i);//It will print 0 1 2 3 4 5 6 7 8 9 10 11
       
   return 0;
}
