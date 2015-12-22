#ifndef CONVERT_H_INCLUDED
#define CONVERT_H_INCLUDED
enum Scale
 {
   Kelvin,
   Celcii,
   Farengeit
 };
double convert(double t, Scale from, Scale to);
Scale IntoScale(char IS);
#endif // CONVERT_H_INCLUDED
