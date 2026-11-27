#include <stdio.h>

void bitwise_check_sign(int n);
int main()
{
    int num;
    scanf("%d",&num);
    bitwise_check_sign(num);

    return 0;
}
void bitwise_check_sign(int n){
    int temp=n;
    int bit=((temp>>31) & 1);
    
    if(bit==1){
        printf("Negative");
    }
    else{
        printf("Positive");
    }
    return;
}
