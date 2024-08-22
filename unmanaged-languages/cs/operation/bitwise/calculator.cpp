#include <iostream>

#define ll long long
using namespace std;

static ll add(ll a, ll b);
static ll subtract(ll a, ll b);
static ll multiply(ll a, ll b);
static ll divide(ll a, ll b);
static ll power(ll a, ll b);
static ll modulo(ll a, ll b);

int main(void)
{
    cout << add(5, 3) << endl;
    cout << subtract(5, 3) << endl;
    cout << multiply(5, 3) << endl;
    return 0;
}

/*
0101
0011
----
0110
0010
----
0100
0100
----
0000
1000
----
1000
 */
ll add(ll a, ll b)
{
    while (b != 0)
    {
        int carry = (a & b) << 1;  // 캐리 계산
        a = a ^ b;                 // 더하기 (캐리 없이)
        b = carry;                 // 캐리를 더하기 위해 이동
    }
    return a;
}
ll subtract(ll a, ll b)
{
    return add(add(a, ~b), 1);
}
ll multiply(ll a, ll b)
{
    int res = 0;
    while (b != 0)
    {
        res = add(res, a);
        b = subtract(b, 1);
    }
    return res;
}
ll divide(ll a, ll b)
{
}
