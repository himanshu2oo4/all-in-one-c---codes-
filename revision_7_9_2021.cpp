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
//     for ( i = 2; i < n; i++)
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

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     for (int i = 1; i <=n; i++)
//     {
//         for (int j = 1; j<= i; j++)
//         {
//             cout<<"*";
//         }
//         int space=2*n-2*i;
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
//     for (int i = n; i >=1; i--)
//     {
//         for (int j = 1; j<= i; j++)
//         {
//             cout<<"*";
//         }
//         int space=2*n-2*i;
//         for (int j = 1; j <= space; j++)
//         {
//             cout<<" ";
//         }
//         for (int j = 1; j <= i; j++)
//         {
//             cout<<"*";
//         }
//        cout<<endl; 
//     }
    
//     return 0;
//}


// #include<iostream>
// using namespace std;

// int main(){
//     int rows,columns;
//     cin>>rows>>columns;
//     for (int i = 1; i <=rows; i++)
//     {
//         for (int j = 1; j<=columns; j++)
//         {
//             if (i==1||j==1||i==rows||j==columns)
//             {
//                 cout<<"*";
//             }
//             else {
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
    
//     return 0;
// }
/// printing the butterfly pattern

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     for (int i = 1; i <=n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout<<"*";
//         }
//         int space=2*n-2*i;
//         for (int j = 1; j <= space; j++)
//         {
//             cout<<" ";
//         }
//         for (int j = 1; j<=i; j++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     for (int i = n; i >=1; i--)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout<<"*";
//         }
//         int space=2*n-2*i;
//         for (int j = 1; j <= space; j++)
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


// #include<iostream>
// using namespace std;

// int main(){
//     // this program prints a butterfly pattern

//     int n;
//     cin>>n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout<<"*";
//         }
//         int space= 2*n-2*i;
//         for (int  j = 1; j <= space; j++)
//         {
//             cout<<" ";      // this is for printing space in butterfly pattern
//         }
//         for (int j = 1; j <= i; j++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }

//     // this is for down part of pattern
//     for (int i = n; i >=1; i--)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout<<"*";
//         }
//         int space= 2*n-2*i;
//         for (int  j = 1; j <= space; j++)
//         {
//             cout<<" ";      // this is for printing space in butterfly pattern
//         }
//         for (int j = 1; j <= i; j++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
    
//     return 0;
// }
// inverted number pattern 

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     for (int i = 1; i<=n; i++)
//     {
//         for (int j = 1; j<= n+1-i;j++)
//         {
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
    
//     return 0;
// }
// 0-1 pattern           **********************                               $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j<=i; j++)
//         {
//             if ((i+j)%2==0)
//             {
//                 cout<<"1 ";
//             }
//             else {
//                 cout<<"0 ";
//             }
//         }
//         cout<<endl;
//     }
    
//     return 0;
// }


// Rhombus patetrn *******************************************************************************


// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     for (int i = 1; i <=n; i++)
//     {
//         for (int j = 1;j<=n-i; j++)
//         {
//             cout<<" ";
//         }
//         for (int j = 1; j <=n; j++)
//         {
//             cout<<"* ";
//         }
//         cout<<endl;
        
//         cout<<endl;
//     }
    
//     return 0;
// }
// **************************   NUMBER PATTERN WITH SOME SPACE ALIGN ****************************

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     for (int i = 1; i <=n; i++)
//     {
//         for (int j = 1; j<=n-i; j++)
//         {
//             cout<<" ";
//         }
//         for (int j = 1; j <= i; j++)
//         {
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
    
    
//     return 0;
// }

//  ********************  PALINDROMIC PATTERN ***********************


// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     for (int i = 1; i <=n; i++)
//     {
//         int j;
//         for (j = 1; j<=n-i; j++)
//         {
//             cout<<"  ";
//         }
//         int k=i;

//         for (; j <=n; j++)
//         {
//             cout<<k--<<" ";
//         }
//         k=2;
//         for (; j <=n+i-1; j++)
//         {
//             cout<<k++<<" ";
//         }
        
//        cout<<endl; 
//     }
    
//     return 0;
// }
//***************************************    STAR PATTERN ************************************

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     for (int i = 1; i <=n; i++)
//     {
//         for (int j = 1; j <=n-i; j++)
//         {
//             cout<<"  ";
//         }
//         for (int j = 1; j <= 2*i-1; j++)
//         {
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     for (int i = n; i >=1; i--)
//     {
//         for (int j = 1; j <=n-i; j++)
//         {
//             cout<<"  ";
//         }
//         for (int j = 1; j <= 2*i-1; j++)
//         {
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
    
//     return 0;
// }


// ****************************   ZIG ZAG PATTERN ***************************************


// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     for (int i = 1; i <= 3; i++)
//     {
//         for (int j = 1; j<=n; j++)
//         {
//             if ((i+j)%4==0||(i==2 && j%4==0))
//             {
//                 cout<<"* ";
//             }
           
            
//             else{
//                 cout<< "  ";
//             }
//         }
//         cout<<endl;
//     }
    
//     return 0;
// }


//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%    CHECKING A NUMBER IS PRIME OR NOT USING THE FUNCTION METHOD  %%%%%%%%%%%%%%%%%%%%%%%%


// #include<iostream>
// #include<cmath>
// using namespace std;
// bool isPrime(int num){
//     for (int i = 2; i <= sqrt(num); i++)
//     {
//         if (num%i==0)
//         {
//             return false;
//         }
        
//     }
//     return true;
// }
// int main(){
//     int a,b;
//     cin>>a>>b;
//     for (int i = a; i <= b; i++)
//     {
//         if (isPrime(i))
//         {
//             cout<<i<<endl;
//         }
        
//     }
    
//     return 0;
// }

// %%%%%%%%%%%%%%%%%%%%  PRINITING FIBONACCI SERIES USING THE FUNCTION METHD  %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

// #include<iostream>
// using namespace std;
// void fibonacci(int n){
//     int t1=0;
//     int t2=1;
//     for (int  i = 1; i <= n; i++)
//     {
//         cout<<t1<<endl;
//         int nextTerm=t1+t2;
//         t1=t2;
//         t2=nextTerm;

//     }
//     return;
// }
// int main(){
//     int n;
//     cin>>n;
//     fibonacci(n);
//     return 0;
// }



// %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%  CALCULATING THE FACTORIAL OF A NUMBER USING THE FUNCTION METHOD %%%%%%%%%

// #include<iostream>
// using namespace std;
// int factorial(int n){
//     int fact=1;
//     for (int i = 2; i <= n; i++)
//     {
//         fact*=i;
//     }
//     return fact;
// }
// int main(){
//     int num;
//     cin>>num;
//     cout<<"The factorial of "<<num<<" is "<<factorial(num);
//     return 0;
// }


// calculating the ncr %%%%%%%%%%%%%%%%%%%%%%%

// #include<iostream>
// using namespace std;
// int factorial(int n){
//     int fact=1;
//     for (int i = 2; i <= n; i++)
//     {
//         fact*=i;

//     }
//     return fact;
// }
// int main(){
//     int n,r;
//     cin>>n>>r;
//     int ans= factorial(n)/(factorial(r)*factorial(n-r));
//     cout<<"the ncr is "<<ans<<endl;

//     return 0;
// }


// %%%%%%%%% calculating sum of first n natural numbers 

// #include<iostream>
// using namespace std;
// int sum(int n){
//     int ans=0;
//     for (int i = 1; i <= n; i++)
//     {
//         ans+=i;
//     }
//     return ans;
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<"the sum of "<<n<<" natural numbers are "<<sum(n);   
//     return 0;
//}

// printing prime numbers between two numbers

// #include<iostream>
// #include<math.h>
// using namespace std;
// bool isPrime(int n){
//     for (int i = 2; i <= sqrt(n); i++)
//     {
//         if (n%i==0)
//         {
//             return false;
//         }
        
//     }
//     return true;
// }
// int main(){
//     int a,b;
//     cin>>a>>b;
//     for (int i = a; i <= b; i++)
//     {
//         if (isPrime(i))
//         {
//             cout<<i<<endl;
//         }
        
//     }
    
    
//     return 0;
// // }

// %%%%%%%%%%%%%%%%%%%%%%% fibonaccci series %%%%%%%%%%%%%%%%%%
// #include<iostream>
// using namespace std;
// int fibonacci(int n){
//     int t1=0;
//     int t2=1;
//     for (int  i = 1; i <= n; i++)
//     {
//         cout<<t1<<endl;
//         int nextTerm=t1+t2;
//         t1=t2;

//         t2=nextTerm;
//     }
    
// }
// int main(){
//     int n;
//     cin>>n;
//     fibonacci(n);
//     return 0;
// }


// %%%%%%%%%%%%%%%%%  finding factorial using function method


// #include<iostream>
// using namespace std;
// int factorial(int n){
//     int fact=1;
//     for (int i = 2; i <= n; i++)
//     {
//         fact*=i;
//     }
//     return fact;
// }

// int main(){
//     int n;
//     cin>>n;
//     int ans=factorial(n);
//     cout<<"The factorial is "<<ans<<endl;
//     return 0;
// }

// %%%%%%%%%%%%%%%%%%%%%%   calculating the ncr using the function 

// #include<iostream>
// using namespace std;
// int factorial(int num){
//     int fact=1;
//     for (int i = 2; i <= num; i++)
//     {
//         fact*=i;
//     }
//     return fact;
// }
// int main(){
//     int n,r;
//     cin>>n>>r;
//     int ans=factorial(n)/(factorial(r)*factorial(n-r));
//     cout<<"The ncr is "<<ans<<endl;
//     return 0;
// }
// %%%%%%%%%%%%%  pascal pattern %%%%%%%%
// #include<iostream>
// using namespace std;
// int factorial(int n){
//     int fact=1;
//     for (int i = 2; i <= n; i++)
//     {
//         fact*= i;

//     }
//     return fact;
// }
// int main(){
//     int n;
//     cin>>n;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0;j<=i; j++)
//         {
//             cout<<factorial(i)/(factorial(j)*factorial(i-j))<<"  ";
//         }
//         cout<<endl;
//     }
    
//     return 0;
// }

//%%%%%%%%%%%%%%%%%%%%%%% sum of first n natural numbers %%%%%%%%%%%%%%%%%%%%
// #include<iostream>
// using namespace std;
// int sum(int n){
//     int ans=0;
//     for (int i = 1; i <= n; i++)
//     {
//         ans+=i;
//     }
//     return ans;
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<"the sum of first "<<n<<" natural numbers are "<<sum(n);
    
    
//     return 0;
// }

// printing the pattern of star 

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     for (int i = 1; i <= n; i++)
//     {
//         for ( int j=1; j <= n-i; j++)
//         {
//             cout<<"  "; 
//         }
//         for (int j = 1; j <= 2*i-1; j++)
//         {
//             cout<<"* ";
//         }
//         cout<<endl;   
//     }
//     for (int i = n; i >=1; i--)
//     {
//         for ( int j=1; j <= n-i; j++)
//         {
//             cout<<"  "; 
//         }
//         for (int j = 1; j <= 2*i-1; j++)
//         {
//             cout<<"* ";
//         }
//         cout<<endl;   
//     }
//     return 0;
// }

// printing sum of two numbers 

// #include<iostream>
// using namespace std;

// int main(){
//     int a,b;
//     cout<<"Enter two numbers "<<endl;
//     cin>>a>>b;
//     int sum= a+b;
//     cout<<"The sum is "<<sum;

//     return 0;
// }


// program for getting your name and welcomes you according to your gender 

// #include<iostream>
// using namespace std;

// int main(){
//     string name;
//     string gender;

//     cout<<"May i know your name "<<endl;
//     getline(cin,name);
//     cout<<"May i know your gender please "<<endl;
//     cin>>gender;
//     if(gender=="female"){
//         cout<<"Welcome Miss. "<<name<<endl;

//     }
//     else if(gender=="male"){
//         cout<<"welcome Mr. "<<name<<endl;

//     }
//     else if(gender=="other"){
//         cout<<"Welcome Mr/Miss "<<name<<endl;

//     }
//     return 0;
// }

// finding sum of first natural numbers  and printing the natural numbers 

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter the last digit "<<endl;
//     cin>>n;
//     int sum=0;
//     for (int i = 1; i <= n; i++)
//     {
//         cout<<i<<endl;
//         sum+=i;
//     }
//     cout<<"The sum is "<<sum<<endl;
//     cout<<"The sum of first "<<n<<" natural numbers is "<<sum;

//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n-i; j++)
//         {
//             cout<<"  ";
//         }
//         for (int j = 1;j<=2*i-1; j++)

//         {
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     for (int i = n; i>= 1; i--)
//     {
//         for (int j = 1; j <= n-i; j++)
//         {
//             cout<<"  ";
//         }
//         for (int j = 1;j<=2*i-1; j++)

//         {
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// #include<iostream>
// #include<cmath>
// using namespace std;

// int main(){
//     float a,b,c,r1,r2;
//     cout<<"Enter the value of a ,b ,c"<<endl;
//     cin>>a>>b>>c;
//      r1= (-b+sqrt(pow(b,2)-4*a*c))/(2*a);
//      r2=(-b-sqrt(pow(b,2)-4*a*c))/(2*a);
//     cout<<"The roots are "<<r1<<" and "<<r2;
    
//     return 0;
// }



// calculating the area of a circle 
// #include<iostream>
// #include<cmath>
// using namespace std;

// int main(){
//     float area,r;
//     cout<<"Enter the radius "<<endl;
//     cin>>r;
//     // area= 3.14 * pow(r,2);         // this returns the ans in float values bcoz one of the data in area is stored as a point value(3.14)
//     // area= 22/7 *pow(r,2);   // this returns the int value bcoz there is no decimal values used here 
//     area = (float)22/7 *pow(r,2);  // this return the area in float values bcoz we change its data type to float through typecasting 

//     cout<<"the area is "<<area<<endl;
//     return 0;
// }


// getting roots %%%%%%


// #include<iostream>
// #include<math.h>
// using namespace std;

// int main(){
//     int a,b,c;
//     float root1, root2;
//     cout<<"Enter the values of a , b and c "<<endl;
//     cin>>a>>b>>c;                       // try values 4,8,4 
//     root1= (-b+ sqrt(b*b-4*a*c))/(2*a);
//     root2= (-b- sqrt(b*b-4*a*c))/(2*a);
//     cout<<"The roots are "<<root1<<" and "<<root2;
//     return 0;
// }


// code for finding the speed 

// #include<iostream>
// #include<math.h>
// using namespace std;

// int main(){
//     int v, u,t;
//     cout<<"Enter the initial velocity ";
//     cin>>u;
//     cout<<"Enter the final velocity ";
//     cin>>v;
//     cout<<"Enter the timePeriod in seconds ";
//     cin>>t;

//     float a= (v-u)/t;
//     cout<<"The accelaration is "<<a<< " m/s2"<<endl;
//     float speed= (pow(v,2)-pow(u,2))/(2*a);
//     cout<<"The speed is "<<speed<<" m/s "<<endl;
//     return 0;
// }


// compound assognment operators 

// #include<iostream>
// using namespace std;

// int main(){
//     int a=10,b=5,c=15;
//     int sum=5;
//     int product=5;
//     sum+= a+b+c;
//     product *= a*b*c;
//     cout<<"The value of sum is "<<sum<<endl;
//     cout<<"The value of product is "<<product<<endl;


//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
    // int i=5;
    
    // int j= 2 * i++ + 2* i++;      // isme i ki value pehle badhegi then i mein store ho jayegi 
    // int j=i++;       // isme i ki value pehle store hogi then badhegi 

    // cout<<"The value of i is "<<i <<" and the value of j is "<<j <<endl;


    // char x=127;
    // ++x;
    // cout<<"The value of x is "<<(int)x<<endl;    // this gives output -128  bcoz there is no value more than 127 in char bcoz the range in char is -128 to 127

    // %%%%%%  BITWISE OPERATORS %%%%%%%%%

    // int x=11,y=5;
    // int z=x&y;                     // this is not a simply multiplication in this you multiplying in their binary digits 
    //  cout<<"The value of z is "<<z<<endl;
    
    // char x=5,y;
    // y=~(~x);       // double compliment 
    // cout<<"The value of y is "<<(int)y<<endl;


//     //left shift operators 
//     cout<<"This is by left side shifts operator "<<endl;
//     int x=5,y;
//     cout<<"The value of x is "<<x<<endl;
//     y= x<<1;           // here the value of x shift to left and at the vacant place 0 is added okay
//                             // logic of left side shifts is ( x* 2 ki power n)here n= n of shifts 
//     cout<<"The value of y is "<<y<<endl;
// cout<<endl;
// cout<<endl;
// cout<<endl;

//     // for right shifts the logic is (x/2 ki power n )here n is the no of shifts 
//     cout<<"This is by right shift operator"<<endl;
//     int m=6,n;
//     n=m>>1;
//     cout<<"The value of m is "<<m<<endl;
//     cout<<"The value of n is "<<n<<endl;
 

 

//     return 0;
// }

// %%%%%%%  Getting max between two numbers %%%%%%%%%%%%%%%%%%%


// #include<iostream>
// using namespace std;

// int main(){
//     int x,y;
//     cout<<"Enter the value of x "<<endl;
//     cin>>x;
//     cout<<"Enter the value of y "<<endl;
//     cin>>y;
//     if (x>y)
//     {
//         cout<<"Max is "<<x<<" and it is the value you entered in X";
//     }
//     else{
//         cout<<"Max is "<<y<<" and it is the value you entered in Y";
//     }
    
//     return 0;
// }


// entering two numbers and dividing them if the divisor is zero prints no output to be shown 


// #include<iostream>
// using namespace std;

// int main(){
//     int a,b;
//     cout<<"Enter two numbers \n";
//     cin>>a>>b;
//     if(b==0){
//         cout<<"No output to shown ";

//     }
// else{
//     int c= a/b;
//     cout<<c<<endl;
// }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int time;
//     cout<<"%%%%%%%%%%%%%% To enter the timeperiod use 24 hour format %%%%%%%%%%%%% "<<endl;

//     cout<<"Enter the timeperiod "<<endl;
//     cin>>time;
//     if ((time>=9)&&(time<=18))
//     {
//         cout<<"its an working hour ";
//     }
//     else{
//         cout<<"its a leisure hour "<<endl;
//     }
    
//     return 0;
// }

//%%%%%%%%%%%%  getting info about the working and leisure time %%%%%%%%%%%%%%%%%%%%


// #include<iostream>
// using namespace std;
// int timing(int TimePeriod){
//     if((TimePeriod>=9)&&(TimePeriod<=18)){
//         cout<<"Working time";
//     }
//     else{
//         cout<<"Its leisure timePeriod";
//     }
// }
// int main(){
//     int Time;
//     cout<<"Enter the  timePeriod in 24-hr format"<<endl;
//     cin>>Time;
//     timing(Time);
//     return 0;
// }


// %%   TELLING THE USER THAT HE WAS YOUNG OR NOT WITH HIS/HER GENDER INFO %%%%%%%%%%%%%%%%%

// #include<iostream>
// using namespace std;

// int main(){
//     int age;
//     string gender;
//     cout<<"Enter your age "<<endl;
//     cin>>age;
//     cout<<"Choose Your gender please (male/female/other)"<<endl;
//     cin>>gender;
//     if ((gender=="male")&&(age>=18)&&(age<=40))
//     {
//     cout<<"you are young guy sir ";
//     }
//     else if ((age>=18)&&(age<=40)&&(gender=="female")){
//         cout<<"You are young guy mam ";

//     }
//     else if((age<18)&&(age>0)){
//         cout<<"You are a kid not a young guy ";
//     }
//     else{
//         cout<<"you are not young ";
//     }
//     return 0;
// }


// checking you are elligible for a program or not elligibility given only to childrens and olds 

// #include<iostream>
// using namespace std;

// int main(){
//     int age;
    

//     cout<<"May i know your age "<<endl;
//     cin>>age;
    
//     if(age<=12 || age>=50 ){
//         cout<<"elligible ";
//     }
// else{
//     cout<<"Not elligble ";
// }
//     return 0;
// }


// checking max of three numbers 

// #include<iostream>
// using namespace std;

// int main(){
//     int a,b,c;
//     cout<<"Enter three numbers "<<endl;
//     cin>>a>>b>>c;
//     if(a>b && a>c){
//         cout<<"the greater number is "<<a<<" and you entered this value in a "<<endl;
        
//     }   
//     else if(b>c){
//         cout<<"The greater number is "<<b<<" and you entered this value in b";
//     } 
//     else {
//         cout<<"The greater number is "<<c<<" and you entered this value in c";
//     }

//     return 0;
// }


// creating a program to check the nature of the roots of a quadratic equation 

// #include<iostream>
// #include<math.h>
// using namespace std;

// int main(){
//     int a,b,c,r1,r2;
//     cout<<"Enter the value of a ,b and c "<<endl;
//     cin>>a>>b>>c;
//     r1=(-b+sqrt(b*b-4*a*c))/(2*a);
//     r1=(-b-sqrt(b*b-4*a*c))/(2*a);
//     cout<<"the roots are "<<r1<<" and "<<r2<<endl;
//     int d=b*b-4*a*c;
//     if (d==0)
//     {
//         cout<<"Real and equal roots ";
//     }
//     else if(d>0){
//         cout<<"Real and non-equal roots "<<endl;

//     }
//     else if(d<0){
//         cout<<"imaginary roots ";
//     }
//     return 0;
// }

// giving grades 


// #include<iostream>
// using namespace std;

// int main(){
//     int m1,m2,m3;
//     cout<<"Enter the marks in three subjects "<<endl;
//     cin>>m1>>m2>>m3;
//     int total=m1+m2+m3;
//     cout<<"The total marks you obtained is "<<total<<endl;

//     float avg=total/3;
//     cout<<"The average is "<<avg<<endl;
//     if(avg>60){
//         cout<<"A";
//     }
//     else if((avg>=35) && (avg<=60)){
//         cout<<"B";

//     }
//     else if(avg<35){
//         cout<<"C";
//     }
//     return 0;
// }


// get a day number and prints the day name 

// #include<iostream>

// using namespace std;

// int main(){
//     int day;
//     cout<<"Enter the day number "<<endl;
//     cin>>day;
//     if (day==1)
//     {
//         cout<<"Monday";
//     }
//     else if(day==2){
//         cout<<"Tuesday";
//     }
//     else if(day==3){
//         cout<<"Wednesday";
    
//     }
//     else if(day==4){
//         cout<<"Thursday";
//     }
//     else if(day==5){
//         cout<<"Friday";
//     }
//     else if(day==6){
//         cout<<"Saturday";

//     }
//     else if(day==7){
//         cout<<"Sunday";
//     }
    
    // same thing using the switch method 

    // switch (day)
    // {
    // case 1:
    //     cout<<"Monday";
    //     break;
    // case 2:
    // cout<<"Tuesday";
    // break;
    // case 3:
    // cout<<"Wednesday";
    // break;
    // case 4:
    // cout<<"Thurday";
    // break;
    // case 5:
    // cout<<"Friday ";
    // break;
    // case 6:
    // cout<<"Saturday";
    // break;
    // case 7:
    // cout<<"Sunday";
    // break;
    // default:
    //     break;
    // }
//     else{
//         cout<<"Invalid day Number "<<endl;
//     }
//     return 0;
// }


// #include<iostream>
// using namespace std;

// int main(){
    // int a=5,b=7,i=5;              // this gives the output as 5 bcoz while running this it doesnt satisfies the and operator conditions so it gives short circuit error 
    // int a=15,b=7,i=5;    // if the value of a=15 all the conditions satisfy's so this works ;
    // if(a>b && ++i<b){}
    // cout<<i<<endl;


    // in an or operator  if a single condition gets true it make the ans as true
//     int a=5,b=7,i=5;
//     if(a<b && ++i>b){
//                          // if a single statement gets true then it make whole statement as true 
//     } cout<<i<<endl;
//     return 0;
// }

// switch cases

// #include<iostream>
// using namespace std;

// int main(){
//     int roll_no;
//     cout<<"Enter your roll number "<<endl;
//     cin>>roll_no;
//     switch(roll_no){
//         case 1 :cout<<"Pass";
//         break;
//         case 2 : cout<<"fail";
//         break;
//         case 3 : cout<<"Pass ";
//         break;
//         case 4 : cout<<"Pass ";
//         break;
//         default:cout<<"Invalid roll number ";
//     }
//     return 0;
// }


// #include<iostream>
// using namespace std;

// int main(){
//     int a,b;
//     char sign;
//     cout<<"Enter two numbers "<<endl;
//     cin>>a>>b;

//     cout<<"Enter the operator "<<endl;
//     cin>>sign;
//     switch(sign){
//         case '+':
           
//             cout<<a+b;
//         break;
//         case '-':
//             cout<<a-b;
//             break;
        
//         case '*':
//             cout<<a*b;
//         break;
//         case '/':
//             cout<<a/b;
//             break;
        
//     }
//     return 0;
// }
// #include<iostream>
// using namespace std;

// int main(){
//     int sign;
//     int a,b;

//     cout<<"Enter two numbers "<<endl;
//     cin>>a>>b;
//     cout<<"Menu"<<endl;

//     cout<<"1.Add \n2.Multiply \n3.Divide \n4.subtract"<<endl;
//     cout<<"Your entered numbers are "<<a<<" and "<<b<<endl;
//     cout<<"Enter what you wanna do from the above menu "<<endl;
    
//     cin>>sign;
//     switch (sign){
//         case 1: cout<<a+b;
//         break;
//         case 2: 
//         cout<<a*b;
//         break;
//         case 3:cout<<a/b;
//         break;
//         case 4: cout<<a-b;
//         break;
//         default : cout<<"you entered an invalid operator "<<endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int option;
//     cout<<"Menu"<<endl;
//     cout<<"1. Add \n"<<"2. Subtract \n"<<"3. Multiply \n"<<"4. Divide \n";
//     cout<<"Enter your choice "<<endl;
//     cin>>option;
//     int a,b;
//     cout<<"Enter two numbers "<<endl;
//     cin>>a>>b;
//     switch(option){
//         case 1:cout<<a+b<<endl;
//         break;
//         case 2: cout<<a-b<<endl;
//         break;
//         case 3: cout<<a*b<<endl;
//         break;
//         case 4 : cout<<a/b<<endl;
//         break;
//         default: cout<<"You entered an invalid operator ";
//     }
//     return 0;
// }


// exercise question solving 

// #include<iostream>
// using namespace std;

// int main(){
//     int TotalAmount;
//     cout<<"Enter the total amount "<<endl;
//     cin>>TotalAmount;
//     if (TotalAmount<100)
//     {
//         cout<<"No discount";
//     }
//     else if((TotalAmount>=100) && (TotalAmount<500))   {
//         cout<<"Only 10% discount ";
//         TotalAmount= TotalAmount-(TotalAmount*10/100);
//         cout<<"Amount after the discount "<<TotalAmount<<endl;

//     } 
//     else if(TotalAmount>=500){
//         cout<<"Only 20% discount "<<endl;
//         TotalAmount=TotalAmount - (TotalAmount*20/100);
//         cout<<"Amount after the discount "<<TotalAmount<<endl;
//     }
//     return 0;
// }


// #include<iostream>
// using namespace std;

// int main(){
//     int billamount,discount;
//     cout<<"Enter the bill amount"<<endl;
//     cin>>billamount;
//     if (billamount<100){
//         cout<<"sorry no discount available "<<endl;

//     }
//     else if(billamount>=100 && billamount<500){
//         discount=billamount*10/100;

//     }
//     else if(billamount>500)
//     {    discount=billamount*20/100;
//     }
//     cout<<"The Total bill is of "<<billamount<<endl;
//     cout<<"The discount available is "<<discount<<endl;
//     cout<<"The doscounted amount is "<<billamount-discount;

    
//     return 0;
// }

// checking a year is leap year or not

// #include<iostream>
// using namespace std;

// int main(){
//     int year ;
//     cout<<"Enter the year "<<endl;
//     cin>>year;
//     if (year%4==0)
//     {
//         if (year%100==0)
//         {
//             if (year%400==0)
//             {
//                 cout<<"Its a leap year "<<endl;
//             }
//             else {
//                 cout<<"Its not a leap year "<<endl;
//             }
//         }
//         else {
//             cout<<"Its a leap year "<<endl;
//         }
        
//     }
    
//     return 0;
// }

// using while loop ;
// #include<iostream>
// using namespace std;

// int main(){
//     int n,i=1;
//     cout<<"Enter the value of n "<<endl;
//     cin>>n;
//     // while(i<=n){
//     //     cout<<i<<endl;
//     //     i++;
//     // }

//     do{
//         cout<<i<<endl;
//         i++;
//     }while(i<=n && n>0);
//     return 0;
//}

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter the value of n"<<endl;
//     cin>>n;
//     for(int i=1;i<=n;i++){                      // %%%%%%  for loop is also known as counter controlled loop %%%%%%%%%%%%
//         cout<<i<<endl;
//     }
//     return 0;
// }


// for loop 

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter the value of n "<<endl;
//     cin>>n;
//     // for(int i=0;i<n;i++){
//     //     cout<<i<<" Hello"<<endl;
//     //}

//     // while loop

//     int i=0;
//     // while(i<n){
//     //     cout<<i<<" Hello "<<endl;
//     //     i++;
//     // }

//     // do while loop 
//     do{
//         cout<<i<<" Hello "<<endl;
//         i++;
//     }while(i<n);

//     return 0;
// }


// #include<iostream>
// using namespace std;

// int main(){
//     int n=6;
//     for(int i=1;i<=10;i++){
//         cout<<n<<" * "<<i<< " = "<<n*i<<endl;
//     }
//     return 0;
// }


// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter the value of n "<<endl;
//     cin>>n;
//     for(int i=1;i<=10;i++){
//         cout<<n<<" * "<<i<<" = "<<n*i<<endl;

//     }
    
//     return 0;
// }


// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter the value of n "<<endl;
//     cin>>n;
//     int sum=0;
//     for(int i=1;i<=n;i++){
//         cout<<"The "<<i<<"st natural number is "<<i<<endl;
//         sum+=i;
//     }
//     cout<<"The sum of first "<<n<<" natural terms is "<<sum<<endl;

//     return 0;
// }
// %%%%%%%%%%%%  printing sum of natural number using the while loop %%%%%%%%%%%%%%%%%%%%%%%%

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int i=1,sum=0;
//     while(i<=n){
//         sum+=i;
//         i++;
//     }
//     cout<<"Sum is "<<sum;
//     return 0;
// }


// %%%%%%%%%%%%%%%%%   printing sum of natural numbers using the do-while loop %%%%%%%%%%%%

// #include<iostream>
// using namespace std;

// int main(){
//     int n,i=1;
//     cout<<"Enter the value of n"<<endl;
//     cin>>n;

//     int sum=0;
//     do{
//         sum+=i;
//         i++;

//     }while(i<=n);
// cout<<"Sum is "<<sum;
//     return 0;
// }
// factorial using for loop

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter the value of n "<<endl;
//     cin>>n;
//     int factorial=1;
//     for (int i = 1; i <=n; i++)
//     {
//         factorial=factorial*i;
        
//     }
//     cout<<n<<"! = "<<factorial;
//     return 0;
// }

// factorial using while loop


// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     int factorial=1;
//     cout<<"Enter the value of n "<<endl;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         factorial=factorial*i;
//         i++;

//     }cout<<"The factorial is "<<factorial;

//     return 0;
// }

// factorial using the do-while loop

// #include<iostream>
// using namespace std;

// int main(){
//     int n,i=1;
//     int factorial=1;

//     cout<<"Enter the value of n "<<endl;
//     cin>>n;

//     do{
//         factorial=factorial*i;
//         i++;
//     }while(i<=n);
//     cout<<"The factorial is "<<factorial;
//     return 0;

// }

// factorial of a number using the function method 
// #include<iostream>
// using namespace std;
// int factorial(int n){                           // function which return the factorial of a number 
//     int fact=1;
//     for(int i=1;i<=n;i++){
//         fact*=i;
//     }
//     return fact;
// }
// int main(){
//     int n;
//     cout<<"Enter the value of n "<<endl;
//     cin>>n;
//     cout<<"The factorial is "<<factorial(n);
//     return 0;
// }


// Printing sum of first natural numbers 

// #include<iostream>
// using namespace std;

// int main(){
//     int n,sum=0;
//     cout<<"Enter the value of n "<<endl;
//     cin>>n;
    
//     for(int i=1;i<=n;i++){
//         sum+=i;
//     }
//     cout<<"The Sum of first "<<n<<" natural terms is "<<sum;
//     return 0;
// }


// printing the factors of  a number 


// #include<iostream>
// using namespace std;

// int main(){
//     int n,sum=0;
//     cout<<"Enter the value of n "<<endl;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         if(n%i==0){
            
//             cout<<i<<endl;
//             sum+=i;
//         } 
        
//     }
//     cout<<"The sum of all factors is "<<sum;
//     return 0;
// }


// %%%%%%%  Perfect number : if the sum of factors is equal to the number itself then the
//             is called as a perfect number 

// #include<iostream>
// using namespace std;

// int main(){
//     int n,sum=0;
//     cout<<"Enter the value of n "<<endl;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         if(n%i==0){
//             sum+=i;
//         }
//     }
//     if(sum==2*n){
//         cout<<"Its a Perfect number "<<endl;
//     }else{
//         cout<<"Its not a perfect number ";
//     }
//     return 0;
// }


// getting factorials of a given number by the user 


// #include<iostream>
// using namespace std;

// int main(){
//     int n,fact=1;
//     cout<<"Enter the value of n "<<endl;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         fact*=i;
//     }
//     cout<<n<<"! = "<<fact;    
//     return 0;
// }
// getting the sum of first n natural numbers 
// #include<iostream>
// using namespace std;

// int main(){
//     int n,sum=0;
//     cout<<"Enter the value of n "<<endl;
//     cin>>n;
//     cout<<"The Natural numbers are :-"<<endl;
//     for(int i=1;i<=n;i++){
//         sum+=i;
//         cout<<i<<endl;
//     }
//     cout<<"The sum of first natural numbers is "<<sum;
//     return 0;
// }


// printing the factors of a number 
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     cout<<"The factors of "<<n<<" are :-"<<endl;

//     for(int i=1;i<=n;i++){
//         if(n%i==0){
//             cout<<i<<endl;
//         }
//     }
//     return 0;
// }

// getting the factors and printing the sum of their factors 
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     int sum=0;
//     cout<<"Enter the value of n "<<endl;
//     cin>>n;
//     cout<<"The factors of "<<n<<" are :-"<<endl;
//     for(int i=1;i<=n;i++){
//         if(n%i==0){
//             cout<<i<<endl;
//             sum+=i;
//         }
//     }
//     cout<<"The sum of these factors are "<<sum;
//     return 0;
// }


// checking a number is perfect number or not 

// #include<iostream>
// using namespace std;

// int main(){
//     int n,sum=0;
//     cout<<"Enter the value of n "<<endl;
//     cin>>n;
//     cout<<"The factors of "<<n<<" are :-"<<endl;

//     for(int i=1;i<=n;i++){
//         if(n%i==0){
//             cout<<i<<endl;
//             sum+=i;
//         }
        
//     }
//     cout<<"The sum of these factors are "<<sum<<endl;
//     if(sum==2*n){
//         cout<<"perfect number";
//     }
//     else{
//         cout<<"Not a Perfect number"<<endl;
//     }
//     return 0;
// }


// checking a number is prime or not using the flag  

// #include<iostream>
// using namespace std;

// int main(){
//     int n,i;
//     int flag=0;
//     cout<<"Enter the number "<<endl;
//     cin>>n;
//     for(i=2;i<n;i++){
//         if(n%i==0){
//             cout<<"Its not a prime number "<<endl;
//             flag=1;
//             break;
//         }

//     }
//     if(flag==0){
//         cout<<"Its a prime number ";
//     }
//     return 0;
// }


// sabse alag method to find out the prime number 

// #include<iostream>
// using namespace std;

// int main(){
//     int n,fact=0;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         if(n%i==0){
//             fact+=1;
//         }
//     }
//     if(fact==2){
//         cout<<"Prime number ";
//     }
//     else{
//         cout<<"Its not a Prime number";
//     }
//     return 0;
// }

// Checking a number is prime or not
// #include<iostream>
// using namespace std;

// int main(){
//     int n,count=0;
//     cout<<"Enter the value of n"<<endl;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         if(n%i==0){
//             count++;
//         }
//     }
//     if(count==2){
//         cout<<"Prime number";
//     }else{
//         cout<<"Non Prime";
//     }
//     return 0;
// } 

// printing prime number between two numbers 

// #include<iostream>
// #include<math.h>
// using namespace std;
// bool isPrime(int n){
//     for(int i=2;i<=sqrt(n);i++){
//         if(n%i==0){
//           return  false;
//            }       

//     }
//     return true;
// }
// int main(){
//     int a,n;
//     cout<<"Enter the starting point "<<endl;
//     cin>>a;
//     cout<<"Enter the end point "<<endl;
//     cin>>n;
//     cout<<"The prime numbers between "<<a<<" and "<<n<<" are :-"<<endl;
//     for(int i=a;i<=n;i++){
//         if(isPrime(i)){
//             cout<<i<<endl;
//         }
//     }
//     return 0;
// }

// prinring the reverse of a number 

// #include<iostream>
// using namespace std;

// int main(){
//     int n,r;
//     cout<<"Enter the number "<<endl;

//     cin>>n;
//     while(n>0){
//         r=n%10;
//         n=n/10;
//         cout<<r;
//     }
//     return 0;
// }

// checking a number is armstrong or not 
// #include<iostream>
// #include<math.h>
// using namespace std;

// int main(){
//     int n,r,m,sum=0;
//     cout<<"Enter the number "<<endl;
//     cin>>n;
//     m=n;
//     while(n>0){
//         r=n%10;
//         n=n/10;
//         sum=sum+r*r*r;
//     }
//     if(sum==m){
//         cout<<"Armstrong number";
//     }
//     else{
//         cout<<"Not an armstrong number";
//     }
//     return 0;
// }


// %%%%%%%%  CHECKING A NUMBER IS ARMSTRONG OR NOT 
// #include<iostream>
// using namespace std;

// int main(){
//     int n,r,sum=0,m;
//     cout<<"Enter the value of n"<<endl;
//     cin>>n;
//     m=n;
//     while(n>0){
//         r=n%10;
//         n=n/10;
//         sum=sum+r*r*r;

//     }
//     if(sum==m){
//         cout<<"Armstrong number";

//     }
//     else{
//         cout<<"Not an armstrong number";
//     }
//     return 0;
// }

// reversing a number if number is 153 prints 351 ;
// #include<iostream>
// #include<string>

// using namespace std;

// int main(){
//     int n,rev=0,r;
    
//     cout<<"Enter a number ";
//     cin>>n;
//     string word=n;
    
//     while(n>0){
//         r=n%10;
//         n=n/10;
//         rev=rev*10+r;
    
//     }
// cout<<rev;
// cout<<(string)word<<endl;
//     return 0;
// }

// checking a number is pallindrome or not 

// #include<iostream>
// using namespace std;

// int main(){
//     int n,r,rev=0,m;
//     cout<<"Enter the number ";
//     cin>>n;
//     m=n;
//     while(n>0){
//         r=n%10;
//         n=n/10;
//         rev=rev*10+r;
//     }
//     cout<<"its reverse is "<<rev<<endl;
//     if(rev==m){
//         cout<<"so its a pallindrome number ";
//     }
//     else{
//         cout<<"so its not a pallindrome number ";

//     }

//     return 0;
// }
// finding the gcd of two numbers
// #include<iostream>
// using namespace std;

// int main(){
//     int m,n;
//     cout<<"Enter two numbers "<<endl;
//     cin>>m>>n;
//     while(m!=n){
//         if(m>n){
//             m=m-n;
//         }
//         else if(n>m){
//             n=n-m;
//         }

// }
// cout<<"The greatest common factor is "<<m;
//     return 0;
// }


// finding the gcd 

// #include<iostream>
// using namespace std;

// int main(){
//     int m,n;

//     cout<<"Enter two numbers"<<endl;
//     cin>>m>>n;
//     while(m!=n){
//         if(m>n){
//             m=m-n;
//         }
//         else if (n>m){
//             n=n-m;
//         }
//     }
//     cout<<"The gcd is "<<m<<endl;

//     return 0;
// }




// %%%%%%%%%%%%%%%%  ARRAYS %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

// #include<iostream>
// using namespace std;

// int main(){
    // int a[4] = {1,2,3,4};
    // cout<<"Elements of array A :-"<<endl;
    // cout<<"The first element of array is "<<a[0]<<endl;
    // cout<<"The second element of array is "<<a[1]<<endl;
    // cout<<"The third element of array is "<<a[2]<<endl;
    // cout<<"The fourth element of array is "<<a[3]<<endl;
    // cout<<"The fifth element of array is "<<a[4]<<endl;          // in c++ if there is no element to shown in an array it return a garbage value 
    // for(int i=0;i<4;i++){
    //     cout<<a[i]<<"  ";
    // }
    // cout<<endl;
    
    // cout<<"Elements of Array B :-"<<endl;
    // int B[]={2,4,6,8};
    // for(int i=0;i<4;i++){
    //     cout<<B[i]<<"  ";
    // }
    
    // int b[5]={2,3};
    // for(int i=0;i<5;i++){
    //     cout<<b[i]<<endl;
    // }
    
    // %%%%%  %%%%%%%%%%%%%%   FOR -EACH LOOP FOR ARRAYS %%%%%%%%%%%%%%%%%
    // int b[]={2,4,6,8,10};
    // for(int x:b)
    // cout<<x<<endl;
    // %%%%%%%%%%%%%%%  printing elements of a char array using for each loop %%%%%%%%%%%%%%%%%%%
    // char X[]={'A','B','C','D','E'};
    // for(char Y:X)
    // cout<<Y<<endl;

// A float array  using for each loop 
    // float A[]={2.5f,4.6f,7,8,9};
    // for(float x:A)
    // cout<<x<<endl;

//     char A[]={'A','B','C',66,77,'M'};
//     for(auto x:A)
//     cout<<x<<endl;
//     return 0;
// }

// printing the elements of an array using the for loop and for each loop 
// #include<iostream>
// using namespace std;

// int main(){
//     int A[4]={2,4,6,8};
//     cout<<"The elements of Array A using the for loop :- "<<endl;
//     for(int i=0;i<4;i++){
//         cout<<A[i]<<endl;

//     }
//     cout<<"The elements of an array using the for-each loop :-"<<endl;
//     for(auto x:A)
//     cout<<x<<endl;
//     return 0;
// }

// for each loop hits the value of element of an array prints it and then hits the next value and again prints that this runs till the last
// element of an array gets printed 


// #include<iostream>
// using namespace std;

// int main(){
//     int A[]={2,4,6,8,10,12};
//     for(int &x:A)
//     cout<<++x<<endl;
//     cout<<"And values of array A now "<<endl;              // now both prints same value bcoz we used reference there (&) so there 
//                                                                 // adddress in the memory also changes 
//     for(int i=0;i<6;i++){
//         cout<<A[i]<<endl;                     // if we don't use the reference there so the value of array A doesnt change it remains same as
//                                         // before bcoz we printing x and x is the copy of array A
//     }
//     return 0;
// }



// sum of array elements 

// #include<iostream>
// using namespace std;

// int main(){
//     int A[]={2,4,6,8,10,12};
//     int sum=0;
//     for(int i=0;i<6;i++){
//         sum+=A[i];
//     }
//     cout<<"The sum of array A elements is "<<sum;
//     return 0;
// }


// checking the max number of an array 
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
    
//     int A[7]={4,8,6,9,5,2,7};
//     int max=A[0];
  
//     for(int i=1;i<7;i++){
//         if(A[i]>max){                          // if any number is greater than max in an array it get stored in the max 
//             max=A[i];
//         }
//     }
// cout<<"The max number of this array is "<<max;
//     return 0;
// }


// butterfly pattern 
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter a number ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<"*";
//         }
//         int space=2*n-2*i;
//         for(int j=1;j<=space;j++){
//             cout<<" ";
//         }
//         for(int j=1;j<=i;j++){
//             cout<<"*";
//         }
//         cout<<endl;

//     }
//     for(int i=n;i>=1;i--){
//         for(int j=1;j<=i;j++){
//             cout<<"*";
//         }
//         int space=2*n-2*i;
//         for(int j=1;j<=space;j++){
//             cout<<" ";
//         }
//         for(int j=1;j<=i;j++){
//             cout<<"*";
//         }cout<<endl;
//     }
//     return 0;
// }



// checking the max number of an array 
// #include<iostream>
// using namespace std;

// int main(){
//     int A[5]={100,10,1,101,599};
//     int max=A[0];             
//     for(int i=1;i<5;i++){
//         if(A[i]>max){ 
//             max=A[i];                  // this stores the max number of this array in max;
//         }
//     }
//     cout<<"The max number of this array is "<<max;
//     return 0;
// }

// %%%%%%%%%%%%%   LINERA SEARCH IN ARRAYS %%%%%%%%%%%%%%%%%%

// #include<iostream>
// using namespace std;

// int main(){
//     int A[5],i,key,n=5;
//     cout<<"Enter some  Numbers "<<endl;
//     for(i=0;i<n;i++){
//         cin>>A[i];

//     }
//     cout<<"Enter the key ";
//     cin>>key;
//     for(i=0;i<n;i++){
//         if(key==A[i]){
//             cout<<"Found at index "<<i<<endl;
//         }
//         break;
//     }
//     cout<<"Key not found "<<endl;
//     return 0;
// }



//%%%%%%%%%%%%%  BINARY SEARCH %%%%%%%%%%%%

// =====>>  This search is only applied if the elements of the array are sorted or arranged 
// ==>> if they are not arranged so we have to do linear searh or sorted them 
// #include<iostream>
// using namespace std;

// int main(){
//     int A[5]={5,10,13,17,21};
//     int l=0,h=4,mid,key;
//     cout<<"Enter the key "<<endl;
//     cin>>key;
//     while(l<=h){
//         mid=(l+h)/2;
//         if(key==A[mid]){
//             cout<<"Found at "<<mid<<endl;
//             return 0;
//         }
//         else if(key<A[mid]){
//             h=mid-1;
//         }
//         else{
//             l=mid+1;
//         }
//     }
//     cout<<"Key Not found ";
//     return 0;
// }



// binary search is faster than linear search  bcoz linear search checks the key line by line while binary search search the number by log n times 
// in binary search it get the mid and search acc to it 

// Linear search : it searches for the key number by number so it slower than the binary search 

// #include<iostream>
// using namespace std;

// int main(){
//     int A[3],key;
//     for(int i=0;i<3;i++){
//         cin>>A[i];

//     }
//     cout<<"Enter the key "<<endl;
//     cin>>key ;
//     for(int i=0;i<3;i++){
//         if(key==A[i]){
//             cout<<"found at "<<i<<endl;
//             return 0;
//         }
//     }cout<<"Key not found "<<endl;
//     return 0;
// }


// Binary search : it searches the number by geting the lower and higher number and mid value also
                   // and it is faster than linear seach bcoz it doesn't go through numberto number 

// #include<iostream>
// using namespace std;

// int main(){
//     int A[3],key,l=0,h=2,mid;
//     for(int i=0;i<3;i++){
//         cin>>A[i];
//     }
//     cout<<"Enter the key "<<endl;
//     cin>>key;
//     while(l<=h){
//         mid=(l+h)/2;
//         if(key==A[mid]){
//             cout<<"Key found at "<<mid;
//             return 0;
//         }
//         else if (key<A[mid]){
//             h=mid-1;
//         }
//         else{
//             l=mid+1;
//         }
//     }
//     cout<<"Key not found "<<endl;
//     return 0;
// }
// binary search in arrays 

// #include<iostream>
// using namespace std;

// int main(){
//     int A[4],key,l=0,h=3,mid;
//     cout<<"Enter four numbers "<<endl;
//     for(int i=0;i<4;i++){
//         cin>>A[i];
//     }
//     cout<<"Enter the key "<<endl;
//     cin>>key;
//     while(l<=h){
//         mid=(l+h)/2;
//         if(key==A[mid]){
//             cout<<"Found at "<<mid;
//             return 0;
//         }
//         else if (key<A[mid]){
//             h=mid-1;
//         }
//         else{
//             l=mid+1;
//         }
//     }
//     cout<<"Key not found ";
//     return 0;
// }


// linear search in arrays 
// #include<iostream>
// using namespace std;

// int main(){
//     int A[4],key;
//     cout<<"Enter four numbers "<<endl;
//     for(int i=0;i<4;i++){
//         cin>>A[i];
//     }
//     cout<<"Enter the key "<<endl;
//     cin>>key;
//     for(int i=0;i<4;i++){
//     if(key==A[i]){
//         cout<<"Found at "<<i<<endl;
//         return 0;
//     }
//     }
//     cout<<"Key not found"<<endl;
//     return 0;
// }
// %%%%%%%%%%% BINARY SEARCH %%%%%%%%%%%%%%%%%%
// #include<iostream>
// using namespace std;

// int main(){
    
//     int A[6]={1,2,3,4,5,6},l=0,h=5,mid,key;;
//     cout<<"Enter the key ";
//     cin>>key;
//     while(l<=h){
//         mid=(l+h)/2;
//         if(key==A[mid]){
//             cout<<"Found at "<<mid;
//             return 0;
//         }
//         else if (key<A[mid]){
//             h=mid-1;
//         }
//         else{
//             l=mid+1;
//         }
//     }
//     cout<<"Key not found "<<endl;
//     return 0;
// }
// %%%%%%%%%%  Nested for loop 

// #include<iostream>
// using namespace std;

// int main(){
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cout<<i<<j<<endl;

//         }
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     for(int i=1;i<=5;i++){
//         for(int j=1;j<=5;j++){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// %%%%%%%%%%%%% first pattern of abdul bari: printing the numbers in an ordered way  

// #include<iostream>
// using namespace std;

// int main(){
//     int count=1;
//     for(int i=0;i<4;i++){
//         for(int j=0;j<4;j++){
//             cout<<count<<" ";
//             count++;
//         }
//         cout<<endl;

//     }
//     return 0;
// }


// 2nd pattern : printing the pyramid

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter the value of n "<<endl;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<"* ";
//         }cout<<endl;
//     }
//     return 0;
// }

// %%%%%%%  2nd method to print the pyramid pattern 
// #include<iostream>
// using namespace std;

// int main(){
//     for(int i=0;i<4;i++){
//         for(int j=0;j<4;j++){
//             if(i>=j){
//                 cout<<"* ";
//             }
//         }cout<<endl;
//     }
//     return 0;
// }
// ulta pyramid

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     for(int i=n;i>=1;i--){
//         for(int j=1;j<=n-i;j++){
//             cout<<"  ";
//         }
//         for(int j=1;j<=i;j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// second method
// #include<iostream>
// using namespace std;

// int main(){
//     for(int i=0;i<4;i++){
//         for(int j=0;j<4;j++){
//             if(i>j){
//                 cout<<" ";
//             }
//             else{
//                 cout<<"*";
//             }
//         }cout<<endl;
//     }
//     return 0;
// }

// sideway pyramid
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter the value of n "<<endl;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
//             cout<<"  ";
//         }
//         for(int j=1;j<=i;j++){
//             cout<<"* ";
//         }cout<<endl;
//     }
//     return 0;
// }


// initializing two dimensional array and printing them 

// #include<iostream>
// using namespace std;

// int main(){
//     int A[2][3]={2,6,9,4,5,6};          // it automatically arrange itself in an matrix order 

//     for(int i=0;i<2;i++){
//         for(int j=0;j<3;j++){
//             cout<<A[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// adding two matrices 

// #include<iostream>
// using namespace std;

// int main(){
//     int A[2][3]={{2,3,4},{5,6,7}};
//     int B[2][3]={{8,9,10},{11,12,13}};
//     int C[2][3];
//     for(int i=0;i<2;i++){
//         for(int j=0;j<3;j++){
//             C[i][j]=A[i][j]+B[i][j];
//         }

//     }
//     for(int i=0;i<2;i++){
//         for(int j=0;j<3;j++){
//             cout<<C[i][j]<<" ";
//         }cout<<endl;
//     }
//     return 0;
// }

// %%%%%%%%%%%  GETTING TWO 2-D ARRAYS FROM THE USER AND PRINTING THEM AND ALSO PRINTING THEIR SUM OF BOTH THE ARRAYS %%%%%%%%%

// #include<iostream>
// using namespace std;

// int main(){
//     int A[2][3],B[2][3],C[2][3];
//     cout<<"Enter the elements of Array A :- "<<endl;
//     for(int i=0;i<2;i++){
//         for(int j=0;j<3;j++){
//             cin>>A[i][j];
//         }cout<<endl;
//     }
//     cout<<"Enter the elements of Array B :- "<<endl;
//     for(int i=0;i<2;i++){
//         for(int j=0;j<3;j++){
//             cin>>B[i][j];
//         }cout<<endl;
//     }
//     cout<<endl;
//     cout<<"Elements of Array A "<<endl;
//     for(int i=0;i<2;i++){
//         for(int j=0;j<3;j++){
//             cout<<A[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     cout<<"Elements of arary B "<<endl;
//     for(int i=0;i<2;i++){
//         for(int j=0;j<3;j++){
//             cout<<B[i][j]<<" ";
//         }cout<<endl;
//     }
// cout<<endl;
//     cout<<"sum of these two array are :"<<endl;
//     for(int i=0;i<2;i++){
//         for(int j=0;j<3;j++){
//             C[i][j]=A[i][j]+B[i][j];
//         }
//     }
//     for(int i=0;i<2;i++){
//         for(int j=0;j<3;j++){
//             cout<<C[i][j]<<" ";
//         }
//         cout<<endl;
//     }

//     return 0;
// }

// calculating the average of an array 
// #include<iostream>
// using namespace std;

// int main(){
//     float A[5],avg,sum=0.0;
//     int n;
//     cout<<"Enter the amount of numbers "<<endl;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         cin>>A[i];
//         sum+=A[i];
//     }
//     avg=sum/n;
//     cout<<"The average is "<<avg;

//     return 0;
// }


// #include<iostream>
// using namespace std;

// int main(){
//     int num=7070;
//     int d;
//     while(num>0){
//         d=num%10;
//         num=num/10;
//         if(d!=0){
//             cout<<d;
//         }
//     }
//     return 0;
// }
// #include<iostream>
// using namespace std;

// int main(){
//     int a[]={10,18,20,15,28};
//     for(int i=0;i<5;i++){
//         if(a[i]%5==0){
//             cout<<a[i]<<endl;
//         }
//     }
//     return 0;
// }


// #include<iostream>
// using namespace std;

// int main(){
//     int s=0,i;
//     int a[10]={15,10,20,24,18,16,25,12,28,30};
//     for(i=0;i<5;i++){
//         s+=a[i];
//     }
//     cout<<s;
//     return 0;
// }

// transpose of a matrix

// #include<iostream>
// using namespace std;

// int main(){
//     int A[2][3];
//     cout<<"Enter the elements of an array "<<endl;
//     for(int i=0;i<2;i++){
//         for(int j=0;j<3;j++){
//             cin>>A[i][j];
//         }
//     }
//     cout<<"The array is "<<endl;
//     for(int i=0;i<2;i++){
//         for(int j=0;j<3;j++){
//             cout<<A[i][j]<<" ";
//         }cout<<endl;
//     }

// cout<<"The tranpose of the array is "<<endl;
//     for(int i=0;i<3;i++){
//         for(int j=0;j<2;j++){
//             cout<<A[j][i]<<" ";
//         }cout<<endl;
//     }
//     return 0;
// }

// sum of diagonal elements of the array 

// #include<iostream>
// using namespace std;

// int main(){
//     int A[2][2],sum=0,i,j;
//     cout<<"Enter the elements of the array "<<endl;
//     for(i=0;i<2;i++){
//         for( j=0;j<2;j++){
//             cin>>A[i][j];
//         }
//     }
//     if(i!=j){
//         cout<<"No diagonal elements are there to show "<<endl;
//         return 0;
//     }
//     cout<<"the diagonal elements are : ";
//     for( i=0;i<2;i++){
//         for( j=0;j<2;j++){
//             if(i==j){
//                 cout<<A[i][j]<<" ";
//                 sum+=A[i][j];
//             }
//         }cout<<" and ";
//     }cout<<"the sum of the diagonal elements of the array is "<<sum;
//     return 0;
// }


// pointers %%

// #include<iostream>
// using namespace std;

// int main(){
//     int x=10;
//     int *p;
//     p=&x;
//     cout<<"The value of x is "<<x<<endl;
//     cout<<"The address of x is "<<&x<<endl;
//     cout<<"The value of p is "<<p<<endl;               // this shows the address of x bcox its a pointer and stores the value of x;
//     cout<<"The address of p is "<<&p<<endl; // this shows the address of p 
//         cout<<"The value that p is pointing at/ stored is "<<*p;      // this shows the value stored at p as a pointer 
//     return 0;
// }

// pointers 
// #include<iostream>
// using namespace std;

// int main(){
//     int A[5]={2,4,6,8,10};
//     int *p=A;
//     int *q=&A[3];          // this means that the pointer is at the index 3 and the value at 3 is 8
// int d=q-p;       // for getting the distance between the two pointers [ 1. if the distance is negative means that the 
// //                        the second pointer is far away & if the distance is positive means that the 
// //              first pointer is far away]


//    // int *p=&A[1];        // in this command the pointer is at index 1 where the value of a is 4
//     cout<<"The value stored at p is "<<*p<<endl;
//     p++;
//     cout<<"Now the value stored at p is "<<*p <<endl;
// p--;
// cout<<"The value of p after p-- is "<<*p<<endl;
// p=p+2;
// cout<<"The value after p=p+2 is "<<*p<<endl;
// p=p-2;
// cout<<"The value after the p=p-2 is "<<*p<<endl;
// cout<<"the distance between two pointerss is "<<d<<endl;    // the distance between these pointers is 3 

//     return 0;

// }

// pointers %%%%%%%%%

// #include<iostream>
// using namespace std;

// int main(){
//     int A[5]={2,4,6,8,10};
//     int *p=A;
//     cout<<"The value of p(address) is "<<p<<endl;
//     cout<<"The value stored at p at initial stage is "<<*p<<endl;
//     for(int i=0;i<5;i++){
//         cout<<*p<<endl;
//         p++;
//     }
//     cout<<"the value of p(address) at the end stage is "<<p<<endl;
//     cout<<"The value stored at p at the last stage is "<<*p<<endl;
//     return 0;
// }

// reference value  : in this reference both x and y sharing the same address 

// #include<iostream>
// using namespace std;

// int main(){

        // if a variable is assign to a variable as a reference so it cannot be assign to another variable as a refernce okay 
        // one variable is assign to only one variable as a reference okay xd;


    // int x=10;           // only stores some memory ==> y doesnt have use any memory . ==>  it like that your brother bought a car so that car is 
                      // also belongs to you so as this y is also belongs to that memory of x but dont used that memory 
    // int &y=x;         // y acts as an another nick name for the varaible x and stores the same value which x can hold 

    // x++;         // here the value of x becomes 11 and y also stores the value 11 bcoz y is a reference of x 

    // y++;         // here the value of x and y becomes 12 bcoz y is the reference of x 
    // int a=x;    // here a becomes 12 bcoz at that time the value of x is 12

    // x=25;         // here we change the value of x to 25 
    // y also have the same value bcoz the y is the refernce of y 

    
    // cout<<"The value of a is "<<a<<endl;     // print 12 bcoz at that time the value of x is 12 and a= x;

    // cout<<"The value of x "<<x<<" and y is "<<y<<endl;      // they both prints the same value bcoz of reference 
    // return 0;         // bcoz of this line our code ends 
// }


// reference revision 

// #include<iostream>
// using namespace std;

// int main(){
//     int x=10;
//     int &y=x;
// cout<<"the value of x is "<<x<<'\n';
// x++;
// y++;
// cout<<"the value of x now is "<<x<<endl;
// cout<<"the address of x is "<<&x<<" and the address of y is "<<&y<<endl;      // both having the same address 
//     return 0;
// }

//%%%%%%%%%%%%%%%%%%%%%%%%%%%pointer and reference part is completed so lets move to strings yeah yeah %%%%%%%%%%%%%%%%%%%%%%%%%

// %%%%%%%%%%%  STRINGS %%%%%%%%

// #include<iostream>
// using namespace std;

// int main(){
    // char S[10]={"Hello"};              // this prints the hello string by using the char array method 
    // for(int i=0;i<10;i++){
    //     cout<<S[i]<<" ";
    // }
    // char S1[]={"Hello brother how are you "};
    // for(int i=0;i<=20;i++){
    //     cout<<S1[i]<<" ";
    // }

    // string s;
    // cout<<"May i know your name sir ";
    // getline(cin,s);          // getline is used to get the whole name and printing it as it is 
    // cout<<"Welcome Mr."<<s;
    
//    char s[10]="Hello";    // after O there is a null character so there cout stops 
//    cout<<s;
    
    // strings using the ascii codes
    // char S[]={65,66,67,68,69,0,70,71};
    // cout<<S<<endl; 
    
// %%%%%%  reading and printing the string %%%%%%%%%%%%%%%
    // 1. char array method 
    
    // char S[20];
    // cout<<"enter your name ";
    // cin>>S;
    // cout<<"Hello Mr."<<S;
    

    //2 . printing the full name 
    // char s[30];
    // cout<<"Enter your name "<<endl;
    // cin.get(s,30);
    // cout<<"Hello Mr."<<s;    
    
// mje ki cheeze karte rhna chaiye %%%%%%%%%%%%




// char x[30];
// char y[30];
// cout<<"Enter your name ";
// cin.getline(x,30);
// cout<<"Welcome Mr."<<x;
// cout<<"\nEnter your name again for security reasons : ";
// cin.getline(y,30);
// for(int i=0;i<31;i++){
// if(y[i]==x[i]){
// cout<<"your authentication is completed so you can go to your room ";

// return 0;
// }
// else{
//     cout<<"Wrong identity ";
// }
// }


// using cin.get gives error 
//        lets try it in codes 

// char s[30],y[30];
// cout<<"The info you entered are case sensitive so fill carefully "<<endl;
// cout<<"Enter your name : ";
// cin.get(s,30);
// cout<<"Welcome Mr. "<<s<<endl;                   // this gives a small error it doesn't go on second cin line bcoz get doesn't consider the null character 
    
//                                             // to get rid of this error you have to add a command cin.ignore();    
//     cin.ignore();
//     cout<<"Enter your name again for authorization : ";
//     cin.get(y,30);

//     for(int i=0;i<=30;i++){
//         if(s[i]==y[i]){
//             cout<<"Authorization completed now you can go . ";
//         return 0;
//         }
//         else{
//             cout<<"Wrong info entered "<<endl;
//         }
//     }
    
   



//     return 0;
// }
// &&&&&&&&&&&&&&&   calculating the string length   $$$$$$$$$$$$$$$$$$$$


// #include<iostream>
// #include<cstring>
// using namespace std;

// int main(){
//     char S[25];
//     // char s[20]="Hello how r u";
//     // cout<<"The length of this string is "<<strlen(s);
    
//     cout<<"Enter Your name : ";
//     cin.getline(S,25);
//     cout<<"The length of the string is "<<strlen(S);

//     return 0;
// }

//string by using the pointers 
// #include<iostream>
// #include<cstring>
// using namespace std;

// int main(){
//     char *s;
//     cout<<"Enter a string :";
//     cin>>s;
//     cout<<"Length  "<<strlen(s);
//     return 0;
// }


// concatenation of two string 

// #include<iostream>
// #include<cstring>
// using namespace std;

// int main(){
//     char x[10]="Good";
//     char y[10]="Morning";
//     // strcat(x,y);         // this command add this two strings 
//     // strncat(x,y,4);     // in this command only 4 letter of string y get printed 
//     cout<<x<<endl;
//     return 0;
// }



// string copy 

// #include<iostream>
// #include<cstring>
// using namespace std;

// int main(){
//     char x[20];
//     char y[20]="Hello beta";
//     // strcpy(x,y);   // This copy the y string in x and prints it 
//     strncpy(x,y,4);  // isme control hamare haath mein hota h ki kitne letters copy karwane h 


//     cout<<x;
//     return 0;
// }

// %%%%%%%%%%%%% strings revision %%%%%%%%%%%%

// #include<iostream>
// #include<cstring>
// using namespace std;

// int main(){
    // char A[30]="Hello brother ";
    // char B[40]="i am not a coder ";
    // strcat(A,B);           // adding two char arrays 
    // if we wanna add only certain words so use this command strncat(A,B,5)   it add only 5 letters of second char array 
    // strncat(A,B,10);
    // strcpy(B,A);          // used for copying the elements of a char array into another strcpy(destinaation,source);
    // or if you wanna copyonly selected elements so you can use command strncpy (destination, source,value )   value= how much elements you wanna copy 

    // cout<<B;
// strlen(A)      gives the length of the string okay so used it where you want to know the size of the char array 
//     cout<<"the length of string A is "<<strlen(A)<<endl;
//     cout<<"The length of string B is "<<strlen(B);
//     return 0;
// }

// reading and writing the full name of the user without using the C++ string command to assign a variable 

// #include<iostream>
// #include<cstring>
// using namespace std;

// int main(){
//     char A[25],B[30];
//     cout<<"May i know your name please : "<<endl;
//     cin.getline(A,25);
//     cout<<"Hello Mr. "<<A<<endl;
//     cout<<" %%%%%%%%%%%%%%%%%% PLEASE ENTER THAT INFO CAREFULLY BCOZ THEY ARE CASE SENSITIVE %%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl;
//     cout<<"enter your name again for the security reason please :";
//     cin.getline(B,30);
//     for(int i=0;i<30;i++){
//         if(A[i]!=B[i]){
//             cout<<"Wrong info entered "<<endl;
//             return 0;
//         }
//         else{
//             cout<<"Authentication completed now you can go ";
//             return 0;
//         }
//     }

//     return 0;
// }


// %%%%%%%%%%%  substring %%%%%%%%%%
      // finding a small peice  of  string from the large string 

// #include<iostream>
// #include<cstring>
// using namespace std;

// int main(){
//     char A[20]="Programming";
//     char B[10]="gram";
//     cout<<strstr(A,B);                // it finds the gram word in the string A and print gram and onwards the string came 
//     return 0;
// }


// #include<iostream>
// #include<cstring>
// using namespace std;

// int main(){
//     // finding a string which is not there 

//     char A[20]="programming";
//     char B="K";
//     cout<<strstr(A,B);               // finding the letter k which is not there  

//     // it gives an error because there is no string as k there to be searched so it gives an error 
//     return 0;
// }

// addition of two matrices :    %%%%%%%%% 
// #include<iostream>
// // #include<cstring>
// using namespace std;

// int main(){
//     int A[2][3];
//     int B[2][3];
//     int C[2][3];
//     cout<<"Enter the elements of first matrix "<<endl;
//     for(int i=0;i<2;i++){
//         for(int j=0;j<3;j++){
//             cin>>A[i][j];
//         }
//     }
//     cout<<"Elements of first matrix :- "<<endl;
//     for(int i=0;i<2;i++){
//         for(int j=0;j<3;j++){
//             cout<<A[i][j]<<" ";
//         }cout<<endl;
//     }
// cout<<"Enter the elements of second matrix :-"<<endl;


//     for(int i=0;i<2;i++){
//         for(int j=0;j<3;j++){
//             cin>>B[i][j];

//         }
//     }
//     cout<<"The elements of second matrix : "<<endl;
//     for(int i=0;i<2;i++){
//         for(int j=0;j<3;j++){
//             cout<<B[i][j]<<" ";

//         }cout<<endl;
//     }

//     for(int i=0;i<2;i++){
//         for(int j=0;j<3;j++){
//             C[i][j]=A[i][j]+B[i][j];
//         }
//     }
//     cout<<"The sum of these two matrices is : - "<<endl;
//     for(int i=0;i<2;i++){
//         for(int j=0;j<3;j++){
//             cout<<C[i][j]<<" ";
//         }cout<<endl;
//     }
//     return 0;
// }


// anjali mam method to get the sum of two matrices :
// #include<iostream>
// // #include<cstring>
// using namespace std;

// int main(){
//     int A[10][10],B[10][10],C[10][10];
//     int r1,c1,r2,c2;
//     cout<<"Enter the number of rows and columns for the first matrix : "<<endl;
//     cin>>r1>>c1;
//     cout<<"Enter the number of rows and columns for the second matrix : "<<endl;
//     cin>>r2>>c2;
//     if(r1==r2 || c1==c2){
//         cout<<"Enter the elements of first matrix is : - "<<endl;
//         for(int i=0;i<r1;i++){
//             for(int j=0;j<c1;j++){
//                 cin>>A[i][j];
//             }
//         }
//         cout<<"Enter the elements of second matrix :- "<<endl;
//         for(int i=0;i<r2;i++){
//             for(int j=0;j<c2;j++){
//                 cin>>B[i][j];
//             }
//         }
//         cout<<"The sum of these two matrix is "<<endl;
//         for(int i=0;i<r1;i++){
//             for(int j=0;j<c1;j++){
//                 C[i][j]=A[i][j]+B[i][j];

//             }
//         }
//         for(int i=0;i<r1;i++){
//             for(int j=0;j<c1;j++){
//                 cout<<C[i][j]<<" ";
//             }cout<<endl;
//         }
//     }
//     else{
//         cout<<"No addition can takes place ";
//     }
//     return 0;
// }

// // finding a small piece of string from a larger one 
// #include<iostream>
// #include<cstring>
// using namespace std;

// int main(){
//     char S[20]="Programming";
//     char B[20]="K";
//     if(strstr(S,B)!=NULL){           // agar koi aisi value hmne daali jo ki string 1 mein nhi  h toh wo null kehlayegi and phir not found karar diya jayega 


//     cout<<strstr(S,B);            // finding the gram word in  programming and printing that and remaining words after that also 
//     }
//     else{
//         cout<<"Not found ";
//     }
//     return 0;
// }


// %%%%%%%  finding a character from a main string 
// #include<iostream>
// #include<cstring>
// using namespace std;

// int main(){
//     char A[20]="Programming";
    
//     // cout<<strchr(A,'m');    finds the letter m from the left hand side 
//     cout<<strrchr(A,'m');              // find the letter m from the right hand side 
//     return 0;
// }


// &&&&&&&&&&  COMPAIRING TWO STRINGS $$$$$$$$$$$


// #include<iostream>
// #include<cstring>
// using namespace std;

// int main(){
//     char A[20]="minor";
//     char B[20]="elder";                    // both the strings are same but the H has less ascii value than h so Hello is greater than hello here  

//     // if the first string is smaller than it return negative and if both the strings are equal it return 0 and if the right/ second string is greater
//     // then it prints positive 
//     //here greater means not to size it means that first letter of which string comes first 
//     cout<<strcmp(A,B);
//     return 0;
// }

// compairing two strings 


// #include<iostream>
// #include<cstring>
// using namespace std;

// int main(){
//     char S[20]="Hello";
//     char S2[20]="hello";
//     cout<<strcmp(S2,S);

//     return 0;
// }


// converting string to long int and float 
// #include<iostream>
// #include<cstring>
// using namespace std;

// int main(){
//     char s1[10]="235";
//     char s2[20]="45.369";
//     long int x=strtol(s1,NULL,10);       // this convert string s1 to long int   // here null is the end point of the string 
//                                         // here 10 means the value is in decimal 
//     float y=strtof(s2,NULL);            // this converts string s2 to float value 
//     cout<<x+10<<endl<<y<<endl;  // printing those converted values 
//     return 0;
// }


// prints all tokens present in the strings 

// #include<iostream>
// #include<cstring>
// using namespace std;

// int main(){
//     char S1[20]="x=10;y=20;z=30";             // here x,y,z,10,20,30  all are tokens

//     char *token=strtok(S1,"=;");                // if we remove = from this codeLine then it prints the token with the = sign
//     while(token!=NULL){
//         cout<<token<<endl;
//         token=strtok(NULL,"=;");                     // if we remove = from this codeLine then it prints the token with the = sign
//     }
//     return 0;
// }


// tokenizer 

// #include<iostream>
// #include<cstring>
// using namespace std;
                 
// int main(){                                      // in this code there is no initializer so it print the same string as we enterd in X
//     char X[20]="x=10;y=20;z=30";
//     char *token =strtok(X,"?");
//     while(token!=NULL){ 
//         cout<<token<<endl;
//         token=strtok(NULL,"?");
//     }

//     return 0;
// }

// %%%%%%%%%%%%%%%   class string %%%%%%%%%%%%%

// #include<cstring>              // a header file for the string  


// #include<iostream>
// #include<cstring>
// using namespace std;

// int main(){
//     string str;
//     cout<<"Enter the string :";
//     // cin>>str;                  // this make printing my first name entered in the string 
//     getline(cin,str);  // this make me printing the full name of the string which i entered 


//     cout<<"Hello Mr."<<str;
//     return 0;
// }

//%%%%%%%%  some functions in string class    %%%%%%%%%%%%%%%%%
 /*
 here s is the name of the string 
 1  s.length()
 2  s.size()                       both length and size function works same
 3  s.capacity()
 4  s.resize()            for changing the capacity of the string 
 5  s.max_size()          for checking the max size of the string means how much elements you can entered in the string 
 6  s.clear()              for clearing the contents of the string 
 7  s.empty()          checking the string is empty or not 
 
 */



// #include<iostream>
// #include<string>
// using namespace std;

// int main(){
//     string s="hello";
//     cout<<"The size of this string is "<<s.size()<<endl;          // here the size of this string is 21 
//     cout<<"The length  of this string is "<<s.length()<<endl;
//     cout<<"The capacity of this string to store elements is "<<s.capacity()<<endl;
// s.resize(50);
// //     // // cout<<"we resize this string capacity to 30 "<<s.capacity(30)<<endl;
//     cout<<"The maximum size of this string is "<<s.max_size()<<endl;
// //     // cout<<"we are clearing this string by s.clear() "<<s.clear()<<endl;
//     cout<<"lets check that this string is empty or not 0= not empty and 1= empty => "<<s.empty();

// // cout<<s.empty()<<endl;         // gives 1 bcoz now the string s is not empty 

// // cout<<s;

//     return 0;
// }


// changing the capacity of the string 
// #include<iostream>
// #include<string>
// using namespace std;

// int main(){
//     string s="Hello";
//     s.resize(50);
//     cout<<s.capacity()<<endl;
//     cout<<s;
//     return 0;
// }

// %%%%%%%%%%   some work related to string in built functions clearing the string and then checking that its empty or not  %%%%%%
// #include<iostream>
// #include<string>
// using namespace std;

// int main(){
//     string s;
//     cout<<"Enter a  string : ";
//     getline(cin,s);
//     cout<<"hello Mr."<<s<<endl;
// cout<<"The size of the string is "<<s.size()<<endl;
// cout<<"The capacity of the string is "<<s.capacity()<<endl;
// cout<<"The max capacity of the string is "<<s.max_size()<<endl;
// s.resize(30);
// cout<<"After resizing the capacity of the string is "<<s.capacity()<<endl;

// s.clear();
// cout<<"After clearing the size of the string is "<<s.length()<<endl;
// cout<<"Check that the string is empty or not "<<s.empty();
//     return 0;
// }


// #include<iostream>
// #include<string>
// using namespace std;

// int main(){
//     string s;
//     cout<<"Enter a string : ";
//     getline(cin,s);
//     cout<<"hello mr."<<s<<endl;
//     if(s.empty()){
//         cout<<"String is  empty ";
//     }
//     else{
//         cout<<"string is  "<<s;
//     }
//     return 0;
// }


// some more fuctions in string class 

// #include<iostream>
// #include<string>
// using namespace std;

// int main(){
    // %%%%%%%%%%%%%%%%%% adding elements at the end of the string %%%%%%%%%%%%%

    // string s="Hello ";
    // cout<<"before using append function the string is "<<s<<endl;
    // cout<<"The capacity of the string s is "<<s.capacity()<<endl;
    // s.append("How r u all , i hope you all are fine ");            // add this string at the end of the string s 
    // cout<<"after using append : "<<endl;
    // cout<<s<<endl;
    // cout<<"The capacity of the string s is "<<s.capacity()<<endl;

    // cout<<"the size of this string is "<<s.size()<<endl;
    // %%%%%%%  inserting elements in a string %%%%%%%
    // string s="hello";
    // s.insert(3,"sharadh");
    // cout<<s<<endl;
    // cout<<"Now the length of the string is "<<s.length()<<"\n";
    // cout<<"The capacity of the string is "<<s.capacity()<<endl;
    
    // %%%%%%%%  inserting only some elements of the string %%%%%%%%%%%

    // string s="hello";
    // s.insert(3,"area",3);
    // cout<<s<<endl;
    
    // %%%%%%  replacing some letter of the string %%%%%%%%%

    // string s="Programming";
    // s.replace(3,4,"HH");         // 3= starting from index 3 and 4= means how many letters you wanna replace 
    // cout<<s<<endl;
    // // output = ProHHming
    
    // %%%%%%%%%  erasing a string using erase built in function of the string %%%%%%%%%%

    // string s="Hello";
    // s.erase();                  // a empty string get printed bcoz erase function works same as clear function 
    // cout<<s<<endl;
    
    // adding a character at the end of the string %%%%

    // string s="Programming";
    // s.push_back('H');             // it adds a character at the end of the string  here that charcter is H
    // cout<<s<<endl; 
// %%  removing a character at the end of the string 
// string s="Hello";
// s.pop_back();       // this removes the last letter of the string 
// s.push_back('c');       // this adds the character c at the end of the string 
//     cout<<s<<endl;    // here the string s becomes Hellc
    

    // string s1="Hello";
    // string s2="World";
    // s1.swap(s2);    // here the values of string s1 and string s2 get swapped and s1 becomes World and s2 becomes Hello
    // cout<<"Now the value of string 1 is "<<s1<<endl;
    // cout<<"Now the value of string 2 is "<<s2<<endl;

    // a mja ma program in which we swap the values of strings %%%%%%%


// isme agar tum bolege tumhe first hacker bnna h toh yhh bolega ki programmer bno and agar tum bologe ki tumhe programmer bnna  h toh yhh
//  bolega ki hacker bno 



//     string s1,s2;
//     cout<<"What do you wanna become in future : ";
//     getline(cin,s1);
//     cout<<"If you doesn't become "<<s1<<" so what's your next aim ";
//     getline(cin,s2);
//     s1.swap(s2);
//     cout<<"Wait interchanging process is working on : "<<endl;
//     cout<<s1<<endl;
// cout<<s2<<endl;

//     if(s2=="Hacker"){
//         cout<<"My opinion is to become a Programmer ";
//     return 0;
//     }
//     if(s1=="Programmer"){
//         cout<<"My opinion is to become a Hacker ";
//         return 0;
//     }
//     if(s2=="Programmer"){
//         cout<<"My opinion is to become a Hacker";
//        return 0;
//     }
//     if(s1=="Hacker"){
//         cout<<"My opinion is to become a Programmer ";
// return 0;
//     }

    
//     return 0;

// }


//%%%%%%%%%%%%%   SOME STRING FUNCTIONS %%%%%%%%%%%%%

// #include<iostream>
// #include<string>
// using namespace std;

// int main(){
//     string s="Welcome";
//     char str[10];
//     // s.copy(str,s.length());               // whole string s get copied in str 
//     // s.copy(str,3) ;    // copy only first 3 letter of the string 

//     s.copy(str,3);
//     str[3]='\0';             // it prints only first three letter no garbage value can be printed 

//     cout<<str<<endl;
    
//     return 0;
// }


// finding a string or a char in a string 

// #include<iostream>
// #include<string>
// using namespace std;

// int main(){
//     string s;
//     cout<<"enter a string : ";
//     getline(cin,s);
//     cout<<"The length of the string is "<<s.length()<<endl;

//     cout<<endl;
//     cout<<endl;
//     cout<<endl;
//     cout<<"the location of manjli is "<<s.find("manjli");             // this returns a max value possible or garbage value bcoz there is no 
//                                                                         //                      string as a manjli 
//     cout<<endl;
//     cout<<endl;
//     cout<<endl;

//     cout<<"The location of are : "<<s.find("are")<<endl;
//     cout<<"The location of o from left side is : "<<s.find('o')<<endl;
//     cout<<"The location of o from right side is : "<<s.rfind('o')<<endl;
//     return 0;
// }

// getting first occurence and last  occurenece of the strings 

// #include<iostream>
// #include<string>
// using namespace std;

// int main(){
//     string s;
//     cout<<"enter a string : ";
//     getline(cin,s);
//     cout<<"The length of this string is "<<s.length()<<endl;
//     cout<<endl;
//     cout<<endl;
//     cout<<endl;
//     cout<<"the first (SN) found at "<<s.find_first_of("SN")<<endl;
//     cout<<endl;
//     cout<<endl;
//     cout<<endl;

//     cout<<"the first (H) after the index 8 is  "<<s.find_first_of("H",8)<<endl;        // it starts searching from the index 5 not from index 0 
//     cout<<"this letter(H) came first at "<<s.find_first_of('H')<<endl;
//     cout<<"This letter(H) came last at "<<s.find_last_of('H')<<endl;
//     return 0;
// }


// some operators in c++

// #include<iostream>
// #include<string>
// using namespace std;

// int main(){
    // 1. concatination of two strings 
    // string s1="Hello! ";
    // string s2="How are you ";
    // s1=s1+s2;
    // cout<<s1;

    // substring in string class 
    // string s1="Hello betag how r u "; 
    // cout<<s1.substr(3,4);              // prints the 4 letter after index 3 
    // cout<<s1.substr(3);          // prints all the letters after the index 3 
    
    // compairing two strings :

    // string s1="Hello";
    // string s2="Apple";             
    // cout<<s1.compare(s2);   // it gives +1 bcoz apple is smaller than hello bcoz apple comes first in dictonary than hello 
    // note : if the firt string is  greater than second string (Here : greater means  that that letter comes first in dictionary than second one )
    //         then it returns +1 and if the second string is greater so it returns -1 
    
    // checking the letter at the given index 

    // string s1="Hello beta g how are you ";
    // cout<<s1.at(11);         // return the letter present at the index 11 
    

    // checking the first and last letter of the string using the string class inbuilt functions 

//     string s1="Hello";
// cout<<s1.front()<<endl;         // retrun the first letter of the string 
// cout<<s1.back();          // return the last letter of the string 

    // having some fun with the strings 

    // string s1="Hello bro ";
    
//     s1+="how are you";
//     s1[4]='u';  // here we are writing the elements of the string using the [] operator 
                   // by using this [] operator we can read and write the values of the string 
//     s1[6]='I';
// cout<<s1[3];         // here we are reading the value of the string using the [] operator 
// cout<<s1;    
    // copying a string to other string using the = operator 
    
    // string s1="Hello ";
    // string s2="How are you bro";
    // s2=s1;                             // here s1 string copied to s2 string using the = operator 
    // cout<<"String s1 = "<<s1<<endl;
    // cout<<"string s2 = "<<s2;
    
    
    
    
    
//     return 0;
// }



// %%%%%%%%%%%%%%%   ITERATORS IN STRINGS %%%%%%%%%

// #include<iostream>
// #include<string>
// using namespace std;

// int main(){
//     string s1="Programming";
//     string ::iterator it;                       // assigning a iterator named as it ;
//     for(it=s1.begin();it!=s1.end();it++){           // s.begin = starting of the string and s.end()= end of the string 
//         cout<<*it;                          // this iterator direction is from  left to right and it acts as a pointer so
//         //                                   we are using a * at cout statement okay to print the string s1;
//     }
//     return 0
//}

// getting a string in lower case and printing it in upper case 

// #include<iostream>
// #include<string>
// using namespace std;

// int main(){
//     string s1="today";
//     string :: iterator it;
//     for(it=s1.begin();it!=s1.end();it++){
//     *it=*it-32;                              // it make the letters into upper case 
//     }    
//     cout<<s1;
//     return 0;
// }



// %%%%%%%%%%%  REVERSE ITERATOR %%%%%%%%%%

// #include<iostream>
// #include<string>
// using namespace std;

// int main(){
//     string s1="Programming";
//     string :: reverse_iterator it;
//     for(it=s1.rbegin();it!=s1.rend();it++){
//         cout<<*it;                            // prints the string from backwards 
//     }
//     return 0;
// }



//===========> using for loop to print the character of the string 

// #include<iostream>
// #include<string>
// using namespace std;

// int main(){
//     string s="Hello";
//     for(int i=0;s[i]!='\0';i++){                  // printing the letter of the string using the for loop  
//         cout<<s[i];
//     }
//     return 0;
// }


// %%%%%%%%%%%%%%%% when you are a c++ student and want to hack college website %%%%%%%%%%%%%%%%

// #include<iostream>
// #include<string>
// using namespace std;

// int main(){
//     cout<<"Hacked";
//     return 0;
// }


// %%%%%%%%%%%  finding the length of the string %%%%%

// #include<iostream>
// #include<string>
// using namespace std;

// int main(){
//     string s1="hello";
//     cout<<"The length of this string is "<<s1.length();
    
//     return 0;
// }


// claculating using the for loop 

// #include<iostream>
// #include<string>
// using namespace std;

// int main(){
//     string s;
//     cout<<"Enter a string ";
//     getline(cin,s);
//     int i ;
//     for( i=0;s[i]!='\0';i++){
//         cout<<s[i];
//     }
//     cout<<endl;
//     cout<<"The size of this string is "<<i<<endl;
//     return 0;
// }

// finding the length of a string using the iterator method 

// #include<iostream>
// #include<string>
// using namespace std;

// int main(){
//     string s;
//     int count=0;
//     cout<<"Enter the string : ";
//     getline(cin,s);
//     string :: iterator it;
//     for(it=s.begin();it<s.end();it++){
//         count++;

//     }
//     cout<<"The length of this string is "<<count<<endl;
//     return 0;
// }

// another way to find the length of the string 
// #include<iostream>
// #include<string>
// using namespace std;

// int main(){
//     string s;
//     int count =0;
//     cout<<"Enter a string ";
//     getline(cin,s);
//     string :: iterator it;
//     for(it=s.begin();it!=s.end();it++){
//         count++;
//     }
//     cout<<"The length of the string is "<<count<<endl;
//     return 0;
// }


// & by using the for loop 

// #include<iostream>
// #include<string>
// using namespace std;

// int main(){
//     string s;
//     int count =0;
//     cout<<"Enter a string : ";
//     getline(cin,s);
//     for(int i=0;s[i]!='\0';i++){
//         count++;
//     }
//     cout<<"The length of the string is "<<count<<endl;

//     return 0;
// }

// converting a string from lower case to upper case & from upper case to lower case 

// #include<iostream>
// #include<string>
// using namespace std;

// int main(){
//     string s,s2;
//     cout<<"Enter a string in UPPERCASE : ";
//     getline(cin,s);
//     for(int i=0;s[i]!='\0';i++){
//         s[i]+=32;

//     }
//     cout<<"The string in upper case is "<<s<<endl;

//     cout<<"Enter a string in lowercase : ";
//     getline(cin,s2);
//     for(int i=0;s2[i]!='\0';i++){
//         s2[i]-=32;
//     }
//     cout<<"The string in UPPER case is "<<s2;
//     return 0;
// }

    


    // converting only capital letters to small letters using the conditions 

// %%%%%%%%%%%  IF YOU GIVE A SPACE IN MIDDLE OF A STRING THEN THERE'S NO ASCII CODE FOR SPACE SO 
// IT GIVES OUTPUT OF ELSE STATEMENT OKAY  BCOZ  WE ARE USING THE ELSE STATEMENT 

// %%%%%  TO GET RID OF THIS ERROR USE A ELSE IF STATEMENT IN THIS WE HAVE TO WRITE SOME CODE FOR 
//         SPACE  LIKE THIS 
    /*
    
    else if(s[i]==' '){
        continue;
    }
    
     it leaves that space and continue to the next letter and convert that into required lower 
     or upper case 
    
    */


// #include<iostream>
// #include<string>
// using namespace std;

// int main(){
//     string s;
//     cout<<"Enter a string in uppercase : ";
//     getline(cin,s);
//     for(int i=0;s[i]!='\0';i++){
//         if(s[i]>=65 && s[i]<=90){
//             s[i]+=32;
//         }
//         else if(s[i]==' '){
//             continue;
//         }
//         else{
//             cout<<"the string is already in lower case ";
//             return 0;
//         }
//     }
//     cout<<"its lower case is : "<<s<<endl;


//     // lets convert some lower case elements to uppercase elements
// cout<<endl;
// cout<<endl;
//     string s2;
//     cout<<"Enter a string in lowercase : ";
//     getline(cin,s2);
//     for(int i=0;s2[i]!='\0';i++){
//         if(s2[i]>=97 && s2[i]<=122){
//             s2[i]-=32;

//         }
//         else if (s2[i]==' '){
//             continue;
//         }
//         else{
//     cout<<"The entered string is already in lower case ";
//     return 0;
//           }
//     }
//     cout<<"Its uppercase is : "<<s2;
//     return 0;
// }

// lets add two strings   of char type 

// #include<iostream>
// #include<cstring>
// using namespace std;

// int main(){
//     char A[10]="Hello";
//     char B[20]="How are you";
//     strncat(A,B,6);
//     cout<<A<<endl;
//     return 0;
// }


// using the functions of strings of string to long int and string to float 

// #include<iostream>
// #include<string>
// #include<cstring>
// #include<cmath>
// #include<math.h>
// using namespace std;

// int main(){
//     char A[]="255";
//     char B[]="255.60";
//     long int S=strtol(A,NULL,10); // converting a string to long int type 
//                             // here 10 means it a decimal part 

//     float S2=strtof(B,NULL);          // converting a string to float type 
//     cout<<A<<endl<<B<<endl;
//     return 0;
// }


// checking size of a char array string and string class element

// #include<iostream>
// #include<string>
// #include<cstring>       // this header file is only used when we are using the char array for strings 

// using namespace std;

// int main(){
//     //1. checking the length of a char array string 
//     // char s[]="Hello how are you";
//     // cout<<"The length of this string is "<<strlen(s);
    
//     // 2. checking the length of the string of string class 
//     string s;
//     cout<<"Enter the string : ";
//     getline(cin,s);
//     cout<<"The size of "<<s<<" is "<<s.length()<<endl;
    
//     return 0;
// }


// changing the font of the string 
// #include<iostream>
// #include<string>
// using namespace std;

// int main(){
//     string s,s2;
//     cout<<"Enter a string in small letters form : ";
//     getline(cin,s);
//     for(int i =0;s[i]!='\0';i++){
//         s[i]-=32;
//     }
//     cout<<"In capital font : "<<s<<endl;

//     cout<<"Enter a new string in capital letters : ";
//     getline(cin,s2);
//     for(int i=0;s[i]!='\0';i++){
//         s2[i]+=32;

//     }
//     cout<<"in small letter font : "<<s2<<endl;
//     return 0;
// }

// #include<iostream>
// #include<string>
// using namespace std;

// int main(){
    // string s="hello";
    // s.push_back('z');    // Add a character at the end of the string 
    // cout<<"Afer the usage of push function of strings "<<s<<endl;
    // s.pop_back();          // remove the last character of the string 
    // cout<<"After the usage of pop function of strings "<<s<<endl;
    
    
    // let swap two strings 

//     string s="Hello";
//     string s1="Programming";
//     s.swap(s1);     // the values of these string get interchange and store the values of other string 
//  cout<<"s string after swapping : "<<s<<endl;
//  cout<<"S1 string after the swapping : "<<s1<<endl;   
    
    // copying a string into another string variable 

    // string s="Welcome";
    // char str[10];
    // s.copy(str,s.length());
    // str[7]='\0';    // this line is coz after the 7 digits it prints some garbage value to prevent 
    // //        from garbage value we use this 
    // cout<<str;


// {kuch gumshuda logo ko dhundhte h lets go }lets find a string or a character of the string 

// string s="Programming";
// cout<<"gram is found at "<<s.find("gram")<<endl;
    
    
//     cout<<"m is found at "<<s.find('m');
    
    //%%%%%%%%%%%%  another functions of the string class :


//     string s1="Hello ";
//     string s2="How r u ";
//     string s3=s1+s2+'z';        // it prints Hello how r u z    this line doesn't gives an error 
//     cout<<s3<<endl;
//     return 0;
// }

// lets print the charcter of the strings 

// #include<iostream>
// #include<string>
// using namespace std;

// int main(){
//     string s1="Hello";
//     for(int i=0;s1[i]!='\0';i++){
//         cout<<s1[i];
//     }
//     return 0;
// }


// if you wanna the size of the string using the for loop 

// #include<iostream>
// #include<string>
// using namespace std;

// int main(){
//     string s="Programming";
//     int count=0;
//     for(int i =0;s[i]!='\0';i++){
//         count++;
//     }
//     cout<<"the size of this string is : "<<count<<endl;
//     return 0;
// }


// lets convert the case of the strings 

// #include<iostream>
// #include<string>
// using namespace std;

// int main(){
//     string s1,s2;
//     cout<<"Enter a string in lower case : ";
//     getline(cin,s1);
//     for(int i=0;s1[i]!='\0';i++){
//         if(s1[i]>=90 && s1[i]<=122)
//         {
//         s1[i]-=32;
        
//         }
//         else if(s1[i]==' '){
//             continue;
//         }
//         else {
//             cout<<"the string is always in upper case ";
//             break;
//         }
//     }
//     cout<<"The first string in upper case is :"<<s1<<endl;
//     cout<<"Enter the second string in upper case : ";
//     getline(cin,s2);
// for(int i=0;s2[i]!='\0';i++){
//         if(s2[i]>=65 && s2[i]<=90)
//         {
//         s2[i]+=32;
        
//         }
//         else if(s2[i]==' '){
//             continue;
//         }
//         else {
//             cout<<"the string is always in upper case ";
//             break;
//         }
//     }
//     cout<<"The second string in lower case is : "<<s2<<endl;
//     return 0;
// }


// #include<iostream>
// #include<string.h>
// using namespace std;

// int main(){
//     int i,j,total;
//     char Allname[50][20],onename[20];
//     cout<<"Enter the total number of names you wanna add : ";
//     cin>>total;
//     cout<<"Enter "<<total <<" Strings : ";
//     for(i=0;i<=total;i++){
        
//         cin>>Allname[i];
//     }
//     for(int i=1;i<total;i++){
//         for(j=1;j<total;j++){
//             if(strcmp(Allname[j-1],Allname[j])>0){
//                 strcpy(onename,Allname[j-1]);
//                 strcpy(Allname[j-1],Allname[j]);
//                 strcpy(Allname[j],onename);
//             }
//         }
//     }
// cout<<endl;
//     cout<<"The names in alphabetically order :-  "<<endl;
// for(i=0;i<total;i++){
//     cout<<Allname[i]<<endl;

// }
//     return 0;
// }
//------------------------------------------------------------------------------------------------------------------
//checking a string is pallindrome or not 

// #include<iostream>
// #include<string>
// using namespace std;

// int main(){
//     string s,rev;
//     // step 1 lets take a string from user 
    
//     cout<<"Enter a string : ";
//     getline(cin,s);
//     // step2 : is checking the length of the entered string
// int len=s.length();
// // step 3: now resizing it as same as entered string from the user 
// rev.resize(len);
// // step 4: now let store the values of entered string from back into reverse string 

// for(int i=0,j=len-1;i<len;i++,j--){
//     rev[i]=s[j];
// }

// rev[len]='\0';
// // its only for checking that the string is reversed or not 


// cout<<"its reverse order is : "<<rev<<endl;

// if(s.compare(rev)==0){
//     cout<<"pallindrome";
// }
// else{
//     cout<<"its not a pallindrome ";
// }
//   return 0;
// }


// getting the username from a email 
// #include<iostream>
// #include<string>
// using namespace std;

// int main(){
//     string email="himanshugg@gmail.com";
//     int i=email.find('@');
//     string uname=email.substr(0,i);
//     cout<<"The username of your email is : "<<uname<<endl;
//     return 0;
// }


// lets get the email from user and tell him/her their username 

// #include<iostream>
// #include<string>
// using namespace std;

// int main(){
//     string email;
//     cout<<"Enter your email address : ";
//     getline(cin,email);
//     int i=email.find('@');
//     string uname=email.substr(0,i);
//     cout<<"Your username is : "<<uname;
//     return 0;
// }

// --------------------------------------------------------------------------------------------------
// checking a email address is valid or not 

#include<iostream>
#include<string>
using namespace std;

// function to check the character is alphabet or not 

bool ischar(char c){
    return ((c>='a' && c<='z') || (c>='A' && c<='Z'));
}

// function to check that the character  is a digit or not 
bool isdigit(const char c){
    return (c>='0'&& c<='9');
}
// function to check the email is valid or not 
bool is_valid(string email){
    if(!ischar(email[0])){
        return 0;                // means email id is not valid 
    }
    int At=-1,Dot=-1;
    for(int i=0;i<email.length();i++){
        if(email[i]=='@'){
            At=i;
        }

        if(email[i]=='.'){
            Dot=i;
        }
    }


    if(At==-1  ||Dot==-1){
    return 0;
    }
    if(At>Dot){
    return 0;
    return !(Dot>=(email.length()-1));
    }

}


int main(){
    string email;
    cout<<"Enter your email address : ";
    getline(cin,email);
    bool ans = is_valid(email);
    if(ans){
        cout<<email<<" : "<<" valid "<<endl;
    }
    else{
        cout<<email<<" : "<<" not a valid email."<<endl;
    }
    return 0;
}
