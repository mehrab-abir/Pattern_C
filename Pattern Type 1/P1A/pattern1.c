#include<stdio.h>

int main(){

    int n, row, col;

    printf("Enter the number of rows: ");
    scanf("%d",&n);

    for(row = 1;row<=n;row++){
        for(col=1;col<=row;col++){
            //printf("%d",col);
            //printf("%d ",row);
            //printf("%d",col%2);
            //printf("%d",row%2);
            //printf("%c",col+64);
            //printf("%c",row+64);
            printf("* ");
            printf("$ ");
        }
        printf("\n");
    }

    return 0;
}
/*
Enter the number of rows: 5
1
12
123
1234
12345
*/
