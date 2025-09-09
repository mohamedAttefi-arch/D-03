#include<stdio.h>
#include<string.h>

int main()
{
    char str1[100];
    char str2[50];
    printf("entrez une chaine de caractere: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = 0;
    printf("entrez une autre chaine de caractere: ");
    fgets(str2, sizeof(str2), stdin);   
    str2[strcspn(str2, "\n")] = 0;
    strcat(str1, str2);
    printf("la chaine de caractere concatenee est: %s\n", str1);
}