#include<stdio.h>
#include<conio.h>

int main(){
    int a,b,c;
    printf("Enter the fist number :\n");
    scanf("%d",&a);

    printf("Enter the second number :\n");
    scanf("%d",&b);

    printf("Enter the third number :\n");
    scanf("%d",&c);

    if (a<b && a<c){
        printf("The smallest number among the three is : %d ",a);
    }
    else if (b<a && b<c){
         printf("The smallest number among the three is : %d ",b);
    }
    else
     printf("The smallest number among the three is : %d ",c);

     
     getch();

}