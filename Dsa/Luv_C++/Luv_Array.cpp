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

// int main(){
//     int t;
//     cin >> t;
//     while(t--){     // T.C - O(T*N) sum of all inner loop iterations
//         int n;
//         cin >> n;
//         int sum = 0;
//      //* int ct = 0;  // sum of all inner loop iterations equal to counter value
//         for (int i =0; i<n; i++){  // loop run for n times .. O(n)
//             int x;
//             cin >> x;
//             sum += x;
//       //      ct++;    //* their time complexity is less than  10^7 is already mentioned
//         }
//         cout << sum << endl;
//     }
// }

// T.C - O(T*N) + O(N) --- their ranges are similar we can write they run for O(N^2)
//  O(N^2) - means their time complexity is (ranges)^2 is (10^3)^2 --- 10^6 < 10^7 ✅  ... so it runs


//                   Video no. 16  ||  Space complexity
//   1). space complexity refers to how much additional memory(apart from input storage) is requires as the input size n grows
//   2). if input size grows and space is constant then it counts in O(1) - constant space
//   1). space complexity is how many space your code takes


//                  Video no. 17  || Modulo arithmetic (why print 10^9)
// 1).(a+b)%m = ((a%m) + (b%m) %m
// 2).(a-b)%m = ((a%m) - (b%m)+m)% m //  we adding m for making it positive 
// 3).(a*b)%m = ((a%m) *(b%m)%m 
// 4).(a/b)%m = ((a%m)*(b^-1)%m)%m  // b^-1 is multiplicative inverse it get by using binary conversion

/*1). GIven a number N.Print its factorial. constrains
       1 <= N <= 100    we can take range to 100 but we can not run loop for 100 times 
       print answer in modulo m = 47    // so we are storing answer in form of modulo
       A%m
*/
// int main(){
//     int n;
//     cin >> n;
//     long long fact= 1;
//     int m = 47;
//     for(int i =0; i <=n; i++){   // if we run loop for 100 times then it becames overflow
//         fact = (fact * i)%m;    // we are taking modulo m in each result one by one by formula on
//     }
//     cout << fact;
// }
//    2). Significance of using (m = 10^9 + 7)
//        1). 10^9 + 7 - very close to integer 
//        2). can take m as int, no take extra spaces
//        2). m is prime so we can find multiplicative inverse of any number between 10^9 + 7

//                  Video no. 18 ||  Pre computation technique and hashing
/* Given T test cases and in each test case a umber N. prinnt its factorial for each test case % m
where m= 10^9 + 7
constraints 
1<= T <= 10^5
1<= N <= 10^5
*/

// int main(){
    
//     int n; 
//     cin >> n;
//     long long fact = 1;  // creates a constant space in memory of 8mb to store large integer values
//     int m = 1e9 + 7;  // taking given modulo integer as int

//     for(int i = 1; i<= n; i++){   //* for factorial loop never start from 0 
//         fact = (fact*i)%m;
//     }
//     cout << fact << endl;
// }  //*T.C - O(T*N)-- 10^10 iterations --- code does not runs in one second 
//  what i learn - 1). fact grows exponentially causes overflow when deal with factorial so we using long long variable;
//                 2). for factorial loop never start from 0
//                 3). long long fact - creates an constant space of 8mb in memory to store large integer values

//               **** why to compute *** 
//    1). if we have to factorial of same numbers the loop run for many times -- so we can put already pre computed value rater than recalculation
//    2). we can already store and compute the value of all factorial numbers


#include<bits/stdc++.h>
using namespace std;

//     const int m = 1e9 + 7;
//     const int N = 1e5 + 10;  // we are taking large array
//     // long long fact[N]; // N is run time constant  // we already compute all the factorial
//     #define N 100000
//     // Note* - global arrays requires a size that is a true compile-time constant 
//     long long fact[N];
// int main(){
   
    
//       fact[0] = fact[1] = 1;
//       for(int i= 2; i< N; i++){   // after running loop we have already store factorial of all 1e5 numbers
//         fact[i] = fact[i-1] * i;
//       }
//       int t;
//       cin >> t;
//       while(t--){
//         int n;
//         cin >> n;
//         cout << fact[n] << endl;   // we are passing that number into function
//       }
// }

// int n;
// const int m = 1e9 + 7;    // const is run time constant 
// #define N 100000
// long long fact[N];   // we are taking large array for pre computations
// int main(){
// fact[0] = fact[1] = 1;  // we are associating value of 1 in 0 and 1 both index of factorial array
// for(int i = 2; i<N; i++){
//     fact[i] = fact[i-1]*i;
// }
// int t;
// cin >> t;
// while(t--){
//     int n;
//     cin >> n;
//     cout << fact[n]<< endl;
// }
// }    // T.C - 10^10   OLD
        // T.C - O(N) + O(T) = 10^5 + 10^5
   
/*Given array a of N integers. given Q queries and in each queery given a number X,
 print count of that number in array.
Constraints 
1 <= N <=  10^5 
1<= a[i] <= 10^7
1<= Q <= 10^5
*/

//              Brute force 
// int main(){
//     int n;
//     cin >> n;
//     vector<int> a(n);
//     for(int i =0; i<n; i++ ){
//         cin >> a[i];
//     }
//     int q;
//     cin >> q;
//     while(q--){
//         int x;
//         cin >> x;
//         int ct=0;
//         for(int i=0; i<n; i++){
//             if(a[i] == x){
//                 ct++;
//             }
//         }
//         cout << ct << endl;
//     }
// }  // T.c - O(n) + O(Q*N) - O(n^2)

// * by hash array we can do pre computation
//                 ***** Steps For Hashing  *****
// 1). define constant replaced with large value before compilation , used for defining constant without extra memory
// 2). declare an hash array
// 3). place an storable counter for each value of array

// #define N 10000000  
// int hsh[N];

// int main(){
//     int n;
//     cin >> n;
//     vector<int> a(n);
//     for(int i=0; i<n; i++){  // i must be less than n, because we are taking input for n number of integers
//           cin >> a[i];
//           hsh[a[i]]++;  // this is an storable counter placed for each value of array
//     }
//     int Q;
//     cin >> Q;
//     while(Q--){
//         int x;
//         cin >> x;
     
//         cout << hsh[x] << endl; //we are output the value of counter for particular value ,  we are avoiding loop for each operation so we are doing this in O(1) for hashing
//     }
// }

//                   *practice
// #define N 100000
// vector<int> hsh(N);
// int main(){
//     int n;
//     cin >> n;   // n is size of array
//     int a[n];
// for(int i = 0; i<n; i++){
//     cin >> a[i];
//     hsh[a[i]]++;  // place an storable counter for each value of array a
// }
// int q;
// cin >> q;
// while(q--){
//     int x;
//     cin >> x;
//     cout << hsh[x] << endl;
// }
// }  //T.C - O(N) + O(q)  --  O(N) -- 2*10^5

//               Video no. 19    ||   how to store negative number in  hashing
// 1). do by stl , map & unordred map 
// 2). add positive value of largest negative number to all elements and when want output add negative of that no. to all no.

//               Video no. 20    ||   
/* array a to n integers. given q queries and in each query given l & R print sum of array elements from index L to R(L,R included)
constraintss 
1 <= 10^5
1 <= a[i] <= 10^9
1 <= Q <= 10^5
1 <= L, R <= N
*/
// *Note - In prefix sum type question use 1 based array

// #define N 100000
// int a[N];
// int main(){
//         int n;
//         cin >> n;
//         for(int i= 1; i<=n; i++){  // we i starts from 1 because we are taking 1 index based array
//                 cin >> a[i];   // we are taking value of each iteration in input
//         }
//         int q;
//         cin >> q;
//         while(q--){
//                 int l, r;
//                 cin >> l >> r;
//                 int sum = 0;
//                 for(int i=l; i<=r; i++ ){
//                     sum = sum + a[i];  // in every  iteration add previous element to new element
//                 }
//                 cout << sum << endl;
//         }
//         // O(N) + O(Q*N) = 10^10

// }

//                   **** Prefix Sum array *****
// 1). we can find prefix sum array by adding previous element with new element and storing into index.
// 2). we can also find sum of element from particular index l to index r by subtracting sum of value of index l - 1 from value at index r


// #define N 100000
// int a[N];
// int pf[N];
// int main(){
//         int n ;
//         cin >> n;
//         for(int i= 1; i<= n; i++){
//                 cin >> a[i];
//                 pf[i] = pf[i-1] + a[i];  //** it already handels pf[0] so we are preferiring 1 array based index  */
//         }
//         int q;
//         cin >> q;
//         while(q--){
//                 int l, r;
//                 cin >> l, r;
//                 cout << pf[r] - pf[l-1] << endl;
//         }
//         // O(N) + O(Q) = 10^5  it runs in one second

// }
//               2). Prefix sum in 2d arrays

//   Q).2  have 2d array of n*n integers . a , b,  c, d points printssum of square
//         represented by (a,b) as top left point  and (c,d) as bottoom right point
// constraints
// 1 <= N <= 10^3
// 1 < a[i][j] <= 10^9
// 1 <= Q <= 10^5
// 1 <= a,b,c,d <=  N

// Brute force - run loop from point a to c and from point b to d and storing sum of i and j in every index
// #define N 1000
// int ar[N][N];
// int pf[N];
// int main(){
//         int n;
//         cin >> n;
//         for(int i= 1; i<=n; i++){
//           for(int j= 1; j<=n; j++){
//                 cin >> ar[i][j];
//           }
//         }
//         int q;
//         cin >> q;
//         while(q--){
//         int a,b,c,d;
//         cin >> a >> b >> c >> d;
//         long long sum = 0;
//         for(int i=a; i<=c; i++){
//                 for(int j =b; j<= d; j++){
//                         sum += ar[i][j];
//                 }
//         }
//         cout << sum << endl;
//     }
//      // O(N^2) + O(Q*N^2) = 10^5 * 10^6 = 10 ^11  not run in one second
// }

// #define N 1000
// int ar[N][N];
// int pf[N][N];
// int a[N][N];
// int main(){
//         int n;
//         cin >> n;
//         for(int i= 1; i<=n; i++){
//           for(int j= 1; j<=n; j++){
//                 cin >> ar[i][j];
//                 pf[i][j] = ar[i][j] + pf[i-1][j]+ pf[i][j-1] - pf[i-1][j-1];
//           }
//         }
//         int q;
//         cin >> q;
//         while(q--){
//         int a,b,c,d;
//         cin >> a >> b >> c >> d;
//         cout << pf[c][d] - pf[a-1][d] - pf[c][b-1] -pf[a-1][b-1];
       
//     }
//      // O(N^2) + O(Q) = 10^6 + 10^5 = 10^6  run in one second
// }


//              *codechef - (GCDQ) (medium) Prefix computation  (find gcd after excluding value between l to r)
//           * Approach - 1 (Brute Force)  (running two loop from 0 to l-1 and r+1 to n and storing gcd of previous element with current element)
// #include<numeric>
// int main(){
//         int t;
//         cin >> t;
//         while(t--){
//                 int n, q;
//                 cin >> n >> q;
//                 int a[n+10];
//                 int forward[n+10];
//                 int backward[n+10];
//                 forward[0] = backward[n+1] = 0;   // gcd of 0 and last element is zero
//                 for(int i = 1; i<=n; i++){   // for working on computation type question we are taking 1 array based index
//                      cin >> a[i];   

//                 }
//                 for(int i = 1; i <= n; i++){
//                         forward[i] = __gcd(forward[i - 1], a[i] ); 
//                 }

//                 while(q--){
//                         int l,r;
//                         cin >> l >> r;
//                         int gc = 0;
//                         for(int i = 1; i<= l-1; i++){
//                                 gc = __gcd(gc, a[i]);  // modifying gc on each iteration
//                         }
//                         for(int j= r+ 1; j<=n; j++){
//                                 gc = __gcd(gc, a[j]);   // store gcd of each element with comparing with current element
//                         }
//                         cout << gc << endl;

//                          // their complexity is maximum of log(a,b)

//                 }
//                 //  T.C = O(T * (O(N + Q* (N*logn))) = O(T * N + T*Q*N) = N^3 = 100^3 = 1000000 = 10^6 which runs in one second
//         }
// }
//   **Note - If sum of all test cases will be <= 10^6 .... then we can ignore time complexity of O(T) 

//                * Approach - 2  ||  Precomputation    (making two array foward and backward wich already stores gcd from 0 to n and from n to i , and return value of l - 1 and r + 1 ) 
// #include<numeric>
// int main(){
//         int t;
//         cin >> t;
//         while(t--){
//                 int n, q;
//                 cin >> n >> q;
//                 int a[n+10];
//                 int forward[n+10];
//                 int backward[n+10];
//                 forward[0] = backward[n+1] = 0;   // gcd of 0 and last element is zero
//                 for(int i = 1; i<=n; i++){   // for working on computation type question we are taking 1 array based index
//                      cin >> a[i];   

//                 }
//                 for(int i = 0; i <= n; i++){  // first we are prefix forward gcd array for all elements 
//                      forward[i] = __gcd(forward[i - 1] ,a[i]);

//                 }
//                 for(int i = n; i >= 1; i--){
//                      backward[i] = __gcd(backward[i+1],a[i]);
//                 }
//                 while(q--){
//                         int l,r;
//                         cin >> l >> r;
//                         int gc = 0;
//                         cout << __gcd(forward[l - 1], backward[r + 1]) << endl;
//                 }
//                 // T.C = O(T *(N + Q = N) = < 10^6
//         }
// }



// const int N = 1e7 + 10;  // you can not declare large values locally
// long long int ar[N];  // *Note global arrays always initialise with 0;

// int main(){
//         int n, m;
//         cin >> n >> m;
//         while(m--){
//                 int a, b, d;
//                 cin >> a >> b >> d;
//                 for(int i = a; i<= b; i++){
//                         ar[i] = ar[i] + d;
//                 }
//         }
//         long long mx = -1;  //** It ensuring for any valid non negative numbers
//         for(int i= 1; i<= n; ++i){
//                 if(mx < ar[i]){   // if any element is found greater than previou mx
//                         mx = ar[i];   // update ar[i]
//                 }
//         }
//         // for(int num : ar){
//         //      if( num > mx){     //** It checks If any greaterr than previous number is found update the value*/
//         //       mx = num;
//         //      }
//         // }
//         cout << mx << endl;
// }

//                ** Practice
// const int N = 1e7 + 10;  // you can not declare large values locally
// long long int ar[N];  // *Note global arrays always initialise with 0;

// int main(){
//         int n, m;
//         cin >> n >> m;
//         while(m--){
//                 int a, b, d;
//                 cin >> a >> b >> d;
//                 for(int i=a; i<=b; i++){
//                         ar[i] = ar[i] + d;   // on each iteration we are addding current element + d element 
//                 }
//         }
//                 long long mx = -1;  // for make only valid for non negative integers
//                 for(int i = 0; i<=n; i++){
//                         if(mx < ar[i]){
//                                 mx = ar[i];
//                         }
//                 }
//         // for(int num : ar){
//         //      if( num > mx){     //** It checks If any greaterr than previous number is found update the value*/
//         //       mx = num;
//         //      }
//         // }
        

        
//         cout << mx << endl;
//         // T.C = O(m*n + n) = 2*10^5 * 10^7
// }
//           **Approach - 2 Precomputation prefix sum()

// const int N = 1e7 + 10;  // you can not declare large values locally
// long long int ar[N];  // *Note global arrays always initialise with 0;

// int main(){
//         int n, m;
//         cin >> n >> m;
//         while(m--){
//                 int a, b, d;
//                 cin >> a >> b >> d;
//                 ar[a] += d;
//                 ar[b + 1] -= d;  //using difference array technique range update*  

//         }
//         //*Note - Things about prefix sum are calculate about 1 times or each times -- if each times put under q-- for one time pur out of q--
//         for(int i=1; i<=n; i++){   //*Note for Prefix sum things about storing vaues of operations of all elements
//                 ar[i] = ar[i - 1] + ar[i];   // on each iteration we are addding previous element with current element 
//         }
//                 long long mx = -1;  // for make valid for *(any) non negative integers
//                 for(int i = 1; i<=n; i++){
//                         if(mx < ar[i]){
//                                 mx = ar[i];
//                         }
//                 }
//         // for(int num : ar){
//         //      if( num > mx){     //** It checks If any greaterr than previous number is found update the value*/
//         //       mx = num;
//         //      }
//         // }
        

        
//         cout << mx << endl;
//         // T.C = O(m + n) = 2*10^5 + 10^7 ~ 10^7  *(So IT RUNS)
// }

// //      Prefix sum + hashing palindrome in a range
// // int main(){
// //         int t;
// //         cin >> t;
// //         while(t--){
// //                 int n, q;
// //                 cin >> n >> q;
// //                 string s;
// //                 cin >> s;
// //                 int hsh[26];
// //                 while(q--){
// //                         int l,r;
// //                         cin >> l >> r;
// //                  for(int i =0; i< 26; i++){
// //                         hsh[i] = 0;
// //                  }
// //                  l--;r--;  // our l and r 1 based index so we aree decreasing 1 by 1 on both 
// //                  // we are hashing all character from l to r
// //                  for(int i =l; i<=r; i++){
// //                         hsh[s[i]-'a']++; //  increasing the count of index at which character is present
// //                  }
// //                  int oddct = 0;
// //                  for(int i =0; i<26; i++){
// //                         if(hsh[i]%2 != 0) oddct++;
// //                  }
// //                  if(oddct > 1)  cout << "No\n";
// //                  else cout << " Yes\n";
// //                 }
// //         }
// // }
// //                       brute force 
// int main(){
//         int t;
//         cin >> t;
//         while(t--){
//                 int n, q;
//                 cin >> n >> q;
//                 string s;
//                 cin >> s;
//                 int hsh[26];
//                 while(q--){
//                         int l,r;
//                         cin >> l >> r;
//                         for(int i =0; i<= n; i++){
//                                 hsh[i] = 0;
//                         }

//                         for (int i= l; i<= r; i++){
//                                 hsh[s[i]-'a']++;   // it increases the index at which particular charater is present 
//                         }
//                         int oddct = 0;
//                         for(int i = 0; i< 26; i++){
//                               if(hsh[i]%2 != 0){
//                                 oddct++;
//                               }
//                         }
                        

//                  if(oddct > 1)  cout << "No\n";
//                  else cout << " Yes\n";
//                 }
//         }
// }

//       Optimised by making 26 arrays which takes count of 
// const int N = 1e7;
// int hsh[N][26];  // total memory = 4 * 26 * 10^7 = 1.04 gb
// int main(){
//         int t;
//         cin >> t;
//         while(t--){
//                 int n, q;
//                 cin >> n >> q;
//                 string s;
//                 cin >> s;
//                 for(int i = 0; i<n; i++){
//                         hsh[i+1][s[i]-'a']++;  // at s[i-'a'] th array , we are increasing count at index i + 1 
//                 }
//                 for(int i=0; i< 26; i++ ){
//                         for(int j = 1; j<=n ; j++){
//                                 hsh[j][i] += hsh[j-1][i];  //**At ith array we are adding jth value at j-1 index  */
//                         }
//                 }
//                 while(q--){
//                         int l,r;
//                         cin >> l >> r;
//                         for(int i= 0; i< n; i++ ){
//                                 hsh[i+1][s[i]-'a']++;   // it increases value at s[i]-'a' vector at index i+1
//                         }
//                         for(int i=0; i<26; i++){  //**loop run for all characters */ // now we are iterating for all 26 characters 
//                                 for(int j = 1; j<= n; j++){  // this loops runs for all size of vector
//                                 hsh[j][i] += hsh[j-1][i];
//                                 }
//                         }
//                         for(int i =0; i< 26; i++ ){   // the loop is run for counting the count of each character
//                                int charCt= hsh[r][i] - hsh[l-1][i];
//                                if(charCt % 2 != 0) charCt++;
//                         }
//                         int oddct = 0;
//                         for(int i = 0; i< 26; i++){
//                               if(hsh[i]%2 != 0){
//                                 oddct++;
//                               }
//                         }
                        

//                  if(oddct > 1)  cout << "No\n";
//                  else cout << " Yes\n";
//                 }
//         }
// }

//                   Video no. 25  || Recursion   
//    **NOte - if first function calls second and second calls third and so on so in stack first address of first function are store then second then third
//    **Note - Recursion are stored in stack
//  1). Segementation fault --- memory full of stack 
// function calls each function

// void func(int n){
//         if(n == 0) return;
//       //  cout << n << endl;   // printing n first then recalling function
//         func(n-1);
//         //  when returning after function it prints into reverse..
//         cout << n << endl;  // first print 1 after passing base condition .. func(1) prints 1.. then func(2) calls 7th line after func 1 .. then func 3 calls 8 line after func 2 
// }
// int main(){
//         func(5);
// }

// int fact(int n){
//         if(n==0)  return 1;   // if 0 then sends 1 otherwise do recursion
//         return fact(n-1)*n;
// }
// int main(){
//         int n;
//         cin >> n;
//         cout << fact(n);
// }
// 1). Number of function calls -> n
// 2). what is complexity of each function -> O(1)  total - O(n)
//  note* - if for loops comes then their complexity O(n^2) 

//       Video no- 26  ||  Digits Sum and Array Sum

// Sum of array
// sum(n,a) -> sum of elements in a uptil index
// *sum(n,a) -> a[n] + sum(a,n-1)   sum(n,a) becames the current element + sum of n-1 elements 

// int sum(int n, int a[]){
//      if(n < 0) return 0;
//      return sum(n-1,a) + a[n];
// }
// int main(){
//         int n;
//         cin >> n;
//       ///  int a[n];   //*Note Vlas are not in standard in c++
//       vector<int> a(n);
//         for(int i = 0; i<n; i++){
//                 cin >> a[i];
//         }
//         cout << sum(n-1, a.data());  // we are using .data method to pass vector as array // we want sum of n-1 index in array a
//      //   cout << sum(2,a)     you can also get the some of the n-2 indexes 
// }
//   NUMbER of function calls -> number of digits in n
//   what is complexity of each calls -> 1

//  digit sum
//  digit_sum(n) -> digit_sum(n/10) + last digit
//  1234 - 4 + digitsum(123)

// int digit_sum(int n){
//        if(n==0) return 0;
//        return digit_sum(n/10) + (n%10);  // sum of digit n/10 + last digit
// }
// int main(){
//         int n;
//         cin >> n;
//         cout << digit_sum(n);
// }
//  ** int only supports value to 10^9 after this shows int over flow
// Number of function calls -> number of digits in n - log n
// what is complexity of each function -> O(1)

//       Video no. - 27 ||  Selection sort
//  1). Extracting first minimum element in unsorted array and put it into first element a[0] of the array
//  2). Extracting minimum elements again and again and put into first index i= 0 of the array again and again , int mindex = i; // it stores the index of minimum element 
//  3). placing j = i+1 and iterate to n if j element is less than the a[minIndex] (means it is less than the current minimum) then minIndex becomes j;
//  4). then swapping current element with minIndex ,, means minimum element comes at ith position 

int main(){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i=0; i<n; i++){
                cin >> a[i];
        }
        for(int i=0; i<n; i++){
                int minIndex =  i;  // we are mindex for storing minimum element 
        
        for(int j=i+1; j<n;j++ ){
                if(a[j] < a[minIndex]){
                        minIndex = j;    // minIndex becames j
                }
        }
        swap(a[i],a[minIndex]);  // swap current with minimum element 
        }
        for(int i=0; i<n; i++){
                
                        cout << a[i] << "";
                
        }
}
