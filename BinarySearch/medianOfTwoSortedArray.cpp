#include <bits/stdc++.h>
using namespace std;
 double medianOf2(vector<int>& a, vector<int>& b) {
     int n1=a.size();
     int n2=b.size();
     if(n1>n2)return medianOf2(b,a);
     int low=0;
     int high=n1;
     while(low<=high){
         int mid1=(low+high)>>1;
         int mid2=((n1+n2+1)/2-mid1);
         int l1=(mid1==0)?INT_MIN:a[mid1-1];
         int r1=(mid1==n1)?INT_MAX:a[mid1];
         int l2=(mid2==0)?INT_MIN:b[mid2-1];
         int r2=(mid2==n2)?INT_MIN:b[mid2];
         if(l1<=r2&&l2<=r1){
              if ((n1 + n2) % 2 == 0)
                return (max(l1, l2) + min(r1, r2)) / 2.0;
                else 
                return max(l1, l2);
         }
         else if(l1<=r2){
             low=mid1+1;
         }else{
             high=mid1-1;
         }
     }
       return 0; 
    }
int main(){
     vector<int>a={1,2,3,4,8,9};
     vector<int>b={5,28,9};
     double ans=medianOf2(a,b);
     cout<<ans;
    return 0;
}