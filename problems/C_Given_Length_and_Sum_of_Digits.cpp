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
void compute()
{
    int m, s;
    cin >> m >> s;
    if(m==1&&s==0){
        cout << "0 0" << endl;
        return;
    }
    if ((m > 1 && s == 0) || s > m * 9)
    {
        cout << "-1 -1" << endl;
        return;
    }
    string s1 = "", s2 = "";
    FOR(i, 0, m)
    {
        s1 += '0';
        s2 += '0';
    }
    
    if (s >= 1)
        s2[0] = '1';
    s -= 1;
    FOR(i, 0, m)
    {
        // cout << s << endl;

        if (s + s2[i] - '0' <= 9)
        {
            s2[i] += s;
            // s1[m-i-1]+=s;
            break;
        }
        else
        {
            int d = 9 - (s2[i] - '0');

            s2[i] += d;
            // s1[m-i-1]+=9;
            s -= d;
        }
    }
    FOR(i, 0, m)
    {
        s1[i] = s2[m - 1 - i];
    }
    if (s1[0] == '0')
    {
        s1[0] = '1';
        FOR(i, 1, m)
        {
            if (s1[i] != '0')
            {
                s1[i]--;
                break;
            }
        }
    }
    cout << s1 << " " << s2;
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