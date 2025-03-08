//      1). Skip Alternates elements of an array
#include <iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

vector<int> alternatenumbers(vector<int> arr ){      // the function returns dynamic array of integers , function takes vector of integers as input
    vector <int> res;
    for(int i = 0; i< arr.size(); i+= 2){
           res.push_back(arr[i]);
       }
    return res;
}
int main(){
    vector<int> arr = {10,20,30,40,50};
    vector<int> res = alternatenumbers(arr);     // calls the alternatenumbers function with arr as input and  stored return vector in res 

    for(int x: res)
         cout << x << " ";
}