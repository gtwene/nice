#include<iostream>
using namespace std;

int main()
{
	int a;
	cout<<"what is your marks =";
	cin>> a;
	if( a >= 80)
	{
	cout<< "A"<<endl;
    }
	  
	  else if(a>75 && a<80)
	  {
	  	cout<<"B"<<endl;
	  }
	
	else if(a>70 && a<75)
	{
		cout<<"C+"<<endl;
	}
	
	else if(a>60&&a<70)
	     {
	     	cout<< "C"<<endl;
		 }
	
	else if(a>55 && a<60)
	     {
	     	cout<< "D+"<<endl;
		 }
	else if(a>50 && a<55)
	     {
	     	cout<< "D"<<endl;
		 }
	else if(a>45 && a<50)
	     {
	     	cout<< "E"<<endl;
	     }
	else if(a<45)
	    {
	    	cout<<"F"<<endl;
		}
		 else
		 cout<<"Do not exist";
		 
	return 0;
}
