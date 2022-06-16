#ifndef ITEM_H
#define ITEM_H
#include "CUSTOMER.h"
#include<iostream>
#include<iomanip>
#include<fstream>
using namespace std;

class item:protected customer
{

protected:
int id;

string name;

float price;


public:
item ():customer ()
  {

id = 0;

name = "";

price = 0.0;

}
item (int i, string ii, float p, string n, double n1, int h, int s,
	    string ar, string c):customer (n, n1, h, s, ar, c)
  {

id = i;

name = ii;

price = p;

}
void setitem (int i, string ii, float p, string n, double n1, int h,
		    int s, string ar, string c)
  {

id = i;

name = ii;

price = p;


setcustomer (n, n1, h, s, ar, c);

}
void getitem ()
  {

getcustomer ();

cout << id << endl;

cout << name << endl;

cout << price << endl;

}
    //Setter Function
  void set_ID (int id)
  {

this->id = id;		//using THIS pointer to point the data members of class
  }
void set_name (string name)
  {

this->name = name;

}
void set_price (float price)
  {

this->price = price;

}
    //Getter function
  int get_ID ()
  {

return id;

}

string get_name ()
  {

return name;

}

float get_price ()
  {

return price;

}


void add ()
  {

cout << "enter the customer name: ";

cin >> cname;

cout << "enter the customer contact number: ";

cin >> cno;

cout << "enter the id of the item" << endl;

cin >> id;

cout << "enter the item name" << endl;

cin >> name;

cout << "enter the item price" << endl;

cin >> price;

fstream file;

file.open ("item.txt", ios::app | ios::out);

file << cname << endl;

file << cno << endl;

file << id << endl;

file << name << endl;

file << price << "\n";

file.close ();


}
void view ()
  {

cout <<
      "===================================================================================================================="
      << endl
 <<endl;

cout << left << setw (10);


cout << "CustomerN" << left << setw (20) << "CustomerCon" << left <<
      setw (11) << "ID" << left << setw (11) << "Name" << left << setw (13) <<
      "Price";

cout << endl;

ifstream read ("item.txt");

read >> cname;

read >> cno;

read >> id;

read >> name;

read >> price;


while (!read.eof ())

      {

cout << setw (15) << cname << left << setw (16) << cno << left <<
	  setw (10) << id << left << setw (13) << name << left << setw (15) <<
	  price << endl;

read >> cname;

read >> cno;

read >> id;

read >> name;

read >> price;

}

cout <<
      "===================================================================================================================";

cout << endl;

}

void search ()
  {

int iid;

fstream file1, file11;

cout << "enter the id which you want to search" << endl;

cin >> iid;

cout << "\n\n";

file11.open ("item.txt", ios::in);

if (!file11)
      {
	cout << "\nFile opening error" << endl;

file11.close ();
      }

file1.open ("item1.txt", ios::in);

file11 >> cname >> cno >> id >> name >> price;

while (!file11.eof ())
      {

if (iid == id)
	  {

cout << "match found" << endl;

cout << "\nCustomer name   >  " << cname << endl;

cout << "\nCustomer contact name  >   " << cno << endl;

cout << "\nid    >            " << id << endl;

cout << "\nname  >            " << name << endl;

cout << "\nprice >            " << price << endl;

file1 >> cname >> cno >> id >> name >> price;

}


	else
	  {

file1 << cname << " " << cno << " " << id << " " << name << " "
	      << price << "\n";

}

file11 >> cname >> cno >> id >> name >> price;

}

file1.close ();

file11.close ();


}

void update ()
  {

int iid, choice;

fstream file1, file11;

cout << "enter the id which you want to update" << endl;

cin >> iid;

cout << "\n\n";

file11.open ("item.txt", ios::in);

if (!file11)
      {

cout << "\nFile opening error" << endl;

file11.close ();

}

file1.open ("item1.txt", ios::app | ios::out);

file11 >> cname >> cno >> id >> name >> price;

while (!file11.eof ())
      {

if (iid == id)
	  {

cout << "1-Update Customer name" << endl;

cout << "2-Update Customer contact number" << endl;

cout << "3-Update ID" << endl;

cout << "4-Update name" << endl;

cout << "5-Update price" << endl;

cout << "Enter your choice ";

cin >> choice;

switch (choice)

	      {

case 1:

cout << "Enter the new customer name ";

cin >> cname;

break;

case 2:

cout << "Enter the new customer contact number ";

cin >> cno;

break;

case 3:

cout << "Enter the new id ";

cin >> id;

break;

case 4:

cout << "Enter the new name ";

cin >> name;

break;

case 5:

cout << "Enter the new price ";

cin >> price;

break;

}

file1 << "" << cname << endl;

file1 << "" << cno << endl;

file1 << "" << id << endl;

file1 << "" << name << endl;

file1 << "" << price << endl;

}


	else
	  {

file1 << " " << cname << " " << cno << " " << id << " " << name
	      << " " << price << "\n";

}

file11 >> cname >> cno >> id >> name >> price;

}

file1.close ();

file11.close ();

remove ("item.txt");

rename ("item1.txt", "item.txt");

}

};


#endif // ITEM_H
