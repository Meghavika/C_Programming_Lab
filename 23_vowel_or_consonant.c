#include <stdio.h>
#include <ctype.h>
int main() {
    printf("Meghavika Baidya 21BLC1667 \n");
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    char ch1 = tolower(ch);
 
    switch(ch1){
        case 'a': case 'e': case 'i': case 'o': case 'u':
            printf("%c is a vowel.\n", ch);
            break;
        default:
            printf("%c is a consonant.\n", ch);
            break;
    }
 
    return 0;
}
