#include <iostream>

using namespace std;

// maximum of two values of any type
template<typename T>
T max(T a, T b) {
    return b < a ? a : b;
}

// maximum of two pointers
template<typename T>
T* max(T* a, T* b) {
    return *b < *a ? a : b;
}

// maximum of two c-strings
char const* max (char const* a, char const* b){
    return strcmp(b,a) < 0 ? a: b;
}

int main() {

    int a = 5;
    int b = 12;
    auto m1 = ::max(a,b); // max() for two values of type int
    cout << m1 << endl;

    string s1 = "hello";
    string s2 = "world";
    auto m2 = ::max(s1, s2); // max() for two values of type string
    cout << m2 << endl;

    int* p1 = &b;
    int* p2 = &a;
    auto m3 = ::max(p1,p2); // max() for two pointers
    cout << *m3 << endl;

    char const* x = "hai";
    char const* y = "hej";
    auto m4 = ::max(x,y); // max() for two c-strings
    cout << m4 << endl;

    return 0;
}
