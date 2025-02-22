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

