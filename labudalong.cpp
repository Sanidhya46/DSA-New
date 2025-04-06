#include<bits/stdc++.h>
using namespace std;

// int main(){
// int arr[10];

// memset(arr, 0 , sizeof(arr));

// arr[0] = 10;
// arr[2] = 30;
// arr[3] = 40;


// }



//          Basic Data Structure - 3   ||   Labudalong 


// class Linked{
//     public:  // access specifies 
//     int val;  // data member 
//     //Pointer to the next node in the linked list 
//     Linked* next;
//     // x is the value to store and next is next to the null for each object 

//  // 1). After semicolon part is constructor which initialises class members directly before the constructor body executed
//     Linked(int x) : val(x), next(NULL) {}
// };

// int main(){
// // Its create an object of the linked class with value ()
// Linked node(6);

// cout << node.val << endl;

// return 0;
// }

// 2). NO storage class and type specifier means declare and definition of variable function is needed 





class Linked{
   public:
   int val;
    
   Linked* next;
   Linked(int x) : val(x) , next(NULL)  {}

};
int main(){
    Linked node(6);

    cout << node.val << endl;

    return  0;
}


