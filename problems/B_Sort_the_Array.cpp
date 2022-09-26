#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <limits>
#include <vector>
#include <bitset>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <time.h>
using namespace std;
#define MOD 1000000007LL
#define LL long long
#define ULL unsigned long long
#define LD long double
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define ABS(x) ((x) < 0 ? -(x) : (x))
#define si(n) scanf("%d", &n)
#define sf(n) scanf("%f", &n)
#define sl(n) scanf("%lld", &n)
#define slu(n) scanf("%llu", &n)
#define sd(n) scanf("%lf", &n)
#define ss(n) scanf("%s", n)
#define pnl printf("\n")
#define REP(i, n) for (int i = 0; i < (n); i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define FORR(i, n) for (int i = (n); i >= 0; i--)
#define DB(x) cout << "\n" \
                   << #x << " = " << (x) << "\n";
#define CL(a, b) memset(a, b, sizeof(a))
#define GOLD ((1 + sqrt(5)) / 2)
const double PI = 3.14159265358979323846264338327950288419716939937510582097494459230;
void swaps(char *x, char *y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
void swapi(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
ULL gcd(ULL a, ULL b)
{
    if (a == 0)
        return b;
    if (b == 0)
        return a;
    if (a == 1 || b == 1)
        return 1;
    if (a == b)
        return a;
    if (a > b)
        return gcd(b, a % b);
    else
        return gcd(a, b % a);
}
#define SIZE 1000001
void preprocess()
{
} // end prepreprocess
void refresh()
{
} // end refresh
bool check(LL int ar[], int n)
{
    int ok = 1;
    for (LL int k = 0; k < n - 1; k++)
    {
        if (ar[k] > ar[k + 1])
        {
            ok = 0;
        }
    }
    return ok;
}
void rev(LL int arr[], LL int low, LL int high)
{
    if (low < high)
    {
        swap(arr[low], arr[high]);
        rev(arr, low + 1, high - 1);
    }
}
void compute()
{
    LL int n;
    cin >> n;
    LL int ar[n];
    for (LL int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    if (check(ar, n))
    {
        cout << "yes" << endl;
        cout << 1 << " " << 1;
        return;
    }
    int s = 1;
    int p1 = 0, p2 = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (ar[i] > ar[i + 1])
        {
            if (s)
            {
                s = 0;
                p1 = i;
            }
            p2 = i+1;

        }
        else if(!s)
        {
            // p2 = i;
            break;
        }
    }
    // cout << p1 << p2<< endl;
    rev(ar, p1, p2);
    // for (int i = 0; i < n; i++)
    // {
    //     cout << ar[i] << " "; 
    // }
    if (check(ar, n))
    {
        cout << "yes" << endl;
        cout << p1 + 1 << " " << p2 + 1;
    }
    else
        cout << "no";

} // end compute
int main()
{
#ifdef debug
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("log.txt", "w", stderr);
#endif
    int t, i, j;
    preprocess();
    // scanf("%d", &t);
    t = 1;
    while (t--)
    {
        compute();
    } // end while
#ifdef debug
    fprintf(stdout, "\nTIME: %.3lf sec\n", (double)clock() / (CLOCKS_PER_SEC));
#endif
    return 0;
} // end main*