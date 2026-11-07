#include <stdio.h>
#include <stdlib.h>

void correction(int arr[]);
int *create_array(int size);
int main(){
    int sizee=10;
    
    int *temp=create_array(sizee);
    correction(temp);
    
    for(int i=0; i<=9; i++){
        printf("%d ",temp[i]);
    }
    free(temp);
    return 0;
}
int *create_array(int size){
    
    int *temp=(int*)malloc(size*sizeof(int));
    for(int i=0; i<size; i++){
        scanf("%d",&temp[i]);
    }
    return temp;
}
void correction(int arr[]){
    int num1,num2;
    for(int i=0; i<3; i++){
        scanf("%d",&num1);
        scanf("%d",&num2);
        arr[num1]=(arr[num1]+num2)%10;
    }
}
