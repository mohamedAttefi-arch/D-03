#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    printf("entrez une chaine de caractere: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;
    
}