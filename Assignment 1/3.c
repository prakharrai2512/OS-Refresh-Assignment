#include <stdio.h>
#include<stdlib.h>


int main(){
    int a,b,c;
    printf("Input variable 1 and 2 \n");
    scanf(" %d",&a);
    scanf(" %d",&b);
    c = a;
    a = b;
    b = c;
    printf("%d ",a);
    printf("%d ",b);
    printf("\nInput array size followed by both arrays ");
    int n;
    scanf("%d",&n);
    int arr[n];
    int arr1[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr1[i]);
    }
    for(int i =0;i < n; i++){
        c = arr[i];
        arr[i] = arr1[i];
        arr1[i] = c;
    }
    printf("\nArray 1:");
    for(int i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\nArray 2:");
    for(int i=0; i<n; i++)
    {
        printf("%d ", arr1[i]);
    }
    return 0;
    
}