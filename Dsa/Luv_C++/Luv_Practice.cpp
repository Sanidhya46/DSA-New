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

