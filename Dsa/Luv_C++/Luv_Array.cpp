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
//     s = "";    //  value updates if you passing to the function 
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

// //     int *p;  // *p is an pointer which stores the address of integer
// //     int **p;   // **p is an pointer which stores the addres of an integer pointer(*pp)
//     int x = 4;
//     int *p = &x;   // *p is value at p, or value at address of x which is 4
//     cout << *p;
// }
//     int **pp = &p;   // value at integer pointer (*pp) stores the value at pp , pp is address of p which is adress of x) 
//     cout << **pp;    //value at p print 4;

    // int x = 4;
    // int *p_x = &x;
    // (int **p_p_x = &p_x)  means (&p_x == p_p_x)
//     // double pointer(p_p_x) stores the address of an pointer

//     // **p_p_x = 7;  // now we can also change value by using double pointer

//     int a[10];
//     a[0] = 2;
//     a[1] =2;
//     cout << "pointer a is = " << a << "  value at  pointer a is = " <<*a;
// }
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

//  int main(){
//      int n;
//      cin >> n;
//      int a[10];
//        int count = 0; 
//      for(int i =0; i<n; i++){
//          cin >> a[i];  
//        count++;
//      }
//      cout << count << endl;
//  }

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

// 1. Prevents Overflow - When you're multiplying large numbers (like in factorials or powers), the result can exceed the maximum value a data type can store (like int or long long).
// 💡 Modulo keeps numbers manageable:
// 2).  2. Speeds Up Calculations - Working with smaller numbers (because of modulo) makes arithmetic faster and less memory-intensive.
// 3). Makes Patterns Repeat (Cyclic Nature). - Hashing , circular arrays , Rotations , scheduling problems (like clocks) 
// 4). Number theory algorithms like:  Fermat's Little Theorem,  Chinese Remainder Theorem

// int main(){
//     int n;
//     cin >> n;
//     long long fact= 1;
//     int m = 47;
//     for(int i =1; i <=n; i++){   // if we run loop for 100 times then it becames overflow
//         fact = (fact * i)%m;    // we are taking modulo m in each result one by one by formula on
//     }
//     cout << fact;
// }

//    2). Significance of using (m = 10^9 + 7)
//        1). 10^9 + 7 - very close to integer 
//        2). can take m as int, no take extra spaces
//        2). m is prime so we can find multiplicative inverse of any number between 10^9 + 7

//                  Video no. 18 ||  Pre computation technique and hashing
/* Given T test cases and in each test case a number N. print its factorial for each test case % m
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

//                   **** why to compute *** 
//    1). if we have to factorial of same numbers the loop run for many times -- so we can put already pre computed value rater than recalculation
//    2). we can already store and compute the value of all factorial numbers


#include<bits/stdc++.h>
using namespace std;

//   compile time constant - A compile-time constant is a value that is known and fixed during compilation. It never changes while the program is running.  ex. the same value each time an application runs .. .. the value known at compile time 
//   Run time constant - run time constant is a value that does not changed once assigned but its actual value is determined while the program is running.  like from user input ...  the run time constant are continuously changes for each timel.
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

//       Video no. - 27 ||  Selection sort(sort the array in ascending order)
//  1). Extracting first minimum element in unsorted array and put it into first element a[0] of the array
//  2). Extracting minimum elements again and again and put into first index i= 0 of the array again and again , int mindex = i; // it stores the index of minimum element 
//  3). placing j = i+1 and iterate to n if j element is less than the a[minIndex] (means it is less than the current minimum) then minIndex becomes j;
//  4). then swapping current element with minIndex ,, means minimum element comes at ith position 

// int main(){
//         int n;
//         cin >> n;
//         vector<int> a(n);
//         for(int i=0; i<n; i++){
//                 cin >> a[i];
//         }
//         for(int i=0; i<n; i++){
//                 int minIndex =  i;  // we are mindex for storing minimum element 
        
//         for(int j=i+1; j<n;j++ ){
//                 if(a[j] < a[minIndex]){
//                         minIndex = j;    // minIndex becames j
//                 }
//         }
//         swap(a[i],a[minIndex]);  // swap current with minimum element 
//         }
//         for(int i=0; i<n; i++){
                
//                         cout << a[i] << "";
                
//         }
// }        T.C = O(n^2)

//       ***  Merge Sort 
//   1). Merging - if there is two sorted array is given then how we can merge
//        a). in two sorted as we start comparing from first index in both then the (minimum will placed first and start moving) and other is at is position and compare again  
//        b). 
//   2). Divide the array by half again and again until becames only one element 
//        a). construct left array 
//   3). Then again start merging sorted arrays

// const int N = 1e5+10;   // we are implementing through recursion so we are globally declare
// int a[N];

// void merge(int l, int r, int mid){  //  we are taking one array from l to mid and one from mid+1 to r .. after merging we have to converted into one new array
//         int l_sz = mid - l + 1;
//         int L[l_sz + 1];
//         int r_sz = r - (mid + 1) + 1;   // constructing right side array
//         int R[r_sz + 1];  // we are declaring size of right side of array 
//         for(int i =0; i<l_sz; i++){
//                 L[i] = a[i+l];  // the first elements of a[l]
//         }
//         for(int i=0; i<r_sz; i++ ){
//                 R[i] = a[i+mid+1];  // right array first element becomes i + mid + 1 this is get by putting i = 0;
//         }
//         L[l_sz] = R[r_sz] = INT_MAX;   //we are putting all other elements with max elements so we can put left elements of one array into it (left elements will always be minimum so it can put easily)
//         // ** Now we have to sorted array from l to r 
//         int l_i = 0; // this tells what is the first index of the first array (for keep tracking all indexes)
//         int r_i = 0; // this tells what is the first index of the 
//         for(int i =l; i<=r; i++){
//               if(L[l_i] <= R[r_i]){  // if first element of left is shorter than first element of right
//                 a[i] = L[l_i];   // it means the element is of left array
//                 l_i++;
//               }else{
//                 a[i] = R[l_i];  // it means the element is of the right array 
//               }
//         }
// }
// void mergeSort(int l, int r){  // it says please sort l to r part of the array 
//         if(l == r) return;  // because this is base wwe have to  not to do any thing
//         int mid = (l+r) / 2;   // first we are find mid point 
//         mergeSort(l,mid);  // then we are sorting the part from l to mid
//         mergeSort(mid + 1, r);   // then we are sorting the part from mid + 1 to r
//         merge(l,r,mid);
// }
// int main (){
//         int n; 
//         cin >> n;
//         for(int i=0; i<n; i++){
//                 cin >> a[i];
//         }
//         mergeSort(0, n-1); // we are calling mergeSort for 0 to n - 1;
//         for(int i=0; i<n; i++){
//                 cout << a[i] << ""; 
//         }
// }


//           Video no. 28  || STL
// 1). stl is an interrnal template library 
// 2)   STL - 
//           1). containers
//           2). iterators
//           3). Algorithms 
//           4). functors
//          1). Conatainers
//                 sequential containers
//                                a). Vectors 
//                                b). stack
//                                c). queue
//                                d). pair (not a container)
//                 ordered (maintain order)
//                         a). maps
//                         b). multimap
//                         c). set 
//                         d). multiset
//                 unordered set
//                         a). unordred map
//                         b). unordered set
//         2). Nested Containers

//         3). Iterators
//                   a). point to memory  address of containers 
//                   b). begin(), end()
//                   c). vector<int>::iterator it;  
//                   d). continuity for containers 
//         4). Algorithms 
//                   a). upper bound  (for element just greater than or ) 
//                   b). lower bound  ( used in binary search )  
//                   c). sort(comparator *gives custom sorting behaviour) 
//                   d). max_element 
//                   e). min_element 
//                   f). accumlate
//                   g). reverse
//                   h). count 
//                   i). find   
//                   j). next permutations 
//                   k). press_permutations
//         5). Functors
//                   classes which can act as functions 

//                Video no. 29  ||  Pairs and vectors
//  1). Pair is used for storing two values 
//  2). pair is used for maintaining relation between two things 
// int main(){
//       pair<int, string> p;   //declaration of pair
//       p ={2, "sfsddfsd"};  // initialisation
//       pair<int, string> &p1 =  p;  // if only  p1 = p then it creates copy but if reference is there then it just assign the value
//       int a[] = {1,2,3};
//       int b[] = {2,3,5};
//       pair<int, int> p_array[3];
//       p_array[0] = {1,2};
//       p_array[1] ={2,3};
//       p_array[2] = {3,4};
//       swap(p_array[0],p_array[2]);  // pairs automatic maintain their relationn 
//       for(int i=0; i<3; i++){
//         cout << p_array[i].first << " " << p_array[i].second;
//       }
// }
//                            Vectors 
// 1). vectors is also have continuous memory location  , dynamic size nature 
// 2). if vector declares locally - 10^5  and for globally - 10^7
// 3). you can also create particular size of vector with any values filled and also their size updates with new operations
// 4). you can copy a one vector into  another takes O(n) times
// 5). & - same vector passing , v - copy of vector is passing

// void PrintVec(vector<string> &v){
//         cout << "size:" << v.size() << endl;
//         for(int i=0; i<v.size(); i++){
//             cout << v[i] << " " << endl;   // v.size() = O(1)
//         }
//      //   v.push_back(2);
//         cout << endl;
// }

// int main(){
//         int a[10]; // just the make the 10 block of array
//         vector<int> v;  //now its zero it creates an dynamic size array
//         int n;
//         cin >> n;
//         for(int i=0; i<n; i++){
//                 int x;
//                 cin >> x;
//                 PrintVec(v);   // size increases simultaneously
//                 v.push_back(x);  // T.C - O(1) just sends the value in the end of the array
//         }
       
// }

// int main(){
//         vector<int> v(10);
//         v.push_back(7);
//         v.push_back(6);  //O(1)
//         PrintVec(v);
//         v.pop_back();  // O(1)
//         PrintVec(v);
//         vector<int> v2 = v;  // O(n) -- its copy every single element one by one
//         v2.push_back(9);
//         PrintVec(v2);
// }

// int main(){
//         vector<string> v;
//         int n;
//         cin >> n;
//         for(int i=0; i<n; i++){
//                 string s;
//                 cin >> s;
//                 v.push_back(s);
//         }
//         PrintVec(v);
// }

//             Video no. 30  || nesting vector and pairs

// void PrintVec(vector<pair<int,int>> &v){
//         cout << "size:" << v.size() << endl;
//         for(int i=0; i<v.size(); i++){
//             cout << v[i].first << " " << v[i].second << endl;   // imagine like v[i] is an pair , if want element of first pair then v[i].first
//         }
//      //   v.push_back(2);
//         cout << endl;
// }

// int main(){
//         vector<pair<int , int >> v;   // each element of vector is pair 
       
//         int n;
//         cin >> n;
//         for(int i=0; i<n; i++){
//                 int x, y;
//                 cin >> x >> y;
//                 v.push_back({x,y});   // */ v.push_back(make_pair(x,y))
//             }
//         PrintVec(v);
// }
//  *Note - If you swapping two variable then all pair will swap.

//      2). Difference between array of vectors and vectors of vectors
// 1). Array of vectors -only no. of rows are fixed 
// void PrintVec(vector<int> v){
//         cout << "size:" << v.size() << endl;
//         for(int i=0; i<v.size(); i++){
//             cout << v[i]<< endl;   // imagine like v[i] is an pair , if want element of first pair then v[i].first
//         }
//      //   v.push_back(2);
//         cout << endl;
// }

// int main(){
//         int N;
//         cin >>  N;
//         vector<int> v[N];   // v is vectors of array  // declaring an vector of array of N Vectors
//         for(int i = 0; i<N; i++){
//             int n;  // Now we have to taking every single vector in input so we are inputting size
//             cin >> n;
//             for(int j=0; j<n; j++){
//                 // now we have to placing value in ith vector
//                 int x;
//                 cin >> x;
//                 v[i].push_back(x);  // v[i] is an particular vector
//             }
//         }
//         for(int i=0; i<N; i++){
//                 PrintVec(v[i]);
//         }
//         cout << v[1][0];      // 1st vector 0th elements
// }
//  1).  Array of vectors is similar to 2d vectors 

//  2). vectors of vectors -- we can also make rows of dynamic size

void PrintVec(vector<int >v){
        cout << "size:" << v.size() << endl;
        for(int i=0; i<v.size(); i++){
            cout << v[i]<< endl;   
        }
     //   v.push_back(2);
        cout << endl;
}

// int main(){
//         int N;
//         cin >>  N;
//         vector<vector<int> > v;   // vector of vector array  // declaring an vector of array of N Vectors
//         for(int i = 0; i<N; i++){
//             int n;  // Now we have to taking every single vector in input so we are inputting size of array
//             cin >> n;
//             vector<int> temp; // creating new vector for inputting values 
//             for(int j=0; j<n; j++){
//                 // now we have to placing value in ith vector
//                 int x;
//                 cin >> x;
//                 temp.push_back(x);  // in this time one rows at a time comes as input 
//             //    v[i].push_back(x);  // there is no ith vector so wee can do this this is empty now 
//             // temp is an single vector of integers 
//             }
//             v.push_back(temp);   // v is an large vectors stores many temp
//         }
//         v[1].push_back(3);
//         v.push_back(vector<int> (4));
//         for(int i=0; i<v.size(); i++){
//                 PrintVec(v[i]);
//         }
//                // 1st vector 0th elements
// }

// int main(){
//         int N;
//         cin >> N;
//         vector<vector<int>> v;
//         for(int i =0; i<N; i++){
//              int n;
//              cin >> n;
//            v.push_back(vector<int> ());   // now we are pushing empty vector for each ith vector 
//            for(int j =0; j<n; j++){
//                 int x; 
//                 cin  >> x;
//                 v[i].push_back(x);  // we are pushing values in each ith vector 
//            }
//         }
//         for(int i =0; i< v.size(); ++i){
//                 PrintVec(v[i]);  // we are calling function for each vector 
//         }
// }

// Note - when we are writing v[i] = then u have to think what it can represent 

//            Video no. 31     ||   Iterators
//   1). Iterators is an pointer like structure 
//   2). iterators point element of the container
//   3). Iterators is also continuous so we can access next elements by doing it + 1
//   4). iterators moves till v.end() means it points to  the next element after end 
//   5). by doing ++it it starts moving and pointing next element 
//   6). it point to an value of an containers 

// int main(){
//         vector<int> v = {2,3,5,6,7};
//         for(int i =0; i<v.size(); ++i){
//                 cout << v[i];  // we are printing element on each iteration
//         }
//         cout << endl;
//         vector<int> ::iterator it = v.begin();     // we are making an iterator it which poits to begining 
//         cout << (*(it+1)) << endl;  // it starts pointing next element 
//         // we are moving till iterators comes at end 
//         for(it = v.begin(); it != v.end(); ++it){
//                 cout << (*it) << endl;
//         }
// }

//  Note* - it++ points to the next iterator and
//          it+1 points to next location

//  Note - But in map (they are not contagious*)so it+1 not valid but it++ valid because it moves and points next iterator

// int main(){
//         vector<int> v = {2,3,5,6,7};
//         for(int i =0; i<v.size(); ++i){
//                 cout << v[i];  // we are printing element on each iteration
//         }
//         cout << endl;
//         vector<pair<int , int>> v_p = {{1,3},{2,4},{3,5}};
//         vector<pair<int , int>> :: iterator it; // we declares an iterator which used to traversee a vector
//        for(it = v_p.begin(); it != v_p.end(); ++it){  // says from where i have to start where i have to end how i have to go 
//                 cout << (*it).first << " " << (*it).second << endl;  // i says please gives my first value of pair and please give my second value
//         }
//         for(it = v_p.begin(); it != v_p.end(); ++it){
//                 cout << (it-> first) << " " << (it -> second) << endl;  // i says please point my value of first pair then point my value of second pair 
//         }
        
// }
//  (*it).first <=> (it -> first)  are same 

//  In c++ there were many things are launch auto keywords, range based loops 

//                       Video no. 32  ||   C++ Stl maps
// 1). by using range based loops we can iterate on elements of containers 
// 2). by using range based loops our values comes at that variables 
// 3). Range based loops are works well in all containers 
// 4). generally copies of variable are comes in range based loops so we have to use & reference to pass actual value 



// int main(){
//         vector<int> v = {2,3,5,6,7};
//         for(int i =0; i<v.size(); ++i){
//                 cout << v[i];  // we are printing element on each iteration
//         }
//         vector<pair<int, int>> v_p = {{1,3},{2,3}};  // we are creating vector of pairs
//         // for(pair<int, int > &value : v_p){
//         //         cout << value.first << " " << value.second << endl;
//         // }
//            for(auto &value : v_p){
//                 cout << value.first << " " << value.second << endl;
//            }
//         // cout << endl;
//         // for(int &value : v){  //you are passing copies so it not works.. it says i want to iterate on v and store in variable value
//         //     value++;   // cout << value << " " << endl;  // it says print value on each iteration 
//         // }
//         // for(int value : v ){
//         // cout << value << endl;
//         // }
        
//      //   auto a = 1.0;
//         cout << endl;
// }

// auto keyword - auto dynamically assumes data types 
// by combining auto keyword and range loops the code looking good 

//                     Video no. 33  ||  Everything About C++ STL maps
// 1). map is an data structure which stores key value pairs
// 2). it creates mapping between each key and value 
// 3). generally map stores key value in sorted order and unordered store any where but it make linkes so their t.c increases
// 4). generally map which is in sorted order implemented by red black trees 
// 5). every element of an map represent a pair in memory space which stores key and value.
// 6). generally unordered map is not contanious nature it could be anywhere but it links with each other
// 7). key and value both can be anyting like complex container 
// 8). map sorted the things based on key 
// 9). map takes O(log n) times on insertion and access , for n elements n log n if you only insert key m[6] - O(log n)  (also takes) 
// 10). In map each key is uniques means it just upgrade the previous key 
// 11). each self balancing trees and red black trees takes O(log n) time complexity
// 12). .find() -- returns an iterator to key-value pair
// 13). .erase() - O(log n)  erase value at particular key
// 14). when we do M["abcd"] = "abcd"  insertion is based on comparing of each string or numbers so takes O(log n ) times


// void Print(map<int, string> &m){
//         cout << m.size() << endl;
//         for(auto &pr : m){
//                 cout << pr.first << " " << pr.second << endl;
//         }
// }
// int main(){
//      map<int , string> m;
//      m[1] = "abc"; // O(log n)  // we are inserting value abc for key 1
//      m[2] = "cdc";
//      m[5] = "fdsfdf";
//      m.insert({3,"rebreb"}); // we are inserting pair
//      m[8];  //O(log n)
//      m[2] = "cdc";
  
// //      auto it = m.find(3); //O(log n)  // it returns iterator to key value pair 
//      auto it = m.find(5);
//      m.erase(it);
//      Print(m);
//      if(it == m.end()){
//         cout << "No value " << endl;
//      }else{
//         cout << (*it).first << " " << (*it).second << endl;
//      }
  
    
//      for(auto &pr : m){    // *pr is an variable which comes from map 
//         cout << pr.first << " " << pr.second << endl;
//      }
//      map<int, string> :: iterator it; 
//      for(it = m.begin(); it != m.end(); it++){
//         cout << (*it).first << " " << (*it).second << endl;
//      }  
// }

/*Given N strings, Print unique strings 
in lexiographical order with 
their frequency*/
// N <= 10^5
// |S|<= 100
// if |s|<= 10000  not work because in each times it search and compares for every element (string input O(10^5 + 1000000)) + insertion not valid 

// #include<iostream>
// using namespace std;

// int main(){
//         map<string, int> mp;
//         int n;
//         cin >> n;
//         for(int i =0; i <n; i++){
//            string s;
//            cin >> s;
//            mp[s]++;   // it makes key and frequency for map 
//         }
//         for(auto pr : mp){
//                 cout << pr.first << " " << pr.second << " " << endl;
//         }
// }

//                Video no. 34  ||  part - 2  Unordered maps 
// 1). Inbuilt implementation - unordered map uses hash tables and hash value each element
// 2). Time Complexity 
// 3). Valid keys data types - for unordered map you can not use complex datatypes
//                           *- hash function of complex data types are not defined so this is not valid keys

// unordered map - does not maintain order  saves time O(1) for small operations and O(n) for find 
// 1). 

// void Print(map<int, string> &m){
//         cout << m.size() << endl;
//         for(auto &pr : m){
//                 cout << pr.first << " " << pr.second << endl;
//         }
// } 
// int main(){
//      map<int , string> m;
//      m[1] = "abc"; // O(1)  // we are inserting value abc for key 1
//      m[2] = "cdc";
//      m[5] = "fdsfdf";
//      m.insert({3,"rebreb"}); // we are inserting pair
//      m[8];  //O(1)
//      m[2] = "cdc";
  
// //   auto it = m.find(3); //O(1)  // it returns iterator to key value pair 
//      auto it = m.find(5);
//      m.erase(it);
//      Print(m);
//      if(it == m.end()){
//         cout << "No value " << endl;
//      }else{
//         cout << (*it).first << " " << (*it).second << endl;
//      }
  
    
//      for(auto &pr : m){    // *pr is an variable which comes from map 
//         cout << pr.first << " " << pr.second << endl;
//      }
//      map<int, string> :: iterator it; 
//      for(it = m.begin(); it != m.end(); it++){
//         cout << (*it).first << " " << (*it).second << endl;
//      }  
// }

//   Given N strings and Q queries. In each querey you are 
//   given a string print frequency of that string 

//   N <= 10^6
//   |s| <= 100
//    Q <= 10^6

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//         unordered_map<string, int> mp;
//      //   multimap<int, vector<string> >;   // if we have to store multiple values corresponnding to single integers
//         // unordered_map<pair<int , int>, string > m;  // for this we have to defie custom hash function 
//         int n;
//         cin >> n;
//         for(int i =0; i <n; i++){
//            string s;
//            cin >> s;
//            mp[s]++;   // it makes key and frequency for map 
//         }
//         int q;
//         cin >> q;
//         while(q--){
//               string s;
//               cin >> s;
//               cout << mp[s] << endl;  // q*s *O(1) // gives frequency 
//         }
// }

// 1). In multimap in  hash key two values are made 
// 2). In multimap you can also place duplicates 

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//        int n, count = 0;
//        cin >> n; 
   
//        string s;
//        cin >> s;
//        unordered_map<char, int> map;
//        for(int i =0; i<(2*n) -2 ; i++){
//         map[s[i]]++;
//         auto it  = map.find('a' + (s[i+1]) - 'A');   // searching for roomm with lowercase corresponding character
//         if(it!= map.end()){  // if corresponding keys and rooms found
//                 if(map['a' + (s[i+1] - 'A')] > 1){
//                         map['a' + (s[i+1] - 'A')]--;
//                 }else{
//                         map.erase('a' + (s[i+1]) - 'A');
//                 }
//         }else{
//                 count++;
//         }
//         cout << count << "\n"  << endl;
//        }
       
// }
// 1). 
// #include<bits/stdc++.h>
// #include<iostream>
// using namespace std;

// int main(){
// unordered_map<string , int> map;
// int n;
// cin >> n;
// while(n--){
//         string s;
//         cin >> s;
//         if(map[s] != 0){
//            cout << "OK";
//            map[s] = 1;
//         }else{
//            int count = map[s];
//            string new_name = s + to_string(count);
//            while(map.find(s) != map.end()){
//                 count++;
//                 new_name = s + to_string(count);
//            }
//            map[s] = count + 1;
//            map[s] = 1; // means newly generated in database
//            cout << new_name << endl;
//         }
// }


// }
//     for avg case T.C - O(1)   worst case - O(n);

//                           Jesse Lover
// #include <cmath>
// #include <cstdio>
// #include <vector>
// #include <iostream>
// #include <set>
// #include <map>
// #include <algorithm>
// using namespace std;


// int main() {
//    int n;
//    cin >>n;
//    unordered_map<string , int> map;
//    while(n--){
//         int m;
//         cin >> m;
//         string x;
//         cin >> x;
        
       
        
//        if(m == 1){
//         int y;
//         cin >> y;
//           map[x] += y;
//        }else if(m == 2){
//            if(map.find(x) != map.end()){
//                 map.erase(x);
//            }else{
//                 cout << 0 << endl;
//            }
//        }else if(m == 3){
//            cout << map[x] << endl;
//        }

        
//    }
//    return 0;
    
// }

//                     Video no. 35  ||   Set , unordered set and multiset
// 1). Set represents collection of same type of elements , just remove the value part in map
// 2). Set always keeping element in sorted order
// 3). .find() point to an iterator of value
// 4). it is pointing to an iterator
// 5). dont try to use .end leads to segmentation fault
// 6). set also stores unique elements
// *7). .erase can takes directly value and iteratator pointing to value
// 8). use unordered set when order not necessary and fast computations needed
// 9). for set T.C operations - O(log n) , unordered set - O(1)
// 10). You can not pass complex data type in set because their hash functionn is not defined in standard c++ library, if you want you have to define by ownself
// 11). with boost library you can pass complex data type
//                         MultiSet
// 1). multi set allows to insert multiple values  
// 2). their operations - O(log n) ,multiset allows duplicates values
// 3). In sql there were things called priority queue which stores values in sorted order
// 4). Priority_queue - stores element in sorted order
// 5). Better to use multiset in place of piority_queue
// 6). **If there is duplicates in muliset if you use .erase(it) = it erase the first value in multiset
// 7). when you use .erase() - it erase all duplicates
// 8). .erase() also pointing iterator to all values it keeps pointing until all iterating values ends
// #include<bits/stdc++.h>
// using namespace std;

// void print(set<string> &st){
//      for(string value  : st){   // use this 
//         cout << value << endl;
//      }
//      for(auto it = st.begin();  it != st.end(); it++){
//         cout << (*it) << endl;
//      }
// }
// int main(){
//         set<string> st;
//         int n;
//         cin >> n;
//         st.insert("sfsfsd");     // O(logn)
//         st.insert("dfffsd");
//         st.insert("sfsdf");
//         auto it = st.find("sfsdf");
//         if(it != st.end()){
//                 st.erase(it);    // erase that which it points
//         }
        
        
//         print(st);
        
// }
// Given N strings, print unique  strings in lexiographical orderr 
// N <= 10^5
// |S| <= 1000000
//

// #include<bits/stdc++.h>
// // using namespace std;

// void print(set<string> &st){
//      for(string value : st){
//         cout << value << endl;
//      }
// }
// int main(){
//       set<string> st;
//       int N;
//       cin >> N;
//       while(N--){
//         string s;
//         cin  >> s;
//         st.insert(s);
//       }  
//       print(st);
        
// }

// Given N strings and Q queries , In each query you are given a string
// print yes if string is present also print NO.
// N <= 10^6
// |S| <= 100
// Q <= 10^6

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//         int N;
//         cin >> N;
//         unordered_set<string> st;  //T.C - O(1)
//         while(N--){
//                 string s;
//                 cin >> s;
//                 st.insert(s);
//         }
//         int Q;
//         cin >> Q;
//         while(Q--){
//                 string x;
//                 cin >> x;
//                 if(st.find(x)!= st.end()){   // O(1)
//                         cout << "Yes" << endl;
//                 }else{
//                         cout << "NO" << endl;
//                 }
                
                
//         }

// }

//                                 MultiSet
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
        
//         set<string> st;  //T.C - O(1)

                
//                 st.insert("aaaa");
//                 st.insert("bbbb");
//                 st.insert("cccd");
//                 st.insert("cccd");
                
//                 for(auto it : st ){
//                         cout << it << endl;
//                 }
        
//         int Q;
//         cin >> Q;
//         while(Q--){
//                 string x;
//                 cin >> x;
//                 if(st.find(x)!= st.end()){   // O(1)
//                         cout << "Yes" << endl;
//                 }else{
//                         cout << "NO" << endl;
//                 }
                
                
//         }

// }

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//        multiset<string> st;
//        string s;
//        st.insert("AAAA");   //o(log n)
//        st.insert("bbbb");
//        st.insert("bbbb");

//        auto it = st.find("bbbb");
//        if(it != st.end()){
//            st.erase(it);
//        }
//        st.erase("bbbb");
//        for(auto its : st){
//            cout << its << endl;
//        }

// }
//                   Video no. - 36 ||  Mutliset Questions
// 1) .erase- O(1) and when we are passing value it becames O(log n)
// 2). if you take long long  then  you  have to also take long long integers for input

// Find the maximum candies Monk can consume in K minutes from N bags,
// 3)/ when you take set map or multiset long long then their input elements also in long long 
// where each bag initially contains Aᵢ candies, and after eating, the bag refills to ⌊Aᵢ/2⌋ candies.

// 1). for running k more times we have to form a new loop for eating.
// 2). the duplicates is present in question ... so we can't use set  
// 2). the ordering required so we can not use 
// 4). value for last candies can be get by new variable .
// 5). keep overflow things in mind 
// 6). 
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//         int t;
//         cin >> t;
//         while(t--){
//                 int n , k;
//                 cin  >> n >> k;
//                 multiset<long long> bags;  // because input is very high
//                 for(int i = 0; i<n; i++){
//                    long long candy_ct;
//                    cin >> candy_ct;
//                    bags.insert(candy_ct);
//                 }
//                 long long total_candies = 0;   // for candies which we going to eat 
//                 for(int i = 0; i<k; i++){   // k(log n)
//                         auto last = (--bags.end());  // first pre then assign (( also do  as --last))
//                         long candy_ct = *last;
//                         total_candies += candy_ct;
//                         bags.erase(last);   //
//                         bags.insert(candy_ct/2);  // multiset always in sorted order 


//                 }
//                 cout << total_candies << endl;

//         }
// }
//      k(log n)(O(n))
//                       Q-2). Insert , find and erase
// 1). if multi set reinitiallised in every iteration compiler leads to print nothing 

// #include <cmath>
// #include <cstdio>
// #include <vector>
// #include <iostream>
// #include <set>
// #include <algorithm>
// using namespace std;


// int main() {
//     int Q;
//     cin >> Q;
//     multiset<int> st;  
//     while(Q--){
//        int y, x;
//        cin >> y >> x;
       
//        if(y == 1){   
//            st.insert(x);
//        }else if(y == 2){
//           auto it = st.find(x);
//           if(it != st.end()){
//            st.erase(st.find(x));
//           }
          
//        }else{
//         if(st.find(x) != st.end()){    // O log n
//               cout << x << endl;
//         }
//        }
//     }
    
// }
// 1). isertion of n elements into set took O(N log n) , quering for m elements took O(M log n)
// 2). in set multiset type question taking unordered set optimise performance much
//
//                       Monk and his friends(Insertion , search and remove)
// #include<iostream> 
// using namespace std;

// int main(){
//         int T;
//         cin >> T;
//         while(T--){
//         int N , M;
//         cin >> N >> M;
//         multiset<long long> st;   //S.C - O(n)
//         while(N--){   // O(log n)
//             long long n;
//             cin >> n;
//             st.insert(n);
//         }
//         for(int i =0; i<M; i++){   // quering m elements (M log n)
//                 long long x;
//                 cin >> x;
//             if(st.find(x) != st.end()){  // O(log n)
//                 cout << "YES" << endl;
//             }else{
//                 cout << "NO" << endl;
//             }
            
//         }
       
// }
//     T.C - O(T(N+M)logN)

//                         Monks birthday party
// 1). for set and hash set we using iterator to point value
// 2). for unique elements taking unordered set optimise performance much
// 3). when compiler prints nothing check about input of data types of declaration
// 4). If compiler does not read second test case then check about where you initialise set , map before loop or after loop or it resets the value or not
// 5). **if you input string in compiler then compiler only accepts string till then it just runs
// 6). space complexity for set is O(n) for n numbers and O(log n) for insertion and lookup of redblack trees

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//         int T;
//         cin >> T; reading t test cases O(1) 
        
//         while(T--){     // O(T)
        
//         long long N;
//         cin >> N;
//         set<string> st;  //Space complexity  O(n log n)

//         while(N--){   
               
//              string s;
//              cin >> s;
//              st.insert(s); // inserting n elements into set   //O(n log n)
//         }
//              for(auto it : st){   // O(st.size()) O(n)
//                 cout << it << endl;  // prinint all unique elements   O(n)
//            }
       

// }
// }
//                  Video no. 37  || Nesting in stl maps and sets with examples  
// 1). maps , set pair are used in nesting together in very good way  
// 2). Normal map are <int , int> we can also placeint to pair<int, int> now map of key becomes pair
// 3). generally we can compare all container with another container based on the basis of key.
// 4). If first velue is same in container then comparision based on next value ..
// 5). In set and vector the comparision is also done in this way 
// 6). In map every key stored in sorted order so pair will also be stored in sorted in order
// 7). if we declare nested container then we can define with new variable
// 8). map<set<int> , int> mp ; this is declration , definition and initialization - declare mp as map, set<int>, define memory - mp,
// 9). declares - tells the compiler , initialise - initial state, define - memory alloccated
// 10). If there is pair of string present in key , array of vectors present in value then takes first takes the input of pairs then run counter then push pair into map it becames vector then push_back other vector into map
// 11). map[{key,value}] - it becames vector now we can ... push_back at begining or end of this vector
// 13). for making vector of other container so we can do vector operation on it and can add other container value also
// 14). if in map pair of <string, string> is present with (vector m) then map of pair of string represent vector and you can pushback vector(m) for taking input 
// 15). in mp we need to add key which is pair m[{s1,s2}].push_back(x)
// 16). now m[s1,s2] becames vector
// 17). for(pr : map) - pr.1 is key of map so it denotes a new pair
// 18). **for making pair avoid creating copies became pair<string,string> vector<int> for making copies of vector takes O(n)
// 19). makaing copy of map<pair<string, string> is ok but for vector<int> it takes O(n).
// 20). mp[{s1,s2}].pushback(m) then for iterator pr.first.first or pr.first[0] represents s1 and pr.first.secod or pr.second[1] represent s2 and we need to return the value
// 21). mp[{s1,s2}].push_back(m) if pr is iterator then pr.second[0] is element of that vector
// 22). for taking input in pair first takes input and then put into pair not put sudden
// 23). for showing the output we have to iterate into map


// #include<iostream>
// using namespace std;

// int main(){
//      map<pair<int , int> , int> mp;
//      pair<int, int> p1, p2;
//      p1 = {3,4};
//      p2 = {4,5};
//      cout << (p1>p2);  // 0
//      cout << (p1<p2);

// }
     ///                 With set 
// #include<iostream>
// using namespace std;

// int main(){
//      map<set<int> , int> mp;   // In second int you can put anything it just a normal value
//    // declaring set 
     
//      set<int> s1 = {1,2,3};
//      set<int> s2 = {2,3,4};



//      cout << (s1 < s2 ) << endl;


// }
// Takes input of 
// 3
// a b 4
// 1 2 3 4
// c d 2
// 1 2
// d f 3
// 2 3 4

// 1). Map of pair generally used in key of data structures, generally set and vectors are rarelu used 
// 2). vector set normally used in values 
// 3). you can place set in place of map because their also ordering based on sorted order

// #include<iostream> 
// using namespace std;

// int main(){
//    map<pair<string, string> , vector<int>> mp;   
//    int T;
//    cin >> T;
//    while(T--){
//       string s1 , s2;
//       cin >> s1 >> s2;
//       int ct;
//       cin >> ct;
//       while(ct--){
//          int x;
//          cin  >> x;
//         mp[{s1,s2}].push_back(x);
//       }
//       for(auto &it : mp){
//          cout << it.first.first << " " << it.first.second << " ";
//          auto &list = it.second;
//          for( auto & element : list){
//              cout << element << " " << endl; 
//          }

//       }
//    }
// }
//      
// #include<iostream> 
// using namespace std;

// int main(){
//    map<pair<string, string> , vector<int>> mp;   
//    int T;
//    cin >> T;
//    while(T--){
//       string s1 , s2;
//       cin >> s1 >> s2;
//       int ct;
//       cin >> ct;
//       while(ct--){
//          int x;
//          cin  >> x;
//         mp[{s1,s2}].push_back(x);
//       }
//       for(auto &it : mp){
//          cout << it.first.first << " " << it.first.second << " ";
//          auto &list = it.second;
//          for( auto & element : list){
//              cout << element << " " << endl; 
//          }

//       }
//    }
// }
// 
// 3 
// Eve 78      Bob 99
// Bob 99      Alice 78
// Alice 78    Eve 78
// arrange list sorted in decreasing order and 
// 1). If two values are same it arranged in lexicographical order it means print in dictionary order
// 2). actually sorting based on keys so we just makes marks as key and value as vector for same multiple value allowed
// 3). we also need to sort the vector in sorted order so we can replace using set it directly make in sorted orderr 
// 4). for inserting into map think about key m[marks] now it bacame set we can perform any  operation  in it 
// 5). map[key] is set and map[key].insert(value) it inserts name for every coressponding marks 
// 6). we need to print marks in reverse order 
// 7). so we need to start from last element and go to the begining 
// 8). now we make infinite loop
// 9). now processing current iterator it is the current maximum in the set
// 10).for processing we need to make set of it

// #include<iostream>
// using namespace std;

// int main(){
//      map<int , set<string>> marks_map;
//       int n;
//       cin >> n;
//       for(int i =0; i<n; i++){
//         int marks;
//         string names;
//         cin >> names >> marks;
//         marks_map[marks].insert(names);
//         auto curr_it = --marks_map[marks].end();   // start from this iterator to begin
        
//         while(true){   // now we make infinite loop
//           //now processing current iterator it is the current maximum in  the set  
//           // for processing we need to make set of it 
//           auto &students =(*curr_it).second;  // students
//           int marks = (*curr_it).first;   // marks 
//           // now we need to print marks corresponding to student
//           // now for outputting into set 
//           for(auto student : students) 
//                cout << student << " " << marks << " " << endl;
//         }
//         if(curr_it == marks_map.begin()) break;   // after coming to begining must break the flow
//         curr_it--;
//       }
     

// }

#include<iostream>
using namespace std;

// 4
// Eve 78       bob 99
// Bob 99       Alice 78
// Alice 78     Eve 78
// Alice 78 

// 1). first take input think about what data type it is 
// 2). for printing value iterate in set or map
// 3). Now when we break the loop when current iterator points to begin
// int main(){
//   map<int, set<string> > marks_map;
//   int n;
//   cin >> n;
//   for (int i = 0; i<n; i++){
//     int marks;
//     string names;
//     cin >> marks >> names;
//     marks_map[marks].insert(names);
    
//   }
//   auto curr = --marks_map.end();  // we take iterator of last element and simply reverse
//     while(true){    // we have to iterate through begin
//       auto &students = (*curr).second;
//       int marks = (*curr).first;
//       for(auto &student : students){
//           cout << student <<  " " << marks << endl;
//       }
    
//     if(curr == marks_map.begin())  break;
//     curr--;  
//     }
    
  
// }
// if a key in map comes two times and value is in lexicographical order put value after puuting into set 
// Eve 78       bob 99
// Bob 99       Alice 78
// Alice 78     Eve 78
// Alice 78

//                       **Practice 
// 1). first we take input of total no. of students and marks pair
// 2). taking input of marks and students 
// 3). inserting set into map 
// 4). for printing marks and names iterate into set 
// int main(){
//   map<int , multiset<string>> mp;
//   int n;
//   cin >> n;
//   for(int i=0; i<n;i++){
//     int marks;
//     string students;
//     cin >> marks >> students;
//     mp[marks].insert(students);
//   }
//   auto curr = --mp.end();
//     while(true){
//       auto &names = (*curr).second;
//       int marks = (*curr).first;
   
//       for(auto &student : names )
//       cout << marks << student << endl;
//       if(curr == mp.begin()) break;
//       curr--;
      
//     }
  
// }
// 5). for reversing key of map we can make all elements negative so the more negative elements come first and while printing we can just multiply with negative again 

// int main(){
//   map<int , multiset<string>> mp;
//   int n;
//   cin >> n;
//   for(int i=0; i<n;i++){
//     int marks;
//     string name;
//     cin >> marks >> name;
//     mp[-1*marks].insert(name);
//   }
//   for(auto &marks_students_pr : mp){
//       auto &students = marks_students_pr.second;
//       int marks = marks_students_pr.first;
    
   
//       for(auto &student : students )
//       cout << marks << student << endl;
   
      
//     }
  
// }

//                Video no. 38  ||  Stack and Queue
// 1). Recursion implemented internally using stack
// 2). like (({}))[{}] - greatest parenthesis  and NGE (next greater element) stack are used 
// 3). Queue are used in graph

//                         Stack
// 1). Stack follows a Lifo approach 
// 2). the last enters element pop out first and first enter element pop out last
// 3). three operations we can perform on stack -
//                        i). push - push on to top   ii). pop - pop top element  iii). top - see the top element  
// 4). you can also check the stack is empty or not by the opperation

//                         Queue
// 1).  Queue perform first in first out ,the first enters will pop out first
// 2). for stl queue have three operations - 
//                         i). push - in queue the element always push at the end
//                        ii). pop - front elements will pop out the which is first
//                        iii). front - we can see the front elements means first element

// *3). when we use while if we not pop out then it prints top element infinitely
//  4). 

// #include<bits/stdc++.h>
// using namespace std;

// int main (){
//       stack<int> st;
//       st.push(3);
//       st.push(4);
//       st.push(45);
//       st.push(70);
//       while(!st.empty()){
//         cout << st.top() << endl;
//         st.pop();
//       }

// }

// 5). endl specifies to print into new line
// 6). queue are generally used in depth first search graph
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//    queue<string> qu;
//    qu.push("sand");
//    qu.push("saanndd");
//    qu.push("sanidhya");
//    qu.push("ragghav");
//    while(!qu.empty()){
//        cout << qu.front() << endl;
//        qu.pop();
//        qu.pop();
//        qu.pop();
//    }
// }

//  Q).                          Balanced Parenthesis
// 1). if there were string given at the point where for every open bracket proper closing bracket is prresent then we called it balance bracket 
//   ((()))()((
// 2). we just put braces into stacck one by one if there for every particular closing braces there must be last opening braces present if it present then pop out after every pop out 
//     if elements left into stack then it must not be balanced parenthesis


// 3). Notice stack is given we need to put character so we take stack type character
// 4). generally on coding site it uses if statement if opening bracket of this type ( or { or [ or then it code becames lengthy
// 5). so we take unordered map which just mark opening bracket as negative and closing bracket as positive so through this it becames equal if after overall result is zero then it must be balanced string
// 6). For finding unmatched bracket - if in  map value is negative then closing bracket is not present .. if in map value is positive then opening is not present 
//     For valid closing and opening pair - after adding value of both maps is zero then valid pair exists.
// *7). after pushing negative first we need to check stack must not be empty
// 8). so we need to extract the top element and pop it one by one
// 9). if sum of negative elements of map and positive elements are not equal then they must not be valid pair
// 10). if stack is empty then their must be valid pair
// 11). for Map associative container - list of pairs start with curly braces 
// 12). no instances for constructor it means you initialise pair in wrong way you use multi comma " " in  place of single comma
// 13). after making stack we need to iterate into string
// 14). 
//     
// string isBalanced(string s){
//        stack<char> st;
//           for(char brackets : s){
//                if(symbols[brackets] < 0){
//                   st.push(brackets);
//                }else{
//                   while(!st.empty()) return "NO";
//                   char top = st.top();
//                   st.pop();
//                   if(symbols[top] + symbols[brackets] != 0){
//                       return "NO";
//                   }
//                }

//           }
//           if(st.empty()) return "YES";
//           return "NO";
// }
// int main(){
//     int t;
//     cin >> t;
//     while(t--){
//       string s;
//       cin >> s;
//       cout << isBalanced(s) << endl;
//     }
// }


//              practice -- Balanced brackets 
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// unordered_map<char, int> symbols = {{'(', -1} , {'{' , -2}, {'[' , -3}};


// string isbalanced(string s){
//     stack<int> st;
//     for(auto brackets : s){
//       if(symbols[brackets] < 0){
//           st.push(brackets);
//       }else{
//           while(!st.empty()) return "NO";
//           char top = st.top();
//           st.pop();
//           if(symbols[top] + symbols[brackets] != 0){
//               cout << "NO" << endl;
//           }
//       }
//     }
//     while(st.empty()) return "YES";
//     return "NO";

// }
   
   

// int main(){
//     int t;
//     cin >> t;
//     while(t--){
//       string s;
//       cin >> s;
//       isbalanced(s);
//     }
// }

//                Video no . 40   || Next greater element
// 1). the next first greater element for all element 
// 2). 4, 5 , 2, 25 , 7 , 8  <-->  5 , 25 , 25 , -1 ,8 , -1
// 3). we can be do into by picking one element and making loop for other element to check next element
// 4). we just put elements into stack and check how many elements the next greater element are present in stack then  pop out the element and replace with next greater element
// 5). if current element are not greater of any existed one then push into stack , if current is greater for existed element then pop the  existed and replace with current , after this the existed element are -1.

// 6). when we insert greater element then it only check with existed element means their past element , if not greater then again insert
// 7). we are constructing an vector which takes input aas vector and return also vector
// 8). vector<int> nge = NGE(V)  means nge calls the function NGE(v) which stores vector of integers stored in nge
// 9). we are putting indexes in  place of value , at ith we can put the index of just next greater element
// 10).s.top is index so we can put v[s].top as value

// 11). now we need to go through each element using vector v
// 12). at ith element we assign next greater element til then stack is not empty and current element does not short then st.top

// 13). for using one vector into another you must need to return first

// 14).  if you not pop after using top then it runs infinitelly

// vector<int> NGE(vector<int> v){
//        vector<int> nge(v.size());
//        stack<int> st;
//        for(int i =0; i< v.size(); i++){
//          while(!st.empty() && v[i] > v[st.top()]){
//             nge[st.top()] = i;
//             st.pop();
//          } 
//          st.push(i);   
//        }
//        while(!st.empty()){
//          nge[st.top()] = -1;
//          st.pop();
//        }
//        return nge;
// }

// int main (){
//   int n ;
//   cin >> n;
//   vector<int> v(n);
//   for(int i = 0; i<n;  i++){
//     cin >> v[i];
//   }
//   vector <int> nge = NGE(v);
//   // if we need to print array of next greater element then 
//   for(int i =0 ; i<n; i++){
//         cout << v[i] << " " << (nge[i] == -1 ? -1 : v[nge[i]]) << endl;
//   }
// }

// for ternary operator in cout line use () curly braces and put value

//        //   //    practice - next greater element 
// 1 2 3 4 --> 2 , 3 4 -1
// #include<bits/stdc++.h>
// using namespace std;

// vector<int> NGE(vector<int> v){
//   vector<int> nge(v.size());
//   stack<int> st;
//   for(int i =0; i< v.size(); i++){
//   if(!st.empty() && v[i] > v[st.top()]){
//         nge[st.top()] = i;
//         st.pop();
//   }
//   st.push(i);
//   st.pop();

//   while(!st.empty()){
//     nge[st.top()] = -1;
//     st.pop();
//   }
// }

// }
// int main(){
//    int n;
//    cin >> n;
//    vector<int> v(n);
//    for(int i =0; i<n; i++){
//     cin >> v[i];
//    }
//    vector<int> nge = NGE(v);
//    //  if we need to print in result vector into array then 
//    for(int i =0; i<n; i++){
//    cout << v[i] << " " << (nge[i] == -1 ? -1 : v[nge[i]]) << endl;
//    }
// }


//              Video no. 41  || C++
// 1). C++ inbuilt sorting function is one of the great function
// 2). sort takes pointer means address from where you need to sorting to the next address of element where you want sorting
// 3). sort(a, a+n)  (n-1) points last element so a+ n points to the address of nextt element where you want sorting
// 4). sort(a,b) -- a represent starting index and b represent next address till where you want sorting
// 5). the inbuilt algorithm is used intro sort which is three sorting expression
// 6). start from quick sort depth increases then heap sort if no. of element less then uses heap sort

// #include<iostream>
// using namespace std; 

// int main(){
//   int n;
//   cin >> n;
//    vector<int> a(n);
//    for(int i =0; i<n; i++){
//       cin >> a[i];
//    }
//    sort(a.begin() + 2, a.end() - 1);     // 2 4 9 8 6 10 11
//    for(int i = 0; i<n; i++){
//     cout << a[i] << " " << endl;
//    }
//    cout << endl;
// }


//              Video no. 42  ||    Comprator function in depth logic

// comparative function behave 
// 1). (a > b) means when it found a > b then it simply swap that element which first element is greater
// 2). FOR DEALing with vectors after making operation in it you need to iterate
// 3). we shall also be define comparator function for pair 

// 4). comparator function works when need to change or arrange the order of elements for particular range 
// bool should_i_swap(int a, int b){
//   if(a < b) return true;
//   return false;
// }

// int main(){
//   int n;
//   cin >> n;
//   vector<int> a(n);
  
//   for(int i =0; i<n; i++){
//     cin >> a[i];
//   }
//   for(int i = 0; i<n; i++){
//     for(int j = i+1; j<n; j++){
//         // a[i] < a[j]   this is original condition
//          if(should_i_swap(a[i] , a[j])){  // comparator function
          
//             swap(a[i] , a[j]);
          
//          }
//     }
//   }
//   for(int x : a){
//     cout << x << " " << endl;
//  }
  


// }

// 1). comparator function for pair 
// 2). for taking multiple pairs put into vector
// 3). for only making sorting on the keys 
// 4). through by only creating logic we can swap particular pair in order and also particular key or for only value order.
// 5). swap built in function says if you want swap then return false other wise return true , if don't want then return true
// 6). so there is best method to memorize swap built in function "jo chaiye usi order me return kr do" just return in which you want the order like a.first > a.second for ascending

// bool should_i_swap(pair<int , int> a, pair<int, int> b){
//   if(a.first != b.first ){
//     if(a.first > b.second) return true;  // decreasing order
//     return false;
//   }else{
//      if(a.second < b.second) return true; // if i want the greater value of pair comes first so we type 
//    // if(a.second > b.second) return true;  // if lesser want first then do a.second > b.second then true else false
//      return false;
//   }   
    
//   }

// int main(){
//   int n;
//   cin >> n; 
//   vector<pair<int, int>> pr(n);
  
//   for(int i =0; i<n; i++){
//     cin >> pr[i].first >> pr[i].second;
//   }
//   for(int i = 0; i<n; i++){
//     for(int j = i+1; j<n; j++){
//         // a[i] < a[j]   this is original condition
//          if(should_i_swap(pr[i], pr[j])){  // comparator function
          
//             swap(pr[i], pr[j]);
          
//          }
//     }
//   }
//   for(auto it : pr){
//     cout << it.first << " " << it.second << endl;
//  }
  


// }
// 6    
// 4 5    2
// 8 9    
// 3 8
// 2 9

// with this a.first means in first pair and a.second means first element of second value of pair
// for comparative function when the conditioin is false return false and when condition is true return true
// for writing comparator function of integers then bool cmp 
// 5). there were inbuilt function is also available for comparator like greater int
// 6). you can also put comprator function on the string , integer pair

// bool cmp(pair<int , int> a, pair<int, int> b){
//   if(a.first != b.first ){
//     return (a.first < b.first); // decreasing order
   
//   }else{
//      if(a.second < b.second) return false;// if pair is same then increasing order 
//      else true;
//   }   
        
//   }
// bool cmp(int a , int b){
//    return a > b; // for sorting we can use comparator function
// }
  

// int main(){
//   int n;
//   cin >> n;
//   vector<pair<int, int>> pr(n);
  
//   for(int i =0; i<n; i++){
//     cin >> pr[i].first >> pr[i].second;
//   }

  
//   for(int i = 0; i<n; i++){
//     cout << pr[i].first << " " << pr[i].second << endl;
//  }
  


// }

// *** Practice *** if we need to write this as 
// first pair - increasing 
// second pair - decreasing 

// bool cmp(pair<int , int> a, pair<int, int> b){
//   if(a.first != b.first ){
//     return (a.first < b.first); // increasing order
    
//   } 
//   return (a.second > b.second);
        
//   }

  

// int main(){
//   int n;
//   cin >> n; 
//   vector<pair<int, int>> pr(n);
  
//   for(int i =0; i<n; i++){
//     cin >> pr[i].first >> pr[i].second;
//   }

//   sort(pr.begin(), pr.end(), cmp);
//   for(int i = 0; i<n; i++){
//     cout << pr[i].first << " " << pr[i].second << endl;
//  }
  


// }

//  


//         ***   Sherlock and his Ammo Quest 
// N - 10^6 S-10^2
//

//                 // comparator functions???    
// bool cmp(pair<string , int> a, pair<string , int> b){
//   if(a.second != b.second){
//     return (a.second > b.second);   // decreasing 
//   }else{
//     return (a.first <  b.first);
//   }
// }

// int main(){
//   int n ;
//   cin >> n;

//     vector<pair<string ,int >> pr(n);
//   for(int  i =0; i<n; i++){
//      cin >> pr[i].first >> pr[i].second; 
     
//   }
//   sort(pr.begin() , pr.end(), cmp);
//   for(int i =0; i <n; i++){
//     cout << pr[i].first << " " << pr[i].second << endl;
//   }
// }


//                   ***  Letter Count  ***
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// int main (){

//   string s;
//   cin >> s;
//   vector<int> freq(256,0);  
//   for(char c: s){
//       freq[(int)c]++;
//   }
//   int maxfreq = 0;
//   int charfreq = 0;
//   for(int i =0; i< 256; i++){
//     if(freq[i] > maxfreq){
//       maxfreq = freq[i];
//       charfreq = i;  // convert asci value into character
//     }
//   }
//   cout << (char)charfreq << endl;

//   }

//                Video no. 43    ||   Upper Bound and Lower Bound
// 1). for upper bound and lower bound array must be in sorted order
// 2). If you want to find an element then lower bound gives (that element , if that element not present then just greater element) 
//     but for upper found it always points to the next next greater element
//     if you attempt to find an next greater element which not exist then it returns garbage value
// 3). lower bound and upper bound returns the location of the element for array --> points pointer and for vector --> reurns iterator
// 4). lower bound (starting address , last address +1 , element)
// 5). both upper found and lower bound t.c - O(log n)
// 6). if you use upper bound and lower bound then try prefer vector dynamic array
// 7). Dont use iterator and .begin() and .end() to find lower bound and upper bound in set and map because it start consumes O(n) times and leads to tle errors
// 8). 



// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//      int n;
//      cin >> n;
//      int a[n];
//      for(int i =0; i<n; i++){
//       cin >> a[i];

//      }
//      sort(a, a+n);
//      for(int i =0; i<n; i++){
//         cout << a[i] << " ";
//      }
//      cout << endl;
//      int *ptr = upper_bound(a+4, a+n, 77);       // 4 5 6 6 9 8 33 77  
//     //  if(ptr == (a+n)){    // if the last pointer start pointing to the end it means no element or there so it gives not found
//     //   cout << "NOT FOUND" << endl;
//     //   return 0;
//     //  }
//      cout << (*ptr) << endl;
// }

//             upper bound and lower bound in dynamic arrays

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//      int n;
//      cin >> n;
//      vector<int> a(n);
//      for(int i =0; i<n; i++){
//       cin >> a[i];

//      }
//      sort(a.begin(), a.end());
//      for(int i =0; i<n; i++){
//         cout << a[i] << " ";
//      }
//      cout << endl;
//      auto it = upper_bound(a.begin()+ 5, a.end(), 8);       // 4 5 6 6 9 (8 33) 77  
//      if(it == a.end()){
//       cout << "NOT FOUND" << endl;
//       return 0;
//      }
//      cout << (*it) << endl;
// }

// 1). we can take a random number using rand()
// 2). for In map upper bound and lower bound in map always return iterator to key 
// 3). for upper bound and lower bound internal implementation done by binary search and in set and map their implemention done using trees , trees traversal
//                        Lower bound and upper bound in set 
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//      int n;
//      cin >> n;
//      set<int> s;
//      map<int , int> mp;
//      for(int i =0; i<(int)(1e6); i++){
//       // int x;
//       // cin >> x;
//       s.insert(rand());    // 

//      }
//      for(int i = 0; i< (int)1e5; i++){
//          auto it = s.lower_bound(rand());      // t.c- O(log n)
//      }
//     // cout << (*it) << endl;
// }


//                           Rebel Reach
// 1). acccumlate provide for what range of sum you want , and also give initial value of sum
// 2). for in case of array v.begin convert into v and .end() convert into v+n (v+n means the next address where we want to find out)
// 3). in case of array iterator is pointing to pointer

//          Video no. 44    ||  Inbuilt Algorithms Part 1 Arrays and vectors
//   
//              inbuilt algorithms in vector 
// #include<bits./stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;
//     vector<int> v(n);
//     for(int i =0; i<n; i++){
//          cin >> v[i];  // 4 5 6 7 8   // 8
//     }
//     int max = *max_element(v.begin() + 1, v.end()-1);    // O(n)   
//     cout << max << endl;
//     int min = *min_element(v.begin(), v.end()-1);
//     cout << min << endl;
//     int sum = accumulate(v.begin() + 1, v.end()-1 , 0);  // 18
//     cout << sum << endl;

//     int ct = count(v.begin() + 3, v.end() - 1, 7);     // 5 6 6 7 7 7 2      4 to 7
//     cout << ct << endl;
//     int fd= *find(v.begin(), v.end(), 9);  // 5 6 6 7 7 7 2  
//     cout << fd << endl;
//  // int it = find(v, v+n);   // in case
//  // if(it != v+n){
//        cout << (*it) <<endl;
//      }else{
//        cout << " NOt found" << endl;}
// }

//     inbuilt algorithms for array just conver .begin() to v and .end to v+n

//                    Video no. 45  || Inbuilt STL Algorithms and lambda queries
//  lambda queries is used for put a particular conditions to all elements for particular range of containers
//  the syntax is [](){condition statement for lambda queries}
// lambda queries are generally pass in third parameters
// all of means all_off , generally we pass lambda function as third parameters
// all_of , none_of and any_of returns true and false
// all_of - all of conditions true then true , none_off - if none of the condition true return true, and any_off - if any of the element in particular range is true then it returns true 
// none of = it only returns true if none of the elements return true 
// vector<int> v = {3,4,5 ,6 };
// int main(){
//        cout << [](int x){return x + 2;}(2) << endl; // 4
//        cout << [](int x){return x + 4;}(2) <<  endl; // 6
//        auto sum = [](int x, int y){return x + y;}(4 , 5);  // 9
//        cout << sum << endl;
// }

// bool even(int x){
//        return (x%2 == 0);
// }
// vector<int> v=  {4, 5 ,4 ,9};
// int main(){
//        cout << [](int x){return x > 2;};
//        cout << [](int x , int y){return x + y;}( 5 , 6);
//        cout << all_of(v.begin(),v.end(),[](int x){return x > 0;});
//        cout << none_of(v.begin(), v.end(),[](int x){return x > 2;});
//        cout << any_of(v.begin(), v.end(), even );
// }


//                       Video no. 45  ||  Inbuilt STL ALGORITHMS and lambda queries
// int main(){
//        cout << [](int x){return x + 2;}(4) << endl;
//        int sum = [](int x , int y){return x + y;}(4 , 5);
//        cout << sum << endl;
// }
// vector<int> v = {2,4,6,8,8};
// bool even(int x){
//         return (x%2 == 0);
// }
// int main(){
//         cout << all_of(v.begin(), v.end(),[](int x){return x<0;});
//         cout <<  none_of(v.begin(), v.end(), [](int x){return x > 2;}) << endl; // 0
//         cout << any_of(v.begin() + 2, v.end(), [](int x){return x > 6;}) << endl;  ///
//         cout << any_of(v.begin(), v.end(), even) << endl;  // 1
// }
// O(n) time complexties 

//              Video no. 46   ||  Offline querie and online queries
// 1). Offline queries - only caluculate somthing for a range example when you have to find out the sum of all element from range l to r 
// 2). online queries - when you also need to update[i] for each element in given range just like to r

//               Video no. 47  || Advanced Recursion
//
// 1). a pair only be valid when opening bracket pair is more than the closing bracket 
// 2). for opening bracket there were only one condition if n is left for opening bracket then we can put opening bracket
// 3). for adding closing bracket there were two condition closing brackets must be availiable and count of opening bracket must be greater than closing bracket
// *4). for making recursion you need to make function definintion 
// 5). when we put opening bracket then string says you ccan put more brackets so string s will also be passes

// 6). function definition says there is an  s string in which open bracket can be put of thier count , and in  close closing bracket it can put closing bracket of their count 
// vector<string> valid;
// void generate(string &s,int open, int close){
//         if(open == 0 && close == 0){     // Now if opening count and closing count 0 then we can find valid string
//             valid.push_back(s);
//             return;
//         }
//         if(open > 0){    // if opening is present 
//              s.push_back('(');
//              generate(s, open - 1, close);   // after consume 1 we are going to generate for open - 1, so this function is calls for opening and closing
//              s.pop_back();    // backtracting
//         }
//         if(close > 0){   // we need to check 
//              if(open < close){     // this string tells count of opening is greatter than close .... if 2 bracket is use then we need to make for 3 bracket
//                 s.push_back(')');
//                 generate(s, open , close -1);   // we call the generate function
//                 s.pop_back();


//              }
//         }
// }       

// int main(){
//     int n;
//     cin >> n;
//     string s;
//     generate(s,n, n);
//     for(auto ele : valid){
//        cout << ele << endl;
//     }
// }

//                          Subset generation using recursion
// vector<string> valid;
// void generate(string &s, int open , int close){
//           if(open == 0 && close == 0){
//                 valid.push_back(s);
//                 return;
//           }
//           if(open > 0){
//                 s.push_back('(');
//                 generate(s, open - 1, close);
//                 cout << open << endl;
//                 s.pop_back();
//           }
//           if(open < close){
//                 s.push_back(')');
//                 generate(s, open , close -1 );
//                 s.pop_back();

//           }
// }
// int main(){
//         int n;
//         cin >> n;
//         string s;
//         generate(s, n, n);
//         for(auto ele : valid){
//                 cout << ele << endl;
//         }
// }

//                            practice 
// vector<string> valid;
// void substring(string &s, int open , int close){
//         if(open == 0 && close == 0){
//                 valid.push_back(s);
//                 return;
//         }
//         if(open > 0){
//                 s.push_back('(');
//                 substring(s, open-1, close);   // when i select one opening it becames open - 1
//                 s.pop_back();

//         }
//         if(open < close){    // it means more opening bracket present  when 
//                 s.push_back(')');
//                 substring(s, open , close -1);  // when i select close it becames close - 1
//                 s.pop_back();
//         }

// }
// int main(){
//         int n ;
//         cin >> n;
//         string s;
//         substring(s , n, n);
//         for( auto it :  valid){
//                 cout << it << endl;
//         }


// }

//                         Subset Generation using recursion n ba

// 1). for subset generation satart considering takes to or not takes to for all elements, if i pick first 
// 2) making subset is very simple come of first element and include the first element if not include then goes on to the sencond element and again include it or not to include  .. like this go to the n elements
// *3). if n eleme.nts is in array then their 2^n subsets are made

// 4). For reursion define must clear your definition first what you are going to do 
// steps - 1). lets suppose a vector is given now we need to make subset so generate function so we goona pass generate function
//         2). in each time we goona check for that we are commited to take or not to take so we pass a vector array ... generate(vector<int> &subset) .. and pass by reference because we not want to make copies
//         3). when we are approaching to depth of the tree then we have to options take or not take so we need to pass what elements are pass for check which is current element  i
//         4). for finding in a element we pass nums nums array in function as a reference so its copy or not made
//         5). generate function have two optinon it tells have to include ith position in subset or not
//         6). if at ith position we choose not to include so we check for ith + 1
//             7). ith element not in subset -- generate(subset, i+1, nums)
//             8). if ith element in subset -- subset.push_back(nums[i])  then we put ith element
//                                             generate(subset, i+1, nums) ith element is processed so we search for ith + 1 element and pass nums together
//                                             subset.pop_back(); also need to undo.... if not undo it.. then any element come into subset seems as same as previous call element .... as we going into depth changes increase and when we comes back again then we want revert of our result to put for new elements then we need to undo it 
//             9). whats our base condition? when all elements are consumed then iterator must points to end of the array
//             10).each results were represents subsets , When the result were stored in subset we need to push into vector of array
// 
// 
//  overload function - one version of the function 
//                    - no multilple definitions of the function
//                    - the function may have been incorectly defined or not implemented with multiple versions
// vector<vector<int>> subsets;  // this will stores all the vector of vector of all subsets
// void generate(vector<int> &subset, int i , vector<int> &nums){

//         if(i == nums.size()){
//              subsets.push_back(subset);    //  base condition if all subsets were generated
//              return;
//         }
//         generate(subset , i+1, nums);   // at the time of  not take it search for next element for subset
        
        
//         subset.push_back(nums[i]);   // when take it push back that element into subset  and search for next element
//         generate(subset , i+1, nums);
//         subset.pop_back();

// }
// int main(){
//         int n;
//         cin >> n;
//         vector<int> nums(n);
//         for(int i =0; i<n; i++){
//                 cin >> nums[i];
//         }
//         vector<int> empty;    // first we consider empty vector 
//         generate(empty, 0 , nums);   // at starting their element will zero 
//         for(auto subset : subsets){
//                 for(auto ele : subset){
//                         cout << ele << " ";
//                 }
//         }

// }






//                                       Generate Subsets


// vector<vector<int>> subsets;
// void generate(vector<int> &subset , int i, vector<int>& nums){
//         if(i == nums.size()){
//                 subsets.push_back(subset);
//                 return;
//         }
//         // when we not takes
//         generate(subset, i + 1, nums);
//         // when take 
//         subset.push_back(nums[i]);
//         generate(subset , i + 1, nums);
//         subset.pop_back();


// }


//               Video no . 50 ||  Binary Search

// 1). In book it commonly mention that binary search are used in sorted array 
// 
// 2). Binary Search is a search algorithm which based on motonic functions
// 3). monotonic function is a function which maintain a given order , or follow a order
// 4). non monotnic function which does not follow order 
// *5). we can use binary searh in  all monotonic things like --- i). if x^2  increases along with y^2 -- ii). 1 2 3 4 5
// 6). A predicate function its a type of function which always return true or false 
//                         ex -- F F F F F F T T T T T - monotonic function -- we can also put binary search on it 
// 7). Binary Search is likes Dicitionary means where i mean to see the meaning word first i see somehwere on mid then on right or left half

//   if a monotonic array is --  2 3 5 6 7 
//         search space - 0 to 5 ( a search space)
//        mid = 2    mid = 0 + search space / 2 = 2.0
//       means, mid value = 4  if we have to search for 5 we use to search in right side
//
//     now we can discard the search space from 0 to 2  --- so now search space becames 3 - 5
//      mid = 2  --> search space 3 - 5 --
//      now mid = 4  value = 6 we search for 5 --> so search space = 3 - 3 
//      mid = 3 --> 5

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//         int n;
//         cin >> n;
//         vector<int> v(n);
//         for(int i =0; i<n; i++){
//                 cin >> v[i];
//         }
//         int to_find;
//         cin >> to_find;
//         // for to apply binary search we need to define search space 
//         int lo = 0, hi = n - 1; // (at starting whole array)
//         int mid;
//         //  we need to check for high > low
//         while(hi - lo > 1){
//                int mid =  (hi - lo) / 2;
//                if(v[mid] < to_find){
//                    // it must be lies on right so mid becames lo + 1
//                    // for low and high condition we are search for we can find that element in  search space or not 
//                    lo = mid + 1;
//                    // for binary search we are searching as is mid be able to present in search space
//                }else{
//                    hi = mid;
//                }
//         }
//         //  high and low maxm difference can be 0 or 1 
//         if(v[lo] == to_find){
//                 cout << ldl;   // present at low index
//         }else if(v[hi] == to_fino << end){
//                 cout << hi << endl;
//         }else{
//                 cout << "NOT FOUND" << endl;
//         }

// }
// time complexity O2(n)

// 1). If we talk about time time complexity on each time the search space becoming half and half again so it goes for O(log2(N)) times
// Coming quetion - how to find square root using binary search 
//                 quick problem 





//            Practice        Binary Search 

// int main(){
//         int n;
//         cin >> n;
//         vector<int> v(n);
//         for(int i =0; i< n; i++){
//                 cin >> v[i];
//         }
//         int to_find;
//         cin >> to_find;
//         int lo = 0;
//         int hi = n -1;
//         int mid;

//         while(hi - lo > 1){
               
//                 mid = (hi - lo) / 2;
                
//                 if(v[mid] < to_find ){
//                         lo = mid + 1;
//                 }else{
//                         hi = mid; 
//                 }
                
//         }
//         // t.c - O2(n)
//         if(v[lo] == to_find ){
//             cout << lo;
//         }else if(v[hi] == to_find){
//                 cout << hi;
//         }else{
//                 cout<< " NOT FOUND";
//         }
// }

//                sieve of erasthosees
// const int LIMIT = 10000000;
// vector<bool> is_prime(LIMIT + 1, true);
// unordered_set<long long > t_primes;
// void t_primes(){
//     is_prime[0] = is_prime[1] = false;
//     for(long long i = 2; i<= LIMIT; i++){
//         if(is_prime[i]){
//                 t_primes.insert(i*i)
//         }
//     }
// }
// int main(){
//      ios::sync_with_stdio(false);    // it disables synchronisation between cin , cout and scanf and print f 
//      cin.tie(0);     //  this unlinks cin from cout to improve performance
//                      // removes automatic flush making input faster
//                      int n; 
//                      cin >> n;
                      
// }


//                          Video no.  
// 1). Inbuilt algorithms of lower bound and upper bound are based on the binary search algorithm
// 
// 2). we are putting vector for finding lower bound 
// *3). If input vector are not sorted sort it first 

//                   Lower_Bound using binary search

// int lower_bound(vector<int> &v, int element){
//   // if the element is present in vector then just return the element or just greater than element   
//   int lo = 0; int hi = v.size();
//   // if difference between high and low is greater then we forwarding to caluclate middle element
//   sort(v.begin(), v.end());
//   while(hi - lo > 1){
//         int mid = (hi + lo) / 2;
//         if(v[mid] < element){
//             lo = mid + 1;
//         }else{
//             // if lies in  left part then high is shift to mid
//             hi = mid; 
//             // we are not proceed to remove mid in our binary search 
//         }
//   }
//   // so first of all we goona check that lower element is mid or not 
//   // as on searching ifur crent element is greater than lower or hi both then first we -- check for lower element and fast check for hi 
//   if(v[lo] >= element){
//     return lo;
//   }
//   if(v[hi] >= element){
//     return hi;
//   }
//   // not found
//   return -1;
// }
// int main(){
//         int n;
//         cin >> n;
//         vector<int> v(n);
//         for(int i =0; i< n; i++){
//                 cin >> v[i];
//         }

//       int element;  // for element in which we set to find a lower bound and upper bound
//       cin >> element;
//       int lb = lower_bound(v, element);
//       cout << lb << " " << v[lb] << endl;
//     }

//                          upper_bound using binary search

// 1). so for upper_bound we get to go for strictly greater element
// 2). so what changes we procceding to find the strictly just greater than element 
// 3). we want index of just greater element 
// 4). Note for handline segmenetation fault condition we just mark if(lb != -1 : then only proceed)
// 5). *never wrote sort function inside the function
// 6). you also make as for stl that provide starting iterator and ending iterator so you can also find by adding and then dividing both iterators value

// int upper_bound(vector<int> &v, int element){

//   int lo = 0; int hi = v.size();

//   // sort(v.begin(), v.end());
//   while(hi - lo > 1){
//         int mid = (hi + lo) / 2;
//         // *** if search element is current element then we need to search for greater element part ,, so start marking low = mid + 1
//         if(v[mid] <= element){
//             lo = mid + 1;  //** we evict the mid element
//         }else{
//             // if lies in  left part then high is shift to mid
//             hi = mid; 
//             // we are not proceed to remove mid in our binary search 
//         }
//   }
//   // so first of all we goona check that lower element is mid or not 
//   // as on searching if current element is greater than lower or hi both then first we -- check for lower element and fast check for hi 
//   if(v[lo] > element){  // *** we also check for next greater element
//     return lo;
//   }
//   if(v[hi] > element){  // *** we are check for nex greater element so it checks for next greater element
//     return hi;
//   }
//   // not found
//   return -1;
// }
// int main(){
//         int n;
//         cin >> n;
//         vector<int> v(n);
//         for(int i =0; i< n; i++){
//                 cin >> v[i];
//         }

//       int element;  // for element in which we set to find a lower bound and upper bound
//       cin >> element;
//     //  int lb = lower_bound(v, element);
//     //  cout << lb << " " << (lb != -1 ? v[lb]: -1 )<< endl;
//       sort(v.begin(), v.end());
//       int ub = upper_bound(v, element);
//       // *if upper_bound store garbage value then print -1
//       cout << ub << " " << (ub != -1 ? v[ub] : -1 ) << endl;
//     }

// Note - put the searching element of the reading the array




                    //     Lower Bound and upper bound function implementation using binary search algorithm

// int upper_bound(vector<int> &v, int element)  {    //  1 2 3 4 5 
   
//    int hi = v.size();
//    int lo = 0;
//    while(hi - lo > 1){
//         int mid = (lo + hi)/ 2;
//         if(v[mid] <= element){
//           lo = mid + 1;   
//         }
//         else{
//             hi = mid;
//         }
//    }
//    if(v[lo] > element ){
//     return lo;
//    }
//    if(v[hi] > element){
//     return hi;
//    }
//    return -1;
// }     
// int main(){
//     int n;
//     cin >> n;
    
//     vector<int> v(n);
    
//     for(int i =0; i<n; i++){
//         cin >> v[i];
//     }
//     int element;
//     cin >> element;
//     sort(v.begin(), v.end());
//    int lb = upper_bound(v , element);
//    cout << lb << " " << v[lb];
// }   

//                 Nth root of a number using binary search algorithm    

// 1). How to implement square root using binary search
// 2). search space must lie in their 1 to n search space 
// 3). for search space from 1 to 16 is first we found out the middle element whicch is four and square it check if it give result then we search in left or right search space
// 4). if i want accuracy for decimal places for root 2 
// 5). as i search space for square root for one digit place is - 1.1 1.3 , 1.3 , ... 1.9 2.0
// 6). as we increase accuracy the search space also increaes simultaneously 
// 7). for finding the square root of 2 first we do 2 + 1 / 2 = 1.5  so our search space becames 1 to 1.5 and we check square of 1.5 is equals to 3 or not if it is not then our search space becames 1 to (1.5 + 1)/2
// 8). 

// #include<bits/stdc++.h> 
// using namespace std;
// // 9). if you want decimal places for x place you required to put eps for 1e-(x+1) places
// double eps = 1e-6;   // shows accuracy for five decimal places --> 0.000001


// int main(){
//     double x;
//     cin >> x;
//     double lo = 1, hi = x, mid;
//    // if we need to find for how many places the decimal will be accurate    like 1.44 - 1.40 then 0.04
//     while(hi - lo > eps){
//         mid = (hi + lo) / 2;
//         if(mid * mid < x){
//             lo = mid;
//         }else{
//             hi = mid;
//         }
//     }
//     // you can put anything lo or high 
//     cout << setprecision(10) << lo << "\n" << endl;
// }

// nth root of x number


// 1). size of search space comes so the time complexity will be -> NLog(10^d)
// 2). as you want accuracies for d decimal for n numbers it will be N*(10^d) numbers
// 3). search space is constantly increasing 

// 4). we need to find n times square of a number

// double multiply(double mid, int n){
//     double ans = 1;
//     for(int i = 0; i<n; i++){
//         ans *= mid;
//     }
//     return ans;
// }          

// int main(){
//         double x;
//         int n;
//         cin >> x >> n;
//         double lo = 1, hi = x, mid;
//         double eps = 1e-6;   // 6 decimal places
//        // if we need to find for how many places the decimal will be accurate    like 1.44 - 1.40 then 0.04
//         while(hi - lo > eps){
//             mid = (hi + lo) / 2;
//       // if the searching element lies on right part square of the nth number 
//             if(multiply(mid, n) < x){
//                 lo = mid; 
//             }else{
//                 // we search on left part shifts high to mid 
//                 hi = mid;
//             }
//         }

//   // 1). For time complexity -- we are performing a binary search from lo = 1 to hi = x and on each iteration our search space reduces to half and it reducess till the our difference reaches to especialan so our total iterations will be log2((hi - lo)/eps) times and a function O(n) times also call for each times so our time complexity is O(N.log2(hi - lo)/eps)
//   // 2). For space complexity -- we are using constant spaces for lo, hi , mid which is O(1).

//         // you can put anything lo or high 
//         cout << setprecision(10) << lo << "\n" << endl;
//         cout << pow(x , 1.0/2);
//     }



         //   Video no . 55        ||       //  Nth root of a number using binary search

// double multiply(double mid, int n){
//     double ans = 1;
//     for(int i = 0; i<n; i++){
//         ans *= mid;
//     }
//     return ans;
// }
// int main(){
//     double x;
//     int n;
//     cin >> x >> n;
//     double lo = 1;
//     double hi = x, mid;
//     double eps = 1e-6;
//     while(hi - lo > eps){
//         mid = (lo + hi)/2;
       // middle element and multiple of n numbers lies on to the right part 
//         if(multiply(mid, n) < x){
//             lo = mid;
//         }else{
//             hi = mid;
//         }
//     }

//     cout << setprecision(5) <<  lo << endl;
// }         

//                    Video no. 56    ||   Binary Search Using Predicate function
// 1). High Binary Search Problem be solved easily by predicate function concept 


//                        Eko Eko
// 1). monotonic predicate function after somepoint always return true or false 
// 2). we have need of to devise an predicate function where only count of true will be 1 and false count will be zero or true is counted and false will as it is 
// 3). if we find an point wether true and false transitioned then we form our result 
// 4). we search the middle element and try to find whether it lies on left part or right part 
// 5). for T T T F F F F If i search for true and it lises on the middle then the current element are true or it lises into left part
// 6). we can easily found out where last true and last false lies 
// 

// 7). always declare globally array with greater than size of 10^6 to segmentation fault error

// #include<bits/stdc++.h>
// using namespace std;

// const int N  = 1e6 + 1;
// int n;  // n is no. of trees
// long long m;    // maximum height
// long long trees[N];

// bool isWoodSufficient(int h){
//         // question mentions we requite to count at which height of tree
//      long long wood = 0;
//      for(int i =0; i<n; i++){
//         if(trees[i] >= h){
//                 wood += (trees[i] - h);
//         }
//      }
//      // when wood is greater than maximum wood
//      return wood >= m;
// //      if(wood >= m) return true;
// //      else false
// }
// int main(){
//    cin >> n >> m;
//    for(int i =0; i<n; i++){
//         cin >> trees[i];
//    }
//    long long lo = 0, hi = 1e9, mid;
//    // T T T T T F F F F F
//    //     T --> then our search space lies onn right part
//    while(hi - lo > 1){
//         mid = (hi + lo) / 2;
//         if(isWoodSufficient(mid)){
//              lo = mid;
//         }else{  // it is situation where is points to right part and false 
//              hi = mid - 1;
//         }
//    }
//    //  we need to found out the maximum height 
//    if(isWoodSufficient(hi)){
//         cout << hi << endl;
//    }else{
//         cout << lo << endl;
//    }
//    // we can also design code for low and else but in question it not mentioned 
// }


// T.C = O(nlog(h))
// 1). For as these type try to found out predicate function 







//                   EKO EKO  

// const int N = 1e6 + 1;
// int n;
// long long m;
// long long trees[N];

// bool maxmwood(int h){
//         long long wood = 0;
//         for(int i = 0; i<n; i++){
//            if(trees[i] >= h){
//              wood += (trees[i] - h);
//         }
//         return wood >= h;
// }
// }
// int main(){
//         cin >> n >> m;
//         for(int i =0; i<n; i++){
//                 cin >>  trees[i];
//         }
//         int lo = 0 ,  hi = 1e6, mid;
//         while(hi - lo > 1){
//                 mid = (hi  + lo)/2;
//                 if(maxmwood(mid)){
//                       lo = mid;
//                 }else{
//                      hi = mid - 1;
//                 }
//         }
//         if(maxmwood(hi)){
//             cout << hi << endl;
//         }else{
//            cout << lo << endl;
//         }
// }

// T.C - O(nlogn)



//                       Stl contest Luv_C++

//1). for in the case of (a[i] + x)% m  then we can change it to  (a[i] % m + x % m) % m  where y is a[i] % m .. and we need to maximise a[i] % m + x % m
//2). for maximum in (a[i] + x) % m will be maximum for m-1 
//3). two conditions are possible for maximum of just before the m means m-1 (a[i] + x)% m  and (a[i] + x) that points out maximum of the modulo m
//4). 


// 5). for just maximum we can do using upper_bound (a, a+n) and m - x - 1 if x is added then it will point to the m - 1 which is maximum
// 6). if(m - x - 1) is not points to the end so we point our pointer to begning 
// 7). 



// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     long long m;
//     cin >> m;

//     // Use long long to store large values up to 10^15
//     vector<long long> arr(n);
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//         arr[i] %= m; // Reduce each element modulo m (optional optimization)
//     }

//     // Sort the array so that we can use binary search (upper_bound)
//     sort(arr.begin(), arr.end());

//     int q;
//     cin >> q;

//     while (q--) {
//         long long x;
//         cin >> x;

//         // Reduce x modulo m (doesn't change the result because we're using % m at the end)
//         x %= m;

//         // We want to find the largest (a[i] + x) % m
//         // Let's find the largest a[i] such that (a[i] + x) < m
//         // So we search for upper_bound of (m - x - 1)
//         auto ptr = upper_bound(arr.begin(), arr.end(), m - x - 1);

//         long long maxValue = 0;

//         // Case 1: Using the largest element in the array
//         maxValue = max(maxValue, (arr.back() + x) % m);

//         // Case 2: If upper_bound doesn't point to beginning, move one step back
//         if (ptr != arr.begin()) {
//             ptr--;
//             maxValue = max(maxValue, (*ptr + x) % m);
//         }

//         // Output the result for this query
//         cout << maxValue << endl;
//     }

//     return 0;
// }


// ***1). very important any time when procedding to solve any problem see for a brute force solution .... 
//          i). ask yourself or i would be solve this problem using loops or i can take points input into loop 
//         ii). thinks about after applying brute force is problem really getting solve in particular range of constraints.
//        iii). if i somehow get digonal of rectange then i being cabale of getting points of next rectangle it must be lies on to the parallel of their points. (y1 only parallels with y2)(x1 parallels with x2)
//         iv). now we can determine the the area rectangle by finding multiplication of difference of points base * height 
//         
//   

//  ***1). if you check for presence of value then set is a good option 
//     2). hash function are not predefined so we can not use unordered set primitive data types

// when p2 lies upper side i just reverse the points of p1 and p2
// p1 is always on first 

// #include <iostream>
// #include <vector>
// #include <set>
// #include <climits>
// #include <cmath>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     vector<pair<int, int>> points(n);       // To store all the input points
//     set<pair<int, int>> points_st;          // To check existence of any point in O(1) time

//     // Taking n input points
//     for (int i = 0; i < n; i++) {
//         cin >> points[i].first >> points[i].second;
//         points_st.insert(points[i]);
//     }

//     int ar_min = INT_MAX, ar_max = INT_MIN; // Initialize min and max area

//     // Loop through all pairs of points
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             auto p1 = points[i];
//             auto p2 = points[j];

//             // Skip if x or y coordinates are the same (won’t form rectangle corners)
//             if (p1.first == p2.first || p1.second == p2.second)
//                 continue;

//             // These are the other two corners of the rectangle
//             int x1 = p1.first, y1 = p2.second;
//             int x2 = p2.first, y2 = p1.second;

//             // Check if the other two corners exist to form a valid rectangle
//             if (points_st.count({x1, y1}) && points_st.count({x2, y2})) {   // both takes the t.c of O(logn)
//                 int area = abs(p1.first - p2.first) * abs(p1.second - p2.second);
//                 ar_min = min(ar_min, area); // Update min area
//                 ar_max = max(ar_max, area); // Update max area
//             }
//         }
//     }

//     // If no rectangle was found
//     if (ar_min == INT_MAX) {
//         cout << -1 << endl;
//     } else {
//         // Print max and min area found
//         cout << "Max Area: " << ar_max << ", Min Area: " << ar_min << endl;
//     }

//     return 0;
// }

//       t.c - O(log n)



//               Lufy needs food 

//  initially f amount of food 













//          // Time complexity of Recursion function 

// 1). first calculate how many function calls are there and calculate what is time complexity of each function , and give combinational summ of time complexity of function
// 2). for each case our each function divided into 2 , so some where on worst case total 2^n+1 calls are there 
// 3). for closing braces so total no. of function calls for n is 2^n+1 and O(1) total complexity will be O(2^n)

// 4). for merge sort question total time complexity from begining is o(n) and after dividing into two of each of subset takes O(n/2) time complexity for merging so at on subset level the t.c will be O(n) ... so at last level each merge takes O(1) at n level so its will be O(n) ... so total time complexity will be O(nlogn)


//               Ultimate Maths and Number theory 
// 1). Baasic Understanding of maths and Number theory must arises binnary numbers its an important topics 
// 2). binary numbers contain 1 and 0 
// 3). To convert binary numbers to decimal, simply multiply each digit by its place value and add the results
// 4). binary to decimal conversion how its done if we multiply and add 2^n bits at their place value
// 5). as their last bit is 0 to convert binary number its just invert to 1

// 6). xor is very tricky and important topic for questions 
// 7). if any in two numbers is 0 so together then thier and also be 0 where for or if any numbers 1 it returns 1 and if in any case two no. are same so their xor will be 0 otherwise 1.
// 8). L.S -> <<    3 << 1 --> 1  3 << x  L.S shift x bit to the left   R.S -> just shift your bit to the right.
// 9). maximum numbers should be made using 4 bits is 2^n-1 = 15 number    -->  our integers are of 32 bits so 32 number will included.

// 10). whenever would like to known the power of 2^n just shift your first bit for an countable n times  1 << n.

// 11). as you shift your bits for 1 >> n then total no. of digits will be n+1 ..


// #include<bits/stdc++.h>
// using namespace std;
// const int N = 1e5+10;

// int main(){
//       cout << INT_MAX << endl;
// //       int a = ()  
// // as you shift a bit with long numbers it also makes long number so dont be forget to make it long 
//       int a = (1LL << 31) - 1;
//       cout << a;
//       unsigned int b = (1LL << 32) - 1;
//       cout << b << endl;
//  // a bit of signed int is reserved for the sign (0 for positive and 1 for negative)
//  // where as u
// }


//                            Play With bits 
// 1). Lsb points out to the last bit (0th bit) in binary numbers  and nth bit in nth no. will be most significant bit (msb)
// 2). counting will always be proceed from the lsb to msb 
// 3). ina an binary number  1 bit - set   unset - 0 
// 4). so in 10111011 - bit representation with 1 = 6 and bit representation with 0 = 2
// 5). For checking nth bit is set or not, select another binary numbers whose nth bith is same as the current number and do & of both of them if result at nth bit is 1 then its nth bit be an set 
// 6). note* precedence binary element of 2^n is n times 1 .... like 2^4 -> 15 1111 
// 

// #include<bits/stdc++.h>
// using namespace std;

// void PrintBinary(int num){
//         for(int i = 10; i>= 0; --i){
//                 // it just shift ith bit of the number num
//                 cout << ((num >> i) & 1); 
//         }
//         cout << endl;
// }

// int main(){
//         PrintBinary(9);
//         int a = 9;
//         int i = 4;
//         // (1 << i describes 1 are in on ith bit)
//         if((a & 1 << i) != 0){
//                 cout << "set bit" << endl;
//         }else{
//                 cout << "not set bit " << endl;
//         }
//         // for set a bit we find a number whose ith bit is 1 and left shift the bit by 1 
//         PrintBinary((a | (1<<1)));
//         // for unset ith bit then we so pleased to formed the number whose nth bit is 0 for acheving this we choose a number whose ith bit is 0 and other bits are 1 and their and 
//   //           0 0 0 1 0 0 1
//   //to find    1 1 1 0 1 1 1
//   //formed &   0 0 0 0 0 0 1
//   //for searc  0 0 0 1 0 0 0
//   // uf we do and of search and find so we will get unset of formed 
//   // To invert the bit use ~ a 
  
//         // bit unset 
//         PrintBinary(a&(~(1<<3)));

//         // toogle 
//        // xor toggles the numbers xor of 0 with 1 togles 0 to 1 and xor of 1 with 0 toggles 1 to 0
//     // 1 << 2 -> means 1 shift left by 2 bits 
//        PrintBinary( a ^ ( 1 << 2));
//        PrintBinary(a ^ (1<< 3));
//        PrintBinary(a ^ (1 << 4));
//        // bit count defines how many set bits are there in a given number
//        // if 32 bits are there 
//        int ct = 0;
//        for(int i = 31; i>= 0; --i){
//         // if set of bit is not equal to 0
//          if((a & (1 << i)) != 0){
//                 ct++;
//          }
//        }
//        cout << ct << endl;
//        // inbuilt function for counting the number of set bit 
//        cout << __builtin_popcount(a) << endl;
//        // for long long type integers builtin_popcountll
//        cout << __builtin_popcountll((1LL << 35)-1) << endl;
// }

//               6 Amazing bit manipulation tricks 


// 1). Note* - Oth bit of odd number is always be 1 and 0th bit of even number is always be 0
// 2). & of any odd binary number with 1 is 0 - 000001101 & 000000001 -- 0 otherwise for even it gives 1

void PrintBinary(int num){
        for(int i = 10; i>= 0; --i){
                // extracts the ith bit from the right , 0 based of the number num by shifting num for it right i times which brings the desired bit to the lsb and then masking with 1 isolate that single bit 
                cout << ((num >> i) & 1); 
        }
        cout << endl;
}            

//         Trick 1 - Odd Even Check

// int main(){

//    for(int i =0; i<8; i++){
//         PrintBinary(i);
//         if(i&1){
//             cout << "Odd";   
//         }else{
//            cout << "Even";
//         }
//    }
// }

// 3). if you want to check for n binary number is even or odd then do n&1 if its true then odd otherwise even 
// 4). In comparision to bit manipulation techiniques modulo operations are very slower n%2

//   Trick - 2  ( multiply / Divide by 2 )

// Note* - For dividing a binary by 2 is done by Right shifting of a bit 
//         For multiplying Left shift for a bit will take care for that situation

// int main(){
//         int n = 8;   // 01000
//         cout << (n>>1) << endl;
//         cout << (n<<1) << endl;
//  // 1). Also implemented in binary search by shifting a bit after adding their 
//        //  cout << (hi + lo) >> 1
//         // 101 - (2^2*1 + 2^1*0 + 2^0*1) * 2
//         // 10 
// }

//       Trick 3 - Uppercase and Lower Case

// 1).  characters are internally sky value 
// NOte* - In capital letters the 5th bit are unsetted where as 5th bit is setted for small letters 
// NOte* - Conversion of Capital letters to small letters should be done effortlessely by just setting their 5th bit 
// NOte* - Fill in your memory 32 bit is an sky value of space 
// Note* - OR of capital letter with space character gives the small letter in result 
// bitset<8> - is a function which tells the compiler to display the binary number using 8 bits 
// bit(32) -> (0100000) 1 is at 6th bit 
// int(x) -> int conversion of an binary number x
// '_' -> represent as 0000001011111 with 95 (with 5th bit is 1 ) and A -> represent as 000001000001 with int(65)
// so we observed 5th bit of underscore is 1 and with toogling 5th bit of capital letter to small is done by '&' operation and small letter to capital by 'or' operation
// Upper to lower conversion - char('A' & '_')
// Upper to lower conversion - char('a' | ' ')
// for clearing lsb to ith bit - (a & (~((1<<i+1)-1)))
// for calculating a number is power of 2 or not then the and of the n & n-1 should not be true means false

// int main(){
//          for(char c = 'A'; c <= 'E'; c++ ){
//                 cout << c << endl;
//                 PrintBinary(c);
//          }
//          for(char c = 'a'; c <= 'e'; c++){
//                 cout << c << endl;
//                 PrintBinary(c);
//          }
//          char A = 'A';
//          // for convertig set a to result of turning of 5th bit of the character A using bitwise or with 1 shifted left by 5 bits
//          char a = A | (1 << 5);
//          cout << a << endl;
//         // as previous method capital letters are also converted into small letters with the unsetting of 5th bit
//          cout << char(a& (~(1<<5))) << endl;
//      // 1 shift 5 is 32 and sky value of 32 is 0    
//          cout << char(1<<5);
//     // 
//          cout << char('C' | ' ') << endl;

//         PrintBinary(32);
//         cout << bitset<8>(1 << 5) << endl;
        
      
//        PrintBinary(int('_'));    // 00001011111

//      cout << char('a' & '_') << endl;    // A
//         cout << int('_') << " ";
//      // By toglling or setting the 5th bit of an character A should be done by using or operation with space character
//      PrintBinary(int('A' | ' '));  // 000001100001
     
        // cout << char( 'a' | ' ' );
//  }


//    How to clear lsb from starting to the ith bit

// To clear all bits from the least significant bit (LSB) up to and including the ith bit, create a mask using ~((1 << (i + 1)) - 1) and apply it with bitwise AND to the original number

// int main(){
// // PrintBinary(59);
// // int a = 59;
// int i = 4;     // 1111111110000 --> inversion of 1111111110000 -> right shift of 1 by i + 1  00000100000 - 1 
// // 1).  create a mask of 1s in that range of (1 << (i+1)) -1 
// // 2). invert it using bitwise not to  get 0s in  lsb to  i and 1's elsewhere
// // 3). Apply the mask with bitwise AND to clear the desired bits

// // // int b = a & (~(1<<(i+1)) - 1);
// // cout << b << " ";
// // PrintBinary(27);
// int a = 99;
// PrintBinary(a);
// int b = (a & (~((1<<(i+1)) - 1)));
// PrintBinary(b);
// // it calculates msb by kepting ith element at last as it is
// int c = (a&((1<<(i+1))-1));
// PrintBinary(c);
// }


//           Trick 4 - How to check Power of 2 
// 1). if any existence number are their then power of 2 must have the '1' And operation with n - 1(makes 1 from 0th bit to n - 1 + 1)

// int main(){
//         int n = 16;
        
//         if(n & (n-1)){
//                cout << "not power of 2";
//         }else{
//                cout << " power of 2";
//         }
// }

//           Video no. 61 || Xor operator 
// 1). Xor of same two no. is always be  0
// 2). X^0 == x, x^0 == 0
// 3). Note* - x^y^z = x^z^y = y^x^z because xor is associative 
// 4).
#include<bits/stdc++.h>
using namespace std;
// int main(){
//         int a = 4, b = 6;
//          a = a ^ b; // a now holds the result of a XOR b.
//          b = b ^ a; // b --> a // b becomes the original value of a.// b --> a
//     //a becames  b = b ^ (a ^ b)  ==> b ^ b ^ a

//         a = a ^ b; //a-->b // a becomes the original value of b
//         // a = (a^b)^a ==> a^a^b --> b
//         cout << a << " " << b << endl;

// }
// *** Imp interview questions Given array a of n integers. All integers are present in event count except one. Find that one integer which has odd count O(N) time complexity and O(1) space 
// N < 10^5
// a[i] < 10^5
// sol - In between xor of all the even count will be zero and xor with odd number will easily showned in the result 
// int main(){
//       int n;
//       cin >>  n;
//       int x;
//       int ans = 0;
//       for(int i =0; i<n; i++){
//         cin >> x;
//         ans^=x;  //even count will be the erased and odd count will be showned 
//       }  
//       cout << ans << endl;
// }
//           Video no. 62 || Bitmasking 

// 1). Bit masking is a technique used in low-level programming language to manipuplate specific binary bits with in a binary number using and or xor and not combined with bitmask that modifies certain bits without altering other bits  (modifies data while leaving others unchanged)
//     Setting a bit - x = x | (1 << n);   // it set nth bit to 1
//     clearing a bit - x = x & (-1 << n);  // set the nth bit to 0
//     Toggling a bit - x = x ^ (1 << n);   // flips the nth bit 
//     checking if a bit is set if (x & (1 << n))  // bit n is a set 

//   Bit masking --> Bit + mask 
// Lets suppose there were multiple peoples want to select fruits from only 4 type of fruits
//  1-[Apple] 2-[Orange] 3-[grapes] 4-[[promogrenate]]
// person 1 selects - 2 3   1100 (bitmask) - 12
// person 2 selects - 1 3   1010 (bitmask) - 10
// person 3 selects - 2 1   0110 (bitmask) - 6

// if we stored into array - for common fruits(intersection) will be used -> t.c will becames -- O(n) 
// from now we stored a particular number which represent the particular bitmask which correctly stores which fruit you choose 


// Limitations of Bitmask - There is an limit to store value in flag we can't store value more than 32 bits for int and 64 bits for long long because it reaches to the maxlimit of binary type


//      Example -    Workers works for multiple days 
// Target - to find maximum of two workers our target is to find maximum of intersection of two workers 
// int main(){
//         int n; 
//         cin >> n;
//         vector<int> days[n];
//         for(int i =0; i<n; i++){
//           int num_workers;
//           cin >> num_workers;
//           for(int j=0; j<n; j++){
//                 int day;
//                 cin >> day;
//                 days[i].push_back(day);
//           }
         
//         }
        

// for(int i = 0; i< n; i++){
//         for(int j =0; j<n; j++){
//        // As i using days[i] and days[j]  then their time complexity -> O(n)
     
//         }
//         // 
// }
// }

// int main(){
//         int n; 
//         cin >> n;
//         vector<int> masks(n,0);
//         for(int i =0; i<n; i++){
//           int num_workers;
//           cin >> num_workers;
//           int mask = 0;
//           for(int j=0; j<num_workers; j++){
//                 int day;
//                 cin >> day;
//                 // For setting of particular day in vector 
//                 mask = (mask | (1 << day));
//           }
//          masks[i] = mask;
//         }
//         for(int i =0; i<n; i++){
//                 cout << masks[i] << endl;
//                 PrintBinary(masks[i]);
//         }
//    int max_days = 0; 
//    int person1 = -1;
//    int person2 = -1;
// for(int i = 0; i< n; i++){
//         for(int j =0; j<n; j++){
//        // As i using days[i] and days[j]  then their time complexity -> O(n)
//        // Intersection shows as common bit shared so and operation will be the best choice 
//           int intersection = masks[i] & masks[j];
//         // count of setted bits will be give the how many common days are there 
//          int common_days = __builtin_popcount(intersection);
//          cout << i << " " << j << " " << common_days << endl;
//          max_days = max(max_days, common_days);
//          cout << max_days;
//          if(common_days > max_days){
//                 max_days = common_days;
//                 person1 = i;
//                 person2 = j;
//          }
//         }
        
//         // 
// }
// cout << person1 << " " << person2 << endl;
// }
//  O(n^2)





// *Imp -> Return the number which have odd count  
// Given array a of n integers. All integers are present in even count except one.
//  Find that one integer which has odd count O(N) time complexity and O(1) space 

// 7
// 3 2 1 2 1 2 2

// int main(){
//         int n;
//         cin >> n;
//         int x;
//         int ans = 0;
//         for(int i =0; i<n; i++){
//                 cin >> x;
//                 ans ^= x;
//         }
//         cout << ans << endl;
// }


//           Video no. 63   ||   Subset Generation with bit masking 
// 1). Bit masking is binary representation of particular array ,subset or particular value
// 2). A bit mask is a bit of mask that represent a binary representation of a number 

// vector<vector<int>> subsets(vector<int>& nums) {
//         int n = nums.size();
//         int subset_ct = (1 << n); // Total number of subsets is 2^n
//         vector<vector<int>> subsets;
        
//         for (int mask = 0; mask < subset_ct; ++mask) {
//             vector<int> subset;
//             for (int i = 0; i < n; ++i) {
//                 if ((mask & (1 << i)) != 0) { // Check if the i-th bit is set
//                     subset.push_back(nums[i]);
//                 }
//             }
//             subsets.push_back(subset); // Add the subset to the result
//         }
        
//         return subsets;
//     }



// int main(){
//        int n;
//        cin >> n;
//        vector<int> v(n);
//        for(int i =0; i<n; i++){
//        cin >> v[i];
//        }
//    // the auto keyword instructs the compiler to automatially deduce the return type function
//        auto all_subsets = subsets(v);
//       for(auto subset : all_subsets){
//         for( int element : subset){
//                cout << element << " ";
//         }
       
//       }
//       cout << endl;
// }



//        GCD and LCM using euclid divisions algorithm 
// 1). gcd = greatest common divisor in the no. 
// 2). lcm = the lowest common multiple of the no.
// 3). a*b/gcd = lcm 
// 4). a*b/lcm = gcd
// 5). keep dividing untill the reamainder becames 0 
//     converts divisor -> divident 
//              remainder -> divisor

// int gcd(int a, int b){
//         if(a%b == 0) return a;
//         return(b, a%b);
// }
// int main(){
//         cout << gcd(30,40);
// }






//         Gcd and Lcm using Euclid algorithm   

//  divisor , divident 
// int gcd(int a, int b){
//         if(b == 0) return a;
//         return(b,a%b);
// }
// int main(){
//         cout << gcd(10, 20);
//         cout << 10*20/gcd(10,20) << endl;
// }



//           practice      Unique Xor Triplets 

// #include <iostream>
// #include <vector>
// #include <unordered_set>

// class Solution {
// public:
//     int uniqueXorTriplets(std::vector<int>& nums) {
//         int n = nums.size();
//         std::unordered_set<int> uniqueXORs;

//         // Iterate over all possible subsets using bitmasking
//         for (int mask = 0; mask < (1 << n); ++mask) {
//             int xorValue = 0;
//             for (int i = 0; i < n; ++i) {
//                 if (mask & (1 << i)) {
//                     xorValue ^= nums[i];
//                     cout << xorValue << " ";
//                 }
//             }
//             cout << xorValue << endl;
//             uniqueXORs.insert(xorValue);
//         }

//         return uniqueXORs.size();
//     }
// };

// int main() {
//     Solution sol;

//     std::vector<int> nums1 = {1, 2};
//     std::cout << "Unique XOR values count for [1, 2]: "
//               << sol.uniqueXorTriplets(nums1) << std::endl;

//     std::vector<int> nums2 = {3, 1, 2};
//     std::cout << "Unique XOR values count for [3, 1, 2]: "
//               << sol.uniqueXorTriplets(nums2) << std::endl;

//     return 0;
// }


//   Imp*       Video no. 65   Binary Exponentiation   (Recursive Method)
// 1). Binary Exponentiaion is used to prevent from precision errors 
// 2). pow(a,b) function always return double for prevention we can use modulo 
// 3). setprecision controls the no. of value to be displayed of floating point numbers 
// 4). We can't store maximum value using pow function so the modulo are being used for that cases  
// int main(){
// double d = 1e24;
// cout << fixed << setprecision(30) << d;
// }

//        for calculating power of two number ( O(n))
// 3). the time complexity is O(n) 
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int a = 2, b = 13;
//     int ans = 1;
//     for(int i = 0; i<b; i++){
//         ans *= a;
//         ans %= m;
//     }
//     cout << ans << endl;
// }

// for calculating power of two number 
//   2^4 = 2^2 * 2^2
//   for power of evn multiple - f(a,b) even -> f(a, b/2) * f(a, b/2)
//   for  power of odd multiple - f(a, b) odd -> a * f(a, b/2) * f(a, b/2)

// function calls led to the increase of time complexity 
// *** this algorithm reduces the no. of multiplications required bu recursively break down the exponentiation process 
// modules prevent integer overflow exponentiating numbers without a modulud quickly lead to extremly large results 
// modular exponentiation allows for efficient computation even with larger inputs 
//  res can be overflow so writing 1LL could be beneficial 

// 
// const int M = 1e9+7;
// int binaryrec(int a , int b){
//     if(b == 0) return 1;
     // recursively computes the smaller of res = binaryrec(a, b/2)
//     int res = binaryrec(a, b/2);
//     if(b&1){
//         return (a * ((res * res * 1LL) % M)) % M;
//     }else{
//    // expressed as squaring half the exponent 
//         return (res * res)%M;
//     }
// }

// int main(){
//     int a = 4, b = 4;
//     cout << binaryrec(a,b);
// }


//          Imp    binary exponential method iterative    (Iterative Method)

// 1). for a^b our target is find out setted bit b and calcuting their combination power sum of 2^n for every setted bit of b with the power of a 
// 2). for a^b we search for every setted bit of b we going to do a corresponding 2^position of setted bit and combinational sum of each bit will be showned as power of a and b.
// 3). to finding each setted bit we will check for 0th bit and left shift the numbers for each time and perform 2^n for each bits and add into previous combinational result.
// 4). 

// 3^15 --> 3(1101) --> 3^(2^3+2^2+2^0+2^1) 
// right shift the bit and convert and update with 3^n autonomously 
// time complexity will be log(b)
// b    a    ans
// 
// const int M = 1e9+7;
// int binaryrec(int a , int b){
//     int ans = 1;
//     // if 0th bit is setted or not 
//     while(b){
//     if(b&1){
//         // ans will be updated with 
//         ans = (ans*1LL* a) % M;
//     }
//     // a is successively squared in each iteration of the loop
//         a = (a * a);
//         b >>= 1;  // shift the bit for the one 
        
//     }
//     return ans;
// }

// int main(){
//     int a = 4, b = 4;
//     cout << binaryrec(a,b);
// }









//       for calculating power of two number ( O(n))

// int PowerRec(int a , int b){
//     if(b == 0) return 1;
//     long long result = PowerRec(a, b/2);
//     if(b&1){
//         return (a*(result*result));
//     }else{
//         return (result*result);
//     }
// }
// // t.c =- O(log b)
// int main(){
//     int a = 2 , b = 5;
//     cout << PowerRec(a,b);
// }



//     for caluclating n multiples using iterative method 

// int PowerRec(int a , int b){
//     long long M = 1e9 + 7;
//      int ans = 1;
//      while(b){
//      if(b&1){
//         ans = (ans * a) % M;
//      }
//         a = (a * a) % M;
//         b >>= 1;
//     }
//     return ans; 
// }
// // t.c =- O(log b)
// int main(){
//     int a = 2 , b = 5;
//     cout << PowerRec(a,b);
// } 

//        Cases of large exponentiation  (multiplication of two number)
// i). to solve exponentiation of large number .
// ii). a^b % M - (a%M)^b)%M
//  a =10^18
// iii). a*a % m  -> a + a + times -> i do modulo of every a at each step and add into the result one by one a + a % M , + a % M, + a%M
// iv). for O(m) -> we can run the loop for n times and compute sum and doing moulo with using a for n times
// v). The steps for multiplying two numbers are as follows -> 


// vi). Now we can apply long long int int in a multiple because we can easily fit it into ans and a and after doing modulous helps for shortening us 

// In every log n loop 2 log n loop will run so the time complexity will be 


// A = 10^ 9 , b= 10^9  M = 10^9
// long long M = 10^9;
// int binaryexp(long long a, long long b){
//     int ans = 1;
//     // if 0th bit is setted or not 
//     while(b > 0){
//     if(b&1){
//        // ans is assign to the result of calling the binaryexp function with arguments ans and a 
//         ans = binaryexp(ans, a);
//     }
  
//         a = binarymultiply(a,a);
//         b >>= 1;  // shift the bit for the one 
        
//     }
//     return ans;
// }
// // log^2(N)

// // vi). when m becames very large then use binary multiply 
// // This function efficiently multiplies two numbers a and b using binary representation of b by doubling a and halving b, 
// // adding a to the result only when the current bit in b is set. It ensures the result stays within the modulo 1e5 + 7.

// const int M = 1e5+ 7;
// int binarymultiply(long long a, long long b){      // (a + a) for b times
//         int ans = 0;
        
//         while(b > 0){
//         if(b&1){  // if b is setted means it is 1 and true 
      
//             ans = (ans + a) % M;
//         } 
//         // on each step we was successively adding the numbers 
//             a = (a + a) % M;
//             b >>= 1;  // shift the bit for the one 
            
//         }
//         return ans;
//     }
    
//     int main(){
//         int a = 4, b = 4;
//         cout << binarymultiply(a,b);
//     }

// //        Video no. 65  || Leetcode SuperPow || Large Exp Etf and Euler Theorem 

// long long M = 10^9;

//  b >= 10 ^9
//  b <= 10^18
// 2). if b and c very large number (a^b^c) % M  ->
// 3). (50^64^32) % 10^9 + 7  --> while loop runs for 64^32 times 
// 4). coprimes are the numbers when common factors is 1,  means gcd is 1 
// 5). Eular Totient Function - count of coprime numbers from 1 to n , the number from 1 to n are comprimes with n is etf value of that number 
// 6). such that count k ... then the such 1 <= k <= N  k, n are coprime 
// 7). phi(5) = 1, 2 , 3 , 4 
//     phi(6) = 2 , 3 , 4 , 6 = 2   1 and 5 is not included because these are coprimes only factors 1 
// 8). phi(n) = n * prime n/p (1-1/p)  --> prime n/p means prime factor 
// 9). phi(6) = prime factorisation ( 2 and 3) = 6(1-1/2)(1-1/3) = 2  --> p is distint divisors - we only count each prime once           
// 10). phi(12) = 4 = 12 * 2/3 * 1/2
// 11). a =_ (b mod (n))  --> this theorem tells a and b both should give same remainder when divided with n,,, so our remainder will be b , ii). --> n divides a - b
// 12).** (a^b % n) = (a^b%phi(n)) % M
// 13). (a^(b % phi(m)) % M
// 14). every prime no. should have n - 1 etf .. phi(n) - n(1-1/n) = n - 1 ... phi(13) = etf - (12)
// 15). ** if m is prime <--> (a^(b % m - 1) % M
// 16). ** if m is not prime <--> (a^(b % phi(m)))

// 17). 50^(64^32 % M -1) i can again calculated as binary exponentiation 
// *** Binary exponentiation quickly computes a^b mod m by squaring the base and multiplying it to the result only when the current bit is 1 ****

// const int M = 1e9 + 7;
// //    a^(b^c)
// int binaryexp(long long a, long long b, int m){
//     int ans = 1;
//     // we applied exponentian logic for each bit 
//     while(b > 0){
//     // if last signigicant bit is 1 then we need to multiply ans by the current value of a 
//     if(b&1){
//        // squares a for next bit 
//         ans = (ans * 1LL * a) % m;
//     }
//       // this applies contribution of a when the current bit of b is 1 that power in its binary representation 
//         a = (a*1LL*a) % m;
//         b >>= 1;  // shift the bit for the one 
        
//     }
//     return ans;
// }


// // the method efficiently computes large modulo m 

// int main(){
//     cout << binaryexp(40,binaryexp(45, 32, M-1), M);
// }


//               Super Pow (leetcode)
// Case 1- if b is extremly large and given as list [3, 2 , 1 , 0]
// 
// Sol - just iterate into the array and raise the current result to the power 10
// 

// int superpow(int a, vector<int>& b){
//     // for digit in b 
//     int ans = 1;
//       for (int digit : b){
//         ans = binaryexp(ans, 10, M);
//         ans = (ans*binaryexp(a,digit,1137)) % 1140;
//       }
//       return ans;
// }

// int main(){
//     vector<int> b ={1,0};
//     cout << superpow(2, b);
//     return 0;
// }  

//           Basics of Factors and Divisors 
// 1). To find Divisors of any no. do n % i == 0
// 2). you can also find count and sum 

// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int n; 
//     cin >> n;
//     int sum = 0;
//     int ct = 0;
//     for(int i = 1; i<= n ; i++){
//      //   i is a factor/divisor of n".  if it divides n exactly 
//         if(n% i == 0){
//             cout << i << endl;
//             ct++;
//             sum += i;   // add the divisors i to the total sum of i 

//         }
//     }
//     cout << ct << " " << sum << endl;
// }   // O(n)

//          1). (SQRT Method) Time Efficient method for divisors 

// Note - The total number of factors (divisors) of a number come in pairs. For each factor a less than or equal to √n, there is a corresponding factor b = n / a such that a × b = n. So, after the halfway point (square root of the number), the remaining factors are the multipliers (or pair factors) of the earlier ones.


// ➡️ 1 × 36
// ➡️ 2 × 18
// ➡️ 3 × 12
// ➡️ 4 × 9
// ➡️ 6 × 6

// int main(){
//     int n; 
//     cin >> n;
//     int sum = 0;
//     int ct = 0;

//           //* other half ways are same 
//     for(int i = 1; i<= sqrt(n); i++){

        
        
//      //   i is a factor/divisor of n".  if it divides n exactly 
//         if(n% i == 0){
//             cout << i << endl;
//             ct++;
//             sum += i;   // add the divisors i to the total sum of i 

//         }
//     }

//     cout << ct << " " << sum << endl;
//  } 


 //              using  i * i <= n;  

//  int main(){
//     int n; 
//     cin >> n;
//     int sum = 0;
//     int ct = 0;

//           //* other half ways are same 
//     for(int i = 1; i*i <= n; i++){
       
        
        
//      //   i is a factor/divisor of n".  if it divides n exactly 
//         if(n% i == 0){
//             cout << i << " " << n / i << endl;
//             ct += 1;  // on every pair 2 factor is formed 
//             sum += i;   // add the divisors i to the total sum of i 
//             // when paired factor is different from i add the factor and counts that factor  
//             if(n/i != i){  
//                 sum += n/i;
//                 ct += 1;
//             }
//         }
//     }

//     cout << ct << " " << sum << endl;
//  } 

// x = p1^n1 * p2^n2 * p3^n3  so all subset will be going to make divisors 
// subset of p1 , p2 and p3 are make one divisors 
// if x = p1^n1 * p2^n2 .... pn^n     count of divisors = (n1 + 1)(n2 + 1)(n3 + 1)    16 = (2*4) count (4 + 1 = 5)  if a number of x is written as a product of its prime factors raised to their respective powers then total no. of divisors will be the product of one more than each of the powers  
// sum of count of the formula 
// n = p1^a1 . p2^a2 .... pk^ak    then sum of the divisors will be sum = p1^(n1+1)-1/p1-1 * p2(n2+1)-1/p2-1 * p3(n^3+1)-1/p3-1


//          Prime Check and Factorisation 
// 1). prime number - two divisors 1(1,n)
// 2). *for every prime number their last divisors must be the prime nubers -- 
// 3). prime_factors.push_back(i);   // and we push our elements into the array that divides the divisor for each time 
//     n /= i;   // we are eliminating the divisors of each number one by one by dividing it by each time i divides n completely 

// int main(){
//     int n ;
//     cin >> n;
//     if(n == 1) return 0;
//     bool is_prime = true;
//     for(int i = 2; i <= n; i++){
//       if(i % n == 0){
//         is_prime = false;
//         break;
//       }
//     }
// }

// int main(){
//     int n ;
//     cin >> n;
//     vector<int> prime_factors;
//     for(int i = 2; i * i <= n; i++){
//       while(n % i == 0){
//        prime_factors.push_back(i);   // and we push our elements into the array that divides the divisor for each time 
//        n /= i;   // we are eliminating the divisors of each number one by one by dividing it by each time i divides n completely 
//     }
//     }
//     // so for handling last digit prime we check for ths loop 
//     if(n > 1){
//         prime_factors.push_back(n); 
//     }
//  O(sqrt n)
// for(int prime : prime_factors){
//     cout << prime << " ";
// }
// }












//             prime factorisation   (sieve algorithm) (all prime numbers)
// 1). mark all numbers from 1 to the n number is prime 
// 2). we pick first element cross out teir multiple elements amd move for next prime numbers and we cross out their multiples so eventually we find all the prime numbers 
// 1 2 3 4 5 6 7 8 9 
// 10 11 12 13 14 15 16 
// at the end it marks one for all of the prime numbers

// #include <bits/stdc++.h>
// using namespace std;

// const int N = 1e7;
// vector<bool> isprime(N, 1);

// int main(){
//     isprime[1] = isprime[0] = false;
//     for(int i =2; i<N; i++){
//         if(isprime[i] == true)
//       for(int j = 2* i; j <N; j += i){   // j += i because we want to remove multiple of the i 
//           isprime[j] = false;
//       }
//    }

//    for(int i =1; i<100; i++){
//     cout << isprime[i] << endl;
// }

// // T.c - for removing multiples of all numbers - n/2 + n/3 + n/4 .... n/n times 
// // n(1/2 + 1/3 + ...)  = n(log(n))
// // T.C - n(log log(n))


// int q;
// cin >> q;
// while(q--){
//    int num;
//    cin >> num;
//    if(isprime[num]){
//     cout << "prime\n";
//    }else{
//     cout << "NOt prime\n";
//    }
// }
// }







//          Prime Factorisation sieve algorithms 

// const int N = 1e7;
// vector<bool> isprime(N,1);

// int main(){
// isprime[0] = isprime[1] = false;
// for(int i =2; i<N; i++){
//      if(isprime[i] == true){
//      for(int j = 2*i; j < N; j += i){ 
//         isprime[j] = false;
//      }
// }
 
// }
// for (int i = 0; i< 100; i++){
//         cout << isprime[i];

// }
// }
// // T.c = n *log n log n
// int q;
// cin >> q;
// while(q--){
//         int num;
//         cin >> num;
//         if(isprime[num]){
//                 cout << "prime" << endl;
//         }else{
//                 cout << " non prime" << endl;
//         }
// }

// }
// }


//     Video no. 73   ||    Sieve Variations
// 1). Highest Prime
// 2). Lowest Prime
// 3). prime factorisation 
// 4). Divisors 

// 10 --> lowest prime - 2   , highest prime - 5

// const int N = 1e7;
// vector<bool> isprime(N,1);
// //  lowest prime tells lowest prime number in lp(i) and hp(i)

// vector<int> lp(N), hp(N);

// // ith vectors stores all the divisors of the ith vector 

// vector<int> divisors[N];
// // Modified Sieve for prime factorization 

// int main(){
// isprime[0] = isprime[1] = false;
// for(int i = 2; i<N; i++){
//     if(isprime[i] == true){   
//         lp[i] = hp[i] = i;   // for when high prime number and lowest prime number is same ..  this line assigning the highest prime number and lowest prime number when i is a prime number 
//      for(int j = 2*i; j < N; j += i){ 
//         isprime[j] = false;    // i is an prime number which divides j 
//         hp[j] = i;   // the last prime number whose going to mark j is false is the highest prime number 
//      if(lp[j] == 0){  // when i is the first prime then only marks lp[j] = false 
//         lp[j] = i;  // lowest prime can not be upgraded 
//      }
//      }
//     }

// }

// int num;
// cin >> num;
// // vector<int> prime_factors;
// // for getting count of that numbers put this into map 


// map<int , int> prime_factors;

// //  Prime factorisation of any number sieve method 
// while(num > 1){
//         int prime_factor = hp[num];  // hp[num] recomputes prime factor again and again 
//         // when the number can be divisibe by prime factor 
//         while(num % prime_factor == 0){
//                 num /= prime_factor;
//                 // prime_factors.push_back(prime_factor);
//                 // for finding count of prime_factor you can increase their count 
//                 prime_factors[prime_factor]++;
//         }
//         // O(log log n)
// }   

// //        for(auto factor: prime_factors){
// //            cout << factor << " " << endl;
// //        }

//        for(auto factor : prime_factors){
//           cout << factor.first << " " << factor.second << endl;
//        }

// }   
// for (int i = 1; i< 90; i++){
//         cout << lp[i] << " " << hp[i] << endl;
// }


//       Divisors via Sieve method

// #include<bits/stdc++.h>
// using namespace std;


// const int N = 1e5;
// vector<int> divisors[N];
// int sum[N];
// // 1). For finding divisors of each numbers for a particular range 
// // 2). 
// int main(){
     
// Loop over every number from 2 to N-1
// for (int i = 2; i < N; i++) {

//         // For each multiple of i, starting from i itself up to N-1
//         for (int j = i; j < N; j += i) {      
//             // Add i to the list of divisors of j
//             divisors[j].push_back(i);
//             // Add i to the sum of divisors of j
//             sum[j] += i;
//         }
//     }
            
//         // the loop runs for n/2 + n/3 + n/4 + n/5.... n so afte taking common n * (1/2 + 1/3 + 1/4) = n (log n)

//         for(int i =0; i<10; i++){
//                 cout << sum[i] << endl;
//                 for(int div : divisors[i]){
//                         cout << div << " ";
//                 }
//                 cout << endl;
               
//         }
//         }
        

//                Modified Sieve of Eratosthenes ||  

// The isprime array is used to keep track of which numbers prime.
// The outer loop runs through each odd numbers starting from 3.
// The j is jumps for i*2 times to skip even elements in between them. 
// The inners loop marks multiples of current prime as non prime 
// The multiples of i starts from i^2 to avoid redudant work 
// The result is updated to reflect the numbers of primes found marking the 


// class Solution {
//         public:
//             int countPrimes(int n) {
//                 if (n < 3) {
//                     return 0;
//                 }
//                 bool isprime[n];
        
//                 memset(isprime, true, n);
        
//                 int result = n / 2;
//                 for (int i = 3; i * i < n; i += 2) {
//                     if (isprime[i]) {
//                         int d = i * 2;
//                         for (int j = i * i; j < n; j += d) {
//                             if (isprime[j]) {
//                                 isprime[j] = false;
//                                 result--;
//                             }
//                         }
//                     }
//                 }
//                 return result;
//             }
//         };

//          Modular MUltiplicative inverse 

// 1). (A/B) % M = (A*B^-1/ M) = ((A % M) * (B^-1) % M) % M
// 2). (A * B) = 1 then it written as B is moular of 1
// 3). Run the loop For B =1 to M -1,,, (A * B) % M = 1 -- B is MM1 of a 
// 5). So B is lies in range of 1 <= B < M -1
// 6). MMI (Modular Multiplicative inversive)defines only when MM1 of A with M are coprimes .. coprimes - gcd(a, n)
// 7). A^(M-1) =_ 1 mod (M)        if A^M-1 divides by M will give the remainder 1 
// 8). A^(M-1) =_ 1 mod (M)   Fermet little theorem 
//      Condition for fermet - i).  m should be prime  ii). A is not the multiple of M
// 9). A^(M-2) =+ A^-1 mod (M) // Bin exp - log(N)
// 10). (A^(m-2)% M) = A^-1 
// 11). M-M-I = E-E-A 


// Function to perform binary exponentiation: (a^b) % m
// #include <iostream>
// using namespace std;

// int binexp(int a, int b, int m){      // (a + a) for b times
//     int result = 1;
    
//     while(b > 0){
//         if(b & 1){  // if b is setted means it is 1 and true 
//             result = (result * 1LL * a) % m;
//         } 
//         // on each step we was successively adding the numbers 
//         a = (a * 1LL * a) % m;
//         b >>= 1;  // shift the bit for the one 
//     }
//     return result;
// }

// // There are N children and K toffees . K < N 
// // count the no. of ways to distribute toffe among N students such that each students get 1 toffe only nCk
// // N < 10^9, k < N < 10^9
// // n! / ((n-r)! * r!)
// const int N = 1e6 + 10;
// int fact[N];
// const int M = 1e9 + 7; 

// int main() {
//     // Set the factorial of 0 as 1 because 0! = 1
//     fact[0] = 1;

//     // Precompute all factorials up to N using modulo M
//     // This loop fills the `fact` array with factorial values mod M
//     for (int i = 1; i < N; i++) {
//         // fact[i] = (fact[i-1] * i) % M
//         // 1LL is used to prevent integer overflow by promoting to long long
//         fact[i] = (fact[i - 1] * 1LL * i) % M;
//     }

//     int n, k;  // Declare two integer variables to store input values

//     // Take input from the user for n (total children) and k (toffees)
//     cin >> n >> k;

//     // Check if the input is invalid
//     // Condition 1: We cannot give toffees to more children than available (k > n)
//     // Condition 2: We only precomputed factorials up to N, so n must be less than N
//     if (k > n || n >= N) {
//         cout << "Invalid input or factorial out of range\n";  // Print error message
//         return 0;  // Exit the program early
//     }

//     // Calculate nCk = n! / (k! * (n-k)!) mod M
//     int num = fact[n];  // n!
//     int den = (fact[n - k] * 1LL * fact[k]) % M;  // (n-k)! * k!
//     int inv_den = binexp(den, M - 2, M);  // Modular inverse using Fermat's Little Theorem
//     int ans = (num * 1LL * inv_den) % M;  // Final answer

//     cout << ans << endl;
//     return 0;
// }

//     Number theory Questions 
// const int N = 100000;
// *** long long fact[N];  // ✅ Valid globally if N is a true compile-time constant

// 1). Albhabets -> k symbols , N size password, k > N
// 2). KCN --> N! * KCN = (K-N)! * N! ... Total no. of password generated by arranging k symbols 
// 3). a , b , c --> arrange --> 3 * 2 * 1 --> n! 

// const int N = 1e5 + 10;   // for calculating factorial 
// int fact[N];   // creating factorial array for precomputing it 
// const int M = 1e9 + 10; 

// int binexp(int a, int b, int m){      // (a + a) for b times
//     int result = 1;
    
//     while(b > 0){ 
//         if(b & 1){  // if b is setted means it is 1 and true       
//             result = (result * 1LL * a) % m;
//         } 
//         // on each step we was successively adding the numbers 
//         a = (a * 1LL * a) % m;   
//         b >>= 1;  // shift the bit for the one 
//     }
//     return result;     
// }
  
// int main(){
//     int t;     
//     cin >> t;
//     fact[0] = 1;   // first initialise fact 0 to 1;    
//     for(int i = 1; i<N; i++){
//         // computing i! modulo m using long long to prevent overflow condition 
//         fact[i] = (fact[i-1] * 1LL * i) % M;
//     }
//     while(t--){
//         int n, k;
//         cin >> n >> k;

//         if(n > k){
//             cout << 0 << endl;
//         }
//         int ans = 1;
//         // for (k-n!) * N! first we are multiplying k! 
//         ans = (ans * 1LL * fact[k]) % M;
//         // factorial k - n 
//         int den = fact[k-n] * 1LL * (fact[n]) % M; 
//         ans = ans * binexp(den, M-2, M) % M;
//         cout << ans << endl;

//         // O(T * LOg n)
//     }
// }
      


    
