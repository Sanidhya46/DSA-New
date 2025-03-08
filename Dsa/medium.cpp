//                      1). Find number from to 1 to n with exactly 3 divisors
//         i) native method  O(n^2)
#include <iostream>
using namespace std;

// // Function to count divisors of a number using two loops
// int countDivisors(int n) {
//     int count = 0;
//     for (int i = 1; i <= n; i++) {
//         if (n % i == 0) {
//             count++; 
//         }
//     }
//     return count;
// }

// // Function to print numbers with exactly 3 divisors
// void numbersWith3Divisors(int n) {
//     for (int i = 1; i <= n; i++) {
//         if (countDivisors(i) == 3) {
//             cout << i << " "; 
//         }
//     }
// }

// int main() {
//     int n = 100;
//     numbersWith3Divisors(n);
//     return 0;
// }

//            ii). count no. from 1 to n with exactly 5 divisors 
int  divisors(int n){
    int countdivisors = 0;
    for ( int i = 1; i <= n; i++){
        if(n % i == 0){   
            countdivisors++;
        }
    }
    return countdivisors;

}
int numbers(int n){
    int numberdivisors = 0;   // for counting how many numbers are there
    for (int i = 1; i <= n; i++){
        if (divisors(i) == 5){
            numberdivisors++;
        }
    }
    return numberdivisors;
}
int main(){
    int n = 1000;
    cout << numbers(n);
}    // T.C - O(n^2)


//            ii).3 divisors using constant space O(3n/4)
// void numbersdivisors(int n);
// bool isprime(int n);
// void numbersdivisors(int n){
    
// }