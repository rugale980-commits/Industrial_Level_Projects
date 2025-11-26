#include "Addition.h"

int main()
{
    int iValue1 = 0, iValue2 = 0;
    int iRet = 0;

    printf("Enter the First Number :\n");
    scanf("%d", &iValue1);

    printf("Enter the First Number :\n");
    scanf("%d", &iValue2);

    iRet = Addition(iValue1, iValue2);
    printf("Addition is : %d", iRet);

    return 0;
}