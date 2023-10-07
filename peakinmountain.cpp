#include<vector>
using namespace std;

class Solution {
public:
  
    int find_pivot(vector<int> v) {
	int start = 0, end = v.size() - 1;
	int mid=(start + end) / 2;
	while (start < end)
	{
		if (v[mid] < v[mid+1])
     			start=mid+1;
    	else if (v[mid]<v[mid-1])
      			end = mid-1;
        else if (v[mid-1]<v[mid] && v[mid]>v[mid+1])
                return mid;
    
		mid = (start + end) / 2;
	}
	return start;
    }
    int peakIndexInMountainArray(vector<int>& arr) {
        return find_pivot(arr);
    }
};