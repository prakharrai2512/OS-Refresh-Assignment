#include<stdio.h>

void selectionSort( int arr[], int n)
{
    int i, j, mini;
    int tmp;
    for (i = 0; i < n - 1; i++) {
        mini = i;
        for (j = i + 1; j < n; j++){
            if (arr[j] < arr[mini]){
                mini = j;
            }
        }
        tmp = arr[i];
        arr[i] = arr[mini];
        arr[mini] = tmp;
    }
}

void bubbleSort(int arr[], int n)
{
   int i, j,tmp;
   for (i = 0; i < n-1; i++)     
       for (j = 0; j < n-i-1; j++)
           if (arr[j] > arr[j+1]){
              tmp = arr[j];
              arr[j] = arr[j+1];
              arr[j+1] = tmp;
           }
}


void pAr(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main()
{   
    printf("\nInput array size followed by array ");
    int n;
    scanf("%d",&n);
    int arr[n],a;
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int opt;
    printf("Enter 1 for selection sort and 2 for bubblesort ");
    scanf("%d",&opt);
    if(opt==1){
        selectionSort(arr,n);
        pAr(arr,n);
    }
    else if(opt==2){
        bubbleSort(arr,n);
        pAr(arr,n);
    }
    else{
        printf("Invalid entry try again");
    }
}