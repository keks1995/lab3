#include "convert.h"
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <string>
#include <stdexcept>
double convert(double temperature,Scale from,Scale to)
{
double K;

    switch (from)
    {
    case 'K': K=temperature;
    break;
    case 'C': K=temperature+273.15;
    break;
    case 'F': K=(5*(temperature-32))/9+273.15;
    break;
    default: throw std::invalid_argument("Wrong Scale \n");
    }
    if (K<0) throw std::logic_error("Kelvin<0\n");

    if (K>=0)
    {  switch (to)
      {
        case 'C': return (K-273.15);
        break;
        case 'F': return ((9*(K-273.15))/5+32);
        break;
        case 'K': return K;
        break;
        default: throw std::invalid_argument("Incorrect nomination of scale! Try again!\n");
      }
    }
    throw std::exception();
}
