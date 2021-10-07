#include <stdio.h>
#include<stdlib.h>

/*int* chCol(int *row, int n){
    
    printf("Hi");
    row  = (int *)calloc(n,sizeof(int));
    for(int i=0;i<n;i++)
    {
        row[i] = i%11;
    }
    for(int i=0;i<n;i++)
    {
        printf("%d",row[i]);
    }
    printf("%d",sizeof(row));
    return row;
}*/

void chgMat(void *row[],int rows[],int rn,int ncn){
    if(row[rn]!=NULL){
            free(row[rn]);
    }
    row[rn] = malloc(ncn * sizeof(int));
    rows[rn] = ncn;
    int *tm;
    tm = (int* )row[rn];
    for(int i=0;i<ncn;i++){
        tm[i] = i%11;
    }
}


void printblc(void *row[],int rows[]){
    for(int i=0;i<6;i++){
        printf("\n");
        int *tk = (int*)row[i];
        for(int j=0;j<rows[i];j++){
            printf("%d ",tk[j]);
        }
    }
}


int main(){
    void *row[]={NULL,NULL,NULL,NULL,NULL,NULL};
    int rows[] = {0,0,0,0,0,0};
    //Part a
    chgMat(row,rows,0,7);
    chgMat(row,rows,1,4);
    chgMat(row,rows,2,6);
    chgMat(row,rows,3,3);
    chgMat(row,rows,4,7);
    chgMat(row,rows,5,2);
    printblc(row,rows);
    //Part B
    printf("\nPrint a row you want to modify and also number of columns for it ");
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    chgMat(row,rows,a,b);
    printblc(row,rows);
}