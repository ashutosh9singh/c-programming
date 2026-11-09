#include<stdio.h>
#include<stdlib.h>
int* make_array(int size);
int main(){
    int n;
    printf("enter the size of array you want to create: ");
    scanf("%d",&n);

    int *arr=make_array(n);
    int copy[n];
    for(int i=0; i<n; i++){
        copy[i]=arr[i];
    }
    printf("your copy of array is: \n");
    for(int i=0; i<n; i++){
        printf("the element %d is %d\n",i+1,copy[i]);
    }
    free(arr);
    return 0;
}
int* make_array(int size){
    int* temp=(int*)malloc(size*sizeof(int));
    for(int i=0; i<size; i++){
        printf("enter value for slot %d: ",i+1);
        scanf("%d",temp+i);
    }
    return temp;
}
