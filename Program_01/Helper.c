#include "Division.h"

int Divided(int iNo1, int iNo2)
{
    int iAns = 0;

    if (iNo2 <= 0)
    {
        return -1;
    }
    iAns = iNo1 / iNo2; 

    return iAns;
}