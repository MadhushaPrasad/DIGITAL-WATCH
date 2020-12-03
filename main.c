#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int main()
{

    int hour =0;
    int minute =0;
    int second =0;

    printf("Please Input the time format in HH:MM:SS:");
    scanf("%d%d%d",&hour,&minute,&second);

    printf("%d%d%d",hour,minute,second);

    if (!(hour>24 || minute > 60 || second >60))
    {

        watchProcesss(hour,minute,second);

    }
    else
    {

        system("cls");
        printf("Please input correct data.....");

    }

    return 0;
}

void watchProcesss(int hour,int minute,int second)
{


start:
    ;

    for(hour; hour<24; hour++)
    {

        for(minute; minute<60; minute++)
        {

            for(second; second<60; second++)
            {
                system("cls");

                printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t%dh:%dm:%ds",hour,minute,second);

                if(hour<12)
                {
                    printf(":AM");
                }
                else
                {
                    printf(":PM");
                }

                for(double i = 0; i<89999900; i++)
                {
                    i++;
                    i--;
                }

            }

            second = 0;
        }
        minute = 0;
    }

    goto start;

    hour =0;


}
