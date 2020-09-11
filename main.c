#include <stdio.h>

int main() {

    /*************************Dévouverte****************************************/
    /***********************Exercice n°2***************************************/
    //printf("Bonjour à tous\n");
    /**********************Exercice n°3*****************************************/
    printf("    *\n");
    printf("   ****\n");
    printf("  ******\n");
    printf(" ********\n");
    printf("**********\n");
    /**********************les variables***************************************/
    /***********************Exercice n°2****************************************/
    float f1=45.876;
    float f2=56.0;
    short s1=77;
    long l1=650987;
    long l2=32769;
    long l3=-32765;
    long l4=450009996;
    /******************Manipulation des variables**************************************/
    /******************Exercice n°1*****************************************************/
    int i1=1,i2=2,i3=3;
    float fl1=0.5;
    double d1=11111.111111;
    char c1='a',c2='f';
    printf("les entiers:%d,%d,%d\n",i1,i2,i3);
    printf("le float:%f\n",fl1);
    printf("le double:%e\n",d1);
    printf("les chars:%c,%c\n",c1,c2);

    /******************Exercice n°2******************************************************/
    putchar(84);
    putchar(97);
    putchar(116);
    putchar(97);
    putchar(70);
    putchar(97);
    putchar(105);
    putchar(116);
    putchar(68);
    putchar(117);
    putchar(90);
    putchar(101);
    putchar(108);
    putchar(101);
/***************************Exercice n°3***************************************************/
/*int saisie=0; //déclarer un variable saisie valoriser à 0 en attente de valorisation par l'utilisateur
printf("\n1-Commande 1\n"); // \n car on a besoin tout de suite d'un retour à la ligne
printf("2_Commande 2\n");
printf("3-Commande 3\n");
scanf("%d",&saisie);  //formatage entier et valorisation de la variable saisie
printf("Vous avez choisi la commande %d\n",saisie); //affichage de saisie par formatage %d
/**************************Exercice n°4******************************************************/
    char saisie4=' ';
    printf("\nVeuillez choisir un caractere\n");
    scanf("%c",&saisie4);
    printf("     %c\n",saisie4);
    printf("   %c%c%c%c\n",saisie4,saisie4,saisie4,saisie4);
    printf("  %c%c%c%c%c%c\n",saisie4,saisie4,saisie4,saisie4,saisie4,saisie4);
    printf(" %c%c%c%c%c%c%c%c\n",saisie4,saisie4,saisie4,saisie4,saisie4,saisie4,saisie4,saisie4);
    printf("%c%c%c%c%c%c%c%c%c%c\n",saisie4,saisie4,saisie4,saisie4,saisie4,saisie4,saisie4,saisie4,saisie4,saisie4);
    return 0;
}
