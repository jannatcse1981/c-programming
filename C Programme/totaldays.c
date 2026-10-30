
#include <stdio.h>
int main (){
    int month_number ;
    printf ("enter month number ( 1-12 ):");
    scanf("%d" , &month_number);

    switch(month_number){

        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("total days: 31\n");
            break;

case 4:
case 6:
case 9:
case 11:
    printf("total days: 30\n");
        break;

case 2:
    printf("total days 28 or 29(leap year)\n");
    break;

    default:
        printf("invalid input!");
    }
return 0;

}
