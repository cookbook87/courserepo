/*
C++ is a general purpose, staticly typed, object oriented programming language
that began in 1979 by Danish Computer Scientist Bjarne Stroustrup. For several
years the language evolved until it's official release in 1985.

C++ is essentially an extension of the C programming language. It actually began
as a fork of an early pre-standardized C. And while C is not a strict subset of
C++ the two languages are largly compatiable and In many instances C code can be
used with little or no modification as C++ code.

Becuase C++ is an extension of C, many of the things you can do in C you can also
do in C++. But in addition C++ gives you all the power and flexibility of object orientation.
So you can use low level system calls, manage memory and deal with pointers. while
at the same time working with classes, objects, inheritance and all the features
of an object oriented language.

So C++ really lives in two worlds.

All c++ programs must utilize a compiler who's job is to compile the c++ code down
into machine code readable by the computer. So anytime you want to run a c++ program
you have to compile it first.

C++ relies on the user to manage the program's memory, although there are garbage
collectors avaiable for C++.

Many developers choose to write C++ using a basic text editor, but there are also
more specilized integrated development enviornments, some of the most popular
include Code Blocks, Eclipse and Net Beans.
*/

using namespace std;
#include <iostream>
#include <string>
void main()
{
     // P R I N T I N G

     cout << "Hello" << endl;
     cout << "World";
     cout << "!" << endl;




     // V A R I A B L E S
     /*
      Names are case-sensitive and may begin with:
          letters, _
      After, may include
          letters, numbers, _
      Convention says
          Start with a lowercase word, then additional words are capitalized
          ex. myFirstVariable
     */
     string name = "Mike";    // string of characters, not primitive
     char testGrade = 'A';    // single 8-bit character.

     // you can make them unsigned by adding "unsigned" prefix
     short age0 = 10;         // atleast 16-bits signed integer
     int age1 = 20;           // atleast 16-bits signed integer (not smaller than short)
     long age2 = 30;          // atleast 32-bits signed integer
     long long age3 = 40;     // atleast 64-bits signed integer

     float gpa0 = 2.5f;       // single percision floating point
     double gpa1 = 3.5;       // double-precision floating point
     long double gpa2 = 3.5;  // extended-precision floating point

     bool isTall;             // 1 bit -> true/false
     isTall = true;

     name = "John";

     cout << "Your name is " << name << endl;






     // C A S T I N G

     cout <<  (int)3.14 << endl;
     cout << (double)3 / 2 << endl;




     // P O I N T E R S
     int num = 10;
     cout << &num << endl;

     int *pNum = &num;
     cout << pNum << endl;
     cout << *pNum << endl;






     // S T R I N G S
     #include <string>
     string greeting = "Hello";
     //      indexes:   01234

     cout << greeting.length();
     cout << greeting[0] << endl;
     cout << greeting.find("llo") << endl;
     cout << greeting.substr(2) << endl;
     cout << greeting.substr(1, 3) << endl;





     // N U M B E R S

     cout << 2 * 3 << endl;      // Basic Arithmetic: +, -, /, *
     cout << 10 % 3 << endl;      // Modulus Op. : returns remainder of 10/3
     cout << 1 + 2 * 3 << endl;   // order of operations
     cout << 10 / 3.0 << endl;      // int's and doubles


     int num = 10;
     num += 100; // +=, -=, /=, *=
     cout << num << endl;

     num++;
     cout << num << endl;

     // Math class has useful math methods
     #import <cmath>
     cout << pow(2, 3) << endl;
     cout << sqrt(144) << endl;
     cout << round(2.7) << endl;




     // U S E R   I N P U T
     string name;
     cout << "Enter your name: ";
     cin >> name;
     cout << "Hello " << name << endl;

     int num1, num2;
     cout << "Enter first num: ";
     cin >> num1;
     cout << "Enter second num: ";
     cin >> num2;
     cout << "Answer: " << num1 + num2 << endl;






     // int luckyNumbers[6];
     int luckyNumbers[] = {4, 8, 15, 16, 23, 42};
     //         indexes:    0  1  2   3   4   5
     luckyNumbers[0] = 90;
     cout << luckyNumbers[0] << endl;
     cout << luckyNumbers[1] << endl;





     // N Dimensional Arrays

     // int  numberGrid[2][3];
     int numberGrid[2][3] = { {1, 2, 3}, {4, 5, 6} };
     numberGrid[0][1] = 99;

     cout << numberGrid[0][0] << endl;
     cout << numberGrid[0][1] << endl;





     // V E C T O R
     // #include <vector>
     vector<string> friends;
     friends.push_back("Oscar");
     friends.push_back("Angela");
     friends.push_back("Kevin");
     friends.insert(friends.begin() + 1, "Jim");

     // friends.erase(friends.begin() + 1);
     cout << friends.at(0) << endl;
     cout << friends.at(1) << endl;
     cout << friends.at(2) << endl;
     cout << friends.size() << endl;






     // M E T H O D S

     // int addNumbers(int num1, int num2);

     int sum = addNumbers(4, 60);
     cout << sum << endl;

     // int addNumbers(int num1, int num2){
     //      return num1 + num2;
     // }





     // I F    S T A T E M E N T S

     bool isStudent = false;
     bool isSmart = false;

     if(isStudent && isSmart){
          cout << "You are a student" << endl;
     } else if(isStudent && !isSmart){
          cout << "You are not a smart student" << endl;
     } else {
          cout << "You are not a student and not smart" << endl;
     }

     // >, <, >=, <=, !=, ==
     if(1 > 3){
          cout << "number omparison was true" << endl;
     }

     if('a' > 'b'){
          cout << "character comparison was true" << endl;
     }

     string myString = "cat";
     if(myString.compare("cat") != 0){
          cout << "string comparison was true" << endl;
     }






     // S W I T C H    S T A T E M E N T S

     char myGrade = 'A';
     switch(myGrade){
          case 'A':
               cout << "You Pass" << endl;
               break;
          case 'F':
               cout << "You fail" << endl;
               break;
          default:
               cout << "Invalid grade" << endl;
     }






     // W H I L E    L O O P S

     int index = 1;
     while(index <= 5){
          cout << index << endl;
          index++;
     }

     // do{
     // 	cout << index << endl;
     // 	index++;
     // }while(index <= 5);





     // F O R    L O O P S

     for(int i = 0; i < 5; i++){
          cout << i << endl;
     }






     // E X C E P T I O N    C A T C H I N G

     // double division(int a, int b) {
     //    if( b == 0 ) {
     //       throw "Division by zero error!";
     //    }
     //    return (a/b);
     // }

     try {
        division(10, 0);
     } catch (const char* msg) {
       cerr << msg << endl;
     }







     // Classes & Objects

     class Book{
          public:
               string title;
               string author;

               void readBook(){
                    cout << "Reading " + this->title + " by " + this->author << endl;
               }
     };

     Book book1;
     book1.title = "Harry Potter";
     book1.author = "JK Rowling";

     book1.readBook();
     cout << book1.title << endl;

     Book book2;
     book2.title = "Lord of the Rings";
     book2.author = "JRR Tolkien";

     book2.readBook();
     cout << book2.title << endl;






     // C O N S T R U C T O R S

     class Book{
          public:
               string title;
               string author;

               Book(string title, string author){
                    this->title = title;
                    this->author = author;
               }

               void readBook(){
                    cout << "Reading " + this->title + " by " + this->author << endl;
               }
     };

     Book book1("Harry Potter", "JK Rowling");
     cout << book1.title << endl;

     Book book2("Lord of the Rings", "JRR Tolkien");
     cout << book2.title << endl;






     // G E T T E R S    &    S E T T E R S

     class Book{
          private:
               string title;
               string author;
          public:
               Book(string title, string author){
                    this->setTitle(title);
                    this->setAuthor(author);
               }

               string getTitle(){
                    return this->title;
               }
               void setTitle(string title){
                    this->title = title;
               }
               string getAuthor(){
                    return this->author;
               }
               void setAuthor(string author){
                    this->author = author;
               }

               void readBook(){
                    cout << "Reading " + this->title + " by " + this->author << endl;
               }
     };

     Book book1("Harry Potter", "JK Rowling");
     cout << book1.getTitle() << endl;

     Book book2("Lord of the Rings", "JRR Tolkien");
     cout << book2.getTitle() << endl;






     // Inheritance

     class Chef{
          public:

               string name;
               int age;

               Chef(string name, int age){
                    this->name = name;
                    this->age = age;
               }

               void makeChicken(){
                    cout << "The chef makes chicken" << endl;
               }

               void makeSalad(){
                    cout << "The chef makes salad" << endl;
               }

               void makeSpecialDish(){
                    cout << "The chef makes a special dish" << endl;
               }
     };

     class ItalianChef : public Chef{
          public:

               string countryOfOrigin;

               ItalianChef(string name, int age, string countryOfOrigin) : Chef(name, age){
                    this->countryOfOrigin = countryOfOrigin;
               }

               void makePasta(){
                    cout << "The chef makes pasta" << endl;
               }

               // override
               void makeSpecialDish(){
                    cout << "The chef makes chicken parm" << endl;
               }
     };

     Chef myChef("Gordon Ramsay", 50);
     myChef.makeChicken();

     ItalianChef myItalianChef("Massimo Bottura", 55, "Italy");
     myItalianChef.makeChicken();
     cout << myItalianChef.age << endl;




     // Abstract Classes & Attributes
     class Vehicle{
          public:
               virtual void move() = 0;
               void getDescription(){
                    cout << "Vehicles are used for transportation" << endl;
               }
     };

     class Bicycle : public Vehicle{
          public:
               void move(){
                    cout << "The bicycle pedals forward" << endl;
               }
     };

     class Plane : public Vehicle{
          public:
               virtual void move(){
                    cout << "The plane flys through the sky" << endl;
               }
     };

     Plane myPlane;
     myPlane.move();






}

int App::addNumbers(int num1, int num2)
{
	 return num1 + num2;
}
