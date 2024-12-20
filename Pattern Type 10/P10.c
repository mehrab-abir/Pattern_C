#include<stdio.h>

int main(){

    int row,col,numOfRows;

    printf("Number of rows: ");
    scanf("%d",&numOfRows);

    for(row=1;row<=numOfRows;row++){
        for(col=1;col<=row;col++){
            printf("%d ",row*col);
        }
        printf("\n");
    }

    return 0;
}
