#include <iostream>
#include <cmath>
using namespace std;
int main() 
{
setlocale(LC_ALL, "uk_UA");
   
    double a;
    cout << "Введіть значення a (у радіанах): ";
    cin >> a;

    double Z1 = cos(a) + cos(2 * a) + cos(6 * a) + cos(7 * a);

    double Z2 = 4 * cos(a / 2) * cos(5 * a / 2) * cos(4 * a);

   
    cout << "Z1 = " << Z1 << endl;
    cout << "Z2 = " << Z2 << endl;

   
    if (abs(Z1 - Z2) < 1e-6) {
        cout << "Результати збігаються." << endl;
    }
    else {
       cout << "Результати не збігаються." << endl;
    }

    return 0;
}
