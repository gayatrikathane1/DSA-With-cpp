#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<int, string> mpp = {{105, "gaaytrii"}, {101, "saniya"}};
    mpp[104] = "aryaa";
    mpp.emplace(102, "pranjali");
    mpp.insert({102, "pranjali"});
    // for (auto it : mpp)
    //{
    // cout<<it.first<<" "<<it.second;
    // }
    mpp[102] = "Kp";
    for (auto it : mpp)
    {
        cout << it.first << " " << it.second << endl;
    }

    cout << mpp [105];
    return 0;
}
