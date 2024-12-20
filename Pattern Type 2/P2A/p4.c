#include<stdio.h>

int main(){

    int row,col,numOfRows;

    printf("Enter the number of rows: ");
    scanf("%d",&numOfRows);

    for(row=1;row<=numOfRows;row++){
        for(col=1;col<=numOfRows-row;col++){
            printf(" ");
        }

        for(col=1;col<=row;col++){
            printf("*"); //there can't be space after *, otherwise output will be different, or space has to be in both loop
        }
        printf("\n");
    }

    return 0;
}
