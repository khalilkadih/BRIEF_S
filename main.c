#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
    ////******************Structure***********************///////////////////
struct CompteBq {
        char Cin[20];
        char Nom[20];
        char Prenom[20];
        float Montant;

};
/// variable Utilise

           struct CompteBq compte[200];
           int choix;
           float montantDeposer;
           int nbrDesCompteCree=0;
           char checkCin [20];
           float montantTirer;
           int choixOperation;
           int i,j;
           int NombreDuCompte;
           int choixAffichage;
           float NumberTrie;
           float montants;
           char CinChercher[20];
           void ChercherParCin();



//les fonction utilisees
void Menu();
void remplissage(int NombreDuCompte );
void AffichageCompte();
void Depot();
void tirer(float montantTirer);
void operation();
void affichageAsc();
void affichageAvecTrie();
void affichageDesc();
void AjouterCompte();
void affichageAscWithNumber(float NumberTrie);
void affichageDesscWithNumber(float NumberTrie);
void RetourToMenu();
void Fedilisation();

int main()
{
        Menu();
        return 0;
}

void Menu(){

        system("cls");
            printf("******************************** Menu Principale ******************************");
            printf("\n\t\t1.introduire Un compte bancaire\n");
            printf("\n\t\t2.introsuire plusieur compte bancaire\n");
            printf("\n\t\t3.Operation\n");
            printf("\n\t\t4.Affichage\n");
            printf("\n\t\t5.Fedilisation\n");
            printf("\n\t\t6. Pour quitter l\'application tapez sur 0\n");
            printf("\n\tChoisi votre operation :\n");
            scanf("%d",&choix);
        switch (choix)
            {
        case 1:
            printf("\n\t\t1.introduire Un compte bancaire\n");
            AjouterCompte();
            printf("\n\tOperation terminee avec succes \n\n\t -appuyer sur une touche pour Retour au menu principale");
            getch();
            Menu();
            break;
        case 2:
            printf("\n\t\t2.introduire plusieur compte bancaire\n");
            printf("Entrer le nombre des comptes souhaitez-vous Creer!!! ");
            scanf("%d",&NombreDuCompte);
            remplissage(NombreDuCompte);
            AffichageCompte();
            printf("\n\tle compte a cree avec Succes !!!\n\n taper sur un touche pour retour a la Menu Principale !!");
            getch();
            Menu();
            break;
        case 3:
            printf("\n\t\t3.Operation\n");
            operation();
            break;
        case 4:
            printf("\n\t\t1.affichage\n");
            affichageAvecTrie();
            break;
        case 5:
            printf("\n\t\t2. fedilisation \n");
            Fedilisation();
            RetourToMenu();
            break;
        case 6:
            printf("\n\t\t3.Quitter l\'application\n");
            exit(0);
            break;
        default:
            Menu();
            break;
            }
    }

void AjouterCompte(){

            printf("\nEntrer les info pour la Compte:\n");
            printf("entrer votre Cin:\n");
            scanf("%s",compte[nbrDesCompteCree].Cin);
            printf("entrer votre Nom:\n");
            scanf("%s",compte[nbrDesCompteCree].Nom);
            printf("entrer votre Prenom:\n");
            scanf("%s",compte[nbrDesCompteCree].Prenom);
            printf("entrer votre Montant:\n");
            scanf("%f",&compte[nbrDesCompteCree].Montant);
            nbrDesCompteCree++;

            }
void remplissage(int NombreDuCompte)
    {
            for(int i=0;i<NombreDuCompte;i++)
                {
                    AjouterCompte();
                }
            printf("\n nombre des comptes cree:%d",nbrDesCompteCree);
    }

void AffichageCompte(){

    for(int i=0;i<nbrDesCompteCree;i++){
            printf("\n\t ****    les inforamation de a compte numero  %d\n************************ ",i+1);
            printf("`\nvotre Cin est :\t %s\n votre Nom est :\t %s\n votre Prenom est: \t %s\n votre Montant est: \t %f\n",
            compte[i].Cin,compte[i].Nom,compte[i].Prenom,compte[i].Montant);
        }
        }

void Depot(){
            printf("\nEntrer Votre Cni:\n");
            scanf("%s",checkCin);
                for(int i=0;i<nbrDesCompteCree;i++)
                    {
                    if(strcmp(checkCin,compte[i].Cin)==0)
                        {
                            printf("\n votre solde initiale est :%f",compte->Montant);
                            printf("\nEntrer le montant que vous Diposer!:\n");
                            scanf("%f",&montantDeposer);
                            compte->Montant+=montantDeposer;
                            printf("\n\nvotre nouveau  Solde est %f",compte->Montant);
                            printf("\n\tMerci !!! Votre Operation fait Avec Success \n");
                            RetourToMenu();
            return;
                        }
                        getch();
                        RetourToMenu();
                    }
                            printf("\n le compte n\'exist pas \n\n !!!!  \t\t pour Retour a la Menu Principale toucher la Clavier\t\t !!!");
                            getch();
                            RetourToMenu();
            }
void tirer(float montantTirer)
{
            printf("\nEntrer Votre Cni:\n");
            scanf("%s",checkCin);
                for(int i=0;i<nbrDesCompteCree;i++)
                    {
                        if(strcmp(checkCin,compte[i].Cin)==0)
                            {
                                if(montantTirer<compte[i].Montant)
                                    {
                                        printf("\nEntrer le montant que vous tirez!!!!!");
                                        scanf("%f",&montantTirer);
                                                printf("\n votre solde initiale est :%f",compte->Montant);
                                                compte->Montant-=montantTirer;
                                                printf("\n votre solde Apres tirer est :%f",compte->Montant);
                                                printf("\n\n ---- Votre Operation fait avec Success ------!!!!\n\n");
                                                RetourToMenu();
                        }

                    return;
                }
            }

            printf("vous n\'avez pas le compte \n ou votre solde n\'est pas insufisant pour effectuer l'operation" );
            printf("\n\nMerci de Taper Sur Une Touche pour retour to Menu Principale\n\n" );
            RetourToMenu();

}

void operation()
{
            printf("\n\t\t\t\t1.Pour Diposer\t:");
            printf("\n\t\t\t\t2.Pour Tirer:\n\n");
            printf("\n\t\t\t\t--ChoisIR votre operation:\n");
            scanf("%d",&choixOperation);
        switch(choixOperation)
            {
        case 1:
            Depot();
            break;
        case 2:
            tirer( montantTirer);

            break;
        default:
            Menu();
            }

}
void affichageAsc()
{

     for(int i=0;i<nbrDesCompteCree-1;i++)
        {
            for(int j=i;j<nbrDesCompteCree;j++)
                {
                if(compte[i].Montant>compte[j].Montant)
                    {
                        struct CompteBq tempCompte=compte[i];
                        compte[i]=compte[j];
                        compte[j]=tempCompte;
                    }
                }
        }
                        AffichageCompte();
                        RetourToMenu();
}
void affichageDesc()
{
     for(int i=0;i<nbrDesCompteCree-1;i++)
        {
           for(int j=i;j<nbrDesCompteCree;j++)
            {
                if(compte[i].Montant<compte[j].Montant)
                    {
                        struct CompteBq tempCompte=compte[i];
                        compte[i]=compte[j];
                        compte[j]=tempCompte;
                    }
            }
        }
                        AffichageCompte();
                        RetourToMenu();

}
void affichageAscWithNumber(float NumberTrie)
{
            int number=0;
            struct CompteBq CompteForSorte[200];
            for(i=0;i<nbrDesCompteCree;i++)
                {
                    if(compte[i].Montant>NumberTrie)
                        {
                            CompteForSorte[number]=compte[i];
                            number++;

                        }
                }
            for(int i=0;i<number;i++)
                {
                    printf("`\nvotre Cin est :\t %s\n votre Nom est :\t %s\n votre Prenom est: \t %s\n votre Montant est: \t %f\n",
                    CompteForSorte[i].Cin,CompteForSorte[i].Nom,CompteForSorte[i].Prenom,CompteForSorte[i].Montant);
                }

            for(i=0;i<number-1;i++)
                {
               for(j=i;j<number;j++)
                    {
                    if(CompteForSorte[i].Montant<CompteForSorte[j].Montant)
                        {
                        struct CompteBq tempCompte=compte[i];
                        CompteForSorte[i]=CompteForSorte[j];
                        CompteForSorte[j]=tempCompte;
                        }
                    }
                }
        for(int i=0;i<number;i++)
            {
                printf("`\nvotre Cin est :\t %s\n votre Nom est :\t %s\n votre Prenom est: \t %s\n votre Montant est: \t %f\n",
                CompteForSorte[i].Cin,CompteForSorte[i].Nom,CompteForSorte[i].Prenom,CompteForSorte[i].Montant);
            }
                RetourToMenu();
}

void affichageDesscWithNumber(float NumberTrie)
{
            int number=0;
            struct CompteBq CompteForSorte[200];
                for(i=0;i<nbrDesCompteCree;i++)
                    {
                        if(compte[i].Montant>NumberTrie)
                            {
                                CompteForSorte[number]=compte[i];
                                number++;
                            }
                    }
                for(int i=0;i<number;i++)
                    {
                        printf("\n\t ****    les inforamation de a compte numero  %d\n************************ ",i+1);
                        printf("`\nvotre Cin est :\t %s\n votre Nom est :\t %s\n votre Prenom est: \t %s\n votre Montant est: \t %f\n",
                        CompteForSorte[i].Cin,CompteForSorte[i].Nom,CompteForSorte[i].Prenom,CompteForSorte[i].Montant);
                    }
                for(i=0;i<number-1;i++)
                    {
                    for(j=i;j<number;j++)
                        {
                        if(CompteForSorte[i].Montant<CompteForSorte[j].Montant)
                            {
                            struct CompteBq tempCompte=compte[i];
                            CompteForSorte[i]=CompteForSorte[j];
                            CompteForSorte[j]=tempCompte;
                            }
                        }
                    }

            for(int i=0;i<number;i++)
                    {
                        printf("`\nvotre Cin est :\t %s\n votre Nom est :\t %s\n votre Prenom est: \t %s\n votre Montant est: \t %f\n",
                        CompteForSorte[i].Cin,CompteForSorte[i].Nom,CompteForSorte[i].Prenom,CompteForSorte[i].Montant);
                    }
                        RetourToMenu();


      }
void affichageAvecTrie()
{

        printf("************* choisi l\'affichage qui convient: **********************\n");
        printf("\n\n1.Affichage !!! Par Ordre Ascendant\n");
        printf("\n\n2.Affichage !!! Par Ordre Descendant\n");
        printf("\n\n3.Par Ordre Ascendant (les comptes bancaires ayant un montant superieur à un chiffre introduit)\n");
        printf("\n\n4.Affichage !!! Par Ordre Descendant (les comptes bancaires ayant un montant superieur à un chiffre introduit)\n");
        printf("\n\n5.Affichage !!!  Recherche par CIN\n");
        scanf("%d",&choixAffichage);
    switch(choixAffichage)
    {
    case 1:
            printf("\nAffichage !!! Par Ordre Ascendant\n\n");
            affichageAsc();
            break;
    case 2:
            printf("\nAffichage !!! Par Ordre Descendant\n\n");
             affichageDesc();
            break;
    case 3:
            printf("\nAffichage !!! Par Ordre Ascendant (les comptes bancaires ayant un montant superieur à un chiffre introduit)\n\n");
            printf("\nEntrer le Chiffre que vous voulez trie par:\n");
            scanf("%f",&NumberTrie);
            affichageAscWithNumber(NumberTrie);
            break;
    case 4:
            printf("\nAffichage !!! Par Ordre Descendant (les comptes bancaires ayant un montant superieur à un chiffre introduit)\n\n");
            printf("\nEntrer le Chiffre que vous voulez trie par:\n");
            scanf("%f",&NumberTrie);
            affichageDesscWithNumber(NumberTrie);
            break;
    case 5:
            printf("\nAffichage !!!  Recherche par CIN");
            ChercherParCin();
            RetourToMenu();
            break;
    default:
            Menu();
            break;
    }
}
void RetourToMenu()
{
            printf("Taper sur clavier pour retour a la Menu " );
            getch();
            Menu();

}
void ChercherParCin()
{
     printf("\nentrer le CIN Chercher:\n");
    scanf("%s",CinChercher);
     for(int i=0;i<nbrDesCompteCree;i++)
        {
            if(strcmp(CinChercher,compte[i].Cin)==0)
                {
                    printf("\nLe compte et Exist Dans la table\n");
                    printf("`\nvotre Cin est :\t %s\n votre Nom est :\t %s\n votre Prenom est: \t %s\n votre Montant est: \t %f\n",
                    compte[i].Cin,compte[i].Nom,compte[i].Prenom,compte[i].Montant);
                    return;
                }
       }
        printf("LE Compte N'exit pas dans la table !!!!!");
        RetourToMenu();
}
void Fedilisation()
{
        for(i=0;i<nbrDesCompteCree-1;i++)
            {
                for(j=i;j<nbrDesCompteCree;j++)
                    {
                        if(compte[i].Montant<compte[j].Montant)
                            {
                   struct CompteBq tempCompte=compte[i];
                   compte[i]=compte[j];
                    compte[j]=tempCompte;
                            }
                    }
        }
            for(i=0;i<3;i++)
                {
                    compte[i].Montant+=(compte[i].Montant)*0.013;
                }
            for(int i=0;i<3;i++)
                {
                    printf("\n\t ****    les inforamation de a compte numero  %d\n************************ ",i+1);
                    printf("`\nvotre Cin est :\t %s\n votre Nom est :\t %s\n votre Prenom est: \t %s\n votre Montant est: \t %f\n",
                    compte[i].Cin,compte[i].Nom,compte[i].Prenom,compte[i].Montant);
                }
        RetourToMenu();
    }
