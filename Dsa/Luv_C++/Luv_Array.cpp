//                     Video no. 9   ||  Arrays and size of limits  of global array
#include<bits/stdc++.h>
using namespace std;

// int main(){
//     int a[20];   // a is an array name which can stores 20 elements
//     a[21] = 10;    // segementation fault you want to access that memory which never allocated
//     cout << a[21];   // Undefined number avoid this 
// }

//                  1). Input an array and sum all its element on every iteration   
// int main(){
//     int n;
//     cin >> n;   
//     int a[n];  // ❌ Variable-Length Array -Not allowed in C++ ,  // Initialise an array of n size
//     vector<int> a(n);  //✅ Correct dynamic array allocation
//     for(int i =0; i <n; ++i){
//         cin >> a[i];  // Taking input for every iteration
//     }
//     int sum = 0;
//     for(int i = 0; i< n; ++i){
//         sum += a[i];
//     }
//     cout << sum;
//     return 0;  // Very important for program execution
// }

// You can declare array of any data type

// int  main(){
//     int n;
//     cin >> n;
//     int a[4][3];  // It says make collection of a[4] for three size , copies,times
// }

//                 2). input and print two dimensional array
// int main(){
//     int n,m;
//     cin >> n >> m;
//     int arr[n][m];
//     for(int i= 0; i<n; i++){   // we iterating through rows
//        for(int j =0; j<m; j++){    // we iterates through column for each rows
//            cin >> arr[i][j];
//        }
//     }
//     for(int i= 0; i<n; i++){   // we iterating through rows
//         for(int j =0; j<m; j++){    // we iterates through column for each rows
//             cout << arr[i][j];
//         }
//         cout << endl;
//      }
//      return 0;
// }

//                3). Size limits in array (in competitive coding)
// int main(){
//     int a[125];    // if you declare array locally their max size is of order of 10^5
// }
// int main(){
//      int n = 1e7;  // you cannot declare array locally more than size of 10^5 , segementation fault
//      int a[n];
//      a[n-1] = 7;    // assigning the last element 7 into array
//      cout << a[n-1];   // printing tthe last  element of array
// }

// const int n = 1e7;  // when you declare variable globally it must be in const, same for everywhere , run within the order of 10^7
// int a[n];
// int main(){
//     a[n-1] = 7;    // assigning the last element 7 into array
//     cout << a[n-1];   // printing tthe last  element of array
// }

//                      Video no. 11  || Functions , C++ Refrenshes    

// void PrintHello(){
//     cout << "Hello World";
// }
// int sum(int a, int b){
//     int result = a + b;
// }
// int main(){
//   cout << sum( 4,5);
// }
//                         digit sum
//  Ask yourself what type of function , what it takes (parameter) ,
// int digitsum(int n){
//     int digit_sum = 0;
//     while(n){     // we have to iterate till n
//         digit_sum += n % 10;
//         n /= 10; 
//     }
//     return digit_sum;
// }
// int main(){
//     int a = 299;
//     int b = 900;
//     cout << digitsum(a) + digitsum(b);   // calling function for both input a and b
// }
// most compilers assumes that main function returns 0

// a = increment(a)    //a accepts an return from increment function

//                    2). Pass by Value and Pass by Reference
// void increment(int &n, int n1){     // Pass by refrence actually changing value in any function
//     n++;
//     n1++;
// }
// int main(){
//     int a = 3;
//     int b = 5;
//     increment(a , b);
//     cout << a << b;
// }

//                 3). Function  for swapping two values
// #include<iostream>
// using namespace std;
// void swap(int &a, int &b){
//     int temp = a;
//     a = b;  // a becomes b
//     b = temp;

// }
// int main(){
//     int a = 3;
//     int b = 4;
//     swap(a,b);   // does not return anything so store garbage value
//     cout << a << "" << b << endl;
// }

// int main(){
//     int a = 65;
//     int b = 70;
//     cout << max(a,b);
//    // cout << swap(a,b);   // swap(a, b) returns void cout expects to displaying integer values.
//    swap(a,b);
//    cout << a << "" << b;
//    cout <<  min(a,b);    // min expect return integer so t displays

// }
//                          Checking for pass by value and reference for other data type
// void func( string &s){
//     s = "";
// }
// int main(){
//     string s = "abcd";
//     func(s);
//     cout << s;
// }

// void func(int a[][10]){   // always declare size of 2nd array we pass ito function
//      a[0][0] = 5;          // for passing array size into function we avoid passing array in comprtitive programming
// }
// int main(){
    
//     int a[5][10];    // have to also declare size of 2nd array
//     a[0][0] = 7;
//     cout << a[0][0];
//     func(a);
//     cout << a[0][0];
// }
// If you want to declare an array void and main both declare globally.
const int N = 1e3 + 10;   // 1010  // always declare in const
int a[N][N];   // Total memory used = 1010 * 1010 * 4 = 4.08 MB .... Stack size - 8 MB
void func(){
    a[0][0] = 5;    // In c++ array in curly braces
}
int main(){
    
    
    a[0][0] = 7;
    cout << a[0][0];
    func();
    cout << a[0][0];
}
