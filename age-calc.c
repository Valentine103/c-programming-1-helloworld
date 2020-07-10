#include <stdio.h>
#include <stdbool.h>
#include <time.h>

int get_current_year();
int age_calc(int);

int main()
{
    int year_of_birth = get_current_year();

    while(true){
        printf("Enter your year of birth or -1 to exit: ");
        scanf("%d", &year_of_birth);

        if(-1 == year_of_birth){
            break;
        }
        printf("You are %d year(s) old.\n\n", age_calc(year_of_birth));
    }

    return 0;
}

int get_current_year(){
    // @TODO: get the current year automatically from the system using time.h
    return system("date");
}


int age_calc(int year_of_birth){
    return get_current_year - year_of_birth;
}
