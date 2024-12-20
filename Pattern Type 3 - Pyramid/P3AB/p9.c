#include<stdio.h>

int main(){
    int row,col, numOfRows;

    printf("Number of rows of 1st half: ");
    scanf("%d",&numOfRows);

    for(row=1;row<=numOfRows;row++){
        for(col=1;col<=numOfRows-row;col++){
            printf(" ");
        }
        for(col=1;col<=row;col++){
            printf("* "); //there must be a space after the *, %d or %c(whatever it is), otherwise output will be different
        }
        printf("\n");
    }

    for(row=numOfRows-1;row>=1;row--){
        for(col=1;col<=numOfRows-row;col++){
            printf(" ");
        }
        for(col=1;col<=row;col++){
            printf("* "); //there must be a space after the *, %d or %c(whatever it is), otherwise output will be different
        }
        printf("\n");
    }

    return 0;
}
