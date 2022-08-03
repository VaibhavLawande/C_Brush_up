#include <stdio.h>
enum State {WORKING = 0, FAILED, FREEZED};
enum State currState = 2;
 
enum State FindState() //function generate
{
    return currState;

}
 
int main() {
   (FindState() == WORKING)? printf("WORKING"): printf("NOT WORKING");//output NOT WORKING
								      //baecause we used condition checking opertor(ternary)
								      //Condition is false 
								      //WORKING =0 CurrState=2
								      //FindState()==Working will false
   return 0;
}
