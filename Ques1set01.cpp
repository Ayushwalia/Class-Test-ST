
/* Ayush Walia
   2010990147
   Set 01
   Question 1*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Array length: ";
    cin>>n;
    cout<<"Array input: ";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    cout<<"Non-repeated numbers are: ";
    sort(arr,arr+n);
    sort(arr, arr + n, greater<int>());
    for(int i=0;i<n;i++){
        if(arr[i-1]!=arr[i] && arr[i]!=arr[i+1]){
            cout<<arr[i]<<" ";
        }
    }

    return 0;
}