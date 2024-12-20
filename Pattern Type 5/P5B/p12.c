#include<stdio.h>

int main(){

    int row, col, numOfRows;

    printf("Number of rows: ");
    scanf("%d",&numOfRows);

    for(row=numOfRows;row>=1;row--){
        for(col=1;col<=numOfRows-row;col++){
            printf(" ");
        }
        for(col=1;col<=row*2-1;col++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
