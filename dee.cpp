#include<bits/stdc++.h>
using namespace std;

int minIndex(int arr[], int n){
    unordered_set<int> s;
    int minIndex = n;

    for(int i=n-1; i>=0; i--){
        if(s.find(arr[i]) != s.end())
            minIndex = i;

        else
            s.insert(arr[i]);
    }

    return minIndex;
}

int main(){
  int arr[] = {7,3,8,5,6};
  int n = sizeof(arr)/sizeof(arr[0]);

  int minInd = minIndex(arr, n);
  if(minInd == n)
    cout<<"No duplicate element"<<endl;
  else
    cout<<minInd;
  return 0;
}

