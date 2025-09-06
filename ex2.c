#include<stdio.h>

struct etudiants {
    char nom[20];
    char prenom[20];
    int age;
    int notes[5];
};

int main()
{
    struct etudiants student;

    printf("entrez le nom: ");
    scanf("%s", student.nom);
    printf("entrez le prenom: ");
    scanf("%s", student.prenom);
    printf("entrez les notes: \n");
    for(int i = 0; i < 5; i++) {
        scanf("%d", &student.notes[i]);
    }
    printf("votre nom est %s %s\n", student.prenom, student.nom);
    for (int i = 0; i < 5; i++)
    {
        printf("la %d note est: %d\n", i+1, student.notes[i]);
    }
    
    
    return 0;
}


