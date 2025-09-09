#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100];
    printf("entrez une chaine de caractere: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = 0;
    printf("la chaine de caractere est: %s\n", str1);
    return 0;
}