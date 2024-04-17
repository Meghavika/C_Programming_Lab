#include <stdio.h>

int main() {
    printf("Meghavika Baidya 21BLC1667\n");

    int cheld, cattended; float percentage;

    printf("Enter number of classes conducted: ");
    scanf("%d", &cheld);
    printf("Enter number of classes you attended: ");
    scanf("%d", &cattended);
    percentage = ((float)cattended / cheld) * 100;
    printf("Your attendance percentage is %.2f%%\n", percentage);
    if (percentage >= 75) {
        printf("You are eligible to sit for the exam.\n");
    }else {
        printf("You are not eligible to sit for the exam.\n");
    }
    return 0;
}
