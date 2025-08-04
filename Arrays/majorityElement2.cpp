#include <bits/stdc++.h>
using namespace std;
vector<int> findMajority(vector<int>& arr) {
      vector<int>ans;
      int n=arr.size();
      int el1=INT_MIN;
      int el2=INT_MIN;
      int c1=0;
      int c2=0;
    for(int i=0;i<n;i++){
      
        if(arr[i]==el1){
                  c1++;
              }
              else if(arr[i]==el2){
                  c2++;
                  
              }else if(c1==0){
              el1=arr[i];
              c1=1;
          }else if(c2==0){
              el2=arr[i];
              c2=1;
          }else{
                  c1--;
                  c2--;
              }
          
      }
      c1=0;
      c2=0;
     for(int i=0;i<n;i++){
          if(arr[i]==el1)c1++;
             else if(arr[i]==el2)c2++;
     } 
     if(c1>n/3){
         ans.push_back(el1);
     }
     if(c2>n/3&&el1!=el2){
            ans.push_back(el2);
     }
     if(ans.size()==2&&ans[0]>ans[1]){
         swap(ans[0],ans[1]);
     }
      return ans;

    }
