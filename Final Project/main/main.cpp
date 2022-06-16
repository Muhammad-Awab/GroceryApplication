#include<iostream>
#include<string>
#include<iomanip>
#include<fstream>
#include "CUSTOMER.h"
#include "ITEM.h"
#include "first.h"
#include "sales.h"
using namespace std;


int main ()
{
  sales S;
int choice;
product a2;                          //Class object(parametrized)
do{
cout<<"1-Product Management"<<endl;
cout<<"2-Customer Management"<<endl;
cout<<"3-Sales"<<endl;
cout<<"4-Exit"<<endl;
cout << "Enter your choice: ";
cin>>choice;
switch(choice){
case 1:
{
int n;
do{                                                      //Menu Function
cout<<"*******************************************************MENU**************************************************************"<<endl;
cout<<setw(61)<<"1-Add"<<endl;                           //ADD for add product
cout<<setw(62)<<"2-View"<<endl;                          //VIEW for view product
cout<<setw(64)<<"3-Update"<<endl;                        //UPDATE for update record
cout<<setw(64)<<"4-Search"<<endl;                        //SEARCH for specific record
cout<<setw(62)<<"5-Exit"<<endl;                          //EXIT for exit the program
cout << "\n";                                            //Use for gap
cout<<"*******************************************************MENU**************************************************************"<<endl;
cout<<"Enter your choice"<<endl;                         //Ask the user to enter the choice
cin>>n;                                                  //Take the input from the user
system("CLS");                                           //Use for clearing the screen
switch(n){                                               //Switch for Menu
case 1:                                                  //Case 1 which call the
a2.ADD();                                               //ADD function
system("CLS");                                           //Use for clearing the screen
break;                                                   //Break to stop the program
case 2:                                                  //Case 2
system("CLS");                                           //Use for clearing the screen
a2.VIEW();                                              //Used for VIEW function
break;                                                   //Break to stop the program
case 3:                                                  //Case 3 which call the
a2.UPDATE();                                            //UPDATE function
break;                                                   //Break to stop the program
case 4:                                                  //Case 4 which call the
a2.SEARCH();                                            //SEARCH function
break;                                                   //Break to stop the program                                                 //Break to stop the program
}                                                        //Closing bracket of switch
}while(n!=5);
}
break;

case 2:
{
item s1;
int n1;
  do

    {				//Menu Function
      cout <<

"*******************************************************MENU**************************************************************"
 <<endl;
      cout << "                                                      1-Add" << endl;	//ADD for add product
      cout << "                                                      2-View" << endl;	//VIEW for view product
      cout << "                                                      3-Update" << endl;	//UPDATE for update record
      cout << "                                                      4-Search" << endl;	//SEARCH for specific record                       //DELETE for delete record
      cout << "                                                      5-Exit" << endl;	//EXIT for exit the program
      cout << "\n";		//Use for gap
      cout <<

"*******************************************************MENU**************************************************************"
 <<endl;
cout << "Enter your choice" << endl;	//Ask the user to enter the choice
      cin >> n1;			//Take the input from the user
      system ("CLS");		//Use for clearing the screen
      switch (n1)
	{			//Switch for Menu
	case 1:		//Case 1 which call the
	  s1.add ();		//ADD function
	  system ("CLS");	//Use for clearing the screen
	  break;		//Break to stop the program
	case 2:		//Case 2
	  system ("CLS");	//Use for clearing the screen
	  s1.view ();		//Used for VIEW function
	  break;		//Break to stop the program
	case 3:		//Case 3 which call the
	  s1.update ();		//UPDATE function
	  break;
    case 4:
      s1.search ();


}			//Closing bracket of switch
}while (n1 != 5);
}
break;
    case 3:{
    int n,n1;
do{
    cout<<"1-Product  id"<<endl;
    cout<<"2-Customer id"<<endl;
    cout<<"3-sales"<<endl;
    cout<<"4-Exit"<<endl;
    cin>>n;
    switch(n){
case 1:
system("CLS");
S.SEARCH();
break;
case 2:
system("CLS");
S.search();
case 3:
do{
cout<<"1-Add"<<endl;
cout<<"2-View"<<endl;
cout<<"3-Exit"<<endl;
cin>>n1;
switch(n1){
case 1:
    system("CLS");
   S.SAdd();
   break;
case 2:
   system("CLS");
  S.Sview();
}
}while(n1!=3);
    }
}while(n!=4);
}
break;

}
}while(choice!=4);
}
