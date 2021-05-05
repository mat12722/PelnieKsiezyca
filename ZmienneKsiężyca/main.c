#include <stdio.h>
#include <stdlib.h>

int main()
{
    //2020 jest rokiem przestepnym
    //pełnia 1 28.03.2021
    //pelnia 2 27.04.2021
    int dzienPopra=0,miescPopra=0;
    char menu;
    int dzien,miesiac,rok;
    int dzien2,miesiac2,rok2;
    int miesiac3,rok3;
    int ileRazyChceszDodac=1;
    printf("Jak chcesz wyliczyc date nowej pelni nacisnij Y jak starszej nacisnij N\n");
    scanf("%c",&menu);
    do
    {
        if(miescPopra==1)
        {
            printf("Miesiac nie poprawny podaj ponownie\n");
            scanf("%d",&miesiac);
        }
        else
        {
            printf("Podaj miesiac pelni ksiezyca\n");
            scanf("%d",&miesiac);
            miescPopra=1;
        }
    }while(miesiac<=0 || miesiac>=13);
    do
    {
        if(miesiac==1 || miesiac==6 || miesiac==9 || miesiac==11)
        {
            printf("Podaj dzien pelni ksiezyca\n");
            scanf("%d",&dzien);
            if(dzien>=1 && dzien<=30)
            {
                dzienPopra=1;
            }
        }
        if(miesiac==4 || miesiac==3 || miesiac==5 || miesiac==7 || miesiac==8 || miesiac==10 || miesiac==12)
        {

            printf("Podaj dzien pelni ksiezyca\n");
            scanf("%d",&dzien);
            if(dzien>=1 && dzien<=31)
            {
                dzienPopra=1;
            }
        }
        if(miesiac==2)
        {
            if((rok-2020)%4==0)
            {
                printf("Podaj dzien pelni ksiezyca\n");
                scanf("%d",&dzien);
                if(dzien>=1 && dzien<=29)
                {
                    dzienPopra=1;
                }
            }
            else
            {
                printf("Podaj dzien pelni ksiezyca\n");
                scanf("%d",&dzien);
                if(dzien>=1 && dzien<=28)
                {
                     dzienPopra=1;
                }
            }
        }
    }while(dzienPopra==0);
    printf("Podaj rok pelni ksiezyca\n");
    scanf("%d",&rok);
    dzien2=dzien;
    miesiac2=miesiac;
    rok2=rok;
    switch(menu)
    {
        case 'Y':
        {
            printf("Ile pelni do przodu chcesz date\n");
            scanf("%d",&ileRazyChceszDodac);
            for(int i=0;i<=(ileRazyChceszDodac*29);i++)
            {
                switch(miesiac)
                {
                    case 1:
                    {
                        if(dzien==31)
                        {
                            dzien=1;
                            miesiac=miesiac+1;
                        }
                        else
                        {
                            dzien++;
                        }
                        break;
                    }
                    case 2:
                    {

                        if((rok-2020)%4==0)
                        {
                            if(dzien==29)
                            {
                                dzien=1;
                                miesiac=miesiac+1;
                            }
                            else
                            {
                                dzien++;
                            }
                        }
                        else
                        {
                            if(dzien==28)
                            {
                                dzien=1;
                                miesiac=miesiac+1;
                            }
                            else
                            {
                                dzien++;
                            }
                        }
                        break;
                    }
                    case 3:
                    {
                        if(dzien==31)
                        {
                            dzien=1;
                            miesiac=miesiac+1;
                        }
                        else
                        {
                            dzien++;
                        }
                        break;
                    }
                    case 4:
                    {
                        if(dzien==30)
                        {
                            dzien=1;
                            miesiac=miesiac+1;
                        }
                        else
                        {
                            dzien++;
                        }
                        break;
                    }
                    case 5:
                    {
                        if(dzien==31)
                        {
                            dzien=1;
                            miesiac=miesiac+1;
                        }
                        else
                        {
                            dzien++;
                        }
                        break;
                    }
                    case 6:
                    {
                        if(dzien==30)
                        {
                            dzien=1;
                            miesiac=miesiac+1;
                        }
                        else
                        {
                            dzien++;
                        }
                        break;
                    }
                    case 7:
                    {
                        if(dzien==31)
                        {
                            dzien=1;
                            miesiac=miesiac+1;
                        }
                        else
                        {
                            dzien++;
                        }
                        break;
                    }
                    case 8:
                    {
                        if(dzien==31)
                        {
                            dzien=1;
                            miesiac=miesiac+1;
                        }
                        else
                        {
                            dzien++;
                        }
                        break;
                    }
                    case 9:
                    {
                        if(dzien==30)
                        {
                            dzien=1;
                            miesiac=miesiac+1;
                        }
                        else
                        {
                            dzien++;
                        }
                        break;
                    }
                    case 10:
                    {
                        if(dzien==31)
                        {
                            dzien=1;
                            miesiac=miesiac+1;
                        }
                        else
                        {
                            dzien++;
                        }
                        break;
                    }
                    case 11:
                    {
                        if(dzien==30)
                        {
                            dzien=1;
                            miesiac=miesiac+1;
                        }
                        else
                        {
                            dzien++;
                        }
                        break;
                    }
                    case 12:
                    {
                        if(dzien==31)
                        {
                            dzien=1;
                            miesiac=1;
                            rok++;
                        }
                        else
                        {
                            dzien++;
                        }
                        break;
                    }
                    default:
                    {
                        printf("Podano zla date");
                        i=ileRazyChceszDodac*29;
                        break;
                    }
                }
            }
            break;
        }
        case 'N':
        {
            printf("Ile pelni do tylu chcesz date");
            scanf("%d",&ileRazyChceszDodac);
            for(int i=0;i<=ileRazyChceszDodac*29;i++)
            {
                switch(miesiac)
                {
                    case 1:
                    {

                        if(dzien==1)
                        {
                            dzien=31;
                            miesiac=12;
                            rok--;
                        }
                        else
                        {
                            dzien--;
                        }
                        break;
                    }
                    case 2:
                    {
                       if(dzien==1)
                        {
                            dzien=31;
                            miesiac--;
                        }
                        else
                        {
                            dzien--;
                        }
                        break;
                    }
                    case 3:
                    {
                        if((rok-2020)%4==0)
                        {
                            if(dzien==1)
                            {
                                dzien=29;
                                miesiac--;
                            }
                            else
                            {
                                dzien--;
                            }
                        }
                        else
                        {
                            if(dzien==1)
                            {
                                dzien=28;
                                miesiac--;
                            }
                            else
                            {
                                dzien--;
                            }
                        }
                        break;
                    }
                    case 4:
                    {
                        if(dzien==1)
                        {
                            dzien=31;
                            miesiac--;
                        }
                        else
                        {
                            dzien--;
                        }
                        break;
                    }
                    case 5:
                    {
                       if(dzien==1)
                        {
                            dzien=30;
                            miesiac--;
                        }
                        else
                        {
                            dzien--;
                        }
                        break;
                    }
                    case 6:
                    {
                        if(dzien==1)
                        {
                            dzien=31;
                            miesiac--;
                        }
                        else
                        {
                            dzien--;
                        }
                        break;
                    }
                    case 7:
                    {
                       if(dzien==1)
                        {
                            dzien=30;
                            miesiac--;
                        }
                        else
                        {
                            dzien--;
                        }
                        break;
                    }
                    case 8:
                    {
                        if(dzien==1)
                        {
                            dzien=31;
                            miesiac--;
                        }
                        else
                        {
                            dzien--;
                        }
                        break;
                    }
                    case 9:
                    {
                        if(dzien==1)
                        {
                            dzien=31;
                            miesiac--;
                        }
                        else
                        {
                            dzien--;
                        }
                        break;
                    }
                    case 10:
                    {
                       if(dzien==1)
                        {
                            dzien=30;
                            miesiac--;
                        }
                        else
                        {
                            dzien--;
                        }
                        break;
                    }
                    case 11:
                    {
                       if(dzien==1)
                        {
                            dzien=31;
                            miesiac--;
                        }
                        else
                        {
                            dzien--;
                        }
                        break;
                    }
                    case 12:
                    {
                       if(dzien==1)
                        {
                            dzien=30;
                            miesiac--;
                        }
                        else
                        {
                            dzien--;
                        }
                        break;
                    }
                    default:
                    {
                        printf("Podano zla date");
                        i=ileRazyChceszDodac*29;
                        break;
                    }
                }
            }
            break;
        }
        default:
        {
            printf("Program nie posiada wybranej funkcji");
            break;
        }
    }
    printf("%d,%d,%d\n",dzien, miesiac,rok);
    miesiac3=miesiac;
    rok3=rok;

    FILE *plik;
    plik=fopen("dane.txt","a+");
    char data1[] = " 1 pelnia";
    sprintf(data1,"%s %d,", data1, dzien2);
    sprintf(data1,"%s %d,", data1, miesiac2);
    sprintf(data1,"%s %d", data1, rok2);
    fprintf(plik,"%s 2pelnia %d,%d,%d\n",data1,dzien,miesiac3,rok3);
    fclose(plik);
    return 0;
}
