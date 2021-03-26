#include <iostream>
using namespace std;

int main(void){
    bool eq;
    bool notea;
    bool greater;
    bool less;
    bool nomore;
    bool noless;

    int a = 3;
    int b = 2;
    eq = (a==b);
    notea = (a != b);
    greater = (a > b);
    less = (a < b);
    nomore = (a <= b);
    noless = (a <= b);

    cout << eq << endl;
    cout << notea << endl;
    cout << greater << endl;
    cout << less << endl;
    cout << nomore << endl;
    cout << noless << endl;
    return 0;
    
}