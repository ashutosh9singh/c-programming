#include <stdio.h>

int power_of_two(int num);
int main()
{
    int n;
    scanf("%d",&n);
    power_of_two(n);
    return 0;
}
int power_of_two(int num){
    //the number which is power of 2 is always of one set bit 
    if(num!=0 && (num&(num-1))==0){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}
