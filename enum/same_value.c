#include <stdio.h>
enum State {Working = 1, Failed = 0, Freezed = 0};//two different varible have same value ,No error it will print
 
int main()
{
   printf("%d, %d, %d\n", Working, Failed, Freezed);//output 1 0 0
   return 0;
}
