#include<stdio.h>

int main(){

    int n, row,col;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for(row = n;row>=1;row--){
        for(col = 1; col <= row; col++){
            printf("%d ",col);
            //printf("%d ",row);
            //printf("%d ",col%2);
            //printf("%d ",row%2);
            //printf("* ");
            //printf("# ");
            //printf("%c ",row+64);
            //printf("%d ",col+64);
        }
        printf("\n");
    }

    return 0;
}
