#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<string, int> m;
    m["circ"] = 33;
    m["ddc"] = 39;
    cout << "circ = " << m["circ"] << '\n';
    for (const pair<string, int> &i : m) // const auto &i : m
        cout << "key: " << i.first << ", val: " << i.second << '\n';
    if (m.find("non-exist key") != m.end())
        cout << "The key is exist.\n";
    else
        cout << "The key is not exist.\n";
    cout << "If you access by a non-exist key, then you get " << m["non-exist key"] << '\n';
    if (m.find("non-exist key") != m.end())
        cout << "The key is now exist.\n";
    else
        cout << "The key is still not exist.\n";
    m["qwert"] = 87;
    return 0;
}