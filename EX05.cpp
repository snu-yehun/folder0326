#include <iostream>
using namespace std;

int main(void){

    int n;

    cout << "Autonomous type-casting : " << (17.0 / 7) << endl;
    cout << "Before type-casting : " << 17 / 7 << endl;
    cout << "After type-casting L " << (double)17 / 7 << endl;

    cout << "\nPrecision : ";
    cin >> n;

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(n);
    cout << " After precision " << 17.0 / 7 << endl;

    return 0;
}