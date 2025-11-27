#include "CheckEvenOdd.h"

bool CheckEvenOdd(int iNo)
{
    // Updater
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    if (iNo % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}