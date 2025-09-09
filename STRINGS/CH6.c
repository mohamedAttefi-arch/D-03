#include<stdio.h>
#include<string.h>
int main()
{
    char word[100];
    int c;
    int len = strlen(word);
    printf("entrez une chaine de caractere: ");
    fgets(word, sizeof(word), stdin);
    
    printf("la chaine de caractere renversee est: %s\n", word);
}