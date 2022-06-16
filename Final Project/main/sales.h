#ifndef SALES_H
#define SALES_H
#include "ITEM.h"

class sales:public item,public product
{
    private:


       string cn;
       string na;
    public:
void SEARCH(){                   //void function
int iid;

fstream file1, file11;

cout << "enter the Product id" << endl;

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

cout << "\nproduct name  >  " << pname << endl;


file1 >> pid >> pname >> pprice >> desc ;
na=pname;
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





void search ()
  {

int iid;

fstream file1, file11;

cout << "enter the Customer id" << endl;

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
cout << "\nCustomer name   >  " << cname << endl;
cout << "\nid    >            " << id << endl;
file1 >> cname >> cno >> id >> name >> price;
cn=cname;
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







 void SAdd(){

fstream file;

file.open ("product2.txt", ios::app | ios::out);

file << cn<< endl;
file << na << endl;


file.close ();
                                                  //closing bracket for else


 }
void Sview(){



cout <<
      "===================================================================================================================="
      << endl
 <<endl;

cout << left << setw (10);


cout << "CustomerN" << left << setw (20) << "Product";

cout << endl;

ifstream read ("product2.txt");

read >> cn;

read >> na;



while (!read.eof ())

      {

cout << setw (15) << cn << left << setw (16) << na <<endl;

read >> cn;

read >> na;

}

cout <<
      "===================================================================================================================";

cout << endl;

}


};

#endif // SALES_H
