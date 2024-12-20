#include<stdio.h>

int main(){

    int row,col, num_row, num_col;

    printf("Enter the number of rows: ");
    scanf("%d",&num_row);

    printf("Enter the number of columns: ");
    scanf("%d",&num_col);

    for(row=1;row<=num_row;row++){
        for(col=1;col<=num_col;col++){
            printf("%d ",col);
        }
        printf("\n");
    }

    return 0;
}
