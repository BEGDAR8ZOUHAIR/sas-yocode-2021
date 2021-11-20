#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 // les information des compte client
   struct client
   {
       char nom [20];
       char  numero [10];
       char  CIN [10];
        int mantant;
   };

   struct presidents{
        char nom[10];
        int vote = 0;
    };





int main()
{
    // les client
    struct client clt[100];
 int choix ,i , npr;
        do
        {
            do
            {
             // menu prinsipale
                 printf("=========================== Menu =============================\n");

                printf("1 => cree un copmte bancaire \n");
                printf("2 => plusieurs comptes bancaires\n");
                printf("3 => Operations \n");
                printf("4 => Affichage\n");
                printf("5 => recherche par CIN \n");
                printf("6 => Quitter l’application \n\n");

                printf("Votre choix : ");
			scanf("%d", &choix);



            }while(choix <1 || choix>6);
          switch(choix)
          {

                case 1: printf("\n entrer le nom client : ");
                        scanf("%s",&clt[1].nom);
                        printf("entrer le numero client : ");
                        scanf("%s",&clt[1].numero);
                        printf("entrer le CIN client : ");
                        scanf("%s",&clt[1].CIN);


                        system("cls");

                    break;

                case 2: printf("entrer le nombre des compte :\n");
                        scanf("%d",&npr);

                        for(i=0 ; i<npr ; i++)
                        {
                            system("cls");

                            printf("----|| client [%d] ||----\n\n",i+1);
                            printf("entrer le nom de client [%d]= : ",i+1);
                            scanf("%s",&clt[i].nom);
                            printf("entrer le numero de client : ");
                            scanf("%s",&clt[i].numero);
                            printf("entrer le CIN de client : ");
                            scanf("%s",&clt[i].CIN);



                            printf("\n\n ");

                            system("cls");
                        }

                    break;

                case 3: printf("Operations \n");

                    int choix_Operation;
                        do
                        {
                            printf("1 => retrait\n");
                            printf("2 => depot \n");

                            printf("Votre choix : ");
                            scanf("%d", &choix_Operation);

                        }while(choix_Operation <1 || choix_Operation>2);
                          switch(choix_Operation)
                            {

                                case 1: printf("\n entrer le nom client : \n");

                                    break;

                                case 2: printf("entrer le nombre des compte :\n");

                                    break;
                            }

                        system("cls");

                break;



                case 4: printf("4 => Affichage\n");

                    break;

                case 5: printf("4 => recherche\n");

                    break;

                default:
                    break;
            }
        } while(choix !=6);
	return 0;
	system("pause");
}

