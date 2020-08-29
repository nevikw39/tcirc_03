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
        cout << "The key exists.\n";
    else
        cout << "The key does not exist.\n";
    cout << "If you access by a non-exist key, then you get " << m["non-exist key"] << '\n';
    if (m.find("non-exist key") != m.end())
        cout << "The key now exists.\n";
    else
        cout << "The key still not exists.\n";
    m["qwert"] = 87;
    return 0;
}
