#include<stdio.h>

int main(){

    int row,col,n;

    printf("Number of rows: ");
    scanf("%d",&n);

    for(row=1;row<=n;row++){
        for(col=1;col<=n-row;col++){
            printf(" ");
        }
        for(col=1;col<=row;col++){
            //printf("%d",col%2); //there can't be a space after %d, otherwise output will be different
            printf("*"); //there can't be a space after %d, otherwise output will be different/diamond
        }
        printf("\n");
    }

    for(row=n-1;row>=1;row--){
        for(col=1;col<=n-row;col++){
            printf(" ");
        }
        for(col=1;col<=row;col++){
            //printf("%d",col%2); //there can't be a space after %d, otherwise output will be different
            printf("*"); //there can't be a space after %d, otherwise output will be different/diamond
        }
        printf("\n");
    }

    return 0;
}
