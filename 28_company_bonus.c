#include <stdio.h>
 
int main() {
    
    printf("Meghavika Baidya 21BLC1667\n");
    int years; float salary, bonus;
    printf("Enter your years of service: ");
    scanf("%d", &years);
 
    printf("Enter your salary: ");
    scanf("%f", &salary);
 
    if(years > 5) {
        bonus = salary * 0.05;
        printf("Your bonus is %.2f\n", bonus);
    } else {
        printf("Sorry! No bonus\n");
    }
 
    return 0;
}
