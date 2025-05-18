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
//     // take action on vertex after entering the vertex 
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

//           1).  Connected components -- count of dfs run -- two vectors connected nodes and cuurent nodes and indentify where you put in 4 condition
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

// const int N = 1e3;
// vector<int> g[N];
// bool vis[N];
// bool dfs(int vertex, int par){   // par is for to keep record where it comes 
//     // take action on the vertex after entering the vertex 
//      vis[vertex] = true;
//      bool isLoopExists = false; 
//     for(int child : g[vertex]){
//         if(vis[child] && child == par) continue;
//         if(vis[child]) return true; 
//        isLoopExists |= dfs(child , vertex);  // it checks all the vertexes if any return true return true and you do and for if all return false return false  // now vertex is parent 
//     }
//     return isLoopExists;
// }


// int main(){
//     int n, e;
//     cin >> n >> e;

//     for(int i =0; i< e; i++){
//         int v1, v2;
//         cin >> v1 >> v2; 
//         g[v1].push_back(v2);
//         g[v2].push_back(v1);

//     }
//      bool isLoopExists = false;
//     for(int i = 1; i <= n; i++){
//         if(vis[i]) continue;
//        if(dfs(i , 0)){   // is loop exists in any node 
//         isLoopExists = true; 
//         break; 
//        }

//     }
//     cout << isLoopExists << endl;
// }

//                       3). Flood Fill
// 1) Stay within image bounds and only fill in 4 directions (no diagonals).
// 2) Only fill pixels that match the starting pixel's initial color.
// 3) Don't fill if the initial color is the same as the new color (to avoid infinite loop or extra work).

 
// class Solution {
//     public:
// void dfs(int i, int j, int initialColor, int newColor , vector<vector<int>>& image){
//     if(i<0 || j<0 || i >= image.size() || j >= image[0].size() || image[i][j] != initialColor){
//         return;
//     }
//     image[i][j] = newColor;
//     dfs(i-1 , j , initialColor , newColor , image);
//     dfs(i+1 , j , initialColor , newColor , image);
//     dfs(i, j+1 , initialColor , newColor , image);
//     dfs(i , j-1 , initialColor , newColor , image);
// }
// vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
//         int initialColor = image[sr][sc];
//         if(initialColor != newColor){
//             dfs(sr, sc , initialColor , newColor , image);
            
//         }
//         return image;    // always return the image 
//     }
// };    


//   NOte - Height is maximum distance between  leaf node to the node
// NOte - for dfs in trees no need for visited node 

// dont run dfs for parent again 
//         4). FOr height and depth of tree 
// 1). edit before entering and after exiting the node in before entering add (depth[child] = depth[vertex] + 1) and for exiting (depth[vertex] = maximum of curr vertex + height[child] + 1)
// const int N = 1e5;
// vector<int> g[N];
// int depth[N];
// int height[N];

// void dfs(int vertex, int par=0){
//     for(int child : g[vertex]){
      
   
//     if(child == par) continue;
//          depth[child] = depth[vertex] + 1;  // adding 1 from parent node ..top to bottom
//     dfs(child, vertex);
//          height[vertex] = max(height[vertex] , height[child] + 1);   // calculating maximum of height[vertex] with increased height[child] + 1 ...bottom to top
//     }
// }
// int main(){
//     int n; // vertexes and edges 
//     cin >> n;

//     // no. of the edges no. of times 
//     for(int i = 0; i< n-1; i++){
//         int v1, v2;
//         cin >> v1 >> v2;
//         g[v1].push_back(v2);
//         g[v2].push_back(v1);
//     }
//     dfs(1,0);  // default value is 0 for parent 
//     for(int i =0; i<= n; i++){
//         cout << depth[i] <<  "" << height[i] << endl;
//     }
// }

//                              Dfs subtree questions
//  Question of subtree is also done by bottom to top like height and depth 
// we only add when to come from bottom to top 
// for counting of even number put even number condition after entring the vertex and add current vertexes ... and in after exiting the child node add current child in even_ct
// NOte - for calculating even and sum of subtree first identify parent node and put dfs on it 
// Questions print subtree sum of v & number of even numbers 
// const int N = 1e5;
// vector<int> g[N];
// int depth[N];
// int height[N];
// vector<int> subtree_sum(N,0);
// // int val[N];
// vector<int> even_ct(N,0);

// void dfs(int vertex, int par=0){
//     // increase the count of even_ct[vertex] for joint vertex if it is even 
//     if(vertex %  2 == 0) even_ct[vertex]++;
//     subtree_sum[vertex] += vertex;
//     for(int child : g[vertex]){
//      // for adding the current joint vertex for each node 
//     //    subtree_sum[vertex] += vertex;
//        // for val of vertex it becames val[vertex]
   
//       if(child == par) continue;
       
//     dfs(child, vertex);
//        subtree_sum[vertex] += subtree_sum[child];
//        even_ct[vertex] += even_ct[child];
//     }
// }

// int main(){
//     int n; // edges 
//     cin >> n;

//     // no. of the edges no. of times 
//     for(int i = 0; i< n-1; i++){
//         int v1, v2;
//         cin >> v1 >> v2;
//         g[v1].push_back(v2);
//         g[v2].push_back(v1);
//     }
//    dfs(1);  // default value is 0 for parent 
//     // int q;
//     // while(q--){
//     //    int v;
//     //    cin >> v;
//     //    cout << subtree_sum[v] << even_ct[v] << endl;
//     // }
//     for(int i =1; i<=n; i++){
    
//         cout << subtree_sum[i] <<" " << even_ct[i] << endl;
//      }
    
// }
//  the sum of subtree from leafnode is the sum of own node 


//                         Diameter of tree  
// 1). maximum NO. of edges b/w two vertices == diameter between vertices == max possible path b/w two vertices in tree
// 2). Bruteforce -- calculate the maximum of all the depths from one node to the other node by imagining each node is root node 
// 3). Optimise -- i). With any root find the maximum depth node  ii).find maximum depth node with that node .. run the dfs form maximum depth node 
//    

// const int N = 1e5;
// vector<int> g[N];
// int depth[N];
// void dfs(int v, int par=-1){
//      for(int child: g[v]){
       
//         if(child == par) continue;
//         depth[child] = depth[v] + 1;
//         dfs(child,v);

//      }
// }


// int main(){
//     int n; // edges 
//     cin >> n;

//     // no. of the edges no. of times 
//     for(int i = 0; i< n-1; i++){
//         int v1, v2;
//         cin >> v1 >> v2;
//         g[v1].push_back(v2);
//         g[v2].push_back(v1);
//     }
//     dfs(1);

//     int mx_depth = -1;
//     int mx_d_node;
//     for(int i =1; i<=n; i++){
//         if(mx_depth < depth[i]){
//             mx_depth = depth[i];
//             // now we get the node with maximum depth
//             mx_d_node = i;
//         }
//         // depth of array is resseted;
//         depth[i] = 0;
//     }
//     mx_depth = -1;
//     dfs(mx_d_node);
//     for(int i =1; i<=n; i++){
//         if(mx_depth < depth[i]){
//             mx_depth = depth[i];
//             // now we get the node with maximum depth
        
//         }
//         // depth of array is resseted;
      
//     }
//     cout << mx_depth << endl;

// }

// O(n) + O(n)
// 
//           LCA -- first common ancestor is called as lowest common ancestor 
//  there are multiple ways to find lowest common ancestors 
// 1). First store the path from both node -- (call dfs and store parent node for each node) 
// 2). last common will be the lca 

const int N = 1e5;
vector<int> g[N]; // tree
int par[N];

void dfs(int v, int p = -1){
    // for storing the parent 
    par[v] = p;
    for(int child : g[v]){
        if(child == p) continue;
        dfs(child,v);
    }
}
// it returns path from the node 
 // Function to construct path from node to root
vector<int> path(int v) {
    vector<int> ans;
    while (v != -1) {
        ans.push_back(v);
        v = par[v];
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main() {
    int n; // number of nodes
    cin >> n;

    // Reading edges
    for (int i = 0; i < n - 1; i++) {
        int v1, v2;
        cin >> v1 >> v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }

    int x, y;
    cin >> x >> y;

    dfs(1); // Assuming 1 is the root of the tree

    vector<int> path_x = path(x);
    vector<int> path_y = path(y);

    // Finding the Lowest Common Ancestor (LCA)
    int min_ln = min(path_x.size(), path_y.size());
    int lca = -1;
    for (int i = 0; i < min_ln; i++) {
        if (path_x[i] == path_y[i]) {
            lca = path_x[i];
        } else {
            break;
        }
    }

    cout << lca << endl;
    return 0;
}





