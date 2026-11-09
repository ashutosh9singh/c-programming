#include <stdio.h>
#include <stdlib.h>

void rotate_array_lft(int ar[],int size);
int *create_array(int size);
int main()
{
    int n;
    printf("enter size of array: ");
    scanf("%d",&n);
    if(n<=0){
        printf("Size must be at least 1.\n");
        return 1;
    }
    
    int *arr=create_array(n);
    rotate_array_lft(arr,n);
    
    free(arr);
    return 0;
}
int *create_array(int size){
    int *temp=(int*)malloc(size*sizeof(int));
    for(int i=0; i<size; i++){
        printf("enter value for slot %d: ",i+1);
        scanf("%d",temp+i);
    }
    return temp;
}
void rotate_array_lft(int ar[],int size){
    int temp;
    temp=ar[0];
    for(int i=0; i<size-1; i++){
        ar[i]=ar[i+1];
    }
    ar[size-1]=temp;
    for(int i=0; i<=size-1; i++){
        printf("%d ",ar[i]);
    }
}
