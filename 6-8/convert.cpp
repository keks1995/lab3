#include "convert.h"
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <string>
#include <stdexcept>
Scale IntoScale(char IS)
{   switch (IS)
      {case 'C': return Celcii; break;
       case 'F':return Farengeit; break;
       case 'K':return Kelvin; break;
       default: throw std::invalid_argument("Wrong Scale\n");
       }
}
double convert(double temperature,Scale from,Scale to)
{
double K;

    switch (from)
    {
    case Kelvin: K=temperature;
    break;
    case Celcii: K=temperature+273.15;
    break;
    case Farengeit: K=(5*(temperature-32))/9+273.15;
    break;
    default: throw std::invalid_argument("Wrong Scale \n");
    }
    if (K<0) throw std::logic_error("Kelvin<0\n");

    if (K>=0)
    {  switch (to)
      {
        case Celcii: return (K-273.15);
        break;
        case Farengeit: return ((9*(K-273.15))/5+32);
        break;
        case Kelvin: return K;
        break;
        default: throw std::invalid_argument("Incorrect nomination of scale! Try again!\n");
      }
    }
    throw std::exception();
}
