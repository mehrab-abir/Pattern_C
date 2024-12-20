#include<stdio.h>

int main(){

    int row,col,numOfRows;

    printf("Number of rows: ");
    scanf("%d",&numOfRows);

    for(row=1;row<=numOfRows;row++){
        for(col=1;col<=numOfRows-row;col++){
            //printf("\t"); //with tab, the shape will be wider, but in that case, tab must be used in both loops
            printf(" ");
        }
        for(col=1;col<=row*2-1;col++){
            //printf("\t");  //with tab, the shape will be wider, but in that case, tab must be used in both loops
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

