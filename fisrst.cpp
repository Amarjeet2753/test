#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define deb(x) cout << #x << "=" << x << endl;
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl;
#define forn(i, n) for (int i = 0; i < n; i++)
#define forsn(i, s, n) for (int i = s; i < n; i++)
#define rforn(i, s) for (int i = s; i >= 0; i--)
#define rforsn(i, s, n) for (int i = s; i >= n; i--)
#define sort1(v) sort(v.begin(), v.end())

int mod = 1000000007;

bool isPrime[90000001];
vector<int> vp;

bool isPerfectSquare(int x)
{
    if (x >= 0)
    {

        long long sr = sqrt(x);

        return (sr * sr == x);
    }

    return false;
}

bool isPrimeNum(int n)
{

    if (n <= 1)
        return false;
    if (n <= 3)
        return true;

    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;

    return true;
}

void seive()
{
    int n = 90000001;
    for (int i = 0; i < n; i++)
    {
        isPrime[i] = 1;
    }

    isPrime[0] = 0;
    isPrime[1] = 0;

    for (int i = 2; i * i <= n; i++)
    {
        if (isPrime[i])
        {
            for (int j = i * i; j <= n; j += i)
            {
                isPrime[j] = 0;
            }
        }
    }
}



void solution()
{
  
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t;
    //cin >> t;
     t=1;
    while (t--)
    {

        solution();
    }

    return 0;
}