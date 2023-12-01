#include<stdio.h>
void merge_sort(int arr[],int low, int high){
    if(low == high)
        return;
    int mid = low+high / 2;
    merge_sort(arr,low,mid);
    merge_sort(arr,mid+1,high);
    merge(arr,low,mid,high);
}
void merge(int arr[], int low, int mid, int high){
    int temp[100000];
    int l = low;
    int r = mid+1;
     
}
int main(){
    int n = 5;
    int arr[5] = {5,1,12,10,4};
    merge_sort(arr,0,n-1);
    for (int i = 0; i < n ; ++i) {
        printf("%d ", arr[i]);
    }
}