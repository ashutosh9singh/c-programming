#include <stdio.h>
#include <stdlib.h>

void extract_ith();
int main()
{
    int num;
    scanf("%d",&num);
    extract_ith(num);
    
    return 0;
}
void extract_ith(int n){
    int i;
    scanf("%d",&i);
    
    n=(n>>i)&1;

    printf("%d",n);
    exit(0);
}
