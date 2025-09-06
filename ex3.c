#include<stdio.h>

struct rectangle
{
    int largeur;
    int longueur;
};

int aire(struct rectangle rec)
{
    return rec.largeur * rec.longueur;
}

int main()
{
    struct rectangle rec;
    printf("entrez le largeur du rectangle: ");
    scanf("%d", &rec.largeur);
    printf("entrez le longueur du rectangle: ");
    scanf("%d", &rec.longueur);
    printf("l'aire de rectangle est: %d\n", aire(rec));

}
