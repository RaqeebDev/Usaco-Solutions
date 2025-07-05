#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int n ; cin >> n ;
    int k ; cin >> k ; 
    vector<string> a(n);

    for (int i = 0 ; i < n ; i++)
        cin >> a[i];

    int curr = 0 ; 
    for (int i = 0 ; i < n ; i++ ){
        int wor = a[i].size();
        if (wor + curr <= k) {
            if (curr > 0) cout << " ";
            cout << a[i];
            curr += wor;
        }
        else {
            cout << "\n" << a[i];
            curr = wor; 
        }
    }

    return 0;
}

// Github : https://github.com/RaqeebDev
// Problem Link : https://usaco.org/index.php?page=viewproblem2&cpid=987
