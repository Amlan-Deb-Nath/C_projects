#include<stdio.h>
#define n 4

void mat_factor(int matrix[][n] , int temp[][n] , int r , int c , int size );
int determinant(int matrix[][n], int size );

int main(){
    int matrix[n][n] = {{1,-2,-3,4},{4,5,6,-2},{1,6,0,-1},{8,0,10,2}};

    for(int i=0; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            printf("%3d",matrix[i][j]);
        }
    printf("\n");
    }

    printf("\n\nThe determinant of the matrix is %d .", determinant( matrix , n));

    return 0;
}

void mat_factor(int matrix[n][n] , int temp[n][n] , int r , int c , int size ){
    int i = 0 , j = 0 ;
    for(int row=0 ; row < size ; row++){
        for(int column=0 ; column < size ; column++){
            if( row != r && column != c ){
                temp[i][j++] = matrix[row][column];
                if( j == size-1){
                    j=0;
                    i++;
                }
            }
        }
    }
}

int determinant(int matrix[n][n], int size ){
    int p = 1 , det = 0 ;
    int temp[n][n];

    if(size==1){
        return matrix[0][0];
    }

    for(int j=0 ; j<size ; j++){
        mat_factor(matrix , temp , 0 , j , size);
        det += matrix[0][j]*determinant(temp , size-1 )*p;
        p*= -1;
    }
    return det;

}