#include<stdio.h>

int main(){
    int r1 = 3, c1 = 4;
    int a[r1][c1];
    int trans[c1][r1];
    // printf("Enter Rows and Column of Matrix A : ");
    // scanf("%d%d",&r1,&c1);

    for(int i=0 ; i<r1 ; i++){
        for(int j=0 ; j<c1 ; j++){
            printf("%d %d values of Matrix a :",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nThe matrix is : \n");
    for(int i=0 ; i<r1 ; i++){
        for(int j=0 ; j<c1 ; j++){
            printf("%3d",a[i][j]);
        }
        printf("\n");
    }

    for(int i = 0 ; i<r1 ; i++){
        for(int j = 0; j<c1 ; j++){
            trans[j][i] = a[i][j];
        }
    }

    printf("\nThe transpose matrix is : \n");
    for(int i=0 ; i<c1 ; i++){
        for(int j=0 ; j<r1 ; j++){
            printf("%3d",trans[i][j]);
        }
        printf("\n");
    }

    return 0;
}