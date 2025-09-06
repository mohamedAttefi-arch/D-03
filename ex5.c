#include <stdio.h>
#include <string.h>

struct book
{
    char title[50];
    char author[50];
    int year;
};

struct book creat_book(char title[], char author[], int year)
{
    struct book livre;
    strcpy(livre.title, title);
    strcpy(livre.author, author);
    livre.year = year;
    return livre;
}

int main()
{
    char titre[50];
    char auteur[50];
    int anneée;
   printf("Entrez le titre du livre: ");
    fgets(titre, sizeof(titre), stdin);
    titre[strcspn(titre, "\n")] = 0;
    printf("Entrez l'auteur du livre: ");
    fgets(auteur, sizeof(auteur), stdin);
    auteur[strcspn(auteur, "\n")] = 0;
    printf("Entrez l'année de publication: ");
    scanf("%d", &anneée);
    struct book myBook = creat_book(titre, auteur, anneée);
    printf("Livre créé:\nTitre: %s\nAuteur: %s\nAnnée: %d\n", myBook.title, myBook.author, myBook.year);
    

    return 0;
}


