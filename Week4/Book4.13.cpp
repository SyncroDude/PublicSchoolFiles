#include <iostream>
using namespace std;
int main() {
    float totalMiles{0}, totalGallons{0}, tripMiles{0}, tripGallons{0}, totalMPG{0}, tripMPG{0};
    cout << "Enter miles driven (-1 to quit): ";
    cin >> tripMiles;
    while(tripMiles != -1) {
        cout << "Enter Gallons used: ";
        cin >> tripGallons;
        tripMPG = tripMiles/tripGallons;
        cout << "MPG this trip: " << tripMPG << endl;
        totalGallons += tripGallons;
        totalMiles += tripMiles;
        totalMPG = totalMiles/totalGallons;
        cout << "Total MPG: " << totalMPG << endl;
        cout << "\nEnter miles driven (-1 to quit): ";
        cin >> tripMiles;
    }
    return 0;
}