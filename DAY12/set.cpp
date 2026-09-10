#include <bits/stdc++.h>
using namespace std;
int main()
{
    //for reverse use greater& for set use set <int>s;
    set<int, greater<int>> s;
    s.insert(34);
    s.insert(20);
    s.insert(9);
    s.insert(4);
    s.insert(50);
    s.insert(41);
    s.insert(41);
    s.insert(41);
    s.insert(41);
    s.insert(41);

     for (auto it :s)
     {
     cout<<it <<" ";
    }
    cout<<endl;
    //  cout << s.count(42);
    // auto it = s.find(4);

    // if (it != s.end())
    //{
    //   cout << "found";
    //}
    // else{

    // cout << "not found";

    //}
    s.erase(s.begin());
    s.erase(9);
    for (auto it : s)
    {
        cout << it << " ";
    }

    return 0;
}