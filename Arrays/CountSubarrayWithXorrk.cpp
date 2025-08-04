#include <bits/stdc++.h>
using namespace std;
 long subarrayXor(vector<int> &arr, int k) {
         int n=arr.size();
        map<int,int>mp;
     mp[0]++;
        int xorr=0;
        long long cnt=0;
        for(int i=0;i<n;i++){
                xorr^=arr[i];
            if(mp.find(xorr^k)!=mp.end()){
                cnt+=mp[xorr^k];
            }
           
    
         mp[xorr]++;
        }

        return cnt;
    }
    int main(){
        vector<int>arr={4,2,2,6,4};
        int k=6;
       int a= subarrayXor(arr,k);
        cout<<"the subarray xorr final ans "<<a<<endl;
    }