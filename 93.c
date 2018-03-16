#include <iostream>
using namespace std;
float Celsius_to_Kelvin(float C)
{
    return (C + 273.15);
}
void main()
{
    float C = 21;
    cout << "Temperature in Kelvin ( K ) = "
     << Celsius_to_Kelvin(C);
     }
