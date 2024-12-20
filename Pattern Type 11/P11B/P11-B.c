#include<stdio.h>

int main(){

    int row,col,numOfRows;

    printf("Number of rows: ");
    scanf("%d",&numOfRows);

    for(row=numOfRows;row>=1;row--){
        for(col=1;col<=numOfRows-row;col++){
            printf(" ");
        }
        for(col=1;col<=row;col++){
            printf("%d",col); //There should be no space after %d
        }
        for(col=row-1;col>=1;col--){
            printf("%d",col);
        }
        printf("\n");
    }

    return 0;
}
