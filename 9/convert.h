#ifndef CONVERT_H_INCLUDED
#define CONVERT_H_INCLUDED
enum Scale:char
{
C='C',
K='K',
F='F'
};
double convert (double temperature, Scale from, Scale to);
struct Temperature{
   Temperature (double value, Scale symbol);
   double value;
   Scale symbol;
};

#endif // CONVERT_H_INCLUDED
