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
       int nombreCompte;
       float montantDeposer;
       int nbrDesCompteCree=0;
       char checkCin [20];
       float montantTirer;
       int choixOperation;



//les fonction utilisee
    void Menu();
    void remplissage(int NombreDuCompte );
    void AffichageCompte(int NombreDuCompte );
    void Depot(float montants);
    void tirer(float montantTirer);
    int confirmer();
    void operation();





        int main(){
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
        printf("\nChoisi votre operation :\n");
        scanf("%d",&choix);
        switch (choix)
        {
        case 1:
        printf("\n\t\t1.introduire Un compte bancaire\n");
        //remplissage(1);
        printf("\nEntrer les info pour la Compte:\n");
                    printf("entrer votre Cin:\n");
                    scanf("%s",compte->Cin);
                    printf("entrer votre Nom:\n");
                    scanf("%s",compte->Nom);
                    printf("entrer votre Prenom:\n");
                    scanf("%s",compte->Prenom);
                    printf("entrer votre Montant:\n");
                    scanf("%f",&compte->Montant);
                    nbrDesCompteCree++;

        printf("Operation Reussit \n appuyer sur une touche pour revenir au menu principale");
        getch();
        //AffichageCompte(1);
        Menu();
            break;
        case 2:
        printf("\n\t\t2.introduire plusieur compte bancaire\n");
        remplissage(nombreCompte);
        AffichageCompte(nombreCompte);
        printf("\nle compte a cree avec Succes !!!\n\n taper sur un touche pour retour a la Menu !!");
        getch();
        Menu();
        break;



        case 3:
        printf("\n\t\t3.Operation\n");
        operation();
        printf("\n\n!!!taper sur un touche pour retour a la Menu !!\n\n");
        getch();
        Menu();

            break;
              case 4:
                    printf("\n\t\t1.affichage\n");
            break;
        case 5:
        printf("\n\t\t2. fedilisation \n");
            break;
            case 6:
        printf("\n\t\t3.Quitter l\'application\n");

            break;
        default:
                Menu();
            break;
        }


}

/**************************************************************************************************************************/

void remplissage(int NombreDuCompte){
        printf("entrer le nombre des compte souhaitez-vous Creer!!! ");
        scanf("%d",&NombreDuCompte);
        if(nbrDesCompteCree==0){
                for(int i=0;i<NombreDuCompte;i++){
                    int j=nbrDesCompteCree+i;
                    printf("\nEntrer les info pour la Compte Numero %d:\n",i+1);
                    printf("entrer votre Cin:\n");
                    scanf("%s",compte[j].Cin);
                    printf("enrer votre Nom:\n");
                    scanf("%s",compte[j].Nom);
                    printf("entrer votre Prenom:\n");
                    scanf("%s",compte[j].Prenom);
                    printf("entrer votre Montant:\n");
                    scanf("%f",&compte[j].Montant);
                    nbrDesCompteCree++;

                    }
                    }
        else {
            for(int i=nbrDesCompteCree;i>NombreDuCompte+nbrDesCompteCree;i--)/* */
                {
                    int j=nbrDesCompteCree+i;
                    printf("\nEntrer les info pour la Compte Numero %d:\n",i+1);
                    printf("entrer votre Cin:\n");
                    scanf("%s",compte[j].Cin);
                    printf("enrer votre Nom:\n");
                    scanf("%s",compte[j].Nom);
                    printf("entrer votre Prenom:\n");
                    scanf("%s",compte[j].Prenom);
                    printf("entrer votre Montant:\n");
                    scanf("%f",&compte[j].Montant);
                    nbrDesCompteCree++;
        }

        }

}
/**************************************************************************************************************************/
void AffichageCompte(int NombreDuCompte ){

for(int i=0;i<NombreDuCompte;i++){
    printf("\n\t ****    les inforamation de a compte numero  %d\n************************ ",i+1);
            printf("`\nvotre Cin est :\t %s\n votre Nom est :\t %s\n votre Prenom est: \t %s\n votre Montant est: \t %f\n",compte[i].Cin,compte[i].Nom,compte[i].Prenom,compte[i].Montant);
        }
}
/**************************************************************************************************************************/
void Depot(float montants){
    printf("\nEntrer Votre Cni:\n");
    scanf("%s",checkCin);
    printf("res est :%s \t \n\n Et nbre du compte :  %d",checkCin,nbrDesCompteCree);
    for(int i=0;i<nbrDesCompteCree;i++)
    {

        if(strcmp(checkCin,compte[i].Cin)==0)
        {
            printf("\n votre solde initiale est :%f",compte->Montant);

           compte->Montant+=montants;
            printf("votre nouveau  Solde est %f",compte->Montant);
                //AffichageCompte(1);
               // getch();
               // Menu();

                printf("\nla valeur et trouve \n");
                return;
        }


   }
                   printf("\n le compte n\'exist pas \n\n !!!! pour cree votre compte taper sur une touche");
                   getch();
                   remplissage(nombreCompte);
                    getch();
                    Menu();

               // printf("\n\nMerci !!!!!vous n'avez pas de compte souhaitez vous creer un compte ?\n");
            //int res=confirmer();
            //if(res==1)
              //  remplissage(1);

}
/**************************************************************************************************************************/
void tirer(float montantTirer){

    printf("\nEntrer Votre Cni:\n");
    scanf("%s",checkCin);
    printf("res est :%s \t \n\n Et nbre du compte :  %d",checkCin,nbrDesCompteCree);

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

                                    printf("\n votre solde initiale est :%f",compte->Montant);

                                    printf("\n\n Everything is ok !!!!\n\n");
                                    printf("Taper sur clavier pour retour a la Menu " );
                                    getch();
                                    Menu();
                    }

                return;
            }




        }
        printf("vous n\'avez pas le compte \n ou votre solde n\'est pas insufisant pour effectuer l'operation" );
        printf("Taper sur clavier pour retour a la Menu " );
        getch();
        Menu();


}


/**************************************************************************************************************************/

    int confirmer()
    {
        char r;
        printf("\n1> OUI\n2> NON");
    do{
        r=getch();
        }while(r!='1' && r!='2');
    return (r=='1')? 1:0;
    }
/**************************************************************************************************************************/
 void operation(){
        printf("\n1. Diposer\n*****************\t ");
        printf("\n2.Tirer\n *******************\t ");
        printf("\n.ChoisIR votre operation:\n");
        scanf("%d",choixOperation);

        switch(choixOperation)
        {
        case 1:
        Depot(montantDeposer);
        printf("votre depot  a ete fait  avec success !!!!");
        break;
        case 2:
        tirer( montantTirer);
        printf("votre Retire  a ete fait  avec success !!!!");

            break;
            default:
            Menu();
        }

 }
