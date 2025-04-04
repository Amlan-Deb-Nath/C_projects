#include <stdio.h>
#include <stdlib.h>

#define CURRENT_YEAR 2024             // Today's date: 13.12.2024
#define CURRENT_MONTH 12
#define CURRENT_DAY 13

int is_leap_year(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int total_days_from_start(int year, int month, int day) {
    int days_in_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int total_days = 0;

    for (int i = 0; i < year; i++) {
        total_days += (is_leap_year(i) ? 366 : 365);
    }

    for (int i = 0; i < month - 1; i++) {
        total_days += days_in_month[i];
    
        if (i == 1 && is_leap_year(year)) { // February in a leap year
            total_days += 1;
        }
    }
    // if (day > CURRENT_DAY && month==2 ) {
    //     total_days -= 1;
    // }

    total_days += day;

    return total_days;
}

int calculate_date_difference(int year, int month, int day) {
    int current_total_days = total_days_from_start(CURRENT_YEAR, CURRENT_MONTH, CURRENT_DAY);
    int given_total_days = total_days_from_start(year, month, day);

    return current_total_days - given_total_days + 1;
}

int main() {
    typedef struct date {
        char name[20];
        int year;
        int month;
        int day;
        int difference_in_days;
    } somoy;

    somoy participants[10];
    int count = 0;

    FILE *fp1, *fp2;
    fp1 = fopen("day_list.txt", "r");
    fp2 = fopen("age_merit.txt", "w");

    if (fp1 == NULL || fp2 == NULL) {
        printf("Error in file input/output.\n");
        return 1;
    } else {
        printf("File input/output is successful.\n");
    }

    while (fscanf(fp1, "%s %d %d %d", participants[count].name, &participants[count].day, &participants[count].month, &participants[count].year) == 4){
        count++;
        if (count >= 10) break;
    }

    for (int i = 0; i < count; i++) {
        participants[i].difference_in_days = calculate_date_difference(participants[i].year, participants[i].month, participants[i].day);
    }

    fprintf(fp2, "Name\t\tDate of Birth\t\tDays Difference\n");
    fprintf(fp2, "--------------------------------------------------\n");

    for(int i=0 ; i< count  ; i++){
        for(int j=i+1 ; j<count ; j++){
            if( participants[i].difference_in_days < participants[j].difference_in_days ){
                somoy temp = participants[j];
                participants[j] = participants[i];
                participants[i] = temp;
            }
        }
    }
    for (int i = 0; i < count; i++) {
        fprintf(fp2, "%s\t\t%d-%02d-%02d\t\t\t%d\n", participants[i].name, participants[i].year, participants[i].month, participants[i].day, participants[i].difference_in_days);
    }

    fclose(fp1);
    fclose(fp2);

    printf("\nDifferences in days calculated and written to 'age_merit.txt'.\n");
    return 0;
}
