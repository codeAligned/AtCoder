#include <iostream>
#include <algorithm>

typedef long long LL;
using namespace std;


LL LCM(LL a, LL b)
{
    return (a*b)/__gcd(a, b);
}

int main()
{
    LL left, right, a, b;
    cin >> left >> right >> a >> b;

    LL a_multiples = right/a - (left - 1)/a;
    LL b_multiples = right/b - (left - 1)/b;
    LL both_multiples = right/LCM(a, b) - (left - 1)/LCM(a, b);

    LL multiples = a_multiples + b_multiples - both_multiples;
    LL non_multiples = right - (left - 1) - multiples;

    cout << non_multiples;
    return 0;
}
