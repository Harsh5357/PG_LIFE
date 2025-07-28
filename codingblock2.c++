#include<stdio.h>
using namespace std;
int Binarysearch(int arr[], int low, int high, int target){
int sirbinarysearch(int arr[],int n,int target{
        int t=100;
        int s= 0;
        int e= n-1;
        while(s<=e){
            int mid =(s+e)/2;
            if(arr[mid]==target){
                return mid;
            } else if (arr[mid]> target){
                e= mid-1;
            }else{
                s = mid+1;
            }
        }
        return -1;
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    cout<<sirbinarysearch(arr,9,7)<<endl;
    return;
}