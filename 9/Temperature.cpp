#include "convert.h"
#include<iostream>
using namespace std;
Temperature::Temperature(double value, Scale symbol)
{
    this->value=value;
    this->symbol=symbol;
}


/*ostream& operator << (
ostream& output, const Temperature& data)
{
output << data.value;
return output;
}*/
