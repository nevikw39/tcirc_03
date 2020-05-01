#include <iostream>
#include <set>
using namespace std;
int main()
{
    set<int> s;   // <null>
    s.insert(87); // 87
    s.insert(69); // 69 87
    cout << "s contains " << s.size() << " elements.\n";
    s.insert(87); // 69 87
    cout << "After inserting a duplicate element,\n"
         << "s still contains " << s.size() << " elements.\n";
    s.insert({9487, 64, 426, 817}); // 64 69 87 426 817 9487
    s.erase(69);                    // 64 87 426 817 9487
    for (const int &i : s)
        cout << '\t' << i << '\n';
    if (s.find(69) != s.end()) // equivalent to: s.count(69)
        cout << "s contains 69.\n";
    else
        cout << "s doesn't contain 69.\n";
    return 0;
}