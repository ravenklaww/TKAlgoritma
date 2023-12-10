#include <stdio.h>
#include  "./billing/billing.h"
#include  "./grade/grade.h"

void main(){

    //input menu
    int menu;

    do
    {
        
        printf("#####MENU#####\n1.billing\n2.grade\n0.exit\n");
        scanf("%d",&menu);

        switch (menu)
        {
        case 1:
            calculateBilling();
            break;
        case 2:
            evaluateGrade();
            break;
        default:
            return;
        }

    } while (menu != 0);


    scanf("app exited");

}