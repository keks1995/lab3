#include <iostream>
#include <cstdlib>
#include <string>
#include <stdexcept>
#include <vector>
#include "convert.h"
using namespace std;
int main()
{


    Temperature data {0,K};
    Temperature minimum {0,K};
    Temperature maximum {0,K};
    Temperature average {0,K};
    vector <Temperature> MasTemp;
    while (cout << "Enter the temperature:C-Celcii,F-Farengeit\n ",
            cin >> data)
    {
        try
        {
           MasTemp.push_back(Temperature(convert(data.value,data.symbol,K),K));
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
   ofstream inFile ;
    inFile << fixed;
    inFile.precision(1);
    cout << "       Final table      "<< endl;
    cout << fixed;
    cout.precision(1);
   inFile.open("Temperature.txt");
    cout<<"Kelvin   "<<"Celcii   "<<"Farengeit"<<endl;
    inFile<<"Kelvin   "<<"Celcii   "<<"Farengeit"<<endl;
    for (Temperature x:MasTemp)
    {
        cout  << x.value<<"    "<<x.value-273.15<<"    " << ((x.value-273.15)*1.8+32) <<endl;
        inFile  << x.value<<"    "<<x.value-273.15<<"    " << ((x.value-273.15)*1.8+32) <<endl;
    }

    cout << endl;
    minimax(MasTemp,minimum,maximum,average);
    cout << "Minimum=" << minimum << "\t Maximum=" << maximum <<"\t Average=" << average/MasTemp.size() <<endl;
    inFile << "Minimum=" << minimum << "\t Maximum=" << maximum <<"\t Average=" << average/MasTemp.size()<<endl;
    inFile.close();
}
