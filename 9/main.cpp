#include <iostream>
#include <cmath>
#include <cstdlib>
#include <string>
#include <stdexcept>
#include <vector>
#include "convert.h"
using namespace std;
int main()
{

  Temperature data{0,K};

    vector <Temperature> MasTemp;
    while (cout << "Enter the temperature:C-Celcii,F-Farengeit\n ",
            cin >> data.value,
            cin >> (char&) data.symbol)
    {
        try
        {
            MasTemp.push_back(Temperature(convert(data.value,data.symbol,K),data.symbol));
        }
        catch (const invalid_argument& e)
        {
            cerr << e.what() << endl;
        }
        catch (const logic_error& le)
        {
            cerr << le.what() << endl;
        }
    }
    cout << "      Final table      "<< endl;
    cout << fixed;
   cout.precision(1);
   cout<<"Kelvin   "<<"Celcii   "<<"Farengeit"<<endl;
    for (Temperature x:MasTemp)
    {
        cout  << x.value<<"    "<<x.value-273.15<<"    " << ((x.value-273.15)*1.8+32) <<endl;
    }

}
