#include <iostream>
#include <cmath>
#include <cstdlib>
#include <string>
#include <stdexcept>
#include "convert.h"
using namespace std;
int main()
{

    int N;
    int i;
    double chislo;
    char from,to;
    string exit;
    string show;
    Scale Sto,Sfrom;
    cout<<"Temperature from and to:C-Celcii,F-Farengeit,K-kelvin\n";
    while(cin>>chislo>>from>>to)
    {
       Sto=IntoScale(to);
       Sfrom=IntoScale(from);
       double otvet;
        try
        {
            otvet=convert(chislo, Sfrom,Sto);
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
        cout<<"Otvet="<<otvet<<endl;
        cout << "Input the temperature: F-Farengeit,C-Celsii,K-Kelvin: ";
    }

}
