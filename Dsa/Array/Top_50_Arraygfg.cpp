//                 Second largest element
//         i). Sorting 
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// int second_largest(vector<int> arr){
//        int n = arr.size();
//        for(int i = n-2; i >= 0; i--){
//         if(arr[i] != arr[n -1]){
//             return arr[i];
//         }
//        }
//        return -1;  // if no second element is found
// }
// int main(){
//     vector<int> arr = { 12, 35, 1, 10, 34, 1 };
//     int n = 50;
//     cout << second_largest(arr);
// }   //  T.C - O(n)