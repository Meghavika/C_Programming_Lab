#include <stdio.h>

int main() {
    printf("Meghavika Baidya 21BLC1667\n");
    int costperunit, quantity, total; float discount;
    costperunit = 100;
    printf("Enter the purchased quantity: ");
    scanf("%d", &quantity);
    total = costperunit * quantity;
    if (total > 1000) {
        discount = 0.1 * total;
        total -= discount;
    }
    printf("The final cost after discount is: %d\n", total);
    return 0;
}
