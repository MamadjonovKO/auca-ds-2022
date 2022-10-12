#include <bits/stdc++.h>

template <typename C>
int sz(const C &c) { return static_cast<int>(c.size()); }

using namespace std;


int main()
{
    int numOfTest;
    std::cin >> numOfTest;
    for(int i = 0; i < numOfTest; i++)
    {
        long a;
        std::cin >> a;
        std::cout << ((long)sqrt(8 * a + 1) - 1) / 2 << "\n";
    }
    
    

    return 0;
}
