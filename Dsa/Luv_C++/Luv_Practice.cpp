// #include <iostream>
// using namespace std;
// int main() {
// 	int t;
// 	cin >> t;    //Reading input from STDIN
// 	cout << "Input number of test cases is " << t << endl;	// Writing output to STDOUT
// 	while(t--){
// 		int green , purple;
// 		cin >> green >> purple;
//         int n;
//         cin >> n;       // number of participants
//         int firstproblemsolved = 0;
//         int secondproblemsolved = 0;
//         for(int i = 0; i < n; i++){
//         int p1, p2;
//          cin >> p1 >> p2;
//          if(p1 == 1) firstproblemsolved++;
//          if(p2 == 1) secondproblemsolved++;
//         }  
//         int green_first = (firstproblemsolved * green) + (secondproblemsolved * purple);
//         int purple_first = (firstproblemsolved * purple) + (secondproblemsolved * green);

//         int min_cost = min(green_first,purple_first);
//         cout << min_cost;
// 	}
//     return 0;
    
    
// }

//                   2). Micro and Array Update

// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     int t;
//     cin >> t;
//     while(t--){
       
//         int n, k;
        
//         cin  >> n >> k;
//         vector<int> arr(n);
//         for(int i=0; i<n; i++){
//             cin >> arr[i];
//           } 
//         int count = 0;
//         while(true){
//             bool allReached = true;
//         for(int i =0; i< n; i++){
//           if(arr[i] < k){
//             arr[i]++;
//             allReached = false;
//           }
//         } 
        
//         if(allReached) break;     // stop when all elements at least k 
//         count ++;
//     }

//         cout << count << endl;
//     }
//     return 0;
// }


//                *****        Practice session -- 2         *****
//                       1). Capital Bazzi
#include<iostream>
#include <bits/stdc++.h>
using namespace std;   // this tells to compiler we are going to use standard template
#include <string>

// void Capitalbaazi(string &str){
    
//     string word;
//     stringstream ss(str);   // it takes each word as whole, ss(str) is an object of string stream, string stream is an class used for i/o  operations 
//     while(ss >> word){
//     for(char &ch : word){   // range based loop which iterates for each characters in words
//         ch = toupper(ch);
//         cout << word << endl;
//     }
//     }
//     // cout << word << endl;     // this only prints last modified word
// }
// int main(){
//     string str;
//     // cin >> str; ❌  // cin >> str , only reads input until a first space
//     getline(cin,str);   // reads full line
//     Capitalbaazi(str);
// }


// void CapitalBazzi(string &str){
//     string word;  // for storing each word
//     stringstream ss(str);  // it takes each words one by one
//     while(ss >> word){   // it runs until the ss becames empty
//         for (char &ch: word){
//             ch = toupper(ch);
           
//         }
//         cout << word << endl;  // for new line using word is important
//     }
// }
// int main(){
//     string str;
//     getline(cin,str);
//     CapitalBazzi(str);
// }

//                         2). Jiya's Sequence
//                  1). using while loop and pointer
// void jiyasequence(string &num){
//     int t , n;
//     cin >> t; 
//     // int product = 1; // ❌  you can not initialise here because it does not reset 
//     // int i = 0;  // ❌ start index of while loop
//     int product;
    
//     while(t--){
//         // for(int i = 0; i<n; i++ )
        
//         // for(char &x : num ){    // char &gb is an character must be similar type of num
//         //     int temp = x - '0';  // converting character to integer 
            
//          //   int temp = num - '0';   // you can not subtract 0 from an string
//         // now we applied condition till the temp becames empty

//         product = 1;
//         int i = 0;
//         while(i < num.size()){
//             int temp = num[i] - '0';  // convert character to an integer one at a time
//        // while(temp > 0){   // extracts digit one by one
//         /*   
//             int digit = temp % 10;
//             product *= digit;
//             temp /= 10;  ⚠️ you can only use this logic when you deal with integer for all values */
//         // }
//             product *= temp;
            
             
//         }
//        // i++; // ❌ can't put here because it never updates
        
    
//     /*if(product % 10 == 2 || product % 10 == 3 || product % 10 == 5){
//         cout << "YES";
//      }else{
//         cout << "NO";
//      }  ⚠️ you can not put inside the while loop  */
// }
// if(product % 10 == 2 || product % 10 == 3 || product % 10 == 5){
//     cout << "YES";
//  }else{
//     cout << "NO";
//  } 
// }
// int main(){
//     int n;
//     cin >> n;  // no. of sequences
//     string num;
//     cin >> num;
//     jiyasequence(num);
//     return 0; // everthing ok run the code
// }


// void jiyasequence(string &num){
//     int t;
//     cin >> t; // for test cases
//     int i = 0; // pointer start from ith index
//     int product;
//     while(t--){
//         while(i < num.size()){
//             product  = 1;
//             int temp = num[i] - '0';  // its do substraction in asci format 0 is 48 and 2 is 50
//             product *= temp;
//             i++;
//         }
//     }
//     if(product % 10 == 2 || product % 10 == 3 ||product % 10 == 5){
//         cout << "YES";
//     }else{
//         cout << "NO";
//     }
// }

// int main(){
//     int n;
//     cin >> n;  // no. of sequences
//     string num;
//     cin >> num;
//     jiyasequence(num);
//     return 0; // everthing ok run the code
// }

//                  3).  GPL

// void GPL(){
//     int t;
//     cin >> t;
//     int temp;
//        // converts into string and get size
//     while(t--){
//         int i = 0;
//         int s;
//         string num;
//         cin >> s >> num;
//         int n = num.size();
//        // string num;    // reading num inside the t-- loop
//         int temp = 0;  // reseting for each test case is very essential
//         while(n > 0){
            
//             int hello = num[i] - '0';  // converting string to integer   
//           //  temp += num[i] * pow(2,n-1);  // ⚠️ converting power to 2^n-1 causes floating point inaccuracies returns double
//             temp += hello * (1<<(n-1)); 
//             n--;
//             i++;
//         }
//         cout << temp << endl;
//     }
//    // cout << temp; ❌  if you are put after t-- means this give result after running all test cases
// }
// int main(){
    
//     GPL();
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int x;
    cin >> x;
    int y;
    cin >> y;
    int temp;
    if(y%x == 0){
        temp = (y / x) - 1;
    }else{
        temp = y/x;
    }
    return temp;
}
