#include <stdio.h>
enum day {sunday = 1, monday, tuesday = 5,
          wednesday, thursday = 10, friday, saturday};//assign a value some name 
                                                       
int main()
{
    printf("%d %d %d %d %d %d %d", sunday, monday, tuesday,
            wednesday, thursday, friday, saturday);//all unassigned names get value as value of previous name plus one
    return 0;                                      //output 1 2 5 6 10 11 12
}
