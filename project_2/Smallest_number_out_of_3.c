#include<stdio.h>

int main(){
    int a,b,c;
    printf("Enter the fist number : ");
    scanf("%d",&a);

    printf("\nEnter the second number : ");
    scanf("%d",&b);

    printf("\nEnter the third number : ");
    scanf("%d",&c);

    if (a<b && a<c){
        printf("\nThe smallest number among the three is : %d ",a);
    }
    else if (b<a && b<c){
         printf("\nThe smallest number among the three is : %d ",b);
    }
    else
     printf("\nThe smallest number among the three is : %d ",c);

    return 0 ;
}