#include <iostream>
using namespace std;

int main() {
    int a =5, b = 6, c = 7;
    int temp, temp1;
    temp = b;
    b = a;
    temp1 = c;
    c = temp;
    a = temp1;
    cout << a << endl << b << endl << c;
    return 0;
}