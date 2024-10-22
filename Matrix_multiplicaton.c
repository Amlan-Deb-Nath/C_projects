#include<stdio.h>

int main(){
    int r1 = 3 , c1 = 2 , r2 = 2 , c2 = 4;
    int a[r1][c1] , b[r2][c2] , c[r1][c2];

    for(int i=0 ; i<r1 ; i++){
        for(int j=0 ; j<c1 ; j++){
            printf("%d %d values of Matrix A is :", i+1 , j+1);
            scanf("%d",&a[i][j]);
        }
    } 
    printf("\n");
    for(int i=0 ; i<r2 ; i++){
        for(int j=0 ; j<c2 ; j++){
            printf("%d %d values of Matrix B is :", i+1 , j+1);
            scanf("%d",&b[i][j]);
        }
    }

    if(c1 != r2){
        printf("The matrix can't be Multiplied.");
        return 0;
    }

    for(int i=0 ; i<r1 ; i++){
        for(int j = 0 ; j<c2 ; j++){
            int sum = 0 ;
            for(int k=0 ; k<c1 ; k++){
                sum +=a[i][k]*b[k][j];
            }
            c[i][j] = sum;
        }
    }

    printf("\nThe Multiplied Matrix is : \n");
    for(int i=0 ; i<r1 ; i++){
        for(int j=0 ; j<c2 ; j++){
            printf("%3d",c[i][j]);
        }
        printf("\n");
    }

    return 0;
}