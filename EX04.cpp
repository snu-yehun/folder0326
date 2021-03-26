#include <iostream>
using namespace std;

int main(void){
    
    int n;
    
    cout << "Autonomous type-casting : " << (17.0 / 7) << endl;
    cout << "Before type-casting : " << 17 / 7 << endl;
    cout << "After type-casting L " << (double)17 / 7 << endl;

    return 0;
}