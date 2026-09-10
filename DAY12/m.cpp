#include <bits/stdc++.h>
using namespace std;
int main()
{
    deque<int> dq;
    dq.push_back(10);
    dq.emplace_back(20);
    dq.push_back(30);
    dq.push_front(40);
    dq.pop_front();
    dq.pop_back();
    dq.pop_back();
    dq.emplace_back(40);
    dq.emplace_back(40);

    dq.erase(remove(dq.begin(), dq.end(), 100), dq.end());

    for (auto it = dq.begin(); it != dq.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    for (auto it : dq)
    {
        cout << it << " ";
    }
    for (auto it : dq)
    {
        cout << it << " ";
    }

    return 0;
}
