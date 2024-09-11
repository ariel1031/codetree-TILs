#include <iostream>
using namespace std;

int main() {
    cout << "Total days in Year\n";
    cout << 365 << "\n";
    cout << "Circumference rate\n"; 
    cout << fixed; //cout을 사용하여 실수를 출력하면 전체 자리수(정수 부분 + 소수점 부분)가 6자리로 고정되어 출력된다.
    cout.precision(10); //소수점 아래 10개의 수를 나타내기
    cout << 3.1415926535;
    return 0;
}