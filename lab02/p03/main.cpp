#include <bits/stdc++.h>

template <typename C>
int sz(const C &c) { return static_cast<int>(c.size()); }

using namespace std;

int main()
{
    iostream::sync_with_stdio(false);

    int numOfTest;
    cin >> numOfTest;
    for(int i = 0; i < numOfTest; i++) 
    {
        int a, b;
        cin >> a >> b;
        int result = (a / 3) * (b / 3);

        cout << result << '\n';
    }

}