#include<stdio.h>
#include<math.h>
#define pi 3.14159265

float fact(int n);

int main(){
    float X , rad , sum = 0 , count = 1;
    printf("Enter the angle of Sin(X) : ");
    scanf("%f",&X);
    rad = X*pi/180 ;

    for(int i = 0 ; i<10 ; i++){
        sum += (pow(rad , 2*i+1)) * count / fact(2*i+1);
        count*=-1 ;
    }
    printf("\nThe value of Sin(%.2f) = %f",X,sum);

    return 0 ;
}

float fact(int n){
    float total = 1;
    if(n==0){
        return 1 ;
    }
    else{
        for(int i = 1 ; i<=n ; i++){
            total *=i ;
        }
        return total ;
    }    
}