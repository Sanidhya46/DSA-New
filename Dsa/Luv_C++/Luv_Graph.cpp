#include<bits/stdc++.h>
using namespace std;

//                      Adjacency Matrix 
// Advantages -- i). is i j connected whom to connect can find in the time compplexity of the O(1).
// const int N = 1e3+10;
// int graph[N][N];
// // 1). make the matrix of size of the no. of vertices 
// // 1). two vertices v1 and v2 for the graph undirected so must [v1][v2] and [v2][v1] both mark to 1;

// int main(){
//     int n; // no. of edges
//     int m;  // no. of vertices 
//     cin >> m >> n;
//     for(int i =0; i<m; i++){  // Note loop run for vertex no. of times 
//        int v1 , v2;
//        graph[v1][v2] = 1;
//        graph[v2][v1] = 1;
//     }
//     // O(N^2) - Space complexity 
//     // N = 10^5  -- very high time complexity so adjaceny list come into range 
   
//     // O(1) complexity -- to check particular edge connect or not 
//     if(graph1[2][3] == 1){
//       //  connected
//     }
// }

//                       Adjaency list 
// 1). advantages -- we can store large graphs 
// think about how the vertices connect  
//  int graph1[N][N];

//  // array of vectors where each vector stores pairs of integers
//  vector<pair<int , int>> graph2[N];

//  int main(){
//     int n , m , wt;
//     cin >> n >> m;

//     for(int i =0; i<m; i++){
//         int v1 , v2 ;
//         graph2[v1].push_back({v2, wt});
//         graph2[v2].push_back({v1, wt});
//     }
//     // Adjacency matrix 
//   // disadvantages -- 1).  // T.c - O(N^2) -- space complexity .. can not store large graphs
//     // N = 10^5
   
//     // NOte -- for questions like - is i j connected .. what is the weight of i and j 
//       // for finding particular connnected vertex node 
//     //  for(pair<int, int>& child : graph2[N]){
//     //        if(child.first == j){
//     //         // coonected
//     //         child.second; 
//     //        }
//     //  }

//  }

//                    DFS 
//   DfS template 
// // const int N = 1e3+10;
// vector<int> g[N];
// bool vis[N];

// void dfs(int vertex){
//     // take action on vertex before entering the vertex 
//     vis[vertex] = true;  // mark the visited  

//     for(int child : g[vertex]){}
//       // take action on child before entering the child 

//       if(vis[child]) continue;
//       dfs(child);
//       // take action on child after exiting the child node 
//     }
//     // take action on vertex after exiting the vertex
//    
// }

              // Dfs
// const int N = 1e3+10;
// vector<int> g[N];
// bool vis[N];

// void dfs(int vertex){
//     // before entering the vertex 
//     vis[vertex] = true;  // mark the visited  
//        // if vis[vertex] = continue;
//        // if vis[vertex] = return;
//       cout << vertex << endl; 
//     for(int child : g[vertex]){
//         cout << " par " << vertex << " child " << child << endl;
//       // before entering the child 
//       if(vis[child]) continue;
//       dfs(child);
//       // after exiting the child node 
//     }
//     // after exiting the vertex
//     // return isLoopExists;
// }
// //   Time complexity -- for for loop -- recursion on edges -- O(2*E)
// //   Total Time complexity -- O(V + E)

// int main(){
//     int n , m;
//     cin >> n >> m;
//     for(int i =0; i<m; i++){
//     int v1, v2;
//     cin >> v1 >> v2;
//     g[v1].push_back(v2);
//     g[v2].push_back(v1);
   
//     }
//     dfs(1);
// }

//           1).  Connected components -- count of dfs run -- 
//
//  T. C = O(n + e)
// const int N = 1e3;
// vector<int> g[N];
// bool vis[N];

// vector<vector<int>> cc;    // connected components 
// vector<int> current_cc;    // current node 

// void dfs(int vertex){
//     // take action on the vertex after entering the vertex 
//     vis[vertex] = true;
//  // Note -- when we making entry mark it as current component 
//     current_cc.push_back(vertex);
//     for( int child : g[vertex]){
//     if(vis[child]) continue;
//     // take action on child before entering the child node 
//     dfs(child);
//     }
//     // take action aftering leaving the child 
// }

// // O(n + e)
// int main(){
//     int n , e;  // vertexes and edges 
//     cin >> n >> e;

//     // input of graph // run for the edges no. of times 
//     for(int i = 0; i< e; i++){
//         int v1, v2;
//         cin >> v1 >> v2;
//         g[v1].push_back(v2);
//         g[v2].push_back(v1);
//     }

//    int count = 0;    
//    for(int i =1; i<=n; i++){   // run the loop for every edges 
//       if(vis[i]) continue;  // check if node already visited skip
//       current_cc.clear();  // clear previous connnected node 
//       dfs(i);  // call the dfs for that node 
//       cc.push_back(current_cc);
//       count++;
//    }
//    cout << cc.size() << endl;
//    for(auto c_cc : cc){
//     for(int vertex : c_cc){
//         cout << vertex << " ";
//     }
//     cout << endl; 
//    }
// }


//  For storing connected components .. two vectors connected nodes and cuurent nodes and indentify where you put in 4 condition

//            2). Detecting cycle in the dfs  -- if node is visited other than just previous visited node then cycle exists 

const int N = 1e3;
vector<int> g[N];
bool vis[N];
bool dfs(int vertex, int par){   // par is for to keep record where it comes 
    // take action on the vertex after entering the vertex 
     vis[vertex] = true;
     bool isLoopExists = false; 
    for(int child : g[vertex]){
        if(vis[child] && child == par) continue;
        if(vis[child]) return true; 
       isLoopExists |= dfs(child , vertex);  // it checks all the vertexes if any return true return true and you do and for if all return false return false  // now vertex is parent 
    }
    return isLoopExists;
}


int main(){
    int n, e;
    cin >> n >> e;

    for(int i =0; i< e; i++){
        int v1, v2;
        cin >> v1 >> v2; 
        g[v1].push_back(v2);
        g[v2].push_back(v1);

    }
     bool isLoopExists = false;
    for(int i = 1; i <= n; i++){
        if(vis[i]) continue;
       if(dfs(i , 0)){   // is loop exists in any node 
        isLoopExists = true; 
        break; 
       }

    }
    cout << isLoopExists << endl;
}

