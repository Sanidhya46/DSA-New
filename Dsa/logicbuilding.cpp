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

#include <iostream>
#include <climits>      // header file for defining limits
using namespace std;
int closest = 0;  // keep tracking of closest
int mindifference = INT_MAX;   // set initial minimum difference to the hghest  
int difference;
int Closest_Sum(int n, int m){
    for(int i = n-abs(m); i<= n + abs(m); i++){
        if (i % m == 0)
        int difference = abs(n - i);       //it tracks the difference of n and i in every iteration
        if(difference < mindifference || (difference == mindifference && abs(i) > closest)) {
            closest = i;   // update the closest 
            mindifference = difference;
        }
        return closest;
    }
}

int main(){
    Closest_Sum(10,20);
}
