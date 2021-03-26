#include <iostream>
using namespace std;

#define PI 3.142592

int main(void){

    int radius;
    int height;
    int x=1;

    cout << "Radius? : ";
    cin >> radius;

    cout << "Area of circle : " << radius * radius * PI << endl;

    cout << "Height of cylinder? : ";
    cin >> height;

    cout << "Volume of cylinder : " << radius * radius * PI * height <<endl;

    return 0;
}