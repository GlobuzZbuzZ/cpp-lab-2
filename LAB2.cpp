#include <iostream>
//#include <cmath>
using namespace std;

unsigned long long dblfct (int x) {
    if (x<=0) {
        return 1;
    }
    unsigned long long result = 1;
    for (int i = x; i > 0; i -= 2) {
        result *= i;
    }
    return result;
}

long double pow(long double x, int n) {
    //cout << x << " ";
    //cout << n << " ";
    if (n==0) {
        return 1;
    }
    else {
        long double k = x;
        for (long int i = 1; i<n; i++) {
            x=x*k;
        }
    }
    //cout << x << endl;
    return x;
}

double t(double x) {
    double numerat = 0;
    double denom = 0;
    for (int k = 0; k <= 10; k++) {
        if (2 * k + 1 > 0) {
            numerat+= pow(x, 2 * k + 1) / dblfct(2 * k + 1);
        }   
        denom+=(pow(x, 2 * k)/dblfct(2 * k));
    }
    return numerat/denom;
}

int main() {
    double y;
    //cout << y;
    cin >> y;
    double result = (7 * t(0.25) + 2 * t(1 + y))/(6-t(y*y - 1));
    cout << result;
    return 0;
}