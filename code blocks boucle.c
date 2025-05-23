#include <stdio.h>

int main() {
    int m, n, i;
    char reponse;

    do {
        // Boucle de validation de l'entrée
        do {
            printf("Entrer un nombre entre 1 et 10 : ");
            scanf("%d", &n);
        } while (n < 1 || n > 10);

        // Boucle d'affichage de la table de multiplication
        for (i = 1; i <= 10; i++) {
            m = i * n;
            printf("%d * %d = %d\n", n, i, m);
        }

        // Demander à l'utilisateur s'il veut recommencer
        printf("Voulez-vous entrer un autre nombre ? (o/n) : ");
        scanf(" %c", &reponse);  // espace avant %c pour ignorer les retours à la ligne

    } while (reponse == 'o' || reponse == 'O');

    return 0;
}


