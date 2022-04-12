#include<iostream>
using namespace std;

void mergeFinal(int arr[], int n, int l, int m, int r){
    int i = l;
    int j = m+1;
    int k = l;
    int temp[n];

    while(i<=m && j<=r){
        if(arr[i]<=arr[j]){
            temp[k] = arr[i];
            i++;
            k++;
        }
        else {
            temp[k] = arr[j];
            j++;
            k++;
        }
    }

    while(i<=m){
        temp[k] = arr[i];
        i++;
        k++;
    }

    while(j<=r){
        temp[k] = arr[j];
        j++;
        k++;
    }

    for(int p=l; p<=r; p++){
        arr[p] = temp[p];
    }
}

void mergeSort(int arr[], int n, int l, int r){

   if(l<r)
   {
       int m = (l+r)/2;
       mergeSort(arr, n, l, m);
       mergeSort(arr, n, m+1, r);

       mergeFinal(arr, n, l, m, r);
   }
}

void bubbleSort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void selectionSort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        int min = i;
        for(int j=i+1; j<n; j++){

           if(arr[min]>arr[j])
            min = j;
        }

        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}

void insertionSort(int arr[], int n){
    for(int i=1; i<n; i++){

        int j = i;

        while(j>=1 && arr[j] < arr[j-1]){

            int temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;

            j--;

      }
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
       cin>> arr[i];
    }

//    bubbleSort(arr, n);
//    for(int j=0; j<n; j++)
//    {
//
//        cout<<arr[j]<<" ";
//    }

//    selectionSort(arr, n);
//    for(int j=0; j<n; j++)
//    {
//
//        cout<<arr[j]<<" ";
//    }

//    insertionSort(arr, n);
//    for(int j=0; j<n; j++)
//    {
//
//        cout<<arr[j]<<" ";
//    }


      mergeSort(arr, n, 0, n-1);
      for(int j=0; j<n; j++)
      {
        cout<<arr[j]<<" ";
      }
    return 0;
}
