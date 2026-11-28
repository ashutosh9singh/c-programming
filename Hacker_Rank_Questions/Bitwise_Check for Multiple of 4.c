#include <stdio.h>

void multiple_of_4(int n);
int main()
{
    int num;
    scanf("%d",&num);
    multiple_of_4(num);

    return 0;
}
void multiple_of_4(int n){
    if((n&3)==0){
        printf("Yes");
    }
    else{
        printf("No");
    }
    
    return;
}
