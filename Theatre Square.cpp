#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
    double n, m, a;
    cin >> n >> m >> a;
    cout << (long long) ceil(n/a)* (long long) ceil(m/a) << endl;
}
