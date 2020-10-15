#include<iostrem>
using namespace std;

class Circle
{
  public:
	float radius;
	double getArea()
	  { 
             return 3.14*radius*radius;
          }
};
  
int main()
{
  circle circle;
   circle.radius = 5;
   double area = circle.getArea();
   cout << "area of the circle is" << area << "square units"<<endl;

return0;
};