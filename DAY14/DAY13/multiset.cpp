#include <bits/stdc++.h>
using namespace std;
int main()
{
    multiset<int> ms;

    ms.insert(90);
    ms.insert(90);
    ms.insert(90);
    ms.insert(90);
    ms.insert(90);
    ms.insert(90);
    ms.insert(90);
    ms.insert(90);
    ms.insert(90);
    ms.insert(90);
    ms.insert(90);
    ms.insert(90);
    ms.insert(90);
    ms.insert(90);
    ms.insert(90);
    ms.insert(90);
    ms.insert(90);
    ms.insert(90);
    ms.insert(90);
    ms.insert(90);

    ms.erase(2);

    // for (auto it : ms)
    //{
    //    cout << it << " ";
    //}
    // cout<<ms.cout(10);
    // use for delete of specific element
    auto it = ms.find(90);
    ms.erase(it);
    cout << ms.count(90);

    return 0;
}