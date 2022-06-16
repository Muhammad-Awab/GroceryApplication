#ifndef FIRST_H                                      //Define Header file
#define FIRST_H                                      //Define the header file FIRST_H
#include<iostream>                                   //Use for cin and cout
#include<string>                                     //Use for string
#include<iomanip>                                    //Use for setw
using namespace std;                                 //Member of std are cout, cin and endl
class product{                                       //Declare class product
protected:                                             //ACCESS specifier private
int pid;                                              //Declare the integar variable
string pname;                                         //Declare the string variable
double pprice;                                        //Declare the double variable
string desc;                                         //Declare the string variable
int *ptr;                                            //Declare the pointer variable
int n1;                                              //Declare the integar variable
int c;                                               //Declare the integar variable
int counter;                                         //Counter Variable 1
int counter1;                                        //Counter Variable 2
int counter2;                                        //Counter Variable 3
public:                                              //ACCESS specifier public
product();                                           //Default Constructor
product(int,string,double,string);                   //parametrized Constructor
product(product const& s);                           //Copy Constructor
void setid(int);                                     //Mutator Function for set id
void setname(string);                                //Mutator function for set name
void setprice(double);                               //Mutator function for set price
void setdesc(string);                                //Mutator function for set desc
int getid();                                         //Accessor Function for get id
string getname();                                    //Accessor function for get name
double getprice();                                   //Accessor function for get price
string getdesc();                                    //Accessor function for get desc
void display();                                      //Void function for display
void ADD();                                //ADD function
void VIEW();                               //VIEW function
void SEARCH();                             //SEARCH function
void UPDATE();                             //UPDATE function
                          //DELETE function
};                                                   //Closing bracket for main
#endif
