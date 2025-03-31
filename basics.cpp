#include <iostream>  // it is stl Required for std::cout and std::endl #include <iostream> tells the compiler to include the input output library (or iostream header library) which contains all C++ input library functions
using namespace std;  //it is used for using the standard namespace which contains all the standard functions like cout, cin etc.

// int main() {
//     std::cout << "Hello, World!" << std::endl;
//     return 0;  // Indicating successful execution
// }

// int main(){      // int main() is the main function of the program
//     cout << "helllo world" << endl;
//     cout << 55 << endl;    // cout is used for displaying the output in the console
//     cout << "***" << endl;

//     return 0;  //it is used for returns the value from functioni and 0 is used for successful execution
// }

// 

// int main(){
//     int a = 55; //int is used for declaring integer variable
//     int b = 60;
//     int c = 70;

//     string home = "home";   // semicolon is used for terminate each line of the program

//     int result = a + b + c;
//     cout << home << result << endl;
// }


//                              indentifiers
/* Rules for identifier
   1). identifier can contain (A to Z / a to z , 0 to 9 , _ underscore )
   2). identifier is case senstive
   3). the  first character must be letter or underscore
   4). identifier can not be keywords (int,for etc)*/

// int main(){
//     int _num = 5;
//     int num_ = 10;
//     string _str = "this is multiplication";

//     int result = _num * num_;
//     cout << _str << result << endl;
// }

// int main(){
//     int var ;  // creating and declaringva variable with identifier var and not initializing it

//     var = 10;  //assigning the value to the variable var

//     printf("%d",var); //printf is standard library function of ct stdio header which is used for consoling output of variable
//     return 0; 
// }

// int sum(int a, int b, int c) {
//     return a + b + c;
// }
// int main(){
//     // int result = sum(5, 10,15); //calling the function sum and passing the value 5,10,15
//     int a , b ,c;   //Declaring the variable a,b,c 
//     cin >> a >> b >> c;  //Read input values from the user
//     int result = sum(a,b,c);
//     printf("%d\n",result);
//     cout <<  result << endl;

// }

// int main(){
//     int const = 50;   // when we use keyword as identifier then it will give expected unqualified-id before "=" token error
//     cout << const << endl;
//     return 0;
// }
                                 // object oriented example in c++
// class Calculation{   //class is keyword which is used for defining the class , class is the blueprint of creating objects
//     //Acess modifier
// public: 
//     //Data members
// int a = 60;
// int b = 50;
// int c = 40;
//     //Member function  //membber function is  used for define operation on the data members 
// void addition(){  //void function is used for printing the value does not return anything
//    int result = a + b + c;
//    cout << result << endl;
// }
// };
// int main(){
//     Calculation obj; // An object is instance of an class , it is used for use the properties and variable of member function and data mambers of class
//                      //Creating object of class Calculation for further operation
//     obj.a = 10;

//     obj.addition(); //calling the member function addition of class Calculation
// }

                                       // OBJECT ORIENTED WITH STRING
// class String{
//     public:
//     //Data members
//     string car = "BMW, Audi, Mercedes";
//     string shop = "Amazon, Flipkart, Myntra";
//     string names = "Rahul, Rohan,Raj";
//     //Member function
//     void showcar(){
//         cout << car << endl;
//     }
//     void showshop(){
//         cout << shop << endl;
//     }
//     void shownames(){
//         cout << names << endl;
//     }
// };
// int main(){
//     String mycar;
//     mycar.car = "BMW, Audi, Mercedes, Toyota";  //changing the value of data member car
//     mycar.shop = "Amazon,flipkart,ebay,essay";  //changing the value of data member shop
//     mycar.names = "Rahul, Rohan, Raj, Ravi";
    
//     mycar.showcar();
//     mycar.showshop();
//     mycar.shownames();
// };

// #include <iostream>
// using namespace std;

// int main(){
//     //this is sigle line commment
//     /*  this is multi line commment */
//     int num = 5;
//     cout << num << endl;
//     return -9;
// }
                                                       //C++ tokens 
/* C++ tokens is smallest builing block of c++ programs that the compiler understands. it is the smallest unit of programs in which the compiler divides the code for  further processing  
There were 6 type of tokens --
   1).identifier - unique name given for function, variable, classes etc 
   2).keywords - predefined reserved words for programming that have special meaning and functionalities.. there  are 95 keywords
   3).constants - constants are keyword in c++ is used to define variables at the time of initialisation .. assigned value can not be changed .. 1).const 2).constexpr 3).#define
   4).strings - class of  stl library which providdes functionality to work with sequence of characters
   5).punctuators - punctuators are the token having specific meaning in syntax of programming language.. (1.;,2.[],3."",4.(),5.{})
   6).operators - operators are used to perform operation on operands such as variables , constants  and operands
        i).unary operators -  single operands
        ii). binary operators -two operands
        iii). ternary operators - takes  three operands
        
        alignas	alignof	and	and_eq	asm
auto	bitand	bitor	bool	break
case	catch	char	char8_t	char16_t
char32_t	class	compl	concept	const
consteval	constexpr	constinit	const_cast	continue
co_await	co_return	co_yield	decltype	default
delete	do	double	dynamic_cast	else
enum	explicit	export	extern	false
final	float	for	friend	goto
if	inline	int	long	mutable
namespace	new	noexcept	not	not_eq
nullptr	operator	or	or_eq	private
protected	public	register	reinterpret_cast	requires
return	short	signed	sizeof	static
static_assert	static_cast	struct	switch	template
this	thread_local	throw	true	try
typedef	typeid	typename	union	unsigned
using	virtual	void	volatile	wchar_t
while	xor	xor_eq */

                                                   //     variables
//  used for memory location , it is most basic unitof storage
//  four types data type -- int, float, char , bool , string 
//  type name

// #include <iostream>
// using namespace  std;

// void _var(int &a, int &b, string &c, float &d, char &e, bool &f){
//        a = 4;
//        b =7;
//        c = "hello";
//        d = 9.0;
//        e = 'g';
//        f = true;

//        cout << a << b << c << d << e << f << endl;
// };

// int main(){
//    int a;
//    int b;
//    string c;
//    float d;
//    char e;
//    bool f;
//   _var(a,b,c,d,e,f);
// }

                                               // Constants
//  Constants are a variables which have fixed values throughout the program
//  three way to make constants i). const key word  --- syntax  const datatype variable_name = value -- initialised at run time and compile time
//                              ii). contexpr keyword --- syntax  constexpr data type variable_name = value  -- initialised at compile time 
//                              iii). # define processor --- syntax  #define macro name replacement value   -- (preprocessor phase) #define processor  called macro constants
// using constants makes code more readable and self explanatory , prevent unwanted modification

// Feature	const	constexpr	#define
// Modifiable?	❌ No	❌ No	❌ No
// Type-Safe?	✅ Yes	✅ Yes	❌ No
// Evaluated at?	Runtime (mostly)	Compile-time	Preprocessor phase
// Scope	Respects scoping rules	Respects scoping rules	Global (Text replacement)
// Better for?	Constants that do not change	Compile-time constants	Simple values, but not recommended


// #include <iostream>
// using namespace std;

// #define c 5         
// void _constants(){      // parameterless function
//    const int a = 5;      // now this valuue is stored for throught the program
//    constexpr int b = 7;  // their value can be initialised at compile time 
//    cout << a << b << c;
// }
// int main(){
//    _constants();    // calling function
// }

// #include<iostream>
// #include <string>    // string library for string operation
// using namespace std;       // standard namspace for all stl functions

// #define PI 3.147      
// #define COUNTRY "INDIA"
// #define LIQUID  "Water"               // preprocessor  phase 

// const int gravity = 9.187;   // const is used for when you do not change the value
// const int humidity = 7.0;
// const int birds = 1234;

// constexpr int object = 80;
//       // constexpr requires compiles time constant expression
// constexpr double gravity_ = 9.81;
// constexpr int square(int x){
//    return x*x;
// };



// void _constant(){
//     cout << PI << COUNTRY << LIQUID << gravity << humidity << birds << object << gravity_ << square(4);
// }
// int main(){
//    _constant();  // calling the void function
// }

                                                                   // Scope
//  Scope is an region of program where a variable can be accesed and work 
//  2 types  of variable scopes  i).Global scope -- region outside a function -- when variable define outside the function and can be accesed any where
//                               ii). Local scope -- region inside a function -- when variable define inside the function and can be accesed  only in function 
// In C++ three type of variations -- i). Instance scope -- region inside a class but outside a member function of class -- variable accesed in whole class
//                                    ii). Static member scope -- static scope applied to the variable with static key words within the class and can be accessed using  the class name.-- syntax (static data_type variable_name) class_name::variable name
//                                    iii). namespace scope -- namespace in c++ is a container that allows user to create a separate scope where given variables are defined -- syntax (namespace namespace_name) for access(namespace_name::variable_name)

                              // Bank Management System
#include<iostream>
#include<string>
using namespace std;

int bank_PR = 5.0;
namespace BankDept{
   string bankingdepartments[] = {"Loans","Customer"," Service","Credit Cards"};    // Array initialisation in c++

};
void Customer_details(){
   int customer_AB = 500;
   int withdrawal_ammount = 600;

   cout << "customer account balance is " << customer_AB << "withdrawal ammount is " << withdrawal_ammount;

   static int transaction_counter;
}
class Customer{
    string customer_names;
    string account_balance;

    static int Total_customer;     // static class scope
};

void transaction(){
   static int transaction_count = 0;
   transaction_count++
}









