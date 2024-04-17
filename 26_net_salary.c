#include <stdio.h>
int main() {
    printf("Meghavika Baidya 21BLC1667\n");
    float basic, gross, hra, da;
    printf("Enter basic salary: ");
    scanf("%f", &basic);
    if(basic <= 10000) {
        hra = basic * 0.2;
        da = basic * 0.8;
    } else if(basic <= 20000) {
        hra = basic * 0.25;
        da = basic * 0.9;
    } else {
        hra = basic * 0.3;
        da = basic * 0.95;
    }
    gross = basic + hra + da;
    printf("Gross salary is %.4f\n", gross);
    return 0;
}
