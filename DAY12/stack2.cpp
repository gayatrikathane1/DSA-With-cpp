#include <bits/stdc++.h>
using namespace std;
int main()
{

    stack<int> st1, st2, st3;
    st1.push(10);
    st2.push(20);
    st1.push(10);
    st2.push(20);
    st3.push(30);
    st3.push(30);

    cout << "stack value before swap:" << st1.top() << " " << st2.top() << " " << st3.top() << endl;
    st1.swap(st3);
    cout << "stack value after swap:" << st1.top() << " " << st2.top() << " " << st3.top() << endl;

    return 0;
}