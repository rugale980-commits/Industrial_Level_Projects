#include "CheckEvenOdd.h"

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number check Even or Odd :\n");
    scanf("%d", &iValue);

    iRet = CheckEvenOdd(iValue);

    if (iRet == true)
    {
        printf("%d is Even Number.", iValue);
    }
    else
    {
        printf("%d is Odd Number.", iValue);
    }

    return 0;
}