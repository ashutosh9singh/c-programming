#include <stdio.h>
int swap(int *a,int *b);
int main(){
    int num1;
    int num2;
    scanf("%d",&num1);
    scanf("%d",&num2);
    
    swap(&num1,&num2);
    printf("%d\n",num1);
    printf("%d",num2);
    return 0;
}
int swap(int *a,int *b){
    if(a!=b){
        *a=*a^*b;
        *b=*a^*b;
        *a=*a^*b;
    }
    return 0;
}
