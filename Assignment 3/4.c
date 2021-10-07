
#include<stdio.h>

void selectionSort(unsigned int arr[], int n)
{
    int i, j, mini;
    unsigned int tmp;
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

void pAr(unsigned int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%u ", arr[i]);
    printf("\n");
}

int main()
{   
    printf("\nInput array size followed by array ");
    int n;
    scanf("%d",&n);
    unsigned int arr[n],a;
    for(int i=0; i<n; i++)
    {
        scanf("%u", &arr[i]);
    }
    printf("\nInput element to be searched: ");
    scanf("%u",&a);
    selectionSort(arr, n);
    int l=0,r = n-1;
    int flag = 0,mid;
    while (l <= r) {
        mid = l + (r - l) / 2;
        if (arr[mid] == a){
            flag = 1;
            break;
        }
        if (arr[mid] < a){
            l = mid + 1;
        }
        else{
            r = mid - 1;
        }
    }
    if(flag == 0){
        mid = -1;
    }
    printf("Sorted array and index of required number in new array(-1 if not present in array)\n");
    pAr(arr,n);
    printf("%d",mid);
    return 0;
}