#include <algorithm>
#include <iostream>
#include <set>
using namespace std;
int main()
{
    set<int> a{87, 69, 9487, 64, 92}, b{64, 87, 8964}, u, i, da, db, s;
    set_union(a.begin(), a.end(), b.begin(), b.end(), inserter(u, u.begin()));
    set_intersection(a.begin(), a.end(), b.begin(), b.end(), inserter(i, i.begin()));
    set_difference(a.begin(), a.end(), b.begin(), b.end(), inserter(da, da.begin()));
    set_difference(b.begin(), b.end(), a.begin(), a.end(), inserter(db, db.begin()));
    set_symmetric_difference(a.begin(), a.end(), b.begin(), b.end(), inserter(s, s.begin()));
    cout << "a union b:\n";
    for (const int &i : u)
        cout << '\t' << i << '\n';
    cout << "a intersection b:\n";
    for (const int &i : i)
        cout << '\t' << i << '\n';
    cout << "a difference b:\n";
    for (const int &i : da)
        cout << '\t' << i << '\n';
    cout << "b difference a:\n";
    for (const int &i : db)
        cout << '\t' << i << '\n';
    cout << "a symmetric difference b:\n";
    for (const int &i : s)
        cout << '\t' << i << '\n';
    return 0;
}