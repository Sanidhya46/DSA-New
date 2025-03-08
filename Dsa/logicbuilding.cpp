// Logic building is about creating clear, step-by-step methods to solve problems using simple rules and principles. It’s the heart of coding.

// ****       1).Check wether the given number is even or odd

// 1). input the number from the user
// 2). check the number is divisible by 2 or not  if(num % 2 == 0) return even alse odd

// #include <iostream>
// using namespace std;

// int main(){
//     int num;
//     cin >> num;
//     if(num % 2 == 0){
//         cout << num << " is even" << endl;
//     }else{
//         cout<< num << " is odd" << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// bool even(int num){
//     return(num% 2 ==0);
// }

// int main(){
//     int num;
//     cout << "Enter a number ";
//     cin >> num;
//     if (even(num)){
//         cout << num << "is even" << endl;
//     }else{
//         cout << num << "is odd" << endl;
//     }
// }

//                              using bit-wise and operator

// #include <iostream>
// using namespace std;

// bool even(int number){
//     return (number & 1 == 0);     //bitwise and operator is used for checking the last digit of number
// }

// int main(){
//     int number;
//     cin >> number;
//     if(even(number)){
//         cout << "given binary number " << number << " is even" << endl;
//     }else{
//         cout << "given binary number " << number << " is odd" << endl;
//     }
//     return 0;
// }

// ****                       2). program to print multiplication table of a number 

/* algorithm - 1). input the number
               2). i = 1 , i < 11 , i++;
                    return n * i */

// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     int i;
//     cin >> n;
//     for (i=1 ; i<11 ; i++){
//         cout << n << "x" << i << "=" << n*i << endl;
//     }
//     return 0;
// };
                                       //Iterative approach
// #include <iostream>
// using namespace std;

// void table(int num){        // table is void function which have parameter num
//     for (int i = 1; i<= 10; i++){
//         cout << num << "x" << i << "=" << num * i << endl;
//     }
// }
// int main(){
//     int num;
//     cin >> num;

//     table(num);       //calling the void function table
// }


                                          // Recursive approach (program to print multiplication table of a number

//  For recursive approach -- 1). Ask yourself Can i solve the smaller version of the problem using thre same function
//                            2). identify base case  - what is the simplest case where i don't need further recursion , what is the case where result always be same
//                            3). identify recursiv case - How  i  can make the problem smaller 
// Algorithm - 1). input a number
//             2). make an recursive function base case -- if(n = 0) return 0; , recursive call -- num*times

// #include <iostream>
// using namespace std;

// void printtable(int num , int limit , int times){
//     if(times > limit)     // base case if times > limit 
//     return;
//     cout << num << "*" << times << "=" << num*times << endl;
//     printtable(num , limit , times + 1);      
// };

// int main(){
//     int num;
//     int limit;
//     int times;
   
//     cout << " Enter the number"; 
//     cin >> num;
//     cout << " Enter the limit"; 
//     cin >> limit; 
//     cout << " Enter  the times";
//     cin >> times;
//     printtable(num , limit , 1);
// }
                                      // printing n factorial of any number using recursive approach

// Algorithm -- 1). making an recursive function parameter -- int n 
//              2). base case -- int n == 0 return 0;  , recursive call -- n*(n-1)

// #include <iostream>
// using  namespace std;

// int recursive(int n) {
//     if(n == 0)        // base case
//        return 1;
    
//     return n * recursive(n - 1);       //each problems breaking down the poblem by simple calculation
// };

// int main(){
//   int n;
//   cin >> n;
//   cout << recursive(n);
// }

                                      // Program to find sum of  n natural numbers
// Algorithms - 1). Take the integer input n
//              2). initialising a variable to 0 which stores the sum of numbers
//              3).  

// #include <iostream>
// using namespace std;

// int sum(int n){
//     int total = 0;         // initialising variable total for storing sum on every iteration 
//     for( int i = 0; i<= n; i++ ){
//       total += i; 
//     }          //  on every iteration value of index are adding to total  
//     return total;    // for returing a storing variable is important to use them later
// }


// int main(){
//     int n;
//     cin >> n;

//     cout << sum(n);
// }


// #include <iostream>
// using namespace std;

// int sum (int n){
//     int sum = 0;       // making an variable sum for storing result after every iteration
//     for (int i = 0; i <= n; i++){
//         sum = sum + i;
//     }
//     return sum;        //returning an variablefor further use
// }


// int main(){
//     int n = 7;       // giving manual input by assigning variable to n
//     cout << sum(n);   // calling function is used for making compiler to jumpon particular function     .... calling function also come with consoling 
// }


                                                // formula  based approach n*n+1/2
// Algo -- 1). making an function with parameter integer n 
//         
//         2). initialising an variable which do the operation n * n+1/2

// #include <iostream>          //It is standard template library 
// using namespace std;

// int sum(int n){ 
//      int sum = n * (n+1)/2;
//      return sum;      // returning variable for further use 
// }

// int main(){
//     int n = 5;
//     cout << sum(n);    // calling the function too jump on particular function
// }

//  *****                                      3). Swap  two  numbers      i).Native  approach using third variables   ii). Expected approach withoutusing third variables   iii). Alternate approach (built in swap)
// i). Algo -- 1). making an function with three arguments int a , int b , swap 
//             2). assigning int a to swap , swap to b
//             3). print the variable int a and int b

// #include <iostream>
// using namespace std;

// int swap_num(int &a, int &b){         //passing pass by reference so variable  can be modify in calling function
//     int swap = a;    
//     int a = b;                 //value of b is assigned to a
//     int b = swap;              // value of swap is assigned to b
// }

// int main(){
//     int a = 10;
//     int b = 20;
//     cout << swap_num(a,b);
// }
                                    //     swapping native approach
// Algo -- 1). make an function which have two parameters
//         2). making an new variable temp which stores value of a , a = b , c = temp
// #include <iostream>
// using namespace std;

// void _swap(int &a , int &b){      // parameters are already defined in void function
//     int temp =  a;
//     a = b;      //  value of b stores in a
//     b = temp;   
//     cout << a << " " << b << endl;
// };

// int main(){
//     int a = 10;
//     int b = 40;
//     _swap(a,b);
// }

//                                    4). find closest number to n which is divisible by m
// Algo -- 1). defining an function which have two parameter n and m 
//         2). initialising closest and minDifference for keep tracking
//         2). making for loop ( i = n - abs(m); i <= n + abs(m); i++ ) 
//                   i). If i % n == 0 
//                   ii). int difference = abs(n - i)
//                   iii). if (mindifference > difference || (difference == mindifference && abs(i) > abs(closest))) 
//                          update closest multiple  closest = i;
//                          update minDifference = difference

// #include <iostream>
// #include <climits>      // header file for defining limits
// using namespace std;
// int closest = 0;  // keep tracking of closest
// int mindifference = INT_MAX;   // set initial minimum difference to the hghest  
// int difference;
// int Closest_Sum(int n, int m){
//     for(int i = n-abs(m); i<= n + abs(m); i++){
//         if (i % m == 0)
//         int difference = abs(n - i);       //it tracks the difference of n and i in every iteration
//         if(difference < mindifference || (difference == mindifference && abs(i) > closest)) {
//             closest = i;   // update the closest 
//             mindifference = difference;
//         }
//         return closest;
//     }
// }

// int main(){
//     Closest_Sum(10,20);
// }


// #include <iostream>
// using namespace std;
// #include <climits>

// int closest = 0;
// int mindifference = INT_MAX;    // setting the mindifference to the highest

// int Closest_Sum(int n, int m){
//     for ( int i = n - abs(m); i < n + abs(m); i++){
//         int difference = abs(n - i);
//         if(n % m == 0){
//             return n;
//         }
//         if(i % m == 0)
//         if( difference < mindifference || (difference == mindifference && abs(i) > closest )){
//             closest = i;
//             mindifference = difference;
//         }
//     }
// }

// int main(){
//     cout << Closest_Sum(10,2) << endl;
// }

//                           5). The dice problem   i). using native approach   ii). using sum of two sides

// #include<iostream>
// using namespace std;

// void dice_(int n){
//      if(n == 2){
//           cout << 5;
//      }
//      else if(n == 4){
//           cout << 3;
//      }
//      else if(n == 3){
//           cout << 4;
//      }
//      else if(n == 6){
//           cout << 1;
//      }
//      else if(n==5){
//           cout << 2;
//      }else{
//           cout << 6;
//      }
// }
// int main(){
//      int n = 4;
//      dice_(n);
// }
//  T.c - O(1)      //check n one times
//  S.C - O(1)      //


                                  // using  sum of two sides
// #include<iostream>
// using namespace std;

// void dice_(int n){
//      int m = (7 - n);
//      cout << m;
// }

// int main(){
//      int n = 1;
//      dice_(n);
// }
// T.C - O(1)
// S.C - O(1)

//                             6). program for nth term    1). native approach
// #include<iostream>
// using namespace std;

// void nth_term(int a , int d, int N){
//      for(int i = 1; i< N; i++){
//           a += d;
//      }
//      cout << "nth term count is" << a;
// }
// int main(){
//      int a = 2;
//      int d = 1;
//      int N = 5;
//      nth_term(a,d,N);
// }
//                             by formula T(n)  = a + (N-1)d
// #include<iostream>
// using namespace std;

// void nth_term(int a, int d, int N){
//      int N_th = a + (N - 1)* d;
//      cout << "nth term is "<< N_th;
// }
// int main(){
//      int a = 2;
//      int N = 5;
//      int d = 1;
//      nth_term(a , d , N);
// }

// T.c - O(1)
// S.C - O(1)

//                       7).  Program to find nth term of geometric progression   i). using iterative method
// #include<iostream>
// using namespace std;

// void _Gp(int a , int r, int N){
//      for(int i = 1; i < N; i++){
//           a *= r; 
//      }
//      cout << "Nth term of an series is " << a;
// }
// int main(){
//      int a = 2;
//      int r = 3;
//      int N = 5;
//      _Gp(a,r,N);
// }
//  T.C - O(n)
//  S.C - O(1)
                                   //  gp using formula
// #include<iostream>
// #include<cmath>
// using namespace std;

// void _Gp(int a , int r, int N){
//      int Nth_term = (a * (int)(pow(r,N-1)));
//      int Nth_term = (a * (int)(pow(r,N-1)));
//      cout << "nth term is " << Nth_term;
// }

// int main(){
//      int a = 2;
//      int r = 3;
//      int N = 5;
//      _Gp(a,r,N);
// }
// T.C - O(log(n))       // using built in function pow
// S.C - O(1)

//                    8). Program for sum of geometric series   i). native method
// #include<iostream>
// using namespace std;

// void gp_sum(double a, double r , int n){
//      double sum = 0;       // sum variable for storing sum 
//      double term = a;
//      for( int i = 0; i < n; i++){
//           sum += term;   // adding current term to sum
//           term *= r;     // on each iteration r is multiply to the term
//      }
//      cout << "the sum is " << term;
// }
// int main(){
//      double a = 1;
//      double r = 0.5;
//      int n = 3;
//      gp_sum(a,r,n);
// }
//                              using iterative method  (brute force)
// #include<iostream>
// using namespace std;

// void gp_sum(double a , double r, int n ){
//      double sum = 0;
//      double term = a;
//      for (int i = 0; i < n; i++){
//           sum += term;
//           term = term*r;
//      }
//      cout << " the sum of term is " << sum;
// }
// int main(){
//      double a = 1;
//      double r = 0.5;
//      int n = 3;
//      gp_sum(a, r , n);
// }
//                                    using formula   (a * (1-pow(r,n))) / 1-r
// #include<iostream>
// #include<cmath>
// using namespace std;

// void gp_sum(double a , double r, int n){
//      double sum = (a * (1 - pow(r,n)))/ (1-r);
//      cout << "the sum of nth term is " << sum;
// }
// int main(){
//      double a = 1;
//       double r = 0.5;
//       int n = 3;
//       gp_sum(a, r , n);
// }

//  T.C - O(log(N))   - by using built in function pow

//                     9). Simple interest 
// #include<iostream>
// using namespace std;

// int simple_interest(int p, int r, int t){
//      return (p * r * t ) / 100;
// }
// int main(){
//     int SI = simple_interest(10,20,30);
//     cout << " the sum of nth term is " << SI;
// }   
//  T.C - O(1)      // constant operation no matter of input values
//  S.C - O(1)     // fixed no. of variables no additionally memories

//                     10). Area of circle upto 5 decimal places 
#include<iostream>
#include<iomanip>      // input output manipulators ia an library provide tools for format data
#include<cmath>       // provides collection of mathematical functions
#include<string>
using namespace std;

// double Area(float r){
//      return (M_PI * r * r);
// }
// int main(){
     
//       cout << fixed << setprecision(7) << Area(1);
// }

//  T.C - O(1)  - constant operation , does not depend upon input
//  S.C - O(1)  - does not need extr spaces like array 


//                                    ---   Logic Problems   ---   

//                                 1). Sum of digits
//                       i). using iterative approach  -- (for loop (string num))

// int Sum_digits(int n){
//      string num = to_string(n);
//      int size =num.length();
//      int sum = 0;
//      for(int i = 0; i < size; i++){   //  O(1)  -- doing simple operation
//           int last = n % 10;      //  extracts the last digits after each iteration
//           sum += last;           // Add last digits to the sum
//           n /= 10;               // removes last digits in each iteration
//      }
//      return sum;

// }
// int main(){
//      int n = 789;
//      cout << Sum_digits(n);
// }
//  T.C = O(log n)     //creates a string of length equal to number of digits
//  S.C - O(1)
//                     i).     using iterative approach     -- (while loop)   

// int Sum_digits(int n){
//      int sum = 0;  // starting poiint of sum variable
//      while(n!=0){      // Loop condition 
//       int last = n % 10;   //check the last digit in each iteration
//       sum += last;        // adding each last digit into sum
//       n /= 10;           // removing last digit after every iteration because it already added into sum

//      }
//      return sum;
// }
// int main(){
//      int n = 55;
//      cout << Sum_digits(n);
// }

//                     ii). using recursive approach
// int Sum_digits(int n){
//      if(n == 0)       // base case
//      return 0;
//      int last  = n % 10;
//      return(last) + Sum_digits(n/10);      // recursive case ,  it returns the last digit of n added to the sum of the digits of the remaining number using recursion until n becomes 0
// }
// int main(){
//      int n = 90;
//      cout << Sum_digits(n);
// }
// T.C - O(log10n)      // number of digits in n
// S.C - O(log10n)        // each recursive calls adds new frame to call stack

//                                 2). Reverse digits 
//        i). reversing digits ( iterative approach)

// int Rev_digits(int n){
//      int rev = 0;
//      while(n != 0){
//           rev = rev * 10 + n % 10;      // on each iteration get last digits and move it into 10th digits after every iteration
//           n /= 10;         //  removing every last digits after every iteration which is already stored

//      }
//      return rev;
// }
// int main(){
//   int n = 100;
//   cout << Rev_digits(n);

// }

//                  ii). revrsing digits using recursion 
//  Algo -- 1). using recursion base case 
// int Rev_digits(int n){
//      if(n==0){
//      return 0;
//      }
//      int rev_num = 0;
//      int digits = floor(log10(n));    // it is used for calculating number of digits
     
//      return (n % 10) * pow(10, digits) + Rev_digits(n/10);

// } 
// int main(){
//      int n = 100;
//      cout << Rev_digits(n);
   
// }
//                     using string
// #include<algorithm>

// int Rev(int n){
//      string s = to_string(n);
//      reverse(s.begin(),s.end());
//      n = stoi(s);
//      return n;
// }
// int main(){
//      int n = 500;
//      cout << Rev(n);
// }

//                          3). Primality test and school method
// school method   

// int prime(int n){
//      if ( n <= 0)
//       return false;
//      for (int i = 2; i < sqrt (n); i++){
//           if(n % i == 0){
//                cout << "not prime";
//            return false;
//           }
//      }
//      cout << "the no. is prime";
//      return true;
// }
// int main(){
//      int n = 5;
//      cout << prime(n);
// }
//  T.C - O(n)
//  S.C - O(1)

//                          4).Program to calculate distance between two points
// double dist(int x1, int x2, int y1, int y2){
//       return sqrt(pow(x2 - x1, 2) + pow(y2 -y1,2));
      
// }
// int main(){
//      int x1 = 3;
//      int x2 = 7;
//      int y1 = 4;
//      int y2 = 7;
//      cout << fixed << setprecision(7) << dist(x1,x2,y1,y2);
// }
//  T.C - O(1)
//  S.C - O(1)  -- constant space no extra spaces

//                           5). Check triangle valid or not
// int triangle(int a, int b , int c){
//      if((a + b >= c) && (a + c >= b) && (b + c) >= a){
//      cout << "triangle is valid";
//      }else{
//           cout << "triangle is not valid";
//      }
// }
// int main(){
//      int a = 60;
//      int b = 50;
//      int c = 70;
//      triangle(a,b,c);
// }
//  T.C - O(1)   -- basic arithmetic operation
//  S.C - O(1)

//                          6). Rectangle is overlap or not
// struct point{
//      int x , y;
// };
// bool overlap(point l1, point l2, point r1, point r2){     // point is user defined data type
//      if((l1.x > r2.x || l2.x >  r1.x) || (r1.y > l2.y || r2.y > l1.y ))
//        return false;
//      return true;
// }
// int main(){
//      point l1 = { 0, 10 }, r1 = { 10, 0 };
//      point l2 = { 5, 5 }, r2 = { 15, 0 };
//      if(overlap(l1,l2,r1,r2)){
//           printf("overlap rectangle");
//      }else{
//           printf("not overlap");
//      }
// }
//  T.C - O(1)  -- arithmetic operations
//  S.C - O(1)

//                         7). factorial of a number
// int fact(int n){
//      if(n == 0)
//         return 1;
//      int result = n * fact(n -1);
//      return result;
// }
// int main(){
//    int n = 3;
//    cout << fact(n);
// }

//                         8). Program for square root of integer  i). native method(loop)
// int square(int  n){
//      int root = 0;
//      while (root * root <= n){
//       if(root * root == n)
//         return root;
//      root++;
//      }
//      return -1;
// }
// int main(){
//      int n = 16;
//      int root;
//      int result = square(n);
//       if(result == -1){
//           cout << "no square root ";
//       }else{
//           cout << "square root found " << result;
//       }
      
// }

// int square(int n){
//      int root = 0;
//      while(root * root <= n){
//           if(root * root == n)
//            return root;
//            root ++;
//      }
//      return -1;
// }
// int main(){
//      int n = 16;
//      int result = square(n);
//      if(result == -1){
//           cout << " no root found ";
//      }else{
//           cout << " root found " << result;
//      }
// }
// T.C - O(sqrt n)
// S.C - O(1)

//                                        using formula   exp*0.5*log(n)  --   T.C - O(1)
// int sqrt(int n){
//     int result = exp(0.5*log(n));
//     if((result + 1) *(result + 1) <= n){
//        result++;
//     }
//     return result;
// }
// int main(){
//      int n = 25;
//      cout << sqrt(n);
// }
//                                        binary search   T.C - log(n)
// int sqrt_binary(int n){
//      int low = 1;
//      int high = n;
//      int result = 1;
//      while(low <= high){
//           int mid = (low  + (high - low)/ 2);
//           if(mid  * mid >= n){
//                result = mid;
//                high = mid - 1;
//           }else{
//                low = mid + 1;
//           }
//      }
//      return result;
// }
// int main(){
//      int n = 16;
//      cout << sqrt_binary(n);
// }

//                            9). Program for sum of squares of n natural numbers  i). iterative method
// int Sum_Square(int n){
//      int result = 0;
//      while(n >=0 ){
//          result += pow(n,2);
//          n--;
//      }
//      return result;
// }
// int main(){
//      int n =2;
//    cout << Sum_Square(n);
// }

// int Square_sum(int n){
//      int result = 0;
//      while(n >= 0){
//         result += pow(n,2);
//      n--;
//      }
//      return result;
// }
// int main(){
//      int n=2;
//      cout << Square_sum(n);
// }

//                                           ii). squares of n natural numbers using recursion
// int Square_rec(int n){
//      if(n == 0)
//       return 0;
//      return (n * n) + Square_rec(n -1);
// }
// int main(){
//      int n =  3;
//      cout << Square_rec(n);
// }
//    T.C - O(n)
//    S.C - O(n)    //each call add frame to stack

// int Square_rec(int n){
//      if( n == 0)    // base condition
//        return 0;
//      return (n*n) + Square_rec(n -1);
// }
// int main(){
//      int n = 2;
//      cout << Square_rec(n);
// }

// int count_cubepairs(int n){
//      int count = 0;
//      int a = 1;
//      int b = cbrt(n);
//      while( a <= b){
//           int sum = pow(a,3) + pow(b,3);
//           if(sum == n){
//                count += 2;
//           a++;
//           b--;
//           }else if(sum < n){
//                a++;
//           }else{
//                b--;
//           }
//      }
//      return count;
// }
// int main(){
//    int n = 9;
//    cout << count_cubepairs(n);
// }

//  T.C - O(n pow 1/3)
//  S.C - O()

//                                              10). Program to find GCD
//                        i). native approach
// int GCD_native(int a, int b){
//      int result = min(a,b);
//      while(result > 0){
//        if(a % result == 0 && b % result == 0){
//         break;
//      }
//      result --;
//      }
//      return result;
// }
// int main(){
//      int a = 100;
//      int b = 35;
//      cout << GCD_native(a,b);
// }

//                           ii). ecludean alggorithm
// int GCD_euclidean(int a, int b){
//      if(b == 0)
//        return a;
//      GCD_euclidean(b , a % b);
// }
// int main(){
//      int a = 35;
//      int b = 100;
//      cout << GCD_euclidean(a,b);
// }
//   T.C - O(log(min(a ,b)))
//                         iii). using built in function
// #include<algorithm>
// #include<numeric>
// int GCD_euclidean(int a, int b){
//      return __gcd(a, b);
// }
// int main(){
//      int a = 35;
//      int b = 100;
//      cout << GCD_euclidean(a,b);
// }
//                             11). Program to find the LCM of two number
//             i) native approach with times of smallest no.
// int LCM(int a, int b){
//      if(a == 0 || b == 0){
//           cout << "LCM is undefined ";
//           return 0;
//      }
//     int times = 1;
//     while(true){
//        if (a * times % b == 0)
//          break;
//        times++;
//     }
//     return a*times;
// }
// int main(){
//      int a = 80;
//      int b = 40;
//      cout << LCM(a , b);
// }
//  T.C - O(b)   --  Not valid

//                    ii). native approach for loop by highest number -- O(min(a,b))
// int LCM(int a, int b){
//     int smallest = min(a,b);
//     int greatest = max(a,b);
//     for(int i = greatest; ;i+= greatest){
//         if(i % smallest == 0)
//           return i;
//     }
    
// }
// int main(){
//   int a = 12;
//   int b = 18;
//   cout << LCM(a,b);
// }

//                    12). Perfect number
//           Native APProach divisor sum method 
// bool perfect(int n){
//      int sum = 0;
//      for (int i = 1; i < n; i++){
//            if(n % i == 0){
//                sum += i;
//            }
//      }
//      return sum == n;
// }
// int main(){
//      int  n = 5;
//      if(perfect(n)){
//         cout << "true";
//      }else{
//           cout  << "false";
//      }
// }

//            perfect number native approach
// bool perfect(int n){
//      int sum = 0;
//      for(int i = 1; i< n; i++){
//           if(n % i == 0){
//                sum += i;
//           }
//      }
//      return sum == n;
// }
// int main(){
//      int n = 6;
//      if(perfect(n)){
//           cout << "true";
//      }else{
//           cout << "false";
//      }
// }

//                Expected approach
//                   13). Add two fractions

//                  14). FiZZ BuZZ
//        Native approach 
#include<iostream>
using namespace std;
#include<vector>
// vector<string> FiZZbuZZ(int n){
//      vector<string> res;
//      for(int i = 1; i<=n; i++ ){
//           if(i % 3 == 0 && i % 5 == 0){
//                res.push_back("FizzBuzz");
//           }else if(i % 5 == 0){
//                res.push_back("Buzz");
//           }else if(i % 3 == 0 ){
//                res.push_back("Fizz");
//           }else{
//                res.push_back(to_string(i));
//           }
//      }
//      return  res;
// }
// int main(){
//      int n = 15;
//      vector<string> res = FiZZbuZZ(n);
//      for (const string& s : res) {
//           cout << s << " ";
//       }
// }
//                      by taking empty string
// vector<string> FiZZbuZZ(int n){
//      vector<string> res;
     
//      for(int i = 1; i<=n; i++ ){
//           string s = "";
//           if(i % 3 == 0 && i % 5 == 0){
//                s.append("FizzBuzz");
//           }else if(i % 3 == 0){
//                s.append("Fizz");
//           }else if(i % 5  == 0){
//                s.append("Buzz");
//           }else{
//                s.append(to_string(i));  //adding i if no fizz buzz found
               
//           }
//           res.push_back(s);
//      }
//      return  res;
// }
// int main(){
//      int n = 15;
//      vector<string> res = FiZZbuZZ(n);
//      for (const string& p : res) {
//           cout << p << " ";
//       }
// }
// vector <string> FizzBuzz(int n){
//      vector<string> res;
//      for(int i = 1; i <= n; i++){
//           string s = "";    // clear sentences after every iteration
//           if(i % 3 == 0  && i % 5 == 0){
//                s.append("FizzBuzz");
//           }else if(i % 5 == 0){
//                s.append("Buzz");
//           }else if( i % 3 == 0){
//                s.append("Fizz");
//           }else{
//                s.append(to_string(i));
//           }
//           res.push_back(s);
//      }
//      return res;
// }
// int main(){
//      int n = 30;
//      vector<string> res = FizzBuzz(n);
//      for (const string& p : res) {
//           cout << p << " ";
//       }
// }
//  T.C - O(n)
//  S.C - O(n)   -  for storing the result
//                           using method hashing unordered map
#include<unordered_map>
// vector<string> FizzBuzz(int n){
//      vector<string> res;
//      unordered_map<int , string> mp = {{3 , "Fizz"} , {5 , "Buzz"}};    // unordered map for key value indexes
//      vector<int> divisors = {3,5};    //List for iterating
//      for(int i = 1; i<= n; i++){
//           string s = "";     // clear the string after each iteration
//           for(int d : divisors){
//                if(i % d == 0){
//                     s.append(mp[d]);;
//                }
//                if(s.empty()){
//                s.append(to_string(i));
//                } 
//           }
//           res.push_back(s);     //push backing s into res vector  
//      }
//      return res;
     
// }
// int main(){
//      int n = 30;
//      vector<string> res = FizzBuzz(n);
//      for (const string& p : res) {
//           cout << p << " ";
//       }
// }
//   T.C - O(n)
//   S.C  - O(n)

// vector<string> FizzBuzz(int n){
//      vector<string> res;
//      unordered_map<int , string> mp = {{3, "Fizz"}, {5,"Buzz"}};
//      vector<int> divisors = {3,5};   // array vector 2 elements
//      for(int i = 1; i<= n; i++){
//           string s = "";
//         for(int d : divisors){
//           if(i % d == 0){
//                s.append(mp[d]);     //add value into s of d
//           }
//      }
//           if(s.empty()){
//                     s.append(to_string(i));
//           }

          
        
//         res.push_back(s);
//      }
//      return res;
// }
// int main(){
//      int n = 30;
//      vector<string> res = FizzBuzz(n);
//      for (const string& p : res) {
//           cout << p << " ";
//       }
// }

//                                 13). Count set bits in an integer
// unsigned int countsetbits(unsigned int n){
//      int count = 0;
//      while(n){
//           count += n&1;
//           n = n >> 1;
//      }
//      return count;
// }
// int main(){
//      unsigned int n = 9;
//      cout << countsetbits(n);
//      return 0;
// }
//    T.C - O(log n)
//    S.C - O(1)

//                        b). using recursion method
// unsigned int countsetbits(unsigned int n){
//      if(n == 0){
//           return 0;
//      }else{
//           return (n & 1) + countsetbits(n >> 1);
//      }
// }
// int main(){
//      int n = 9;
//      cout << countsetbits(n);
// }
//        T.C - O(log n)      // n to k bits (log2n) shifting on each operation so becomes log n
//        S.C - O(1)
//                        c). by using bult in library builtin_popcount

// unsigned int countsetbits(unsigned int n){
//     return __builtin_popcount(n); 
// }
// int main(){
//      cout << countsetbits(9);
// }

//                       14). Nth fibonacci number
//           a). memoization    // better version for handlling recursion
// int fibonacci(int n, vector<int> memo){   // Helper function
//        if(n <= 1){      // base case 
//           return n;
//        }
//        if(memo[n] != -1)   // core of memoization upgrade only when it have to used
//           return memo[n];
//        memo[n] = fibonacci(n -1, memo) + fibonacci(n -2, memo);
//        return memo[n];

//      }
// int nthfibonacci(int n){
//      vector<int> memo( n+1, -1);  // creates memoization array of n + 1 elements each initialised to -1
//      return fibonacci(n , memo);
// }
// int main(){
//      int n = 4;
//      cout << nthfibonacci(n);
// }

//                  a). memoization 
// int fibonacci(int n, vector<int> arr){       // helper function
//     if(n <= 1){
//       return n;
//     }
//     if(arr[n] != -1)   // if result is not -1 means already calculated so return -1;
//       return arr[n];
    
//     arr[n] = fibonacci(n-1, arr) + fibonacci(n-2, arr);
//       return arr[n];

// }
// int nthfibonacci(int n){
//      vector<int> arr(n +1, -1);   // n + 1 elements each -1 in starting
//      return fibonacci(n, arr);
// }
// int main(){
//      int n = 4;
//      cout << nthfibonacci(n);
// }

//                    b). dp for nth fibonacci number
// int fibonacci(int n){
//      if(n <= 1)     //edge case
//        return n;
//      vector<int> dp(n + 1);
//      dp[0] = 0;
//      dp[1] = 1;

//      for(int  i = 2; i<= n; i++){
//           dp[i] = dp[i-1] + dp[i-2];
//      }
//      return dp[n];
// }
// int main(){
//      int n = 5;
//      cout << fibonacci(n);
// }
//                        b). dp for nth fibonacci number
// int fibonacci(int n){
//      if(n <= 1)
//        return n;
     
//      vector<int> dp(n + 1);
//      dp[0] = 0;
//      dp[1] = 1;
//      for(int i = 2; i<= n; i++){
//        dp[i] = dp[i-1] + dp[i-2];
//      }
//      return dp[n];
// }
// int main(){
//      int n = 5;
//      cout << fibonacci(n);
// }
//    T.C - O(n) - the loops run for 2 to n 
//    S.C - O(n) - extra array to store elements
// 
//                   15). Program for decimal to binary conversion
//         a).division by 2 - log(n)
// #include<algorithm>
// string binary(int n){
//     string bin = "";
//       while(n > 0){
//       int bit = n % 2;
//         bin.push_back('0' + bit);
//       n /= 2;
//       }
//     reverse(bin.begin(),bin.end());
//     return bin;
// }
// int main(){
//      int n = 17;
//      cout << binary(n);
// }
//  T.C - O(log n)   // while loop - log(n),   inside loop - O(1), reverse string - O(log2n)
//  S.C - O(1)
//            a). division by 2 , O(log n) - empty string
#include<algorithm>
// string binary(int n){
//      string res = "";
     
//      while(n > 0){
//      int bit = n % 2;
//      res.push_back('0' + bit);
//      n /= 2;
//      }
//      return res;
// }
// int main(){
//      int n = 17;
//      cout << binary(n);
// }

//                b). Program for decimal to binary (head recursion)
// string binary(int n){
//      if(n == 0)
//        return "0";
//      if(n == 1)
//        return "1";
     
//        return binary(n/2) + char((n % 2 ) + '0');   // string cooncatenation - O(log2n)
// }
// int main(){
//      int n = 17;
//      cout << binary(n);
// }
//   T.C - O(log n)^2  // 
//   S.C - O(log n)  stack (log n) + string (log n)
// 
//                    16). Find nth term of series
//          a). native approach O(n) iterative
// int nthsum(int n){
//      int sum = 0;
//      for(int i = 1; i<= n; i++){
//       sum += i;
//      }
//      return sum;
// }
// int main(){
//      int n = 4;
//      cout << nthsum(n);
// }     // T.C - O(n)    // S.C - O(1)

//        b). formula based approach n*n+1/2 O(1)
// int nthsum(int n){
//      int sum = (n*(n+1))/2;
//      return sum;
// }
// int main(){
//      int n = 4;
//      cout << nthsum(n);
// }     // T.C - O(1)  //S.C - O(1)

//                       17). Armstrong number  
// void armstrong(int n){
//      int  size = to_string(abs(n)).length();
//      int original = n;
//      int sum = 0;
//      for(int temp = abs(n); temp > 0; temp /= 10){
//           int digit = temp % 10;
//           sum += static_cast<int>(round(pow(digit, size)));
//      }
//      if(sum == abs(original)){
//           cout << "yes";
//      }else{
//           cout << "No";
//      }
// }
// int main(){
//      int n = 123;
//      armstrong(n);
// }

//                   b). find nth armstrong number
// bool ntharmstrong(int n){
//      int size = to_string(n).length();
//      int sum = 0;
//      int temp = n;
//      while( temp > 0){
//          int digits = temp % 10;
//          sum += static_cast<int>(round(pow(digits,size)));
//          temp /= 10;
//      }
//      return sum == n;   //function only executes when output is true
// }

// int findarmstrong(int n){
//      int count = 0;
//      int i = 0;
//      while(true){    // infinite loops stop when nth armstrong is found
//       i++;    
//      if (ntharmstrong(i)) {
//           count ++;   // increase count  if 'i' is armstrong
//        if(count == n)
//           return i;
//      }
//   }
// }
// int main(){
//      int n = 15;
//      cout << findarmstrong(n);
// }    //T.C - O(d^2)  number iterates through n + pow

//              b). finding nth armstrong number
// bool ntharmstrong(int n){
//      int size = to_string(n).length();
//      int temp = n;
//      int sum = 0;
//      while(temp > 0){
//           int digits = temp % 10;
//           sum += static_cast<int>(round(pow(digits, size)));
//           temp /= 10;
//      }
//      return sum == n;
// }
// int armstrong(int n){
//      int count = 0;
//      int i = 0;
//      while(true){
//       i++;
     
     
//      if(ntharmstrong(i)){
//        count ++;  // increase count if armstrong found
//      if(count == n)
//         return i;
//      }
//   }
// }
// int main(){
//      int n = 12;
//      cout << armstrong(n);
// } // T.C - O(n^2 * d^2)

//                    18). Palindrome number  - O(log10)         
// void palindrome(int n){
//      int reverse = 0;
//      int temp = abs(n);
//      while(temp != 0){
//           reverse = (reverse * 10) + (temp % 10);  
//           temp /= 10;
//      }
//      if(reverse == abs(n)){
//           cout << "palindrome";
//      }else{
//           cout << " No palindrome";
//      }
// }
// int main(){
//     int n = 12120;
//     palindrome(n);
//     return 0;
// }

//                    18). palindrome number by reversing the number  
// bool palindrome(int n){
//      int reverse = 0;
//      int temp = abs(n);
//      while(temp != 0){
//           reverse = (reverse * 10) + temp % 10;
//           temp /= 10;
//      }
//      return (reverse == abs(n));
// } 
// int main(){
//      int n = 12121;
//      if (palindrome(n) == 1){
//           cout << "palindrome";
//      }else{
//           cout << " no palindrome";
//      }
// }   

//                b). palindrome number by using string method
// bool palindrome(int n){
//      string s = to_string(abs(n));
//      int len = s.length();
//      for( int i = 0; i < len / 2; i++){
//            s[i] = s[len - i -1];
//           return false;
//      }
//      return true;
// }
// int main(){
//      int n = 1210453;
//      if(palindrome(n) == 1){
//           cout << "palindrome";
//      }else{
//           cout << "not palindrome";
//      }
// }             // T.C - O(log10n)

//                        19). Finding sum of digits of a number until sum becomes single digit
// int singleDigit(int n) {
//      int sum = 0;
 
//      // Repetitively calculate sum until
//      // it becomes single digit
//      while (n > 0 || sum > 9) {
 
//          // If n becomes 0, reset it to sum 
//          // and start a new iteration.
//          if (n == 0) {
//              n = sum;
//              sum = 0;
//          }
 
//          sum += n % 10;
//          n /= 10;
//      }
//      return sum;
//  }
 
//  int main() {
//      int n = 1234;
//      cout << singleDigit(n);
//      return 0;
//  }

//           b). Digital root (sum of digits until single digit using formula)
// int digitalroot(int n){
//      if(n == 0)
//         return 0;
//      if( n % 9 == 0)
//           return 9;
     
//      return(n % 9);
// }
// int main(){
//      int n = 54;
//      cout << digitalroot(n);
// }       // T.C - O(1)   S.C - O(1)


