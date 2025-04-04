#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    int count =0 ;
    int rslt[3] = {0,0,0};
    char a[10],b[10],c[10],d[10];
    typedef struct result{
        int N_ID;
        char vote1;
        char vote2;
        char vote3;
        //int rslt[3] ;
        //int rslt2 ;
        //int rslt3;
    }vote;

    vote people[100];
    FILE *fp1 , *fp2;
    fp1 = fopen("election.txt","r");
    fp2 = fopen("election_result.txt","w");

    if(fp1 == NULL || fp2 == NULL){
        printf("FIle input output failed.");
        return 1;
    }
    fscanf(fp1,"%s %s %s %s",a,b,c,d);

    while((fscanf(fp1,"%d %c %c %c", &people[count].N_ID , &people[count].vote1 , &people[count].vote2 , &people[count].vote3)) == 4 ){

        if(people[count].vote1 == 'x'){  //Amlan
            rslt[0]++;
        }
        if(people[count].vote2 == 'x'){ //sourov
            rslt[1]++;
        }
        if(people[count].vote3 == 'x'){ // Ucchas
            rslt[2]++;
        }
        count++;
        if(count>=100) break;
    }
    
    struct winner{
        char name[20];
        int rslt;
    };
    struct winner candidate[3] = {
        {"Amlan",rslt[0]},
        {"Sourov",rslt[1]},
        {"Ucchas",rslt[2]}
    };

    for(int i =0 ; i<3 ; i++){
        for(int j=i+1 ; j<3 ; j++){
            if(candidate[i].rslt < candidate[j].rslt){
                struct winner temp = candidate[j];
                candidate[j] = candidate[i];
                candidate[i] = temp;
            }
        }
    }

    for(int i=0 ; i<3 ; i++){
        fprintf(fp2,"%-12s\t%d\n",candidate[i].name,candidate[i].rslt);
    }
    fclose(fp1);
    fclose(fp2);
    return 0;
}