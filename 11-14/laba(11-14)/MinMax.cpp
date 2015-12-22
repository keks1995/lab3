#include "convert.h"
#include <vector>
#include <iostream>

void minimax(const std::vector<Temperature> MasTemp, Temperature &Min, Temperature &Max, Temperature &Sred)
{

    minimum=MasTemp[0];
    maximum=MasTemp[0];
    average=MasTemp[0];
    for (Temperature x:MasTemp)
    {
        if (x < minimum)
        {
            minimum=x;
        }
        else if (x>maximum)
        {
            maximum=x;
        }
        Sred+=x;
    }
}
