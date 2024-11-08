#include <bits/stdc++.h>
using namespace std;

bool check(int a, int b, int c)
{
    if (a == 6 && b == 1 && c == 1)
        return 1;
    if (a == 6 && b == 0 && c == 3)
        return 1;
    if (a == 6 && b == 3 && c == 0)
        return 1;
    if (a == 4 && b == 1 && c == 2)
        return 1;
    if (a == 4 && b == 3 && c == 1)
        return 1;
    if (a == 4 && b == 0 && c == 4)
        return 1;
    if (a == 4 && b == 2 && c == 1)
        return 1;
    if (a == 4 && b == 4 && c == 0)
        return 1;
    if (a == 4 && b == 1 && c == 3)
        return 1;
    if (a == 3 && b == 0 && c == 6)
        return 1;
    if (a == 3 && b == 6 && c == 0)
        return 1;
    if (a == 3 && b == 3 && c == 3)
        return 1;
    if (a == 3 && b == 1 && c == 4)
        return 1;
    if (a == 3 && b == 4 && c == 1)
        return 1;
    if (a == 2 && b == 2 && c == 2)
        return 1;
    if (a == 2 && b == 4 && c == 1)
        return 1;
    if (a == 2 && b == 1 && c == 4)
        return 1;
    if (a == 1 && b == 2 && c == 4)
        return 1;
    if (a == 1 && b == 1 && c == 6)
        return 1;
    if (a == 1 && b == 4 && c == 3)
        return 1;
    if (a == 1 && b == 4 && c == 2)
        return 1;
    if (a == 1 && b == 6 && c == 1)
        return 1;
    if (a == 1 && b == 3 && c == 4)
        return 1;
    if (a == 0 && b == 4 && c == 4)
        return 1;
    if (a == 0 && b == 6 && c == 3)
        return 1;
    if (a == 0 && b == 3 && c == 6)
        return 1;
    return 0;
}

int main()
{
    int i = 0;
    int t;
    cin >> t;
    while (t--)
    {
        ++i;
        int x, y, z;
        cin >> x >> y >> z;

        if (check(x, y, z))
            cout << "Case " << i << ": " << "perfectus" << endl;
        else
            cout << "Case " << i << ": " << "invalidum" << endl;
    }
    return 0;
}