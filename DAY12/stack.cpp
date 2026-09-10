#include <bits/stdc++.h>
using namespace std;
int main()
{

    stack<int> temp st;
    st.push(10);
    st.push(20);
    st.push(300);
    st.push(400);
    st.push(200);

    while (!temp.empty())
    {
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << "Original stack" : "<< st.size()";
    return 0;
}
