#include <stdio.h>
#include <stdlib.h>

void isolateRightmostSetBit(int num);
int main()
{
    int n;
    scanf("%d",&n);
    if(n==0){
        printf("0");
        return 0;
    }
    isolateRightmostSetBit(n);

    return 0;
}
void isolateRightmostSetBit(int num){
    int num_temp=num;
    int temp=1;
    int count=0;
    while((((num_temp)&1)==0)){
        count++;
        num_temp=num_temp>>1;
    }
    num=(num&(temp<<count));
    printf("%d",num);
    exit (0);
    
}
