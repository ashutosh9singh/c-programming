#include <stdio.h>
#include <stdlib.h>

int* merge_2_arr(int *total_size);
int* make_arr(int total_size);
int main()
{
    int total_size=0;
    int *neww_arr=merge_2_arr(&total_size);
    for(int i=0; i<total_size; i++){
        printf("%d ",neww_arr[i]);
    }
    
    free (neww_arr);
    return 0;
}

int* make_arr(int size){
    int *temp=(int*)malloc(size*sizeof(int));
    for(int i=0; i<size; i++){
        printf("enter the %d term: ",i+1);
        scanf("%d",temp+i);
    }
    return temp;
}
int* merge_2_arr(int *total_size){
    int n1,n2;
    printf("enter the size of 1st array: ");
    scanf("%d",&n1);
    int *arr1=make_arr(n1);
    
    printf("enter the size of 2nd array: ");
    scanf("%d",&n2);
    int *arr2=make_arr(n2);
    
    //merging
    *total_size=n1+n2;
    
    int *new_arr= (int*)malloc((*total_size)*sizeof(int));
    for(int i=0; i<n1 ; i++){
        new_arr[i]=arr1[i];
    }
    for(int i=0; i<n2; i++){
        new_arr[n1+i]=arr2[i];
    }
    free (arr1);
    free (arr2);
    return new_arr;
}
