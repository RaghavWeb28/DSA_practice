#include <iostream>
#include<vector>
using namespace std;

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    vector<int> merged;
    int i = 0, j = 0;

    while (i < nums1.size() && j < nums2.size()) {
        if (nums1[i] < nums2[j])
            merged.push_back(nums1[i++]);
        else
            merged.push_back(nums2[j++]);
    }

    while (i < nums1.size()) merged.push_back(nums1[i++]);
    while (j < nums2.size()) merged.push_back(nums2[j++]);

    int n = merged.size();

        
    if (n % 2 == 1)
        return merged[n / 2];
    else
        return (merged[n/2 - 1] + merged[n/2]) / 2.0;
}


int main(){
    int n;
    cin>>n;
    vector<int> a1(n);
    for(int i=0; i<n; i++){
        cin>>a1[i];
    }
    int m;
    cin>>m;
    vector<int> a2(m);
    for(int i=0; i<m; i++){
        cin>>a2[i];
    }
    cout<<"median is "<<findMedianSortedArrays(a1,a2);

    return 0;
}