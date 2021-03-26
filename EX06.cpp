#include <iostream>
using namespace std;

int main(void){

    double length;
    double inchPercm = 2.54;

    cout << "Length (cm) : ";
    cin >> length;

    length /= 2.54;
    cout << "Length (inch) : " << length << "\n";

    return 0;
}