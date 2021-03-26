#include <iostream>
using namespace std;

int main(void){

    int radius;
    const double PI = 3.141592;

    cout << "Radius? : ";
    cin >> radius;

    cout << "Area of circle : " << radius * radius * PI << endl;

    return 0;
}