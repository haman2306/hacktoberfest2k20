#include<iostream>
using namespace std;
struct Point
{
	int x1,x2,x,y1,y2,y;
	
};
int main()
{
	Point p;
	cout<<"enter coordinates of x1 and y1:";
	cin>>p.x1>>p.y1;
	cout<<"enter coordinates of x2 and y2:";
	cin>>p.x2>>p.y2;
	p.x=p.x1+p.x2;
	p.y=p.y1+p.y2;
	cout<<"coordinates of p1+p2 are"<<"("<<p.x<<","<<p.y<<")"<<endl;
	
}
