#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;
int convert(double ,char ,char,double&);
enum  Error{word,kelvin,ok};
int main()
{
    //vector <double> celcii;
    //vector <double> kelvin;
    //vector <double> farengeit;
    int N,i;
    double chislo;
    char from,to;
    string exit;
    string show;
    //cout<<"Enter the numer of elements:";
    //cin>>N;
    cout<<"Temperature from and to:C-Celcii,F-Farengeit,K-kelvin\n";
    while(cin>>chislo>>from>>to)
    {
double otvet;
     //double  otvet=convert(chislo,from,to );
     switch(convert(chislo,from,to,otvet))
     {
     	case ok:cout<<"Otvet="<<otvet<<"\n";break;
     	case word:cerr<<"ERROR in WORD\n";break;
     	case kelvin:cerr<<"KELVIN<0:ERROR\n";break;
	 }



    }

}

int convert(double temperature,char from,char to,double& result)
{
if ((from=='C') || (from=='F') || (from=='K'))
        {

        if (from=='C')
        {
		if (to=='F')
            {
            result=temperature+33.8;
            return ok;
            }

       else
        {
           result=temperature+274.15;
           if (result<0)
            return kelvin;
            else
            return ok;
            }}

        else if (from=='F')
        {
		    if (to=='C')
           {
            result=temperature-33.8;
           	return ok;
		   }
		   else
		   {
		    result=temperature+255.92;
		   if (result<0)
            return kelvin;
            else
            return ok;
		   }}else
		   {
		   if (to=='C')
		   {
		   result=temperature-274.15;
		   	return ok;
		   }else
		   {
		  result =temperature-255.92;
		   	return ok;
		   }}

    }
     else
	return word;


}

