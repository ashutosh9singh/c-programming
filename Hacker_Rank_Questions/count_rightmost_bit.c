#include <stdio.h>
#include <stdlib.h>

void count_set_bit(int n);
int main()
{
    int num;
    scanf("%d",&num);
    count_set_bit(num);

    return 0;
}
void count_set_bit(int n){
    int count=0;
    int shift_cnt=0;
    while(n!=0){
        if((n&1)==1){
            count++;
        }
        n=n>>1;
        shift_cnt++;
        if(shift_cnt==4){
            printf("%d",count);
            exit(0);
        }
    }
    printf("%d",count);
    exit(0);
}
