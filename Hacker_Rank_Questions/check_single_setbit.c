#include <stdio.h>
#include <stdlib.h>

void single_set_bit(int num);
int main()
{
    int numm;
    scanf("%d",&numm);
    single_set_bit(numm);

    return 0;
}
void single_set_bit(int num){
   if((num>0) && (num&(num-1))==0){
        printf("1");
   }
   else{
       printf("-1");
   }
   exit(0);
}
