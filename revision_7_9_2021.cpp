// #include<iostream>
// using namespace std;

// int main(){
// cout<<"hello friends this is my new revision file"<<endl;
// cout<<"so today we do all thing which we did before "<<endl;

//---------------------ARRAYS -------------------------------

// int school[5]={401,501,601,701,802};
// school[3]=901;      //----------changing value of an array before printing is done easily -----------
// cout<<"the value of first letter of school is : "<<school[0]<<endl;
// cout<<"the value of second letter of the school is : "<<school[1]<<endl;
// cout<<"the value of third letter of the school is : "<<school[2]<<endl;
// cout<<"the value of fourth letter of the school is : "<<school[3]<<endl;
// cout<<"the value of fifth letter of the school is : "<<school[4]<<endl;

// //----------printing values of an array using for loop---------------
// cout<<"printing the values of an array using for loop :- "<<endl;
// for (int  i = 0; i <= 4; i++)
// {
//    cout<<"the value of school adddress number "<<i<<" is "<<school[i]<<endl;
// }

// //-----------------------printing the values of an arrray using while loop-------------
// cout<<"printing the values of an array using while loop :- "<<endl;
// int i=0;
// while (i<=4)
// {
//     cout<<"the value of school address number "<<i<<" is "<<school[i]<<endl;
//     i++;
// }
// cout<<"printing the values of an array using the do-while loop :- "<<endl;

// // --------------- if we use same variable (i) then the do-while loop only prints a single value bcoz while loop already prints all the numbers already-----------
// // so if we want to print all the values so use another variable like done down ;
// int n=0;
// do
// {
//     cout<<"the value of array of school adddress "<<n<<" is "<<school[n]<<endl;
//     n++;
// } while (n<=4);

// printing the table of 2 using the for loop
// cout<<"printing the table of 2 using the for loop :- "<<endl;
// for (int i = 1; i <= 10; i++)
// {
//     cout<<" 2 "<<" * "<<i<<" is "<<2*i<<endl;
// }

// //printing the table of 8 using the while loop;
// cout<<"printing the table of 8 using while loop :- "<<endl;
// int i=1;
// while (i<=10)
// {
//     cout<<" 8 "<<" * "<< i <<" is "<<i*8<<endl;
//     i++;
// }
// //printing the table of 10 using the do-while loop----------------
// cout<<"printing the table of 10 using the do-while loop :- "<<endl;
// int n=1;
// do
// {
//     cout<<" 10 "<<" * "<<n<<" is "<<n*10<<endl;
//     n++;
// } while (n<=10);

// //printing the table of 16 using the for loop-----------------
// cout<<"printing th e table of 16 using the for loop :- "<<endl;
// for (int i = 1; i <= 10 ; i++)
// {
//     cout<<" 16 "<<" * "<< i <<" is "<<16*i<<endl;
// }

//----------------------creating an array named as phone numbers --------------------
// long long int phone_no[6]={99774548854,8478865445,848641548,8675545468,944544555864,846843484556};
// int marks[5]={99,85,89,56,75};
// //these are for printing the values of array marks-----------------------
// cout<<"these are the values of array marks :-------------- "<<endl;

// cout<<"the marks of roll number 1 is : "<<marks[0]<<endl;
// cout<<"the marks of roll number 2 is : "<<marks[1]<<endl;
// cout<<"the marks of roll number 3 is : "<<marks[2]<<endl;
// cout<<"the marks of roll number 4 is : "<<marks[3]<<endl;
// cout<<"the marks of roll number 5 is : "<<marks[4]<<endl;
// cout<<endl;
// cout<<"printing the marks array data using for loop :------"<<endl;

// for (int i = 0; i <=4; i++)
// {
//     cout<<"the marks of roll no "<<i<<" is "<< marks[i] <<endl;
// }
// cout<<endl;
// cout<<"printing the marks array data using while loop :-----------"<<endl;
// int m = 0;
// while (m<=4)
// {
//     cout<<"the marks of roll no "<< m <<" is "<< marks[m]<<endl;
//     m++;
// }
// cout<<endl;

// cout<<"printing the marks array data using do-while loop :-------------"<<endl;
// int p = 0;
// do
// {
//     cout<<"the marks of roll no "<< p <<" is "<< marks[p]<<endl;
//     p++;
// } while (p<=4);

// cout<<endl;
// cout<<endl;

// cout<<endl;
// cout<<"these are the values of array phone_numbers :-----------------"<<endl;
// //these are for printing values of array phone numbers:-------------------------
// cout<<"these are the phone numbers of our employee :-  "<<endl;
// cout<<"the phone number of himanshu : "<<phone_no[0]<<endl;
// cout<<"the phone number of ritik : "<<phone_no[1]<<endl;
// cout<<"the phone number of aditya : "<<phone_no[2]<<endl;
// cout<<"the phone number of madan : "<<phone_no[3]<<endl;
// cout<<"the phone number of dhwani : "<<phone_no[4]<<endl;
// cout<<"the phone number of punam : "<<phone_no[5]<<endl;

// cout<< endl;
// cout<<"printing this phone numbers using for loop :- "<<endl;
// for ( int i = 0; i <=5; i++)
// {
//     cout<<"the phone numbers of our employee "<<i<<" is "<<phone_no[i]<<endl;
// }
// cout<<endl;
// cout<<"printing these phone numbers using while loop :- "<<endl;
// int i=0;
// while (i<=5)
// {
//     cout<<"the phone numbers of our employees "<<i<<" is "<<phone_no[i]<<endl;
//     i++;
// }
// cout<<endl;
// cout<<"printing the phone numbers using do-while loop :-"<<endl;
// int n=0;
// do
// {
//     cout<<"the phione numbers of our employees "<<n<<" is "<<phone_no[n]<<endl;
//     n++;
// } while (n<=5);

//         return 0;
// }
// #

//-------------------POINTERS-------------------------------
// #include<iostream>
// using namespace std;

// int main(){
// int a =4;
// int*b =&a;        //*b stores the address of a and if we command cout<<b; it prints the address of a
// // & is the address of the operator......... here &a is the address of operator a
// // here b is storing address so it is the pointer
// int **c=&b;

// cout<<"the adress of a is "<<b<<endl;
// cout<<"the value stored at b is "<<*b<<endl;
// cout<<"the address of b is "<<c<<endl;
// cout<<"the value stored at c is "<<*c<<endl;
// cout<<"the value stored at **c is "<<**c<<endl;

// int a =10;
// int* b=&a;
// int** c = &b;
// cout<<"the address of a is "<<b<<endl;
// cout<<"the value stored at b is "<<*b<<endl;
// cout<<"the adress of b  is "<<c<<endl;
// cout<<"the value stored at c is "<<**c<<endl;
// cout<<"the address of c is "<<&b;

/* summary :- & is the address of the operator and *b is the pointer which stores the address of an operator
    (**) stores pointer to pointer address 
    */

//    return 0;
// }

//----------------structure unions and enums----------------
// #include<iostream>
// using namespace std;
// typedef struct books
// {
//     int book_id;
//     float book_price;
//     int date_of_issue;
//     char favchar;
//     char month1;
//     char month2;
//     char month3;

// }bk;
// int main(){

//     bk himanshu;
//     himanshu.book_id = 512;
//     himanshu.book_price =1000;
//     himanshu.date_of_issue = 25;
//     himanshu.favchar='H';
//     himanshu.month1 = 'N';
//     himanshu.month2 = 'o';
//     himanshu.month3 = 'v';

//     cout<<"the book id that himanshu have "<<himanshu.book_id<<endl;
//     cout<<"the price of the book that himanshu have "<<himanshu.book_price<<endl;
//     cout<<"date of issuing of the book "<<himanshu.date_of_issue <<himanshu.month1<<himanshu.month2<<himanshu.month3<<endl;
//     cout<<"the favchar of the book is "<<himanshu.favchar<<endl;

//     return 0;
// }
//--------------------another method of struct --------------------

// #include<iostream>
// using namespace std;
// struct class
// {
//     int roll_no;
//     float marks;
//     char grade;
//     char p_or_f;
// };
// // p is used for pass and f is used for fail
// int main(){
//     struct class himanshu;
//     himanshu.roll_no = 1;
//     himanshru.maks = 99.6;
//     himanshu.grade ='A';
//     himanshu.p_or_f = 'P';
//     cout<<"roll no of himanshu : "<<himanshu.roll_no<<endl;
//     cout<<"marks of himanshu : "<<himanshu.marks<<endl;
//     cout<<"grade of himanshu : "<<himanshu.grade<<endl;
//     cout<<"himanshu is pass or fail p denotes pass and f denotes fail "<<himanshu.p_or_f<<endl;
//     return 0;
// }
//------------------unions ----------------------
// #include<iostream>
// using namespace std;
// union school
// {
//     int maid;                                  // dont use names such as clases which are in the keywords of c++
//     char grade;
//     float avg_marks;
// };

// int main(){
//     union school y1;
//     y1.maid=10;
//     cout<<"the total number of maids in the school are "<<y1.maid<<endl;
//     y1.grade='B';
//     cout<<"the grade of second floor maid is "<<y1.grade<<endl;
//     y1.avg_marks = 89;
//     cout<<"the average marks these maids scored is "<<y1.avg_marks;

//     return 0;
// }

//-----------------------ENUMS-------------------------

// #include<iostream>
// using namespace std;

// int main(){
//     enum money{dollar,pounds,euros};         // it arrange them in a numeric values like indexing
//     cout<<pounds<<endl;
//     enum food{burger,pizza,french_fries,coke,maaza,fanta,sprite};
//     cout<<fanta;
//     return 0;
// }
// #include<iostream>
// using namespace std;

// int main(){
//     int a=100000009;
//     cout<<"the value of a is "<<a<<endl;
//     cout<<"the size of 78.45f is "<<sizeof(78.45f)<<endl;
//     return 0;
// }

//--------------reference and variables-----------------

// #include<iostream>
// using namespace std;

// int main(){
//     float x=4555;
//     cout<<"the vaalue of x is "<<x<<endl;
//     float &y=x;                                       //here y become the x referene and provide same value as x on printing y
//     cout<<"the value of y is "<<y;
//     return 0;
// }

//-----------------typecasting-----------------------
//typecasting = changing the format of a variable -----
// #include<iostream>
// using namespace std;

// int main(){
//     float a=455.565;
//     cout<<"the value of float a is "<<(float)a<<endl;
// // you only have to write data type in braces before variable

//     cout<<"the value of int a after typecasting(changing the variable type ) is "<<(int)a;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     const int a =99;
//     cout<<"the value of constant a is "<<a<<endl;
//     a=45;
//     cout<<"the value of a is "<<a;                 // this code gives error because we defined a as a constant
//     return 0;
// }

//manipulators in c++
// we use setw(4) for taking exact size 4
// #include<iostream>
// using namespace std;

// int main(){

//     int a=2,b=45,c=425;
//     cout<<"the value of a with setw is : "<<setw(4)<<a<<endl;
//     cout<<"the value of b with setw is : "<<setw(4)<<b<<endl;
//     cout<<"the value of c with setw is : "<<setw(4)<<c<<endl;
//     cout<<"the value of a without setw is : " <<a<<endl;
//     cout<<"the value of b without setw is : " <<b<<endl;
//     cout<<"the value of c without setw is : " <<c<<endl;
//     return 0;
// }

//operator precedence

// #include<iostream>
// using namespace std;

// int main(){
//     int a=456;
//     int b=450;
//     int c=((((a/b)*b)-4500)+8700);
//     cout<<"the value of their solution is "<<c;
//     return 0;
// }

//------------if ,else if and else commands ------------------
//creating a program for a pub which allows only above 18 guest only

//
// #include<iostream>
// using namespace std;

// int main(){
//     int age;
//     cout<<"enter your age "<<endl;
//     cin>>age;
//     if((age<18)&&(age>0)){
//         cout<<"you are under 18 and not able to join our party"<<endl;
//     }
//     else if(age==18){
//         cout<<"you are a kid you need a kidpass to enter our party"<<endl;
//     }

//     else if(age<0){
//         cout<<"you are not yet born you are in kauk "<<endl;
//     }

//     else{
//         cout<<"MOST WELCOME AND HAVE FUN "<<endl;
//     }

//     return 0;
// }

// #include<iostream>
// using namespace std;
// void swap(int a,int b){
//     int temp=a;
//     a=b;
//     b=temp;
// }
// int main(){
//     int a=3,b=5;
//     cout<<"the value of a is "<<a<<endl<<"the value of b is "<<b<<endl;
//     swap(a,b);
//     cout<<"the value of a is "<<a<<endl<<"the value of b is "<<b;
//     return 0;
// }
//<----------------------recursion----------------------->

// #include<iostream>
// using namespace std;
// int factorial(int n){
//     if(n<=1){
//         return 1;
//     }
//     return n*factorial(n-1);
// }
// int main(){
//     int a;
//     cout<<"enter the number "<<endl;
//     cin>>a;
//     cout<<"the factorial of "<<a<<" is "<<factorial(a);
//     return 0;
//}

// fibonaaci series -------

// #include<iostream>
// using namespace std;
// int fib(int a){
//     if(a<=2){
//         return 1;
//     }
//     return fib(a-2)+fib(a-1);

// }
// int main(){
//     int b;
//     cout<<"enter the number "<<endl;
//     cin>>b;
//     cout<<"the value of "<<b<<" in  fibonacci series is " <<fib(b);
//     return 0;
// }

//<--------------------REVISION-------------------------------------------->
// #include<iostream>
// using namespace std;
// int sum(int a, int b, int c){
//     return a+b+c;
// }
// int product(int a,int b , int c){
//     int m= a*b*c;
//     return m;
// }
// int square(int a){
//     return a*a;
// }
// int main(){
//     int a,b,c;

//     // cout<<"this is the revision codes"<<endl;
//     cout<<"enter the first number "<<endl;
//     cin>>a;
//     cout<<"enter the second number "<<endl;
//     cin>>b;
//     cout<<"enter the third number "<<endl;
//     cin>>c;
//     cout<<"the sum of these numbers are "<<sum(a,b,c)<<endl;;
//     cout<<"the product of these numbers are "<<product(a,b,c)<<endl;
//     cout<<"the square of first  number is "<<square(a)<<endl;
//     cout<<"the square of second number is  "<<square(b)<<endl;
//     cout<<"the square of third number is "<<square(c)<<endl;

//     return 0;
// }

// program for a restraunt for entries :         if ,else if and else statements

// #include<iostream>
// using namespace std;

// int main(){
//     int age;
//     cout<<"Enter your age "<<endl;
//     cin>>age;
//     if ((age<18)&(age<0))
//     {
//         cout<<"you not yet born "<<endl;
//     }
//     else if(age<18){
//         cout<<"you are a kid you cant join our party "<<endl;
//     }
//     else if(age==18){
//         cout<<"you are kid you need a kid pass for entry "<<endl;

//     }
//     else{
//         cout<<"WELCOME TO OUR PARTY :)  HAVE FUN :) "<<endl;
//     }

//     return 0;
// }

//<---------------------LOOPS STATEMENTS ------------------------>

// #include<iostream>
// using namespace std;

// int main(){
// for (int  i = 0; i < 40; i++)
// {
//     cout<<" hello brother how r u "<<endl;
// }

// return 0;
// }
//     int i=0;
//     while (i<=10)
//     {
//         cout<<i<<endl;
//         i++;
//     }
// }
// #include<iostream>
// using namespace std;

// int main(){
//     int i=0;
//     cout<<"the counting from 1 to 10"<<endl;
//     do
//     {
//         cout<<i<<endl;
//         i++;
//     } while (i<=10);

//     return 0;
// }

// printing table of 2 using for loop ----------------->

// #include<iostream>
// using namespace std;

// int main(){
//     for (int i = 0; i <= 10; i++)
//     {
//         cout<<" 2 "<<" * "<<i<<" = "<<2*i<<endl;
//     }
//     cout<<endl;
//     int i=0;
//     while (i<=10)
//     {
//         cout<<" 2 "<<" * "<<i<<" = "<<2*i<<endl;
//         i++;
//     }

//     return 0;
// }

// #include<iostream>
// using namespace std;
// int sum(int a , int b){
//     return a+b;
// }
// int main(){
//     int num1,num2;
//     cout<<"enter the first number  "<<endl;
//     cin>>num1;
//     cout<<"enter the second number "<<endl;
//     cin>>num2;
//     cout<<"the sum of these two numbers are "<<sum(num1 ,num2);
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int sum(int a, int b,int c){
//     return a+b+c;
// }
// int main(){
//     int num1, num2, num3;
//     cout<<"enter the num 1 "<<endl;
//     cin>>num1;
//     cout<<"enter the num 2 "<<endl;
//     cin>>num2;
//     cout<<"enter the num 3 "<<endl;
//     cin>>num3;
//     cout<<"the sum of these two numbers is "<<sum(num1,num2,num3);
//     return 0;
// }

// <-------------------------- SIMPLE INTERERST ------------------------------------->

// #include<iostream>
// using namespace std;
// int si(int p , int r, int t){
//     return p*r*t/100;
// }
// int main(){
//     int p,r,t;
//     cout<<"enter the amount "<<endl;
//     cin>>p;
//     cout<<"enter the rate of interest in %  "<<endl;
//     cin>>r;
//     cout<<"enter the time period (in months )"<<endl;
//     cin>>t;
//     cout<<"the simple interest is "<<si(p,r,t);
//     return 0;
// }

//<------------------- printing two strings seperately ------------------------------->

// #include<iostream>
// using namespace std;

// int main(){
//     const char* a="hello baccha log ";
//     const char*  b="toh kaise h aap log ";
//     cout<<a<<b;

//     return 0;
// }

// classes employee --------------

// #include<iostream>
// using namespace std;
// class employee {
//     private:
//         int a,b,c;
//     public:
//         int d,e;
//     void setdata(int a1, int b1, int c1);
//     void getdata(){
//         cout<<"the value of a is "<<a<<endl;
//         cout<<"the value of b is "<<b<<endl;
//         cout<<"the value of c is "<<c<<endl;
//         cout<<"the value of d is "<<d<<endl;
//         cout<<"the value of e is "<<e<<endl;
//     }
// };
// void employee :: setdata(int a1, int b1 , int c1){
//     a=a1;
//     b=b1;
//     c=c1;
// }
// int main(){
//     employee himanshu ;
//     himanshu.setdata(101,102,103);
//     himanshu.d=104;
//     himanshu.e=105;
//     himanshu.getdata();

//     return 0;
// }

// #include <iostream>
// using namespace std;
// class shop
// {
//     int itemid[100];
//     int itemPrice[100];
//     int counter;

// public:
//     void initcounter(void){counter = 0;}
//     void setprice(void);
//     void displayPrice(void);
// };
// void shop ::setprice(void)
// {
//     cout << "enter the id of your item" << counter + 1 << endl;
//     cin >> itemid[counter];
//     cout << "enter the price of the item " << endl;
//     cin >> itemPrice[counter];
//     counter++;
// }
// void shop ::displayPrice(void)
// {
//     for (int i = 0; i < counter; i++)
//     {
//         cout << "the price of item with id  " << itemid[i] << " is " << itemPrice[i] << endl;
//     }
// }
// int main()
// {
//     shop dukaan;
//     dukaan.initcounter();
//     dukaan.setprice();
//     dukaan.setprice();
//     dukaan.setprice();
//     dukaan.displayPrice();
//     return 0;
// }

// checking number is odd or even

// #include<iostream>
// using namespace std;

// int main(){
//     int num;
//     cout<<"enter the number : "<<endl;
//     cin>>num;
//     if(num%2==0){
//         cout<<num <<" is even";
//     }
//     else{
//         cout<<num<<" is odd ";
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// float electricity_bill(float units){
//     if(units<100){
//         return units*4;
//     }
//     else if((units>100) && (units<300)){
//         return units*6;
//     }
//     else if(units>300){
//         return units*8;
//     }
// }

// int main(){
//     float units ;
//     cout<<"enter the units consumed "<<endl;
//     cin>>units;
//     cout<<"your electicity bill is of  "<<electricity_bill(units)<<" rupees ";
//     return 0;
// }

// #include<iostream>
// using namespace std;
// class shop{
//     private:
//         int total_items;
//         string item1;
//         string item2;
//         string item3;
//     public:
//         int cost_item1;
//         int cost_item2;
//         int cost_item3;
//     void setdata(int total_items1,string item11,string item21,string item31);
//     void getdata(){
//         cout<<"the total items in my shop "<<" = "<<total_items<<endl;
//         cout<<"the items in our menu are : \n"<<item1 <<"\n"<<item2<<"\n"<<item3<<"\n";
//         cout<<"the " <<item1<<"  price = "<<" rupees " <<cost_item1<<endl;
//         cout<<"the " <<item2<<"  price = "<<" rupees " <<cost_item2<<endl;
//         cout<<"the " <<item3<<" price = "<<" rupees " <<cost_item3<<endl;

//     }

// };
// void shop :: setdata(int total_items1,string item11,string item21,string item31){
//     total_items=total_items1;
//     item1=item11;
//     item2=item21;
//     item3=item31;
// }
// int main(){
//     shop dukaan;
//     dukaan.setdata(3," chakna ", " desi "," angreji ");
//     dukaan.cost_item1=80;
//     dukaan.cost_item2=650;
//     dukaan.cost_item3=1600;
//     dukaan.getdata();
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int units ,charges;
//     if(units<100){
//         charges=units*4;
//     }
//     else if((units>100)&&(units<300)){
//         charges=400+6*(units-100);

//     }

//     else if ((units>300)&&(units<1000)){
//         charges=400+1200+9*(units-300);
//     }
//     cout<<"enter you units consumed : "<<endl;
//     cin>>units;
//     cout<<"your electricity bill is "<<" Rs "<<charges<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int x=10;
//     int y=x++;
//     int z=-y;
//     cout<<++z;

//         return 0;
// }

// #include <iostream>
// using namespace std;
// class shop
// {
//     int itemid[10];
//     int itemprice[10];
//     int counter;

// public:
//     void initcounter(void) { counter = 0; }
//     void setprice(void);
//     void displayprice(void);
// };
// void shop ::setprice(void)
// {
//     cout << "enter id of your item no " << counter + 1 << endl;
//     cin >> itemid[counter];
//     cout << "enter the price of your item " << endl;
//     cin >> itemprice[counter];
//     counter++;
// }
// void shop ::displayprice(void)
// {
//     for (int i = 0; i < counter; i++)
//     {
//         cout << "the price of item with id " << itemid[i] << " is " << itemprice[i] << endl;
//     }
// }
// int main()
// {
//     shop dukaan;
//     dukaan.initcounter();
//     dukaan.setprice();
//     dukaan.setprice();                        // jitne items aur unke hum price dalne chahte h
//     dukaan.setprice();                       //  utni baar setprice() likhna hoga ;
//     dukaan.setprice();
//     dukaan.displayprice();
//     return 0;
// }

// #include<iostream>
// using namespace std;
// class factory{
//     int empid[10];
//     int sallary[10];
//     int experience[10];
//     int counter;
// public:
//     void initcounter(void){counter=0;}
//     void setemployee(void);
//     void displayemployee(void);
// };

// void factory :: setemployee(void){
//     cout<<"enter the empid of the employee no "<< counter + 1<<endl;
//     cin>>empid[counter];
//     cout<<"enter the salary of the employee "<<endl;
//     cin>>sallary[counter];
//     cout<<"enter the experience of the employee "<<endl;
//     cin>>experience[counter];
//     counter++;

// }
// void factory :: displayemployee(void){
//     for (int i = 0; i < counter; i++)
//     {
//         cout<<"the sallary of employee of id "<<empid[i]<<" is "<<sallary[i]<<" and the employee has experience of "<<experience[i]<<" years "<<endl;
//     }

// }

// int main(){
//     factory bricks;
//     bricks.initcounter();
//     bricks.setemployee();
//     bricks.setemployee();
//     bricks.setemployee();
//     bricks.displayemployee();

//     return 0;
// }

// nesting of member function ----------------->

// #include <iostream>
// #include <string>
// using namespace std;

// class binary
// {
//     string s;

// public:
//     void read(void);
//     void chk_bin(void);
//     void ones_compliment(void);
//     void display(void);
// };
// void binary ::read(void)
// {
//     cout << "enter a binary number " << endl;
//     cin >> s;
// }

// void binary ::chk_bin(void)
// {
//     for (int i = 0; i < s.length(); i++)
//     {
//         if ((s.at(i) != '0') && (s.at(i) != '1'))
//         {
//             cout << "incorrect binary format " << endl;
//             exit(0);
//         }
//     }
// }

// void binary ::ones_compliment(void)
// {
//     for (int i = 0; i < s.length(); i++)
//     {
//         if (s.at(i) == '0')
//         {
//             s.at(i) = '1';
//         }
//         else
//         {
//             s.at(i) = '0';
//         }
//     }
// }

// void binary ::display(void)
// {
//     cout<<" Displaying your binary number "<<endl;
//     for (int i = 0; i < s.length(); i++)
//     {
//         cout << s.at(i);
//     }
//     cout<<endl;

// }

// int main()
// {
//     binary b;
//     b.read();
//     b.chk_bin();
//     b.display();
//     b.ones_compliment();

//     b.display();
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     cout<<"hacked ";              // simple mje 😂😂😁
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int a,b,c;
//     cout<<"enter the values of a ,b ,c"<<endl;

//     cin>>a>>b>>c;
//     // a=23;
//     // b=190;
//     // c=87;
//     cout<<a+b+c;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"enter the number"<<endl;
//     cin>>n;
//     if(n==5){
//         cout<<"five"<<endl;}
//         else if (n==8){
//             cout<<"eight"<<endl;

//         }
//         else
//         cout<<"Greater than 9"<<endl;

//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){

//     for (int i = 9; i < 50; i++)
//     {
//         if(i%2==0){
//             cout<<i<<" is "<<"even"<<endl;
//         }
//         if(i%2!=0){
//             cout<<i<<" is "<<" odd "<<endl;
//         }
//     }

//     return 0;
// }

//===========================================================>>>>>>>>>>>>>>>>>>>>>>>>>>>
//  all in one program

// #include<iostream>
// using namespace std;
// int sum(int a, int b){
//     int c=a+b;
//     return c;
// }
// int product(int a,int b){
//     return a*b;
// }

// struct employee
// {
//     int empid;
//     int sallary;
//     string amount;
// };

// int selection(int score){
//     if (score<80)
//     {
//         cout<<"you are not elligible or not qualified to register in ipu counselling session "<<endl;
//     }
//     else if((score>80)&&(score<170)){
//         cout<<"you are elligible and there are chances of admission in ipu through counselling."<<endl;

//     }
//     else if((score>200)&&(score<400)){
//         cout<<"your admission is confirm in top 5 colleges of ipu through counselling session so first register for the counselling and pay 1000 Rupees"<<endl;
//     }
// }

// int main(){
//     int a,b;
//     // int ipucet_score;
//     cout<<"enter the value of first number "<<endl;
//     cin>>a;
//     cout<<"enter the value of second number "<<endl;
//     cin>>b;
//     // cout<<"enter the score of ipucet "<<endl;
//     // cin>>ipucet_score;
//     // cout<<"RESULT : "<<selection(ipucet_score)<<endl;
//     cout<<"sum is "<<sum(a,b)<<endl;
//     cout<<"the product is "<<product(a,b)<<endl;

//     int score;
//     cout<<"enter the score "<<endl;
//     cin>>score;
//     if (score<80)
//     {
//         cout<<"you are counted in not qualified so you are not able to join the councelling process"<<endl;

//     }
//     else if ((score>80)&&(score>200))
//     {
//         cout<<"you are able to get admission in ipu so register yourself for the counselling process"<<endl;
//     }
//     else if ((score>200)&&(score<400))
//     {
//         cout<<"there are so many chances for getting admission in top 5 ipu collleges so do register yourself for the counselling process"<<endl;
//     }
//     int counselling[5]={1,2,3,4,5};
//     cout<<"the first item in the array is "<<counselling[1]<<endl;
//     cout<<"the second item in the array is "<<counselling[2]<<endl;
//     cout<<"the third item in the array is "<<counselling[3]<<endl;
//     cout<<"the fourth item in the array is "<<counselling[4]<<endl;
//     cout<<"the fifth item in the array is "<<counselling[5]<<endl;
//     string printing;
//     cout<<"enter the sentence you wanna print "<<endl;
//     cin>>printing;
//     cout<<printing<<endl;

//     struct employee himanshu;
//     himanshu.empid=101;
//     himanshu.sallary=1;
//     himanshu.amount=" Lakh per month";
//     cout<<"the employee id of himanshu is "<<himanshu.empid<<endl;
//     cout<<"the sallary of himanshu is "<<himanshu.sallary<<himanshu.amount<<endl;

//     return 0;
// }

// #include<iostream>
// using namespace std;
// int reverse(int &a, int &b){           // & ke use se uske adress use hue jiski wajeh se unki values change hui h
//     int temp=a;
//     a=b;
//     b=temp;

// }
// int main(){
//     int a=100,b=200;
//     cout<<"the value of a "<<a<<" before changing "<<" the value of b is "<<b<<endl;
//     reverse(a,b);
//     cout<<"the value of a and b after reversing a= "<<a<<" b = "<<b;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int a=8,b;
//     b=--a*5;
//     cout<<b;
//     return 0;
// }
// #include<iostream>
// using namespace std;

// int main(){
//     int a=8,b;
//     b=a++*5;
//     cout<<a;
//     return 0;
// }
// #include<iostream>
// using namespace std;

// int main(){
//     int a=2;
//     int b=70;
//     switch(a){
//         case 2:
//         b+=5;
//         case 3:
//         b*=2;

//     }
//     cout<<b;
// }
// ==============================>>>>>>  STATIC DATA NUMBER OR DATA TYPE
// #include<iostream>
// using namespace std;
// class Employee{
//     private:
//         int id;
//         static int count;
//     public:
//         void setdata(void){
//             cout<<"Enter the id "<<endl;
//             cin>>id;
//             count++;
//         }
//         void getdata(void){
//             cout<<"the id is "<<id<<" and the number of employee is "<<count<<endl;
//         }
//         static void getCount(){
//             cout<<"the value of count is "<<count<<endl;
//         }
// };
// int Employee :: count=100;  // this sets the value of count =100;
// int main(){
//     Employee sameer,sam,rohan;
//     sameer.setdata();
//     sameer.getdata();
//     Employee :: getCount();
//     sam.setdata();
//     sam.getdata();
//     Employee :: getCount();
//     rohan.setdata();
//     rohan.getdata();
//     Employee :: getCount();
//     return 0;
// }

// REVISION OF STATIC DATA NUMBER ---------------->

// #include<iostream>
// using namespace std;
// class Employee{
//     private:
//         int id;
//         static int count;
//     public:
//         void setdata(void){
//             cout<<"Enter the id"<<endl;
//             cin>>id;
//             count ++;
//         };
//         void getdata(void){
//             cout<<"The id of teh employee is "<<id <<" and the number of employee is "<<count <<endl;
//         }
//         static void getCount(){
//             cout<<"the value of the count is "<<count<<endl;
//         }
// };
// int Employee :: count=100;    // here the value of count is set to 100;

// int main(){
//     Employee aditya,ritik,ramesh;
//     aditya.setdata();
//     aditya.getdata();
//     Employee::getCount;
//     ritik.setdata();
//     ritik.getdata();
//     Employee::getCount;
//     ramesh.setdata();
//     ramesh.getdata();
//     Employee::getCount;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// class Employee{
//     private:
//         int id;
//         static int count;
//     public:
//         void setdata(void){
//             cout<<"Enter the id "<<endl;
//             cin>>id;
//             count++;
//         }
//         void getdata(void){
//             cout<<"The id of the Employee is "<<id<<" and the number of employee is "<<count<<endl;
//         }
//         static void getCount(){
//             cout<<"the value of count is "<<count<<endl;
//         }

// };

// int Employee :: count=100;              // this sets the initial value of count to 100;

// int main(){
//     Employee salman,katrina,aishwarya;
//     salman.setdata();
//     salman.getdata();
//     Employee::getCount();
//     katrina.setdata();
//     katrina.getdata();
//     Employee::getCount();
//     aishwarya.setdata();
//     aishwarya.getdata();
//     Employee::getCount();
//     return 0;
// }

// #include<iostream>
// using namespace std;
// class Employee{
//     int id;
//     static int count;
// public:
//     void setdata(void){
//         cout<<"Enter the id"<<endl;
//         cin>>id;
//         count++;

//     }
//     void getdata(void){
//         cout<<" The id of the Employee is "<<id<<" and the number of employee is "<<count<<endl;

//     }
//     static void getCount(){
//         cout<<"The value of count is "<<count<<endl;
//     }
// };

// int Employee :: count=100;    // this sets the initial value of the count to 100

// int main(){
//     Employee salman,katrina,aishwarya;
//     salman.setdata();
//     salman.getdata();
//     Employee::getCount();
//     katrina.setdata();
//     katrina.getdata();
//     Employee::getCount();
//     aishwarya.setdata();
//     aishwarya.getdata();
//     Employee::getCount();

//     return 0;
// }

// #include<iostream>
// using namespace std;
// class Employee{
//     int id;
//     static int count;
// public:
//     void setdata(void){
//         cout<<"enter the id"<<endl;
//         cin>>id;
//         count++;
//     }
//     void getdata(void){
//         cout<<"The id of the Employee is "<<id<<" and the number of employee is "<<count<<endl;

//     }
//     static void getCount(){
//         cout<<"The value of count is "<<count<<endl;
//     }

// };
// int Employee :: count=1000;                            // this sets the initial value of count to 1000;
// int main(){
//     Employee salman,katrina,luliya;
//     salman.setdata();
//     salman.getdata();
//     Employee::getCount();
//     katrina.setdata();
//     katrina.getdata();
//     Employee::getCount();
//     luliya.setdata();
//     luliya.getdata();
//     Employee::getCount();
//     return 0;
// }

// #include<iostream>
// using namespace std;
// class Employee{
//     int id;
//     static int count;
// public:
//     void setdata(void){
//         cout<<"Enter the id "<<endl;
//         cin>>id;
//         count++;
//     }
//     void getdata(void){
//         cout<<"The id of the Employee is "<<id<<" and the number of employee is "<<count<<endl;

//     }
//     static void getCount(){
//         cout<<"the value of count is "<<count<<endl;
//     }
// };

// int Employee:: count=1000;                 // This sets the initial value of count to 1000

// int main(){
//     Employee salman,katrina,aishwarya;
//     salman.setdata();
//     salman.getdata();
//     Employee::getCount();
//     katrina.setdata();
//     katrina.getdata();
//     Employee::getCount();
//     aishwarya.setdata();
//     aishwarya.getdata();
//     Employee::getCount();
//     return 0;
// }

// #include<iostream>
// using namespace std;
// typedef struct employee{
//     int id;
//     string name;
//     int roll_no;

// }ep;
// int main(){
//     ep himanshu;
//     himanshu.id=101;
//     himanshu.name="XYZ";
//     himanshu.roll_no=1;

//     cout<<"The value of himanshu id "<<himanshu.id<<endl;
//     cout<<"The nick name of himanshu is "<<himanshu.name<<endl;
//     cout<<"The Roll no od himanshu is "<<himanshu.roll_no<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// class Employee {
//     private:
//         int id;
//         static int count;
//     public:
//         void setdata(void){
//             cout<<"Enter the id "<<endl;
//             cin>>id;

//         }
//         void getdata(void){
//             cout<<"The id of the employee is "<<id<<" and the number of employee is "<<count<<endl;
//             count++;
//         }
//         static void getCount(){
//             cout<<"The value of count is "<<count<<endl;
//         }
// };
// int Employee :: count=100;                     // this sets the value of count to 100;
// int main(){
//     Employee himanshu;
//     Employee suresh;
//     Employee heman;
//     himanshu.setdata();
//     himanshu.getdata();
//     Employee::getCount();
//     suresh.setdata();
//     suresh.getdata();
//     Employee::getCount();
//     heman.setdata();
//     heman.getdata();
//     Employee::getCount();
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter the number " << endl;
//     cin >> n;
//     int i;
//     for (int i = 2; i < n; i++)
//     {
//         if (n % i == 0)
//         {
//             cout << "Non prime" << endl;
//             break;
//         }
//     }
//     if (i == n)
//     {
//         cout << "Prime" << endl;
//     }

//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int pocketMoney=3000;

//     int date;
//     for (int i = 0; i < 30; i++)
//     {
//         if (i%2==0)
//         {

//             continue;
//         }
//         if (pocketMoney==0)
//         {
//             cout<<"Paisa khtm"<<endl;
//             break;

//         }

//         cout<<i<<" go out today"<<endl;
//         pocketMoney=pocketMoney-300;

//     }

//     return 0;
// }

// =====================>>>>>>>>>>>>>>>>>>>     CHECKING THE NUMBER IS PRIME OR NOT

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter the number "<<endl;
//     cin>>n;
//     int i;
//     for ( i = 2; i < n; i++)
//     {
//         if (n%i==0)
//         {
//             cout<<"Non prime"<<endl;
//             break;
//         }

//     }
//     if (n==i)
//     {
//         cout<<"Prime number "<<endl;

//     }

//     return 0;
// }

// #include<iostream>
// using namespace std;
// class Employee{
//     private:
//         int id;
//         static int count;
//     public:
//         void setdata(void){
//             cout<<"Enter the id "<<endl;
//             cin>>id;

//         }
//         void getdata(void){
//             cout<<"The id of the employee is "<<id<<" and the number of employee is "<<count<<endl;
//             count++;
//         }
//         static void getCount(){
//             cout<<"The value of count is "<<count<<endl;

//         }
// };
// int Employee :: count=100;

// int main(){
//     Employee himanshu;
//     Employee XYZ;
//     himanshu.setdata();
//     himanshu.getdata();
//     Employee::getCount();
//     XYZ.setdata();
//     XYZ.getdata();
//     Employee::getCount();
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int a,b,c;
//     a=10;
//     b=30;
//     c=a+b;
//     cout<<"The sum of "<<a<<" and "<<b<<" is "<<c<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int a,b;
//     cout<<"Enter two numbers"<<endl;
//     cin>>a>>b;
//     cout<<"The sum is "<<(a+b);
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int a=10,b=7;
//     cout<<"The value of a before increment "<<a<<endl;
//     int c=a++*b;                           // after used in this equation the value of a  becomes 11;
//     int m=10;
//     cout<<"The value of c using post incremnet "<<c<<endl;

//     int x=++m*b;                           // first the value of a  increases to 11 and then it used in the command;
//     cout<<"The value of x using the pre increment "<<x<<endl;
//     cout<<"the value of a after increment is  "<<a<<endl;
//     cout<<"The value of m after increment is "<<m<<endl;
//     return 0;
// }

// post increment and pre increment =======================>>>>>

// #include<iostream>
// using namespace std;

// int main(){
//     int a=50,b;
//     cout<<"The value of a before the incrementation "<<a<<endl;
//     b=a++*2;
//     cout<<"The value of b using the post increment is "<<b<<endl;
//     cout<<"The value of a is "<<a<<endl;
//     int c=++a*2;
//     cout<<"The value of c using the pre increment is "<<c<<endl;
//     cout<<"The value of a is "<<a;
//     return 0;
// }

// post decrement and pre decrement ==============>>>>>>>>>>>>>>>>>>>>

// #include<iostream>
// using namespace std;

// int main(){
//     int a=10,b;
//     b=a--*10;
//     cout<<"The value of a is "<<a<<"\n"<<"The value of b using the post decrement is "<<b<<endl;
//     int m=10;
//     int c=--m*10;
//     cout<<"The value of m is "<<m<<"\n"<<"The value of c using the pre decrement is "<<c<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     // cout<<5/2<<endl;
//     // cout<<5.0/2<<endl;
//     // cout<<5%2;                       // it gives us the remainder

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
// int otp;
// cout << "Enter the otp " << endl;
// cin >> otp;
// if (otp == 2004)
// {
//     cout << "OTP matched " << endl;
// }
// else
// {
//     cout << "Wrong otp " << endl;
// }
//     int n1,n2;
//     cout<<"Enter the two numbers "<<endl;
//     cin>>n1>>n2;
//     cout<<"The sum of these two numbers is "<<n1+n2<<endl;
//     cout<<"The multiplication of these two numbers is "<<n1*n2<<endl;
//     cout<<"The division of these two numbers is "<<n1/n2<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int perimeter(int length,int breadth){
//     int c=2*(length+breadth);
//     return c;
// }
// int area(int length, int breadth){
//     int x=length*breadth;
//     return x;
// }
// int main(){
//     int length,breadth;
//     cout<<"Enter the length of rectangle"<<endl;
//     cin>>length;
//     cout<<"Enter the breadth of rectangle "<<endl;
//     cin>>breadth;
//     cout<<"The perimeter of rectangle is "<<perimeter(length,breadth)<<endl;
//     cout<<"The area of rectangle is "<<area(length,breadth)<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int n1,n2,n3,n4,n5;
//     cout<<"Enter the marks of five subjects"<<endl;
//     cin>>n1>>n2>>n3>>n4>>n5;
//     cout<<"The total marks : "<<n1+n2+n3+n4+n5<<endl;
//     cout<<"The percentage is "<<((n1+n2+n3+n4+n5)*100)/500.0;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {

//     // using if / else statements
//     char button;
//     cout << "Enter a character " << endl;
//     cin >> button;
//     //     if (button=='a')
//     //     {
//     //         cout<<"Hello";
//     //     }
//     //     else if (button=='b')
//     //     {
//     //         cout<<"Namaste ";

//     //     }
//     //     else if(button=='c'){
//     //         cout<<"mtlb kuch bhi";
//     //     }
//     //     else{
//     //         cout<<"I am still learning";
//     //     }

//     switch (button)
//     {
//     case 'a':
//         cout << "Hello";
//         break;
//     case 'b':
//         cout << "How r u bro " << endl;
//         break;
//     case 'c':
//         cout << "CHL nikalle be " << endl;
//         break;
//     case 'd':
//         cout << "i am still learning bro " << endl;
//         break;
//     default:
//         cout << "tumhara kuch nhi ho skta bro" << endl;
//         break;
//     }
//     return 0;
// }

// =========================>>>>>>>>>>>>>>>>>>>>>>    USING SWITCHES ==============>>>>>>>>>>>>>

// #include<iostream>
// using namespace std;

// int main(){
//     int n1,n2;
//     cout<<"Enter two numbers "<<endl;
//     cin>>n1>>n2;

//     char op;
//     cout<<"Enter an operator "<<endl;
//     cin>>op;
//     switch (op)
//     {
//     case '+':
//         cout<<n1+n2;
//         break;
//     case '-':
//         cout<<n1-n2;
//         break;
//     case '*':
//         cout<<n1*n2;
//         break;
//     case '/':
//         cout<<n1/n2;
//         break;
//     default:
//     cout<<"Enter another operator "<<endl;
//         break;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     for (int i = 1; i <=10; i++)
//     {
//         if (i%4==0)
//         {
//             break;
//         }
//         cout<<i<<endl;

//     }
    
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int s=0,i;
//     for ( i = 10; i <= 40; i++)
//     {
//         if (i%10==5)
//         {
//             s += i;
//         }
//         else if (i%10==8)
//         {
//             continue;
//         }
//         else if (i%10==9)
//         {
//             break;
//         }
        
        
//     }
//     cout<<s;
//     return 0;
// }

// some pattern in c++

// 1. this creates a rectangle pattern of *
// #include<iostream>
// using namespace std;

// int main(){
//     int rows , columns;
//     cout<<"enter the no of rows"<<endl;
//     cin>>rows;
//     cout<<"enter the no of columns"<<endl;
//     cin>>columns;
//     for (int i = 1; i <= rows; i++)             // this is for rows 
//     {
//         for (int j = 1; j <= columns; j++)             // this is for columns 
//         {
//             cout<<"*";

//         }
//         cout<<endl;                           // for ending the line after a line of a stars
//     }
        
//     return 0;
// }


// 2. empty rectangle pattern

// #include<iostream>
// using namespace std;

// int main(){
//     int rows,columns;
//     cout<<"Enter the rows "<<endl;
//     cin>>rows;
//     cout<<"Enter the columns "<<endl;
//     cin>>columns;
//     for (int i = 1; i <= rows; i++)
//     {
//         for (int j = 1; j <= columns; j++)
//         {
//             if (i==1||i==rows||j==1||j==columns)
//             {
//                 cout<<"*";
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
    
//     return 0;
// }


// ==================>>>>>>>>>>>>>   PYRAMID PATTERN 
//                    1. simple pyramid pattern
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
    
//     return 0;
// }


//=====================>>>>>>>>>>>>>>>   2. ulta pyramid patten;

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     for (int i = n; i >= 1; i--)
//     {
//         for (int j = 1 ;j <= i; j++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
    
//     return 0;
// }


// printing some patterns 


// 1. a rectangle of # 


// #include<iostream>
// using namespace std;

// int main(){
//     int rows,columns;
//     cin>>rows>>columns;      // getting the rows and columns from user
//     for (int i = 1; i <=rows; i++)
//     {
//         for (int j = 1; j <= columns ; j++)
//         {
//             cout<<"#";
//         }
//         cout<<endl;        
//     }
    
//     return 0;
// }


// 2. a hollow rectangle 


// #include<iostream>
// using namespace std;

// int main(){
//     int rows,columns;
//     cin>>rows>>columns;
//     for (int i = 1; i <=rows; i++)
//     {
//         for (int j = 1; j <= columns; j++)
//         {
//             if (i==1||j==1||i==rows||j==columns)
//             {
//                 cout<<"#";
//             }
//             else{
//                 cout<<" ";
//             }
            
//         }
//         cout<<endl;
//     }
    
//     return 0;
// }


// 3. pyramid 

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout<<"#";

//         }
//         cout<<endl;
//     }
    
//     return 0;
// }


// 4. inverted pyramid

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     for(int i=n;i>=1;i--){
//         for(int j=1;j<=i;j++){
//             cout<<"#";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// #include<iostream>
// using namespace std;

// int main(){
//     int rows,columns;
//     cin>>rows>>columns;
//     for (int i = 1; i <= rows; i++)
//     {
//         for (int j = 1; j <= columns; j++)
//         {
//             if (i==1||i==rows||j==1||j==columns)
//             {
//                 cout<<"#";
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
    
//     return 0;
// }


// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     for (int i = n; i>=1; i--)
//     {
//         for (int j = 1;j<=i; j++)
//         {
//             cout<<"#";
//         }
//         cout<<endl;
//     }
    
//     return 0;
// }


// HALF PYRAMID AFTER 180 ROTATION

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1;j<=n; j++)
//         {
//             if (j<=n-i)
//             {
//                cout<<" "; 
//             }
//             else{
//                 cout<<"*";
//             }
//         }cout<<endl;
        
//     }
    
//     return 0;
// }

// butterfly pattern

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for (int j = 1; j <= i; j++)
//         {
//             cout<<"*";
//         }
//         int space=2*n -2*i;
//         for (int j = 1; j <= space; j++)
//         {
//             cout<<" ";
//         }
//         for (int j = 1; j <= i; j++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
        
        
//     }
//     for(int i=n;i>=1;i--)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout<<"*";

//         }
//         int space=2*n-2*i;
//         for (int j = 1; j<=space; j++)
//         {
//             cout<<" ";
//         }
//         for (int j = 1; j<=i; j++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// printing the number pattern ====   FLOYD TRIANGLE

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int count=1;
//     for (int i = 1; i <=n; i++)
//     {
//         for (int j = 1; j<=i; j++)
//         {
//             cout<<count<<" ";
//             count++;
//         }
//         cout<<endl;
//     }
    
//     return 0;
// }

// half pyramid using numbers 
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <=i; j++)
//         {
//             cout<<i;
//         }
//         cout<<endl;
//     }
    
//     return 0;
// }

// half pyramid after 180 degree rotation


// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     for (int i = 1; i <=n; i++)
//     {
//         for (int j = 1; j <= n ; j++)
//         {
//             if (j<=n-i)
//             {
//                 cout<<" ";
//             }
//             else{
//                 cout<<"*";
//             }

//         }cout<<endl;
        
//     }
    
//     return 0;
// }


// some pattern using c++

// ====================>>>>>>>>>>>>>>>>>      1. simple rectangle 

// #include<iostream>
// using namespace std;

// int main(){
    
//     int n;
//     cin>>n;
//     for (int i = 1; i<=n; i++)
//     {
//         for (int j = 1; j<=n; j++)
//         {
//             cout<<"#";
//         }
//         cout<<endl;
//     }
     
//     return 0;
// }



// ==============================>>>>>>>>>>>>>>>>>>>>       2. Hollow rectangle 
 
// #include<iostream>
// using namespace std;

// int main(){
//     int rows;
//     int columns;
//     cin>>rows;
//     cin>>columns;
//     for (int i = 1; i <= rows; i++)
//     {
//         for (int j = 1; j <= columns; j++)
//         {
//             if (i==1||j==1||i==rows||j==columns)
//             {
//                 cout<<"*";
//             }
//             else{
//                 cout<<" ";
//             }
//         }cout<<endl;
        
//     }
    
//     return 0;
// }


// ==============================================>>>>>>>   3. Pyramid

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
    
//     return 0;
// }

// ==============================================>>>>>>>>  4. inverted pyramid

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     for (int i = n; i >=1; i--)
//     {
//         for (int j = 1; j <=i; j++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
    
//     return 0;
// }

// =============================================>>>>>>>>   pyramid after 180 degree rotation


// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             if (j<=n-i)
//             {
//                 cout<<" ";
//             }
//             else{
//                 cout<<"*";
//             }
//         }
//         cout<<endl;
//     }
    
//     return 0;
// }

// ==================================>>>>>>>>>>>>>>>>>>>>    floyd number pyramid = printing numbers in pyramid form

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int count=1;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i ; j++)
//         {
//             cout<<count<<" ";
//             count++;

//         }
//         cout<<endl;
//     }
    
//     return 0;
// }


// ================================>>>>>>>>>>>>>>>>     butterfly pattern

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j<= i; j++)
        {
            cout<<"*";
        }
        int space=2*n-2*i;
        for (int j = 1; j <= space; j++)
        {
            cout<<" ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
        
    }
    for (int i = n; i >=1; i--)
    {
        for (int j = 1; j<= i; j++)
        {
            cout<<"*";
        }
        int space=2*n-2*i;
        for (int j = 1; j <= space; j++)
        {
            cout<<" ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout<<"*";
        }
       cout<<endl; 
    }
    
    return 0;
}