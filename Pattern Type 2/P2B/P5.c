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
            //printf("%c",col+64);
            printf("*"); //there can't be a space after %c, otherwise output will be different, or space has to be in loop
        }
        printf("\n");
    }

    return 0;
}
