#include <iostream>
#include <cmath>
#include <cstdlib>
#include <string>
#include <stdexcept>
using namespace std;
int convert(double ,char ,char);

int main()
{

    int N;
    int i;
    double chislo;
    char from,to;
    string exit;
    string show;

    cout<<"Temperature from and to:C-Celcii,F-Farengeit,K-kelvin\n";
    while(cin>>chislo>>from>>to)
    {
        double otvet;
        try
        {
            otvet=convert(chislo, from,to);
        }
        catch (const invalid_argument& e)
        {
            cerr << e.what() << "\n";
        }
        catch (const logic_error& le)
        {
            cerr << le.what() << "\n";
        }
        catch (...)
        {
            cerr << "Unknown error! Try again! \n";
        }
        cout << "Input the temperature: F-Farengeit,C-Celsii,K-Kelvin: ";
    }


    //  double otvet;
    // otvet=convert(chislo, from,to);
    /*switch(cod_ochibki)
    {
       case 0:cout<<"OTVET="<<otvet<<"\n";break;
       case 1:cerr<<"ERROR in WORD\n";break;
       case 2:cerr<<"ERROR in KELVIN\n";
    } */


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
                // cod_ochibki=0;
            }

            else
            {
                double kel=temperature+274.15;
                if (kel<0)
                    throw logic_error("Too low temperature!\n");
                else
                    return kel;

            }
        }

        else if (from=='F')
        {
            if (to=='C')
            {
                double cel=temperature-33.8;
                return cel;
                //    cod_ochibki=0;
            }
            else
            {
                double kel=temperature+255.92;
                if (kel<0)
                    throw logic_error("Too low temperature!\n");
                else
                    return kel;

            }
        }
        else
        {
            if (to=='C')
            {
                double   cel=temperature-274.15;
                return cel;
                //    cod_ochibki=0;
            }
            else
            {
                double   far=temperature-255.92;
                return far;
                //      cod_ochibki=0;
            }
        }

    }
    else
        throw invalid_argument("Incorrect from! Try again!\n");
}
