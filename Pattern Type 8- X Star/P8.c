#include<stdio.h>

int main(){

    int row,col, numOfRows;

    printf("Number of rows: ");
    scanf("%d",&numOfRows);

    for(row=1;row<=numOfRows;row++){
        for(col=1;col<=numOfRows;col++){
            if(col==row || row+col==numOfRows+1){
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
