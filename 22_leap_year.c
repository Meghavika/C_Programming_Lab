#include <stdio.h>
int main() {
    int year;
    printf("Meghavika Baidya 21BLC1667\n");
    printf("Please enter any year: ");
    scanf("%d", &year);
    if(year % 4 == 0) {
        if(year % 100 == 0) {
            if (year % 400 == 0){
                printf("%d is a leap year.\n", year);
            }
            else{
                printf("%d is not a leap year.\n", year);
            }
        }
        else{
            printf("%d is a leap year.\n", year );
        }
    }
    else{
        printf("%d is not a leap year.\n", year);
    }
    
    return 0;
}
