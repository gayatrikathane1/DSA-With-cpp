#include <bits/stdc++.h>
using namespace std;

int main()
{
    unordered_map<int> umap;

    umap.insert(10);
    umap.insert(20);
    umap.insert(30);
    umap.insert(30);
    umap.insert(90);
    umap.insert(10);
    umap.insert(20);
    umap.insert(30);
    umap.insert(30);
    umap.insert(90);
    
    // for(auto it : umap)
    //  {
    // cout<<it<<" ";
    //}

  //  auto it = umap.find(10);
    //if (it != umap.end())
    //{
      //  cout << "found";
   // }
   // else
    //{
      //  cout << "not found";
    //}
    umap.erase(101)

    return 0;
}