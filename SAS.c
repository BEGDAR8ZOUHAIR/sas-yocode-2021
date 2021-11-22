#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 // STRUCT POUR  CLIENT =======================================================================================
     struct client
   {
       char nom [20];
       char  numero [10];
       char  CIN [10];
        int mantant;

   };
   // function of tri ascendant ===============================================================================

   void tri_Ascendant( struct client clt[], int count_clt)
{

     int min;
     struct client temp;
     int i;
      for(int i = 0 ; i < count_clt-1 ; i++)
     {
         min = i;
         for(int j = i+1 ; j < count_clt ; j++)
             if(clt[j].mantant < clt[min].mantant)
                min = j;
         if(min!=i)
         {
            //�changer t[i] et t[min]
            temp = clt[i];
            clt[i]=clt[min];
            clt[min]=temp;
         }
     }
     for(i=0 ; i<count_clt ; i++)
                         {

        printf("[%d] le nom [%s] \t le nemero [%s] \t  CIN [%s] \t le mantant [%d] \n\n "
                ,i+1,clt[i].nom,clt[i].numero,clt[i].CIN,clt[i].mantant);
                         }
}
    // function of  tri descendant =====================================================================

    void tri_Descendant( struct client clt[], int count_clt)
{
     int min;
     struct client temp;
     int i;
      for(int i = 0 ; i < count_clt-1 ; i++)
     {
         min = i;
         for(int j = i+1 ; j < count_clt ; j++)
             if(clt[j].mantant > clt[min].mantant)
                min = j;
         if(min!=i)
         {
            //�changer t[i] et t[min]
            temp = clt[i];
            clt[i]=clt[min];
            clt[min]=temp;
         }
     }
     for(i=0 ; i<count_clt ; i++)
                         {

        printf("[%d] le nom [%s] \t le nemero [%s] \t  CIN [%s] \t le mantant [%d] \n\n "
            ,i+1,clt[i].nom,clt[i].numero,clt[i].CIN,clt[i].mantant);
                         }
}
    // functin of tri ascendant par valeur ===================================================================

     void tri_AscendantVal( struct client clt[], int count_clt)
{


     int min;
     struct client temp;
     int i,pos;
      for(int i = 0 ; i < count_clt-1 ; i++)
     {
         min = i;
         for(int j = i+1 ; j < count_clt ; j++)
             if(clt[j].mantant < clt[min].mantant)
                min = j;
         if(min!=i)
         {
            //�changer t[i] et t[min]
            temp = clt[i];
            clt[i]=clt[min];
            clt[min]=temp;
         }
     }
     int Val ;
     printf(" enter a valeur de recherche : ");
     scanf("%d",&Val);
      for (i=0 ; i< count_clt  ;i++ )

     {
         if(clt[i].mantant==Val)
         {
             pos=i;
         }
     }
     for(i=pos ; i<count_clt ; i++)
                         {

                            printf("[%d] le nom [%s] \t le nemero [%s] \t  CIN [%s] \t le mantant [%d] \n\n "
                                   ,i+1,clt[i].nom,clt[i].numero,clt[i].CIN,clt[i].mantant);
                         }
}
       // function of tri descendant par valeur =====================================================================

        void tri_DescendantVal( struct client clt[], int count_clt)
{
     int min;
     struct client temp;
     int i,pos;
      for(int i = 0 ; i < count_clt-1 ; i++)
     {
         min = i;
         for(int j = i+1 ; j < count_clt ; j++)
             if(clt[j].mantant > clt[min].mantant)
                min = j;
         if(min!=i)
         {
            //�changer t[i] et t[min]
            temp = clt[i];
            clt[i]=clt[min];
            clt[min]=temp;
         }
     }
     int Val ;
     printf(" enter a valeur de recherche : ");
     scanf("%d",&Val);
      for (i=0 ; i< count_clt  ;i++ )

     {
         if(clt[i].mantant==Val)
         {
             pos=i;
         }

        }
         for(i=count_clt-1; i>= pos ; i--)
                         {

                            printf("[%d] le nom [%s] \t le nemero [%s] \t  CIN [%s] \t le mantant [%d] \n\n "
                                   ,i+1,clt[i].nom,clt[i].numero,clt[i].CIN,clt[i].mantant);
                         }
     }
       // variable ======================================================================================================

                    struct client clt[100];
                    int count_clt=0;

      // function of search ==============================================================================================

                int searchFunction(){
                char search[25];
                printf("Please enter cin: ");
                scanf("%s", search);
                for(int i = 0; i < count_clt; i++){
                    if(strcmp(search, clt[i].CIN) == 0){
                        return i;
                    }
                }
                printf("cin doesnt exist\n");
                return -1;
                }


int main()
{
    // LES VARIABLE ===========================================================================================

                    int choix ,i , npr=0,retrait =0,depot=0,found, indexOfAccount;
                    char search [50];
                    clt[i].mantant =0;
        do
        {
            do
            {
             // menu prinsipale ==============================================================================

                printf(" ======================== M E N U ===========================\n\n");

                printf("     1 => cree un copmte bancaire \n");
                printf("     2 => plusieurs comptes bancaires\n");
                printf("     3 => Operations \n");
                printf("     4 => Affichage\n");
                printf("     5 => recherche par CIN \n");
                printf("     6 => Quitter l�application \n\n");

                printf(" ====================== Votre choix ===========================\n");
			scanf("%d", &choix);




            }while(choix <1 || choix>6);

          switch(choix)
          {

                case 1: // entrer un compte ===========================================================================

                         printf("\n entrer le nom client : ");
                         scanf("%s",&clt[count_clt].nom);
                         printf("entrer le numero client : ");
                         scanf("%s",&clt[count_clt].numero);
                         printf("entrer le CIN client : ");
                         scanf("%s",&clt[count_clt].CIN);
                            count_clt++;



                        system("cls");

                    break;

                case 2: // enter plusieur compte ======================================================================

                         printf("entrer le nombre des compte :\n");
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
                            clt[i].mantant =0;

                            printf("\n\n ");

                            system("cls");
                        }
                                count_clt = count_clt+npr;

                    break;

                case 3: // enter les operation ==============================================================================
                             printf("Operations \n");

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
                                case 1: // retrait ==========================================================================

                                                     printf("Enter a CIN to search: ");
                                                       scanf("%s", search);
                                                    found=-1;
                                                       for(i=0; i<count_clt; i++)
                                                       {

                                                         if(strcmp(search, clt[i].CIN )== 0)
                                                         {
                                                           found=i;
                                                           printf("[%d] le nom [%s] \t le nemero [%s] \t  CIN [%s] \t le mantant %d DH \n\n "
                                                                   ,i+1,clt[i].nom,clt[i].numero,clt[i].CIN,clt[i].mantant);
                                                         }
                                                       }
                                                      if (found>=0)
                                                        {
                                                        printf("entrer la somme de retrait en DH : \n");
                                                        scanf("%d", &retrait);
                                                        do
                                                        {
                                                            if(retrait<0 && retrait>clt[i].mantant ) // CONDITION POUR LE MANTANT SUPERIEUR A 0
                                                                {
                                                                printf("entrer la somme de retrait en DH superieur a  0 : \n");
                                                                scanf("%d", &retrait);
                                                                }

                                                        }while (retrait<0 && retrait>clt[i].mantant );
                                                        if (retrait>clt[i].mantant ) // POUR NE PAS RETRAIT A COMPTE IF MANTANT EGALE 0

                                                            printf(" Votre Mantant ne pa Suffisant pour retirer \n");


                                                            clt[i].mantant= clt[i].mantant-retrait;
                                                        }

                                                        else
                                                        {

                                                         printf("Not found");

                                                        }
                                               break;

                            case 2: //  DEPOT  =====================================================================================

                                                printf("Enter a CIN to search: ");
                                               scanf("%s", search);
                                                found=-1;
                                               for(i=0; i<count_clt; i++)
                                               {

                                                 if(strcmp(search, clt[i].CIN )== 0)
                                                 {
                                                   found=i;
                                                   printf("[%d] le nom [%s] \t le nemero [%s] \t  CIN [%s] \t le mantant [%d] \n\n "
                                                           ,i+1,clt[i].nom,clt[i].numero,clt[i].CIN,clt[i].mantant);
                                                 }


                                               }
                                                if (found>=0)
                                                {
                                                   printf("entrer la somme de depot en DH : \n");
                                                scanf("%d", &depot);
                                                  do
                                                {

                                                    if(depot<0){ // CONDITION POUR LE MANTANT SUPERIEUR A 0
                                                        printf("entrer la somme de retrait en DH superieur a # 0 #: \n");
                                                        scanf("%d", &depot);
                                                    }

                                                }while (depot<0 );

                                                clt[found].mantant= clt[found].mantant+depot;
                                                }else
                                                {
                                                 printf("Not found");

                                                }



                                                        break;

                                                        default:
                                                         break;
                                                        }

                                                  system("cls");

                                                   break;



                     case 4: // AFFICHAGE ==================================================================================

                               printf(" ====================  Affichage  ==============================\n\n");
                                       int choix_tri;
                                do
                                {
                                    printf(" 1 => asendant\n");
                                    printf(" 2 => desendant \n");
                                    printf(" 3 => asendant par valeur\n");
                                    printf(" 4 => desendant par valeur \n");

                                    printf("  Votre choix\n : ");
                                    scanf("%d", &choix_tri);

                                }while(choix_tri <1 || choix_tri>4);
                                  switch(choix_tri){
                              case 1:
                                tri_Ascendant(clt,count_clt);
                                break;
                              case 2 :
                                tri_Descendant(clt,count_clt);
                                break;
                                case 3 :
                                tri_AscendantVal(clt,count_clt);
                                break;
                                case 4 :
                                tri_DescendantVal(clt,count_clt);
                                break;
                                  }

                                 break;

                   case 5:  // SEARCH ====================================================================================


                        indexOfAccount = searchFunction();
                        if(indexOfAccount != -1){
                            printf("[%d] le nom [%s] \t le nemero [%s] \t  CIN [%s] \t le mantant [%d] \n\n "
                                                           ,indexOfAccount+1,
                                   clt[indexOfAccount].nom,
                                   clt[indexOfAccount].numero,
                                   clt[indexOfAccount].CIN,
                                   clt[indexOfAccount].mantant);
}

                                break;

                                default:
                                    break;
                            }
                        } while(choix !=6);
                    return 0;
                    system("pause");
    }

