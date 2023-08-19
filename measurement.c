#include<stdio.h>
#include<string.h>

int main (){
    char x[20];
    printf("\nEnter your option(Temperature/Length/Area/Volume/Mass/BMI/Time/Speed/Data) : ");
    scanf("%s",x);
    
    if (strcmp(x,"Temperature") == 0){
        float c,f,k;
        int option;
        printf("\n");
        printf("Press 1 for convertion between Celcious & Fahrenheit ");
        printf("\npress 2 for convertion between Celcious & Kelvin ");
        printf("\nPress 3 for convertion between Fahrenheit & Kelvin ");
        scanf("%d",&option);

        if (option == 1){
            int d;
            printf("\nPress 1 for converting Celcious to Fahrenheit ");
            printf("\nPress 2 for converting Fahrenheit to Celcious ");
            scanf("%d",&d);

            if (d == 1){
                printf("\nEnter the Celcious temperature : ");
                scanf("%f",&c);
                f = 9*c/5+32;
                printf("\nThe temperature in Fahrenheit is %f",f); 

            } else if (d == 2){
                printf("\nEnter the Fahrenheit temperature : ");
                scanf("%f",&f);
                c = 5*(f-32)/9;
                printf("\nThe temperature in Celcious is %f",c); 

            } else {
                printf("\nInvalid Input");
            }

        } else if (option == 2){
            int d;
            printf("\nPress 1 for converting Celcious to Kelvin ");
            printf("\nPress 2 for converting Kelvin to Celcious ");
            scanf("%d",&d);

            if (d == 1){
                printf("\nEnter the Celcious temperature : ");
                scanf("%f",&c);
                k = c+273.15;
                printf("\nThe temperature in Kelvin is %f",k); 

            } else if (d == 2){
                printf("\nEnter the Kelvin temperature : ");
                scanf("%f",&k);
                c = k-273.15;
                printf("\nThe temperature in Celcious is %f",c); 

            } else {
                printf("\nInvalid Input");
            }

        } else if (option == 3){
            int d;
            printf("\nPress 1 for converting Kelvin to Fahrenheit ");
            printf("\nPress 2 for converting Fahrenheit to Kelvin ");
            scanf("%d",&d);

            if (d == 1){
                printf("\nEnter the Kelvin temperature : ");
                scanf("%f",&k);
                f = 9*(k-273.15)/5+32;
                printf("\nThe temperature in Fahrenheit is %f",f); 

            } else if (d == 2){
                printf("\nEnter the Fahrenheit temperature : ");
                scanf("%f",&f);
                k = 5*(f-32)/9+273.15;
                printf("\nThe temperature in Kelvin is %f",k); 

            } else {
                printf("\nInvalid Input");
            }

        } else {
            printf("\nInvalid Input. Please type again.");
        }

    }
    
    else if (strcmp(x,"Length") == 0){
        float m , i , k , M ;
        int option1;
        printf("\n");
        printf("Press 1 for convertion between Meter & Kilometer ");
        printf("\npress 2 for convertion between Kilometer & Mile ");
        printf("\nPress 3 for convertion between Meter & Inch ");
        printf("\nPress 4 for convertion between Mile & Meter");
        scanf("%d",&option1);

        if (option1 == 1){
            int d;
            printf("\nPress 1 for converting Meter to kilometer ");
            printf("\nPress 2 for converting kilometer to meter ");
            scanf("%d",&d);

            if (d == 1){
                printf("\nEnter the length in Meter");
                scanf("%f",&m);
                k = m/1000;
                printf("\nThe length in Kilometer is %f",k);

            } else if (d == 2){
                printf("\nEnter the length in Kilometer ");
                scanf("%f",&k);
                m = k*1000;
                printf("\nThe length in meter is %f",m);

            } else {
                printf("\nInvalid Input ");
            }

        } else if (option1 == 2){
            int d;
            printf("\nPress 1 for converting Mile to kilometer ");
            printf("\nPress 2 for converting kilometer to Mile ");
            scanf("%d",&d);

            if (d == 1){
                printf("\nEnter the length in Mile");
                scanf("%f",&M);
                k = M*1.6;
                printf("\nThe length in Kilometer is %f",k);

            } else if (d == 2){
                printf("\nEnter the length in Kilometer ");
                scanf("%f",&k);
                M = k/1.6;
                printf("\nThe length in meter is %f",M);

            } else {
                printf("\nInvalid Input ");
            }

        } else if (option1 == 3){
            int d;
            printf("\nPress 1 for converting Meter to Inch ");
            printf("\nPress 2 for converting Inch to meter ");
            scanf("%d",&d);

            if (d == 1){
                printf("\nEnter the length in Meter ");
                scanf("%f",&m);
                i = m*39.37;
                printf("\nThe length in Inch is %f",i);

            } else if (d == 2){
                printf("\nEnter the length in Inch ");
                scanf("%f",&i);
                m = i/39.37;
                printf("\nThe length in meter is %f",m);

            } else {
                printf("\nInvalid Input ");
            }

        } else if (option1 == 4){
            int d;
            printf("\nPress 1 for converting Mile to Meter ");
            printf("\nPress 2 for converting Meter to Mile ");
            scanf("%d",&d);

            if (d == 1){
                printf("\nEnter the length in Mile");
                scanf("%f",&M);
                m = M*1609;
                printf("\nThe length in Meter is %f",m);

            } else if (d == 2){
                printf("\nEnter the length in Meter ");
                scanf("%f",&m);
                M = m/1609;
                printf("\nThe length in meter is %f",M);

            } else {
                printf("\nInvalid Input ");
            }

        } else {
            printf("\nInvalid Input . Please type again");
        }
    }
    
    else if (strcmp(x,"Area") == 0){
        float m2 , k2 , h ;
        int option1;
        printf("\n");
        printf("Press 1 for convertion between Meter Square & Kilometer Square ");
        printf("\npress 2 for convertion between Kilometer Square & Hectare ");
        printf("\nPress 3 for convertion between Meter Square & Hectare  ");
        scanf("%d",&option1);

        if (option1 == 1){
            int d;
            printf("\nPress 1 for converting Meter square to Kilometer square ");
            printf("\nPress 2 for converting Kilometer square to meter square ");
            scanf("%d",&d);

            if (d == 1){
                printf("\nEnter area in Meter square : ");
                scanf("%f",&m2);
                k2 = m2/1000000;
                printf("\nThe area in Kilometer square is %f",k2);

            } else if (d == 2){
                printf("\nEnter area in Kilometer square : ");
                scanf("%f",&k2);
                m2 = k2 * 1000000;
                printf("\nThe area in Meter square is %f",m2);

            } else{
                printf("\nInvalid Input ");
            }

        } else if (option1 == 2){
            int d;
            printf("\nPress 1 for converting Hectare to Kilometer square ");
            printf("\nPress 2 for converting Kilometer square to Hectare ");
            scanf("%d",&d);

            if (d == 1){
                printf("\nEnter area in Hectare : ");
                scanf("%f",&h);
                k2 = h/100;
                printf("\nThe area in Kilometer square is %f",k2);

            } else if (d == 2){
                printf("\nEnter area in Kilometer square : ");
                scanf("%f",&k2);
                h = k2 * 100;
                printf("\nThe area in Meter Hectare is %f",h);

            } else{
                printf("\nInvalid Input ");
            }

        } else if (option1 == 3){
            int d;
            printf("\nPress 1 for converting Hectare to Meter square ");
            printf("\nPress 2 for converting Meter square to Hectare ");
            scanf("%d",&d);

            if (d == 1){
                printf("\nEnter area in Hectare : ");
                scanf("%f",&h);
                m2 = h*1000000;
                printf("\nThe area in Meter square is %f",m2);

            } else if (d == 2){
                printf("\nEnter area in Meter square : ");
                scanf("%f",&m2);
                h = m2 / 1000000;
                printf("\nThe area in Meter Hectare is %f",h);

            } else{
                printf("\nInvalid Input ");
            }

        } else {
            printf("\nInvalid Input . Please type again");
        }
    }
    
    else if (strcmp(x,"Volume") == 0){
        float m3 , cc , l ;
        int option1;
        printf("\n");
        printf("Press 1 for convertion between Cubic meter & Liter ");
        printf("\npress 2 for convertion between Cubic centimeter & Liter ");
        printf("\nPress 3 for convertion between Cubic meter & Cubic centimeter ");
        scanf("%d",&option1);

        if (option1 == 1){
            int d;
            printf("\nPress 1 for converting Cubic meter to liter ");
            printf("\nPress 2 for converting Liter to Cubic meter ");
            scanf("%d",&d);

            if (d == 1){
                printf("\nEnter the value in Cubic meter : ");
                scanf("%f",&m3);
                l = m3*1000;
                printf("\nThe volume in lite is %f",l);

            } else if (d == 2){
                int d;
                printf("\nEnter the volume in Liter : ");
                scanf("%f",&l);
                m3 = l/1000;
                printf("\nThe volume in liter is %f",m3);

            } else {
                printf("\nInvalid Input .");
            }

        } else if (option1 == 2){
            int d;
            printf("\nPress 1 for converting Cubic centimeter to Liter ");
            printf("\nPress 2 for converting Literr to Cubic centimter ");
            scanf("%d",&d);

            if (d == 1){
                printf("\nEnter the valume in Cubic centimeter : ");
                scanf("%f",&cc);
                l = cc/1000;
                printf("\nThe volume in Liter is %f",l);

            } else if (d == 2){
                printf("\nEnter the volume in Liter : ");
                scanf("%f",&l);
                cc = l*1000;
                printf("\nThe volume in Cubic centimeter is %f",cc);

            } else {
                printf("\nInvalid Input .");
            }

        } else if (option1 == 3){
            int d;
            printf("\nPress 1 for converting Cubic meter to Cubic centimeter ");
            printf("\nPress 2 for converting Cubic centimeter to Cubic meter ");
            scanf("%d",&d);

            if (d == 1){
                printf("\nEnter the value in Cubic meter : ");
                scanf("%f",&m3);
                cc = m3*1000000;
                printf("\nThe volume in lite is %f",cc);

            } else if (d == 2){
                int d;
                printf("\nEnter the volume in Cubic centimeter : ");
                scanf("%f",&cc);
                m3 = cc/1000000;
                printf("\nThe volume in liter is %f",m3);

            } else {
                printf("\nInvalid Input .");
            }

        } else {
            printf("Invalid Input . Please type again");
        }
    }
    
    else if (strcmp(x,"Mass") == 0){
        float kg , g , t , p ;
        int option1;
        printf("\n");
        printf("Press 1 for convertion between Kilo-gram & Gram ");
        printf("\npress 2 for convertion between Kilo-gram & Pound ");
        printf("\nPress 3 for convertion between Gram & Pound ");
        printf("\nPress 4 for convertion between Kilo-gram & Tonne");
        scanf("%d",&option1);

        if (option1 == 1){
            int d;
            printf("\nPress 1 for converting Kilo-gram to Gram ");
            printf("\nPress 2 for converting Gram to Kilo-Gram ");
            scanf("%d",&d);

            if (d == 1){
                printf("\nEnter the mass in Kilo-gram : ");
                scanf("%f",&kg);
                g = kg*1000;
                printf("\nThe mass in Gram is %f",g);

            } else if (d == 2){
                printf("\nEnter the mass in Gram : ");
                scanf("%f",&g);
                kg = g/1000;
                printf("\nThe mass in Kilo-gram is %f",kg);

            } else {
                printf("\nInvalid Input");
            }

        } else if (option1 == 2){
            int d;
            printf("\nPress 1 for converting Kilo-gram to Pound ");
            printf("\nPress 2 for converting Pound to Kilo-Gram ");
            scanf("%d",&d);

            if (d == 1){
                printf("\nEnter the mass in Kilo-gram : ");
                scanf("%f",&kg);
                p = kg*2.205;
                printf("\nThe mass in pound is %f",p);

            } else if (d == 2){
                printf("\nEnter the mass in Pound : ");
                scanf("%f",&p);
                kg = p/2.205;
                printf("\nThe mass in Kilo-Gram is %f",kg);

            } else {
                printf("\nInvalid Input");
            }

        } else if (option1 == 3){
            int d;
            printf("\nPress 1 for converting Gram to Pound ");
            printf("\nPress 2 for converting Pound to Gram ");
            scanf("%d",&d);

            if (d == 1){
                printf("\nEnter the mass in Gram : ");
                scanf("%f",&g);
                p = (g*2.205)/1000;
                printf("\nThe mass in pound is %f",p);

            } else if (d == 2){
                printf("\nEnter the mass in Pound : ");
                scanf("%f",&p);
                g = (p/2.205)*1000;
                printf("\nThe mass in Gram is %f",g);

            } else {
                printf("\nInvalid Input");
            }

        } else if (option1 == 4){
            int d;
            printf("\nPress 1 for converting Kilo-gram to Tonne ");
            printf("\nPress 2 for converting Tonne to Kilo-Gram ");
            scanf("%d",&d);

            if (d == 1){
                printf("\nEnter the mass in Kilo-gram : ");
                scanf("%f",&kg);
                t = kg/1000;
                printf("\nThe mass in Tonne is %f",t);

            } else if (d == 2){
                printf("\nEnter the mass in Tonne : ");
                scanf("%f",&t);
                kg = t*1000;
                printf("\nThe mass in Kilo-gram is %f",kg);

            } else {
                printf("\nInvalid Input");
            }

        } else {
            printf("\nInvalid Input . Please type again");
        }
    }
    
    else if (strcmp(x,"BMI") == 0){
        float kg , i , bmi, m;
        printf("Enter your weight(In kg) : ");
        scanf("%f",&kg);
        printf("Enter your Height (In inch) : ");
        scanf("%f",&i);
        m = i/39.37;
        bmi = kg/(m*m);
        printf("\nYour B.M.I is %f .",bmi);
        
        if (bmi < 16.0) {
        printf("You are severely underweight.\n");
    } else if (bmi >= 16.0 && bmi < 18.5) {
        printf("You are underweight.\n");
    } else if (bmi >= 18.5 && bmi < 25.0) {
        printf("You are normal weight.\n");
    } else if (bmi >= 25.0 && bmi < 30.0) {
        printf("You are overweight.\n");
    } else if (bmi >= 30.0 && bmi < 35.0) {
        printf("You are obese (Class 1).\n");
    } else if (bmi >= 35.0 && bmi < 40.0) {
        printf("You are obese (Class 2).\n");
    } else {
        printf("You are severely obese (Class 3).\n");
    }

    }
    
    else if (strcmp(x,"Time") == 0){
        float s, m, h ;
        int option;
        printf("\n");
        printf("Press 1 for convertion between Second & Minute ");
        printf("press 2 for convertion between Minute & Hour ");
        printf("Press 3 for convertion between Hour & Second ");
        scanf("%d",&option);

        if (option == 1){
            int d;
            printf("\nPress 1 for converting Second to Minute ");
            printf("\nPress 2 for converting Minute to Second ");
            scanf("%d",&d);

            if (d == 1){
                printf("\nEnter the time in Seconds : ");
                scanf("%f",&s);
                m = s/60;
                printf("\nThe time in Minute is %f",m);

            } else if (d == 2){
                printf("\nEnter the time in Minute : ");
                scanf("%f",&m);
                s = m*60 ;
                printf("\nThe time in Second is %f",s);

            } else {
                printf("\nInvalid Input .");
            }

        } else if (option == 2){
            int d;
            printf("\nPress 1 for converting Minute to Hour ");
            printf("\nPress 2 for converting Hour to Minute ");
            scanf("%d",&d);

            if (d == 1){
                printf("\nEnter the time in Minute : ");
                scanf("%f",&m);
                h = m/60;
                printf("\nThe time in Hour is %f",h);

            } else if (d == 2){
                printf("\nEnter the time in Hour : ");
                scanf("%f",&h);
                m = h*60 ;
                printf("\nThe time in Minute is %f",m);

            } else {
                printf("\nInvalid Input .");
            }

        } else if (option == 3){
            int d;
            printf("\nPress 1 for converting Hour to Second ");
            printf("\nPress 2 for converting Second to Hour ");
            scanf("%d",&d);

            if (d == 1){
                printf("\nEnter the time in Hour : ");
                scanf("%f",&h);
                s = h*3600;
                printf("\nThe time in Second is %f",s);

            } else if (d == 2){
                printf("\nEnter the time in Second : ");
                scanf("%f",&s);
                h = s/3600 ;
                printf("\nThe time in Hour is %f",h);

            } else {
                printf("\nInvalid Input .");
            }

        } else {
            printf("\nInvalid Input. Please type again.");
        }

    }
    
    else if (strcmp(x,"Speed") == 0){
        float ms,kh,mh;
        int option;
        printf("\n");
        printf("Press 1 for convertion between Meter per second & Kilometer per hour ");
        printf("press 2 for convertion between Kilometer per second & Mile per hour ");
        printf("Press 3 for convertion between Meter per second & Mile per hour ");
        scanf("%d",&option);

        if (option == 1){
            int d;
            printf("\nPress 1 for converting Meter per second to Kilometer per hour ");
            printf("\nPress 1 for converting Kilometer per hour to Meter per second ");
            scanf("%d",&d);

            if (d == 1){
                printf("\nEnter the velocity in Meter per second : ");
                scanf("%f",ms);
                kh = ms*3.6 ;
                printf("\nThe velocity in Kilometer per hour is %f .",kh);

            } else if (d == 2){
                printf("\nEnter the velocity in Kilometer per hour : ");
                scanf("%f",kh);
                ms = kh/3.6 ;
                printf("\nThe velocity in Meter per second is %f .",ms);

            } else {
                printf("\nInvalid Input .");
            }

        } else if (option == 2){
            int d;
            printf("\nPress 1 for converting Kilometer per hour to Mile per hour ");
            printf("\nPress 1 for converting Mile per hour to Kilometer per Hour ");
            scanf("%d",&d);

            if (d == 1){
                printf("\nEnter the velocity in Kilometer per hour : ");
                scanf("%f",kh);
                mh = kh/1.6 ;
                printf("\nThe velocity in Mile per hour is %f .",mh);

            } else if (d == 2){
                printf("\nEnter the velocity in Mile per hour : ");
                scanf("%f",mh);
                kh = mh*1.6 ;
                printf("\nThe velocity in Kilometer per hour is %f .",kh);

            } else {
                printf("\nInvalid Input .");
            }

        } else if (option == 3){
            int d;
            printf("\nPress 1 for converting Meter per second to Mile per hour ");
            printf("\nPress 1 for converting Mile per second to Meter per hour ");
            scanf("%d",&d);

            if (d == 1){
                printf("\nEnter the velocity in Meter per second : ");
                scanf("%f",ms);
                mh = (ms*3.6)/1.6 ;
                printf("\nThe velocity in Mile per hour is %f .",mh);

            } else if (d == 2){
                printf("\nEnter the velocity in Mile per hour : ");
                scanf("%f",mh);
                ms = (mh*1.6)/3.6 ;
                printf("\nThe velocity in Meter per second is %f .",ms);

            } else {
                printf("\nInvalid Input .");
            }

        } else {
            printf("\nInvalid Input. Please type again.");
        }

    }
    
    else if (strcmp(x,"Data") == 0){
        float kb,mb,gb;
        int option;
        printf("\n");
        printf("Press 1 for convertion between Kilobyte & Megabyte ");
        printf("press 2 for convertion between Megabyte & Gigabyte ");
        printf("Press 3 for convertion between Gigabyte & Kilobyte ");
        scanf("%d",&option);

        if (option == 1){
            int d;
            printf("\nPress 1 for converting Kilobyte to Megabyte : ");
            printf("\nPress 2 for converting Megabyte to Kilobyte : ");
            scanf("%d",&d);

            if (d == 1){
                printf("\nEnter the value in Kilobyte : ");
                scanf("%f",&kb);
                mb = kb/1024;
                printf("\nThe value in Megabyte is %f .",mb);

            } else if (d == 2){
                printf("\nEnter the value in Megabyte : ");
                scanf("%f",&mb);
                kb = mb*1024;
                printf("\nThe value in kilobyte is %f .",kb);

            } else {
                printf("\nInvalid Input .");
            }

        } else if (option == 2){
            int d;
            printf("\nPress 1 for converting Megabyte to Gigabyte : ");
            printf("\nPress 2 for converting Gigabyte to Megabyte : ");
            scanf("%d",&d);

            if (d == 1){
                printf("\nEnter the value in Megabyte : ");
                scanf("%f",&mb);
                gb = mb/1024;
                printf("\nThe value in Gigabyte is %f .",gb);

            } else if (d == 2){
                printf("\nEnter the value in Gigabyte : ");
                scanf("%f",&gb);
                mb = gb*1024;
                printf("\nThe value in Megabyte is %f .",mb);

            } else {
                printf("\nInvalid Input .");
            }

        } else if (option == 3){
            int d;
            printf("\nPress 1 for converting Kilobyte to Gigabyte : ");
            printf("\nPress 2 for converting Gigabyte to Kilobyte : ");
            scanf("%d",&d);

            if (d == 1){
                printf("\nEnter the value in Kilobyte : ");
                scanf("%f",&kb);
                gb = kb/(1024*1024);
                printf("\nThe value in Gigabyte is %f .",gb);

            } else if (d == 2){
                printf("\nEnter the value in Gigabyte : ");
                scanf("%f",&gb);
                kb = gb*1024*1024;
                printf("\nThe value in kilobyte is %f .",kb);

            } else {
                printf("\nInvalid Input .");
            }

        } else {
            printf("\nInvalid Input. Please type again.");
        }

    }
    
    else {
        printf("\nInvalid Input");
    }
    
    return 0;
}