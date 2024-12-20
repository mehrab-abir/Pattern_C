#include<stdio.h>

int main(){

    int row,col, numOfRows, count=1;

    printf("Number of rows: ");
    scanf("%d",&numOfRows);

    for(row=1;row<=numOfRows;row++){
        for(col=1;col<=row;col++){
            printf("%d ",count++);
        }
        printf("\n");
    }

    return 0;
}
