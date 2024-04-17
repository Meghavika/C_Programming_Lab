#include <stdio.h>

int main() {
    int minutes, seconds;
    printf("Enter the number of minutes: ");
    scanf("%d", &minutes);
    seconds = minutes * 60;
    printf("%d minutes is equal to %d seconds.\n", minutes, seconds);
    return 0;
}
