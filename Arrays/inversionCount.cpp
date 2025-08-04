#include<bits/stdc++.h>
using namespace std;
long long merge(vector<int>& arr, int left,int mid,int right){
        long long inversion=0;
        int n1=mid-left+1;
        int n2=right-mid; 
        int a[n1];
        int b[n2];
        for(int i=0;i<n1;i++){
            a[i]=arr[left+i];
        }
        for(int i=0;i<n2;i++){
            b[i]=arr[mid+i+1];
        }
        int i=0;
        int j=0;
        int k=left;
        while(i<n1&&j<n2){
            if(a[i]<=b[j]){
                arr[k]=a[i];
                i++;
                k++;
            }else{
                arr[k]=b[j];
                inversion+=n1-i;
                k++;
                j++;
            }
        }
        while(i<n1){
           arr[k++] =a[i++];
        }
        while(j<n2){
            arr[k++]=b[j++];
        }
     return inversion;
    }
    int mergeSort(vector<int>&arr,int left,int right){
        long long inversion=0;
        if(left<right){
    int mid = left + (right - left) / 2;
    inversion+=mergeSort(arr, left, mid);
    inversion+=mergeSort(arr, mid + 1, right);
    inversion+=merge(arr, left, mid, right);
        }  
        return inversion;
    }
    int inversionCount(vector<int> &arr) {
      int n=arr.size();
      return mergeSort(arr,0,n-1);
    }
