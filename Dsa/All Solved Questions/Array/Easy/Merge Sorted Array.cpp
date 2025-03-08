#include<iostream>
#include <bits/stdc++.h>
using namespace std;
//                    1). Brute force (sorting function)  T.C -O(m+nlog(m+n))

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
         for(int j= 0 ,i=m; j<n; i++){   // the element of nums 2 are placed after m elements
              nums1[i] = nums2[j];
              j++;
         }
         sort(nums1.begin(),nums1.end());
    }
};

//                 2). using three pointers   T.c - O(m+n)
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m-1;  // placing i and j pointer to the end position of valid length of thier array
        int j= n-1;
        int k = m+n-1;  // for placing k pointers in end of nums1 array
        while(i>=0 && j>=0){   // for worst case runs for O(m+n) times // the loop runs till when the both of the index ended
        if(nums1[i] > nums2[j]){
            nums1[k] = nums1[i];
            i--;
        }else{
            nums1[k] = nums2[j];
            j--;
        }
        k--;


        }
        // if there were no elements in nums1 array then all element must come from 2nd array
        while(j >= 0){   // it runs for O(n) times if pointer of nums 2 is positive means it have elements left
            nums1[k] = nums2[j];
            j--;
            k--;
        }
        

    }
};