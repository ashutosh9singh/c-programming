#include <stdio.h>

void ext_rth_bit(int n);
int main()
{
    int num;
    scanf(" %d",&num);
    ext_rth_bit(num);

    return 0;
}
void ext_rth_bit(int n){
    
   n=n&(n-1);
   printf("%d",n);
}
