#include<stdio.h>

int main(){

    int row,col,numOfRows;

    printf("Number of rows of 1st half: ");
    scanf("%d",&numOfRows);

    for(row=1;row<=numOfRows;row++){
        for(col=1;col<=numOfRows-row;col++){
            printf(" ");
        }
        for(col=1;col<=row;col++){
            printf("%d",col);
        }
        for(col=row-1;col>=1;col--){
            printf("%d",col);
        }
        printf("\n");
    }

    for(row=numOfRows-1;row>=1;row--){
        for(col=1;col<=numOfRows-row;col++){
            printf(" ");
        }
        for(col=1;col<=row;col++){
            printf("%d" ,col);
        }
        for(col=row-1;col>=1;col--){
            printf("%d",col);
        }
        printf("\n");
    }

    return 0;
}
