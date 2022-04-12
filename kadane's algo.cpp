#include<bits/stdc++.h>
using namespace std;

int maxSum(int arr[], int n){

  int temp[2*n];
  for(int i=0; i<n; i++){
    temp[i] = temp[n+i] = arr[i];
  }

  int greaterSum = 0;
  for(int i=0; i<n; i++){

    int sum = 0;
    for(int j=i; j<n+i; j++){
        sum+=temp[j];
        if(sum > greaterSum){
            greaterSum = sum;
        }
    }
  }
  return greaterSum;

}


int main(){
   int arr[] = {2, 1, -5, 4, -3, 1, -3, 4, -1};
   int n = sizeof(arr)/sizeof(arr[0]);
   int res = maxSum(arr, n);
   cout<< res;


   return 0;
}
