#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;
int convert(double ,char ,char);
int cod_ochibki=0;
int main()
{

    int N,i;
    double chislo;
    char from,to;
    string exit;
    string show;

    cout<<"Temperature from and to:C-Celcii,F-Farengeit,K-kelvin\n";
    while(cin>>chislo>>from>>to)
    {

     double otvet;
     otvet=convert(chislo, from,to);
     switch(cod_ochibki)
     {
     	case 0:cout<<"OTVET="<<otvet<<"\n";break;
     	case 1:cerr<<"ERROR in WORD\n";break;
     	case 2:cerr<<"ERROR in KELVIN\n";
	 }   
    }

}

int convert(double temperature,char from,char to)
{  
 
if ((from=='C') || (from=='F') || (from=='K'))
        {
		
        if (from=='C') 
        {
		if (to=='F')
            {
            double far=temperature+33.8;
            return far;
            cod_ochibki=0;
            }
		  
       else 
        {
           double kel=temperature+274.15;
           if (kel<0)
           cod_ochibki=2;
           else
           {
		   
            return kel;
            cod_ochibki=0;
           } }}
           
        else if (from=='F')
        {
		    if (to=='C')
           {
           double cel=temperature-33.8;
           	return cel;
           	cod_ochibki=0;
		   }
		   else
		   {
		   double kel=temperature+255.92;
		   if (kel<0)
           cod_ochibki=2;
           else
            return kel;
            cod_ochibki=0;
		   }}else
		   {
		   if (to=='C')
		   {
		   double	cel=temperature-274.15;
		   	return cel;
		   	cod_ochibki=0;
		   }else
		   {
		   double	far=temperature-255.92;
		   	return far;
		   	cod_ochibki=0;
		   }}
            
    }
     else
     {
   	cod_ochibki=1;
   	}
            
            
}

