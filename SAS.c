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
                      printf("[%d] le nom [%s] \t le nemero [%s] \t  CIN [%s] \t le mantant %d DH \n\n "
                              ,i+1,clt[i].nom,clt[i].numero,clt[i].CIN,clt[i].mantant);
                        return i;
                    }
                }
                printf("cin doesnt exist\n");
                return -1;
                }

   // function of tri ascendant ===============================================================================

                void tri_Ascendant()
                {
//                    int i ,j ;
//                    struct client temp;
//                    for (i=0 ; i<count_clt-1 ; i++)
//                    {
//                      for (j=i+1 ; i<count_clt ; i++)
//                      {
//                          if (clt[i].mantant>clt[j].mantant)
//                          {

//                            temp = clt[i];
//                            clt[i] = clt[j];
//                            clt[j] = temp;
//                          }
//                       }
//
//                      }

                        int min;
                        struct client temp;
                        int i,j;

                        for( i = 0 ; i < count_clt-1 ; i++)
                        {
                            min = i;
                            for( j = i+1 ; j < count_clt ; j++)
                                if( clt[min].mantant > clt[j].mantant)
                                    min = j;
                            if(min!=i)
                            {
                                temp = clt[i];
                                clt[i]=clt[min];
                                clt[min]=temp;
                            }
                        }
                   }


    // function of  tri descendant =====================================================================

    void tri_descendant()
                {
//                    int i ,j ;
//                    struct client temp;
//                    for (i=0 ; i<count_clt-1 ; i++)
//                    {
//                      for (j=i+1 ; i<count_clt ; i++)
//                       {
//                          if (clt[i].mantant<clt[j].mantant)
//                          {
//                            temp = clt[i];
//                            clt[i] = clt[j];
//                            clt[j] = temp;
//                          }
//                       }
//
//                      }

                    int min;
                    struct client temp;
                    int i;

                    for(int i = 0 ; i < count_clt-1 ; i++)
                    {
                        min = i;
                        for(int j = i+1 ; j < count_clt ; j++)
                            if(  clt[min].mantant < clt[j].mantant )
                                min = j;
                        if(min!=i)
                        {
                            temp = clt[i];
                            clt[i]=clt[min];
                            clt[min]=temp;
                        }
                    }
                   }
     // FUNCTION OF AFFICHAGE ====================================================================================

                void affichage ()
                {

                    for(int i=0 ; i<count_clt ; i++)
                         {

                        printf("[%d] le nom [%s] \t le nemero [%s] \t  CIN [%s] \t le mantant [%d] \n\n "
                            ,i+1,clt[i].nom,clt[i].numero,clt[i].CIN,clt[i].mantant);
                         }
                }



    // functin of tri ascendant par valeur ===================================================================

     void tri_AscendantVal()
{

   tri_Ascendant();
     int Val,i ;
     printf(" enter a valeur de recherche : ");
     scanf("%d",&Val);
      for (i=0 ; i< count_clt  ;i++ )

     {
         if(clt[i].mantant>=Val)
         {

                printf("[%d] le nom [%s] \t le nemero [%s] \t  CIN [%s] \t le mantant [%d] \n\n "
                       ,i+1,clt[i].nom,clt[i].numero,clt[i].CIN,clt[i].mantant);
         }
     }

}
       // function of tri descendant par valeur =====================================================================

        void tri_DescendantVal()
{

   tri_descendant();
     int Val,i ;
     printf(" enter a valeur de recherche : ");
     scanf("%d",&Val);
      for (i=0 ; i< count_clt  ;i++ )

     {
         if(clt[i].mantant>=Val)
         {
           printf("[%d] le nom [%s] \t le nemero [%s] \t  CIN [%s] \t le mantant [%d] \n\n "
                                   ,i+1,clt[i].nom,clt[i].numero,clt[i].CIN,clt[i].mantant);
         }

        }

}



int main()
{
           // LES VARIABLE ===========================================================================================

                    int choix ,i , npr=0,retrait =0,depot=0,found, indexOfAccount;
                    char search [50];
                    clt[i].mantant =0;

            // menu prinsipale ==============================================================================
        do
        {
            do
            {

                printf(" ======================== M E N U ===========================\n\n");

                printf("     1 => Cree un copmte bancaire \n");
                printf("     2 => Plusieurs comptes bancaires\n");
                printf("     3 => Operations \n");
                printf("     4 => Affichage\n");
                printf("     5 => Recherche par CIN \n");
                printf("     6 => Fidelisation \n");
                printf("     7 => Quitter l Application \n\n");

                printf(" ====================== Votre choix ===========================\n");
			    scanf("%d", &choix);




            }while(choix <1 || choix>7);

          switch(choix)
           {

                case 1: // entrer un compte ===========================================================================

                         printf("\n entrer le nom client : ");
                         scanf("%s",&clt[count_clt].nom);
                         printf("entrer le numero client : ");
                         scanf("%s",&clt[count_clt].numero);
                         printf("entrer le CIN client : ");
                         scanf("%s",&clt[count_clt].CIN);
                         printf("entrer le mantant : ");
                         scanf("%d",&clt[count_clt].mantant);
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
                            printf("entrer le mantant : ");
                            scanf("%d",&clt[i].mantant);


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


                            found = searchFunction();

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

                        found = searchFunction();


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
                                    printf(" 4 => desendant par valeur \n\n \n");

                                    printf("  Votre choix : ");
                                    scanf("%d", &choix_tri);

                                }while(choix_tri <1 || choix_tri>4);
                                  switch(choix_tri){
                      case 1:   tri_Ascendant();
                                 affichage ();
                        break;

                      case 2 :   tri_descendant();
                                 affichage ();
                        break;

                        case 3 :tri_AscendantVal();
                        break;

                        case 4 :tri_DescendantVal();
                        break;
                                  }

                        break;

           case 5:  // SEARCH ====================================================================================


                     searchFunction();

                             break;

            case 6: //  Fidelisation  ==============================================================================

                                  printf("======================= Fidelisation============================ \n");

//                                    int min;
//                                    struct client temp;
//                                    int i;
//
//                                    for(int i = 0 ; i < count_clt-1 ; i++)
//                                    {
//                                        min = i;
//                                        for(int j = i+1 ; j < count_clt ; j++)
//                                            if(clt[j].mantant > clt[min].mantant)
//                                                min = j;
//                                        if(min!=i)
//                                        {
//                                            temp = clt[i];
//                                            clt[i]=clt[min];
//                                            clt[min]=temp;
//                                        }
//                                    }
                                    tri_descendant();

                                    for(i=0 ; i<3 ; i++)
                                    {
                                        clt[i].mantant += clt[i].mantant * 0.013;

                                        printf("[%d] le nom [%s] \t le nemero [%s] \t  CIN [%s] \t le mantant [%d] \n\n "
                                                        ,i+1,clt[i].nom,clt[i].numero,clt[i].CIN,clt[i].mantant);
                                    }




                break;
                default:
                    break;
            }
        } while(choix !=7);
              return 0;
                    system("pause");
    }

