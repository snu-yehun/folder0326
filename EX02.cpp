#include <iostream>
using namespace std;

#define PI 3.142592

int main(void){

    int radius;

    cout << "Radius? : ";
    cin >> radius;

    cout << "Area of circle : " << radius * radius * PI << endl;

    return 0;
}