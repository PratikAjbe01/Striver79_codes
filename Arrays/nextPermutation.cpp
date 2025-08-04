#include <bits/stdc++.h>
using namespace std;
void nextPermutation(vector<int>& arr) {
        int n=arr.size();
        int bi=-1;
        for(int i=n-1;i>=1;i--){
            if(arr[i-1]<arr[i]){
                bi=i-1;
                break;
            }
        }
        if(bi==-1){
            sort(arr.begin(),arr.end());
            return ;
        }
        for(int i=n-1;i>bi;i--){
            if(arr[i]>arr[bi]){
                swap(arr[i],arr[bi]);
                break;
            }
        }
        reverse(arr.begin()+bi+1,arr.end());
    }