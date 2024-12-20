#include<stdio.h>

int main(){

    int row,col, numOfRows, numOfCols;

    printf("Number of rows: ");
    scanf("%d",&numOfRows);

    printf("Number of columns: ");
    scanf("%d",&numOfCols);

    for(row=1;row<=numOfRows;row++){
        for(col=1;col<=numOfCols;col++){
            if(row==1 || row==numOfRows || col==1 || col==numOfCols){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
