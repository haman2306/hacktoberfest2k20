#include<iostream>
using namespace std;


struct point
{
  int x,y;
};


int main()
{
	point a,b,c;
	cout << "Enter the co-ordinates of P1:";
	cin >> a.x >> a.y;
	cout << "Enter the co-ordinates of P2:";
	cin >> b.x >> b.y;



c.x = a.x + b.x;
c.y = a.y + b.y;
	

	cout << "co-ordinates of P1+P2 are: "<< c.x <<", "<< c.y <<;

return 0;
}