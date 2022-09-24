#include <bits/stdc++.h>

template <typename C>
int sz(const C &c) { return static_cast<int>(c.size()); }

using namespace std;

int main()
{
    iostream::sync_with_stdio(false);

    int numOfTest;
    cin >> numOfTest;
    for (int i = 1; i <= numOfTest; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int max, min;

        if(a >= b && a >= c)
            max = a;

        if(b >= a && b >= c)
            max = b;
    
        if(c >= a && c >= b)
            max = c;

        

        if(a <= b && a <= c)
            min = a;

        if(b <= a && b <= c)
            min = b;
    
        if(c <= a && c <= b)
            min = c;
        
        int res = (a + b + c) - max - min;

        cout << "Case " << i << ": " << res << endl;
    }
}