#include<stdio.h>
int main(){
    int x,y,z;
   
    printf("Enter three number : ");
    scanf("%d%d%d",&x,&y,&z);
    
    (x>y)?((x>z)?printf("X is he largest number ."):(z>y)?printf("Z is the largest Number"):printf("")):(y>z)?printf("Y is the Largest number ."):printf("Z is the largest number .");
    
    return 0;

} 