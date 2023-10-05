#include<vector>
using namespace std;

int firstocc(vector<int>& arr, int n, int k){
    int start = 0, end = n-1;
    int mid = start+(end-start)/2;
    int ans = -1;
    while (start<=end){
        if (k==arr[mid]){
            ans = mid;
            end = mid-1;
            }
        else if (k>arr[mid])
        {
            start = mid+1;
        }
        else {
            end = mid-1;
        }
        mid = start+(end-start)/2;
    }
    return ans;
}

int lastocc(vector<int>& arr, int n, int k){
    int start = 0, end = n-1;
    int mid = start + (end-start)/2;
    int ans = -1;
    while (start<=end){
        if (k==arr[mid]){
            ans = mid;
            start = mid+1;
        }
        else if (k>arr[mid])
        {
            start = mid+1;
        }
        else {
            end = mid-1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k){
    pair<int,int>p;
    p.first = firstocc(arr, n, k);
    p.second = lastocc(arr, n, k);
    return p;
}