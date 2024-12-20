#include<stdio.h>

int main(){

    int row, col, numOfRows;

    printf("Number of rows: ");
    scanf("%d", &numOfRows);

    for(row=numOfRows;row>=1;row--){
        for(col=1;col<=numOfRows-row;col++){
            printf(" ");
        }
        for(col=1;col<=row;col++){
            printf("* "); //there must be a space after * or %d or %c(whatever it is), otherwise output will be different
        }
        printf("\n");
    }

    return 0;
}
