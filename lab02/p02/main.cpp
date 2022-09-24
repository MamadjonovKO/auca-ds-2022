#include <bits/stdc++.h>

template <typename C>
int sz(const C &c) { return static_cast<int>(c.size()); }

using namespace std;

int etruscan(int a)
{
    int count = 0;
    for(int i = 1; a > 1; i++) {
        if(a >= i) {
            count++;
        }
        a = a - i;
    }
    return count;
}

int main()
{
    int numOfTest;
    std::cin >> numOfTest;
    for(int i = 0; i < numOfTest; i++)
    {
        int a;
        std::cin >> a;
        std::cout << etruscan(a) << "\n";
    }
    
    

    return 0;
}
