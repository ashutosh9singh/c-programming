#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

int* make_array(int size);
int sec_high(int arr[],int size);
int main(){
    int n;
    printf("enter the size of array: ");
    scanf("%d",&n);

    int copy[n];
    int *arr=make_array(n);
    for(int i=0; i<n; i++){
        copy[i]=arr[i];
    }
    int sec=sec_high(copy,n);
    printf("the second highest number in array is %d",sec);
    free(arr);
    
    return 0;
}
int* make_array(int size){
    int *temp=(int *)malloc(size*sizeof(int));
    for(int i=0; i<size; i++){
        printf("enter element %d: ",i+1);
        scanf("%d",&temp[i]);
    }
    return temp;
}
int sec_high(int arr[],int size){
    int high=INT_MIN;
    int secc=INT_MIN;
    for(int i=0; i<=size-1; i++){
        if(high<arr[i]){
            secc=high;
            high=arr[i];
        }
        else if(arr[i]>secc && arr[i]!=high){
            secc=arr[i];
        }
    }
    return secc;
}
