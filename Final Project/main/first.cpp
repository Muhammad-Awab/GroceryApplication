#include<iostream>                                   //Use for cin and cout
#include<string>                                     //Use for string
#include<iomanip>
#include<fstream>                              //Use for setw
using namespace std;                                 //Member of std are cout, cin and endl
#include "first.h"                                   //Include header file
product::product(){                                  //default constructor
pid=0;                                                //Initialize id to 0
pname="-";                                            //Initialize name to "-"
pprice=0;                                             //Initialize price to 0
desc="---";                                          //Initialize desc to "-"
}                                                    //Closing bracket for default constructor
product::product(int a1,string a2,double a3,string a4){  //parametrized constructor
pid=a1;                                               //assign value to a1
pname=a2;                                             //assign value to a2
pprice=a3;                                            //assign value to a3
desc=a4;                                             //assign value to a4
ptr=new int[4];                                      //new operator to make array in heap
}                                                    //Closing bracket for parametrized constructor
product::product(product const& s){                  //Copy constructor
 ptr=new int[4];                                     //new operator to make array in heap
 for(int i=0;i<4;i++){                               //for loop to store the element in array
 ptr[i]=s.ptr[i];                                    //make copy of constructor
 }                                                   //Closing bracket for loop
}                                                    //Closing bracket of copy constructor
void product::setid(int q1){                         //Setter functions
pid=q1;                                               //Use assignment to initialize id to q1
}                                                    //Closing bracket for void function
void product::setname(string q2){                    //Void function for set name
pname=q2;                                             //Use assignment to initialize name to q2
}                                                    //Closing bracket for void function
void product::setprice(double q3){                   //Void function for set price
pprice=q3;                                            //Use assignment to initialize price to q3
}                                                    //Closing bracket for void function
void product::setdesc(string q4){                    //Void function for set desc
desc=q4;                                             //Use assignment to initialize desc to q4
}                                                    //Closing bracket for void function
int product::getid(){                                //gettor functions
return pid;                                           //return id
}                                                    //closing function bracket
string product::getname(){                           //string function for get name
return pname;                                         //return name
}                                                    //closing function bracket
double product::getprice(){                          //double function for get price
return pprice;                                        //return price
}                                                    //closing function bracket
string product::getdesc(){                           //string function for get desc
return desc;                                         //return desc
}                                                    //closing function bracket
void product::display(){                             //Display Fnctions
cout<<"ID:"<<pid<<endl;                               //Display id
cout<<"Name:"<<pname<<endl;                           //Display name
cout<<"Price:"<<pprice;                               //Display price
cout<<"Desc"<<desc<<endl;                            //Display desc
}                                                    //closing function bracket
                                //integar variable which initialize to 0
void product::ADD(){                       //Add Functions

cout << "enter the product id: ";

cin >> pid;

cout << "enter the product name: ";

cin >> pname;

cout << "enter the product price" << endl;

cin >> pprice;

cout << "enter the prodcut description" << endl;

cin >> desc;



fstream file;

file.open ("product.txt", ios::app | ios::out);

file << pid << endl;

file << pname << endl;

file << pprice << endl;

file << desc << endl;


file.close ();
                                                  //closing bracket for else
}                                                    //closing bracket for void function
void product::VIEW(){                      //View Function
cout <<
      "===================================================================================================================="
      << endl
 <<endl;

cout << left << setw (10);


cout << "productid" << left << setw (20) << "productname" << left <<
      setw (11) << "productprice" << left << setw (11) << "productdesc";


cout << endl;

ifstream read ("product.txt");

read >> pid;

read >> pname;

read >> pprice;

read >> desc;


while (!read.eof ())

      {

cout << setw (15) << pid << left << setw (16) << pname << left <<
	  setw (10) << pprice << left << setw (13) << desc <<endl;

read >> pid;

read >> pname;

read >> pprice;

read >> desc;


}

cout <<
      "===================================================================================================================";

cout << endl;
                                      //closing bracket for else
}                                                   //closing bracket for function
void product::UPDATE(){                   //Update function
int iid, choice;

fstream file1, file11;

cout << "enter the id which you want to update" << endl;

cin >> iid;

cout << "\n\n";

file11.open ("product.txt", ios::in);

if (!file11)
      {

cout << "\nFile opening error" << endl;

file11.close ();

}

file1.open ("product1.txt", ios::app | ios::out);

file11 >> pid >> pname >> pprice >> desc;

while (!file11.eof ())
      {

if (iid == pid)
	  {

cout << "1-Update pruduct id" << endl;

cout << "2-Update product name" << endl;

cout << "3-Update price" << endl;

cout << "4-Update desc" << endl;


cout << "Enter your choice ";

cin >> choice;

switch (choice)

	      {

case 1:

cout << "Enter the new product id"<<endl;

cin >> pid;

break;

case 2:

cout << "Enter the new product name ";

cin >> pname;

break;

case 3:

cout << "Enter the new price ";

cin >> pprice;

break;

case 4:

cout << "Enter the new desc ";

cin >> desc;

break;



}

file1 << "" << pid << endl;

file1 << "" << pname << endl;

file1 << "" << pprice << endl;

file1 << "" << desc << endl;


}


	else
	  {

file1 >> pid >> pname >> pprice >> desc ;

}

file11 >> pid >> pname >> pprice >> desc ;

}

file1.close ();

file11.close ();

remove ("product.txt");

rename ("product1.txt", "product.txt");

}

                                                //closing bracket of if
void product::SEARCH(){                   //void function
int iid;

fstream file1, file11;

cout << "enter the id which you want to search" << endl;

cin >> iid;

cout << "\n\n";

file11.open ("product.txt", ios::in);

if (!file11)
      {
	cout << "\nFile opening error" << endl;

file11.close ();
      }

file1.open ("product1.txt", ios::in);

file11 >> pid >> pname >> pprice >> desc ;

while (!file11.eof ())
      {

if (iid == pid)
	  {

cout << "match found" << endl;

cout << "\nproduct id   >  " << pid << endl;

cout << "\product name  >  " << pname << endl;

cout << "\nProductP     >  " << pprice << endl;

cout << "\ndesc         >  " << desc << endl;


file1 >> pid >> pname >> pprice >> desc ;

}


	else
	  {

file1 << pid << " " << pname << " " << pprice << " " << desc << "\n";

}

file11 >> pid >> pname >> pprice >> desc;

}

file1.close ();

file11.close ();

                                                  //Closing bracket for if
}
