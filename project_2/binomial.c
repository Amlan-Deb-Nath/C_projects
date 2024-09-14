#include<stdio.h>
#include<math.h>

int main(){
    float a , b , c , ans_1 , ans_2 , discriminant , real_part , imag_part ;

    printf("Enter the coefficients of the Quadratic Equation a(X^2) + bX + c : ");
    scanf("%f %f %f", &a , &b , &c );

    if( a != 0 ){
        discriminant = b*b-4*a*c ;
   
        if( discriminant > 0 ){
            ans_1 = (-b + sqrt(discriminant)) / (2*a) ;
            ans_2 = (-b - sqrt(discriminant)) / (2*a) ;

            printf("\nThe roots of the Quadretic Equation are  %.2f & %.2f .", ans_1 , ans_2 );
        } else if( discriminant == 0 ){
            ans_1 = ans_2 = -b / (2*a) ;
            printf("\nThe roots of the Quadretic Equation are  %.2f & %.2f .", ans_1 , ans_2 );
        } else if(discriminant < 0){
            real_part = -b / (2*a) ;
            imag_part = sqrt(-discriminant) / (2*a) ;
            printf("\nThe roots are complex: %.2f + %.2fi and %.2f - %.2fi\n", real_part, imag_part, real_part, imag_part);
        }

    } else {
        printf("\nThe inputed values are incorrect for Quadretic Equation . As 'a' cannot be Zero . \n") ;
    }

    return 0 ;
}