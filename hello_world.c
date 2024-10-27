#include<stdio.h>
#include<string.h>

void print(int n , char str[]){
    for(int i= 0 ; i<n ; i++){
        printf("%c",str[i]);
    }
    printf("\n");
}

int main(){
    char str[] = "helloworld";
    int n = strlen(str);
    char new_str[n];
    
    for(int i=0; i< n ; i++ ){
        
        for(char j = 97 ; j <= 122 ; j++){      //in ASCI 97 = a and 122 = z
            new_str[i] = j ;
            print( i+1 , new_str );
            if(j == str[i]){
                //new_str[i] = j ;
                break;
            }
        }
    }
    new_str[n] = '\0';
    printf("\nFinal string: %s\n", new_str);
    return 0;
}