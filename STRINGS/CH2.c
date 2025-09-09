#include<stdio.h>

int main()
{
    printf("entrez une chaine de caractere: ");
    char str[100];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;
    int length = 0;

    // Go through each character until we find the null character '\0'
    while (str[length] != '\0') {
        length++;
    }

    printf("longueur de la chaine de caractere est: %d\n", length);
    return 0;
    
}