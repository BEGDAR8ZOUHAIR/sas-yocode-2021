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







int main()
{
    // les client
    struct client clt[100];
 int choix ,i , npr=0,count_clt=0,retrait =0,depot=0,found;
 char search [50];
 clt[i].mantant =0;
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
                printf("6 => Quitter l�application \n\n");

                printf("Votre choix : ");
			scanf("%d", &choix);




            }while(choix <1 || choix>6);
          switch(choix)
          {

                case 1: printf("\n entrer le nom client : ");
                        scanf("%s",&clt[count_clt].nom);
                        printf("entrer le numero client : ");
                        scanf("%s",&clt[count_clt].numero);
                        printf("entrer le CIN client : ");
                        scanf("%s",&clt[count_clt].CIN);
                            count_clt++;



                        system("cls");

                    break;

                case 2: printf("entrer le nombre des compte :\n");
                        scanf("%d",&npr);

                        for(i=count_clt ; i<npr+count_clt ; i++)
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
                                count_clt = count_clt+npr;

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
                                case 1:


                                        printf("[%d] le nom [%s] \t le nemero [%s] \t  CIN [%s] \t le mantant [%d  DH] \n\n ",1,clt[0].nom,clt[0].numero,clt[0].CIN,clt[0].mantant);
                                        printf("entrer la somme de retrait en DH : \n");
                                        scanf("%d", &retrait);
                                        do
                                        {
                                            if(retrait<0 ){
                                                printf("entrer la somme de retrait en DH superieur a # 0 #: \n");
                                                scanf("%d", &retrait);
                                            }
                                        }while (retrait<0 );

                                            clt[0].mantant= clt[0].mantant-retrait;


                                    break;

                                case 2:
                                        printf("[%d] le nom [%s] \t le nemero [%s] \t  CIN [%s] \t le mantant [%d DH] \n\n ",1,clt[0].nom,clt[0].numero,clt[0].CIN,clt[0].mantant);
                                        printf("entrer la somme de depot en DH : \n");
                                        scanf("%d", &depot);
                                          do
                                        {

                                            if(depot<0){
                                                printf("entrer la somme de retrait en DH superieur a # 0 #: \n");
                                                scanf("%d", &depot);
                                            }

                                        }while (depot<0 );

                                        clt[0].mantant= clt[0].mantant+depot;

                                   break;

                                default:
                                    break;
                            }

                        //system("cls");

                break;



                case 4: printf(" Affichage\n\n");
                         for(i=0 ; i<count_clt ; i++)
                         {

                            printf("[%d] le nom [%s] \t le nemero [%s] \t  CIN [%s] \t le mantant [%d] \n\n "
                                   ,i+1,clt[i].nom,clt[i].numero,clt[i].CIN,clt[i].mantant);
                         }


                    break;

                case 5:
                    printf("Enter a string to search: ");
                       scanf("%s", search);

                       for(i=0; i<count_clt; i++)
                       {

                         if(strcmp(search, clt[i].CIN )== 0)
                         {
                           found=1;
                           printf("[%d] le nom [%s] \t le nemero [%s] \t  CIN [%s] \t le mantant [%d] \n\n "
                                   ,i+1,clt[i].nom,clt[i].numero,clt[i].CIN,clt[i].mantant);
                         }
                       }

                        if(found==0) printf("Not found");

                    break;

                default:
                    break;
            }
        } while(choix !=6);
	return 0;
	system("pause");
}

