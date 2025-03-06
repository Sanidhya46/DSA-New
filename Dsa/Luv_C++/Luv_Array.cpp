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
// const int N = 1e3 + 10;   // 1010  // always declare in const
// int a[N][N];   // Total memory used = 1010 * 1010 * 4 = 4.08 MB .... Stack size - 8 MB
// void func(){
//     a[0][0] = 5;    // In c++ array in curly braces
// }
// int main(){   
//     a[0][0] = 7;
//     cout << a[0][0];
//     func();
//     cout << a[0][0];
// }
//                      Video no. 12   ||
// 1). in memory the address is store for every bytes
// 2). int x; --> int have four bytes so x only stores the address of 1st bytes
// 3). pointer is an data type which  stores memory address of variables
// 4). read this as (*p_x = value at p_x) 

// int main(){
//     int n = 4;
//     int *p_n;   // p_n is an pointer which stores the address of an integer variable
//     p_n = &n;   // p_n stores the address of n. &n = 1; address of first byte of int data type which is 1 ,  
//     cout << *p_n;   // value at p_n or value at adreess of n.
//     *p_n = 5;  //change the value at p_n to 5
//     p_n = p_n + 1;   //p_n adds the size of int bytes
//     cout << p_n;

//     int a[4] =  {10,20,30,40};   // a is also an pointer
//     cout << a;  // a stores address of 1st integer 
//     cout << *a;  // *a means value at address of 0th index
//     // a and &a[0] is same
//     cout << *(a + 1);  // value at a+1 means value at a[1] which is 20

//     int *p;  // *p is an pointer which stores the address of integer
//     int **p;   // **p is an pointer which stores the addres of an integer pointer(*pp)
//     int x = 4;
//     int *p = &x;   // *p is value at p, or value at address of x which is 4
//     cout << *p;
//     int **pp = &p;   // value at integer pointer (*pp) stores the value at pp , pp is address of p which is adress of x) 
//     cout << **pp;    //value at p print 4;

//     int x = 4;
//     int *p_x = &x;
//     // (int **p_p_x = &p_x)  means (&p_x == p_p_x)
//     // double pointer(p_p_x) stores the address of an pointer

//     // **p_p_x = 7;  // now we can also change value by using double pointer

//     int a[10];
//     a[0] = 1;
//     a[1] =2;
//     cout << "pointer a is = " << a << "  value at  pointer a is = " <<*a;
//     cout << "pointer a = " << a << " and " << " &a[0] is " << &a[0];

    
// }
//                2). passing pointer by pass by reference in competitive programming

// void increment(int *x){  // we except address of that value means address of a.
//     (*x)++;  // we have to increment the value at x 
// }
// int main(){
//     int a = 4;
//     cout << a << " ";
//     increment(&a);   // pointer wants address of an value so we have to pass with & ampersand
//     cout << a;
// }

// void increment(int *x){
//     (*x)++;
// }
// int main(){
//     int a = 4;
//     cout << a;
//     increment(&a);
//     cout << a;
// }

//                      Video no. 14   ||  Verdicts an error on coding sites
// 1). Compilation error - syntax error
// 2). Memory limit exceeded - when memory limit exceed
// 3). Run time error - illegal access of memory - segementation fault in gcc // for ex. when you try to access that index which is not in array
//                    - sometime comes in pointer like you try to access that pointer which is not available
//                    - undefined behaviour for ex. 4/0
//         * What to do - i). check are you want to access that index of array which is outer than defined limit
//                       ii). check for undefined behaviour like you are dividing the result which becames 0 
// 4). Time limit exceeded - when you exceed execution time limit for your code
//                    - coding sites time complexity depends at run time not compilation time... so no effect of all header files
//         * When     - i). when you try to do many number of operations in limited time.

//  *5). Errors in Recursion -
//                      i). Time limit exceeded - stack is not full but limit exceeded
//                     ii). Run time error - stack is full(due to over calling of function) but time limit not exceeded
//                                         - also when recursion runs infinitely

//                     Video no. 15  || Time Complexity and space complexity

// 1). int x , int sum = 0; these takes constant time , each takes one iterations

// int main(){
//       int x;
//       int sum = 0;  // takes one iteration O(1)
//       int n;
//       cin >> n;
//       for (int i =0; i<n; i++){    //O(n)  because it iterates n times for each of operations
//         int y;
//         y = 5;
//         y++;
//       }
// }
// number of iterations - 3
// n < 100000    n value is very large so other things are neglecting
// O(5) + O(3*n)  // 5 constant times iteration and 3 times in loop 

// *2). No. of iteration in one second in coding platformm is - 10^7 - 10^8 seconds
//  note*- if(10^7 - 1second, 10^8 - 10 second, 10^9 - 100 second, 10^10 iteration takes - 1000 sec - 15 min very large...)
//      *- in power time complexity increases very fast


// N < 100000  // n size array which limits is 10^5
// a[i] < 100000  // range of an element of an array is 10^5

// int main(){
//     int n;
//     cin >> n;
//     int a[] = {};
//     for(int i =0; i<n; i++){
//         cin >> a[i];
//     }
// }

// O(1) + O(1) + O(n) -> O(n)
// if we are adding more no. of loops O(n) + O(n) + O(n) + O(n)... it still O(n)
// O(n) is 10^5 < 10^7 -- so it runs 
// for O(n^2) is 10^10(15 min)> 10^7 -- so it not runs
// Note* - time limit of coding platforms never be exceeded
// Note* - we can get no. of iterations by placing counter

// N < 10^5
// int main(){
//     int n;  //O(1)
//     cin >> n;   //O(1)
//     int count = 0;
//     while(n>0){  // **At how many steps we can divide n/2 for making n 0
//         n=n/2;  //O(n/2)
//         count++;
//     }
//     cout << count;
//     return 0;
// }
// 10 - 5 - 2 - 1 - 0    // 3 steps
// 2^a = n    // for means 2^a times is equal to n
// log(2(2a)) = log(2(n))
// a = log(2(N)) = log N
// if loop runs for (10^5)... if it is log n then there time complexity becomes - 5 log(2(10))

// T.C - O(1)+ O(1)+ O(log(n))  ** log n is very good complexity

// n = 10^5
// int main(){
//     int n;
//     cin >> n;
//     for(int i = 0; i<n; i++){    //loop runs for 1 to n which sum is ... n(n+1/2)
//         for(int j= 0; j<i; j++){

//         }
//     }
// }
// O(n^2/2) + O(n/2) .. we can ignore n/2 because n is 10^5 which is very large 
// O(n^2)

/* *3).In coding platform, Given T test cases  and an array of size N. pring sum of array in eacch test case
constraints:
1 <= T <= 1000  // limit of test cases is 1000
1 <= N <= 1000     // range of input lies is between 1 to 1000
1 <= a[i] <= 1000  // every single element of arrays is also lies between range of 1 to 1000
***Sum of N over all Test case is 10^7***  if t and n is both 10^5 then code not runs (10^10) > 10^7 🚫
***Sum of N over all Test case is 10^7***  if you put counter then it runs for loop conditions  
*/

int main(){
    int t;
    cin >> t;
    while(t--){     // T.C - O(T*N) sum of all inner loop iterations
        int n;
        cin >> n;
        int sum = 0;
     //* int ct = 0;  // sum of all inner loop iterations equal to counter value
        for (int i =0; i<n; i++){  // loop run for n times .. O(n)
            int x;
            cin >> x;
            sum += x;
      //      ct++;    //* their time complexity is less than  10^7 is already mentioned
        }
        cout << sum << endl;
    }
}

// T.C - O(T*N) + O(N) --- their ranges are similar we can write they run for O(N^2)
//  O(N^2) - means their time complexity is (ranges)^2 is (10^3)^2 --- 10^6 < 10^7 ✅  ... so it runs
