
/* Ayush Walia
   2010990147
   Set 01
   Question 2*/
    
#include <bits/stdc++.h>

using namespace std;


void findRepeat(int* a, int n){
    unordered_map<int,int> hash;
    
    for(int i=0;i<n;i++){
        hash[a[i]]++;
    }
    
    cout<<"Repeated number    Frequency\n";
   
    for(auto it=hash.begin();it!=hash.end();it++)
    if(it->second>1)
    cout<<it->first<<"                  "<<it->second<<endl;
    
}

int main()
{
    int n;
    cout<<" Array length: ";
    cin>>n;
    int* a=(int*)(malloc(sizeof(int)*n));
    
    cout<<"Array input: ";
    
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    findRepeat(a,n);

    return 0;
}