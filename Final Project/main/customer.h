#ifndef CUSTOMER_H
#define CUSTOMER_H
#include<iostream>

 using namespace std;

class Address
{

private:
int houseno;

int streetno;

string area;

string city;

public:
Address ()
  {

houseno = 0;

streetno = 0;

area = "";

city = "";

}
Address (int h, int s, string ar, string c)
  {

houseno = h;

streetno = s;

area = ar;

city = c;

}
void setAddress (int h, int s, string ar, string c)
  {

houseno = h;

streetno = s;

area = ar;

city = c;

}
void getAddress ()
  {

cout << houseno << endl;

cout << streetno << endl;

cout << area << endl;

cout << city << endl;

}
};


class customer
{

protected:
string cname;

long int cno;

Address a;

public:
customer ()
  {

cname = "";

cno = 0.0;

}
customer (string n, double n1, int h, int s, string ar, string c)
  {

cname = n;

cno = n1;

a.setAddress (h, s, ar, c);

}
void setcustomer (string n, double n1, int h, int s, string ar,
			string c)
  {

cname = n;

cno = n1;

a.setAddress (h, s, ar, c);

}
void getcustomer ()
  {

cout << cname << endl;

cout << cno << endl;

a.getAddress ();


}


};



#endif // CUSTOMER_H
