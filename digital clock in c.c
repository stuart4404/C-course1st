/* coding a digital clock in c*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int h,m,s;
    int d=1000; /*delay 1000 ms*/
    printf("set time HH:MM:SS \n");
    scanf("%d%d%d, &h,&m,&s");

    start:;
    for (h;h<24;h++){
        for(m;m<60;m++){
            for(s;s<60;s++){
                system("cls");
                printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t %d:%d:%d",h,m,s);
                for (double i=0; i <89999900; i++){
                    i++;
                    i--;
                }
            }
            s=0;
        }
        m=0;
    }

goto start;
}