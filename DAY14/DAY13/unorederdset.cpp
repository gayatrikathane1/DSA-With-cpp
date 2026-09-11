#include <bits/stdc++.h>
using namespace std;

int main()
{
    unordered_set<int> uset;
    uset.insert(10);
    uset.insert(20);
    uset.insert(30);
    uset.insert(30);
    uset.insert(90);
    uset.insert(10);
    uset.insert(70);
    // for(auto it : uset)
    //  {
    // cout<<it<<" ";
    //}

    auto it = uset.find(10);
    if (it != uset.end())
    {
        cout << "found";
    }
    else
    {
        cout << "not found";
    }

    return 0;
}