#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int i,j,p,q,m,n,k,op;
 double a[10][10],b[10][10],s[10][10],d[10][10],pr[10][10];
 char ch;
 do
 {
 cout<<"_____________________Matrix Calculator________________________";
 cout<<"\n";
 cout<<"Order of matrix A "<<endl;
 cout<<"Rows : ";
 cin>>p;
 cout<<"Columns : ";
 cin>>q;
 cout<<"\n";
 cout<<"Order of matrix B"<<endl;
 cout<<"Rows : ";
 cin>>m;
 cout<<"Columns : ";
 cin>>n;
 cout<<"\n";
 if((p!=m)||(q!=n))
 {
  cout<<"Matrix operation not possible.";
 }
 else
 {
 cout<<"Enter the elements of Matrix A : ";
 for(i=0;i<p;i++)
 {
  for(j=0;j<q;j++)
  {
   cin>>a[i][j];
  }
 }
 cout<<"\nEnter the elements of Matrix B : ";
 for(i=0;i<m;i++)
 {
  for(j=0;j<n;j++)
  {
   cin>>b[i][j];
  }
 }
 cout<<"The entered matrices are : "<<endl;
 cout<<"Matrix A"<<endl;
 for(i=0;i<p;i++)
 {
  cout<<endl;
  for(j=0;j<q;j++)
  {
   cout<<a[i][j]<<" ";
  }
 }
 cout<<"\n";
 cout<<"Matrix B"<<endl;
 for(i=0;i<p;i++)
 {
  cout<<endl;
  for(j=0;j<q;j++)
  {
   cout<<b[i][j]<<" ";
  }
 }
 cout<<"\n";
 for(i=0;i<p;i++)
 {
  for(j=0;j<q;j++)
  {
   s[i][j]=a[i][j]+b[i][j];
   d[i][j]=a[i][j]-b[i][j];
   pr[i][j]=0;
   for(k=0;k<p;k++)
   {
    pr[i][j]=pr[i][j]+a[i][j]*b[i][j];
   }
  }
 }
 cout<<"Enter operation"<<endl;
 cout<<"1. Addition"<<endl;
 cout<<"2. Substraction"<<endl;
 cout<<"3. Multiplication"<<endl;
 cout<<"Enter your choice : ";
 cin>>op;
 switch(op)
 {
  case 1 :   cout<<"The sum is : ";
	     for(i=0;i<p;i++)
	     {
	      cout<<endl;
	      for(j=0;j<q;j++)
	      {
	       cout<<s[i][j]<<" ";
	      }
	     }
	     break;
  case 2 :   cout<<"The difference is : ";
	     for(i=0;i<p;i++)
	     {

	      cout<<endl;
	      for(j=0;j<q;j++)
	      {
	       cout<<d[i][j]<<" ";
	      }
	     }
	     break;
  case 3 :   cout<<"The product is : ";
	     for(i=0;i<p;i++)
	     {
	      cout<<endl;
	      for(j=0;j<q;j++)
	      {

	       cout<<pr[i][j]<<" ";
	      }
	     }
	     break;
  default : cout<<"Invalid choice";
	    break;
 }
 }
 cout<<"\nWant to continue?(y/n) : ";
 cin>>ch;
 }
 while(ch=='y'||ch=='Y');
 cout<<"\n";
 cout<<"Have a nice day :) ";
 getch();
}
