#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time, compoundInterest; int n;

    printf("Meghavika Baidya 21BLC1667\n");
    printf("Enter principal amount: ");
    scanf("%f", &principal);
    printf("Enter rate of interest: ");
    scanf("%f", &rate);
    printf("Enter time in years: ");
    scanf("%f", &time);
    printf("Enter frequency: ");
    scanf("%d", &n);

    compoundInterest = principal * pow(1 + (rate*0.01) / n, n * time) - principal;
    
    printf("Compound Interest: %.2f\n", compoundInterest);
    return 0;
}


