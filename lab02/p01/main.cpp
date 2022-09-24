#include <bits/stdc++.h>

template <typename C>
int sz(const C &c) { return static_cast<int>(c.size()); }

using namespace std;

int solve(int a, int b)
{
    if(a > b) {
        swap(a, b);
    }

    
    int maxLength = 0;
    for (int i = a; i <= b ; i++)
    {
        
        int current = i;
        int numOfSteps = 1;
        
        while (current != 1)
        {
            if(current % 2 != 0) {
                current = 3 * current + 1;
            }
            else {
                current = current / 2;
            }
            numOfSteps++;
        }
        maxLength = max(numOfSteps, maxLength);
        
    }
    return maxLength;
}

int main()
{
    for(int a,b; cin >> a >> b;)
    {
        cout << a << " " << b << " " << solve(a, b) << "\n";
    }
}