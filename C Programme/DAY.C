#include <stdio.h>
int main ()
{
    int week_day;
    printf("Enter day number(1-7):");
    scanf("%d", &week_day);

    switch (week_day)
    {
    case 1:
        printf("saturday\n");
        break;
    case 2:
        printf("sunday\n");
        break;
    case 3:
        printf("monday\n");
        break;
    case 4:
        printf("tuesday\n");
        break;
    case 5:
        printf("wednesdsay\n");
        break;
    case 6:
        printf("thursday\n");
        break;
    case 7:
        printf("friday\n");
        break;
    default:
        printf("invalid input .\n");
    }

    return 0;
}
