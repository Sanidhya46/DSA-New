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



//                   Practice 

// class Linked{
//    public:
//    int val;

//    Linked* next;
//    Linked(int x) : val(x) , next(NULL)  {}

// 
// int main(){
//     Linked node(6);

//     cout << node.val << endl;

//     return  0;
//  }
// };


// 1). 
// class Linked{
// private:


// template <typename E>
// class Node{
//     public:
   
//     // member to store actual data/value of the node 
//     E val;

//     // pointer to the next node 
//     Node* next; 
//     Node* prev;

//     Node(Node* prev, E element , Node* next){
//         this -> val = element
//         this -> next = next;  
//         this -> prev = prev;
//     }
//   }
// }



//            Basic Operations of a Doubly Linked List 

// Definition of a node in a doubly linked list
// class DoublyListNode {
//     public:
//         int val; // Holds the value of the node
//         DoublyListNode *next, *prev; // Pointers to the next and previous nodes in the list
    
//         // Constructor to initialize a node with a given value, and set next and prev to NULL
//         DoublyListNode(int x) : val(x), next(NULL), prev(NULL) {}
//     };
    
//     // Function to create a doubly linked list from a vector of integers
//     DoublyListNode* createDoublyLinkedList(vector<int>& arr) {
//         // If the input array is empty, return NULL since there's no node to create
//         if (arr.empty()) {
//             return NULL;
//         }
    
//         // Create the head node using the first element of the array
//         DoublyListNode* head = new DoublyListNode(arr[0]);
    
//         // 'cur' keeps track of the last dded to the list
//         DoublyListNode* cur = head;
    
//         // Iterate through the rest of the array starting from index 1
//         for (int i = 1; i < arr.size(); i++) {
//             // Create a new node with the current array element
//             DoublyListNode* newNode = new DoublyListNode(arr[i]);
    
//             // Set the next pointer of the current node to the new node
//             cur->next = newNode;
    
//             // Set the previous pointer of the new node to the current node
//             newNode->prev = cur;
    
//             // curr now is set to the next pointer of current  // Move the current pointer forward to the new node
//             cur = cur->next;
//         }
    
//         // Return the head node of the constructed doubly linked list
//         return head;
//     }
    
//     int main() {
//         // Step 1: Sample input
//         vector<int> arr = {10, 20, 30, 40, 50};
    
//         // Step 2: Create the list
//         DoublyListNode* head = createDoublyLinkedList(arr);
    
//         // Step 3: Print list forward
//         cout << "Forward traversal: ";
//         DoublyListNode* temp = head;
//         // Run the loop as long the temp is not pointing to null, keep moving till temp is pointing to valid node 
//         while (temp != NULL) {
//             // Print the value of the temp node 
//             cout << temp->val << " ";
//            // If the next pointer of temp is NULL, then we've reached the last node, so we break out of the loop. Otherwise, move the temp pointer to the next node.
//             if (temp->next == NULL) break; // Save the tail node
//             temp = temp->next;  // it its not move to the next node
//         }
//         cout << endl;
    
//         // Step 4: Print list backward (from tail)
//         cout << "Backward traversal: ";
       
//         while (temp != NULL) {
//             cout << temp->val << " ";
//             temp = temp->prev;
//         }
//         cout << endl;
    
//         return 0;
//     }




// **** while speak on code with natural more dragramatic 

// 1).  with static method we can define function inside the class 
// 2). expression must have class type but it have int usually appear when someone trying to access member or method on a variable that is not a object 
// Definition of a node in a doubly linked list

class DoublyListNode {
    public:
        int val; // Holds the value of the node
        DoublyListNode *next, *prev; // Pointers to the next and previous nodes in the list
    
        // Constructor to initialize a node with a given value, and set next and prev to NULL
        DoublyListNode(int x) : val(x), next(NULL), prev(NULL) {}
    };
    // *** This is an utility function needs to be defined to work with the class  */
    // Function to create a doubly linked list from a vector of integers
    DoublyListNode* createDoublyLinkedList(vector<int>& arr) {
        // If the input array is empty, return NULL since there's no node to create
        if (arr.empty()) {
            return NULL;
        }

        DoublyListNode* head = new DoublyListNode(arr[0]);
        DoublyListNode* cur = head;
        for(int i =0; i<arr.size(); i++){
            DoublyListNode* newnode = new DoublyListNode(arr[i]);
            cur->next = newnode;
            newnode->prev = cur;
            cur = cur -> next;

        }
        return head;

    }



//  int main(){
//     vector<int> arr{10, 20, 20 , 40 , 50};
// // create doubly linked list as a function is called with arrinpur and it returns pointer to the head node of the linked list ...  or array vector as argumented 
//     DoublyListNode* head = createDoublyLinkedList(arr);

//       DoublyListNode* tail = nullptr;

// // traverse the doubly linked list from the head node to the end
// for (DoublyListNode* p = head; p != nullptr; p = p->next) {
//     cout << p->val << endl;
//  giving node references is becames compulsory 
//     tail = p;
// }

// // traverse the doubly linked list from the tail node to the head
// for (DoublyListNode* p = tail; p != nullptr; p = p->prev) {
//     cout << p->val << endl;
// }
//  }
 
// **Note**  while accessing or modifying you can choose the most appropiate direction to traverse based on whethere the index is closer to the end or head or tail 


//           1). Addition of a node in a Doubly Linked list 

// int main(){
//     vector<int> arr{10, 20, 20 , 40 , 50};
// // create doubly linked list as a function is called with arrnpur and it returns pointer to the head node of the linked list ...  or array vector as argumented 
//     DoublyListNode* head = createDoublyLinkedList(arr);
//     DoublyListNode* tail = nullptr;
//  // create a new node (new head)  with value 0   // create a new node of type doubly list node with value 0 on the head and store its address in the pointer newhead
//     DoublyListNode* newHead = new DoublyListNode(0);
//     newHead->next = head;
//     if(head != NULL) head->prev = newHead;
//  // for placing newnode to starting point of the list  // from now on the head of the list is new head 
//     head = newHead;
//     for (DoublyListNode* p = head; p != nullptr; p = p->next) {
//         cout << p->val;
//         // after the loop finishes keeping track of last node is must be needed 
//         tail = p;
//     }
//     cout << endl;
    
//     // traverse the doubly linked list from the tail node to the head
//     for (DoublyListNode* p = tail; p != nullptr; p = p->prev) {
//         cout << p->val;
//     }
    
// }

//          2). Addition of an node onto the last of linked list 

// int main(){
//     vector<int> arr{10, 20, 20 , 40 , 50};
// // create doubly linked list as a function is called with arrnpur and it returns pointer to the head node of the linked list ...  or array vector as argumented 
//     DoublyListNode* head = createDoublyLinkedList(arr);
//     DoublyListNode* tail = head;
//     while(tail->next != nullptr){
//        tail = tail->next;
//     }
//     DoublyListNode* newnode = new DoublyListNode(99);
//     tail->next = newnode;
//     newnode->prev = tail;
//     // update the tail node reference with the new node 
//     // if not update tail node still points previous node 
//     tail = newnode;

    
//     for (DoublyListNode* p = head; p != nullptr; p = p->next) {
//         cout << p->val;
//         // after the loop finishes keeping track of last node is must be needed 
//         tail = p;
//     }
//     cout << endl;
    
//     // traverse the doubly linked list from the tail node to the head
//     for (DoublyListNode* p = tail; p != nullptr; p = p->prev) {
//         cout << p->val;
//     }
    
// }
// T.C - List creation - O(n) finding tail- o(n) inserting tail - O(n) linking tail with new node -O(1) forward and backward traversal - O(n)


//          3). Inserting of the linked list on to the middle of the linked list 

// int main(){
//     vector<int> arr{10, 20, 20 , 40 , 50};
// // create doubly linked list as a function is called with arrnpur and it returns pointer to the head node of the linked list ...  or array vector as argumented 
//     DoublyListNode* head = createDoublyLinkedList(arr);
//     DoublyListNode* p = head;
//     // for inserting a node onto the 3 index (4 position)
//     for(int i =0; i<2; i++){
//         p = p->next;
//     }
//     DoublyListNode* newnode = new DoublyListNode(5);
//     newnode->next = p->next;
//     p->next = newnode;
//     p->next->prev = newnode;
//     newnode->prev = p;
    
    

//     DoublyListNode* tail = nullptr;
//     for (DoublyListNode* p = head; p != nullptr; p = p->next) {
//         cout << p->val;
//         // after the loop finishes keeping track of last node is must be needed 
//         tail = p;  // set tail to last node for keeping track of it for reversing 
//     }
//     cout << endl;
    
//     // traverse the doubly linked list from the tail node to the head
//     for (DoublyListNode* p = tail; p != nullptr; p = p->prev) {
//         cout << p->val;
//     }
    
// }

//    4). Deleting a Node in a Doubly linked list 
// 1). classic dangling pointer issue - the node is deleted but the memory is remain undeleted so it is account into the daggling pointer issue 
// 2). If upcoming node have broken linkage but you looping through the linkedlist leading to the undefined behaviour , garbage value or reenters value will be showned 
// 3). Using of saving method ensures that structural changes like insertions or deletions are correctly tracked preserving the list integrity and issues like daggling pointers 
// int main(){
//     vector<int> arr{10, 20, 30 , 40 , 50};
// // create doubly linked list as a function is called with arrnpur and it returns pointer to the head node of the linked list ...  or array vector as argumented 
//     DoublyListNode* head = createDoublyLinkedList(arr);
//     DoublyListNode* p = head;
//     // for inserting a node onto the 3 index (4 position)
//     for(int i =0; i<2; i++){
//         p = p->next;
//     }
//     DoublyListNode* todelete = p->next;
//     todelete = p->next->next;
//     todelete->next->prev = p;

//     // If the memory is not properly deleted it causes daggling pointer issue (memory is not deleted)
//     todelete->next = nullptr;
//     todelete->prev = nullptr;
    
    

//     DoublyListNode* tail = nullptr;
//     for (DoublyListNode* p = head; p != nullptr; p = p->next) {
//         cout << p->val;
//         // after the loop finishes keeping track of last node is must be needed 
//         tail = p;  // set tail to last node for keeping track of it for reversing 
//     }
//     cout << endl;
    
//     // traverse the doubly linked list from the tail node to the head
//     for (DoublyListNode* p = tail; p != nullptr; p = p->prev) {
//         cout << p->val;
//     }
    
// }


//      5). Deleting an element at the head of the linked list 
// 1). creating a todelete which stores the address of cuurent head node
// 2). now curr head marks as the next pointer of head 
// 3). for explicitly removing todelete prev pointer of current head must points to the null pointer 
// 4). Next pointer of todelete must points to the null pointer to detach linking between linked list 

// int main(){
//     vector<int> arr{10, 20, 30 , 40 , 50};
// // create doubly linked list as a function is called with arrnpur and it returns pointer to the head node of the linked list ...  or array vector as argumented 
//     DoublyListNode* head = createDoublyLinkedList(arr);
//     DoublyListNode* todelete = head;
//     head = head->next;
//     // Detach node 10
//     head->prev = nullptr;
//  // clean up the pointers of the deleted node
//     // Further detach node 10 from the list
//     todelete->next = nullptr;
//     cout<<head->next->val << endl;
//     cout << head->val << endl;
//     delete todelete;
//     cout << todelete->val << endl;
//     cout << head->prev << endl;
    
  
    

//     DoublyListNode* tail = nullptr;
//     for (DoublyListNode* p = head; p != nullptr; p = p->next) {
//         cout << p->val;
//         // after the loop finishes keeping track of last node is must be needed 
//         tail = p;  // set tail to last node for keeping track of it for reversing 
//     }
//     cout << endl;
    
//     // traverse the doubly linked list from the tail node to the head
//     for (DoublyListNode* p = tail; p != nullptr; p = p->prev) {
//         cout << p->val;
//     }

    
// }

//     6).  Deleting a Last Node in a linked list 
// 1). create a head pointer to stores the address of the current head node 
// 2). keep points to the next pointer and update autonomously until it reaches last node 
// 3). After Reaching on to the end for detaching previous node points the next pointer of the prev pointer of the current node to nullptr
// 4). To prevent dagling pointer issue points the prev pointer of last node to the null pointer 
int main(){
    vector<int> arr{10, 20, 30 , 40 , 50};
// create doubly linked list as a function is called with arrnpur and it returns pointer to the head node of the linked list ...  or array vector as argumented 
    DoublyListNode* head = createDoublyLinkedList(arr);
    DoublyListNode* p = head;
    while(p->next != nullptr){
        // updating the next pointer on each iteration
       p =  p->next;
    }
    p->prev->next = nullptr;
    
    p->prev = nullptr;
  
    

    DoublyListNode* tail = nullptr;
    for (DoublyListNode* p = head; p != nullptr; p = p->next) {
        cout << p->val;
        // after the loop finishes keeping track of last node is must be needed 
        tail = p;  // set tail to last node for keeping track of it for reversing 
    }
    cout << endl;
    
    // traverse the doubly linked list from the tail node to the head
    for (DoublyListNode* p = tail; p != nullptr; p = p->prev) {
        cout << p->val;
    }
    
    
}








