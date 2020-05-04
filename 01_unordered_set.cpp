#include <iostream>
#include <unordered_set>
using namespace std;
int main()
{
    unordered_set<int> s{87, 69, 817, 689, 8964, 9487, 426};
    for (const int &i : s)
        cout << i << '\n';
    return 0;
}