#include <iostream>
using namespace std;

int main() {
    int a = 3;
    char b = 'C'; // C++에서 단일 문자는 ''(작은 따옴표)를 사용한다. 문자열은 ""(큰 따옴표)
    // 'a'를 입력하면 그냥 문자 a, "a"를 입력하면 a 뒤에 null도 포함된다.
    cout << a << endl;
    cout << b;
    return 0;
}