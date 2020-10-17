#include<iostream>
using namespace std;
int main()
{
	float a,b;
	char ch;
	cout<<"enter the value of a"<<endl;
	cin>>a;
	cout<<"enter the value of b"<<endl;
	cin>>b;
	cout<<"1.add\n";
	cout<<"2.sub\n";
	cout<<"3.mul\n";
	cout<<"4.div\n";
stat:	cout<<"enter your choice (1-4)"<<endl;
	cin>>ch;
	cout<<endl;
	switch(ch)
	{
		case  1:
		case 'A':
		case 'a':
			cout<<"a+b ="<<a+b<<endl;
			break;
		case  2:
		case 'S':
		case 's':
			cout<<"a-b ="<<a-b<<endl;
			break;
     	case 3:
     	case 'M':
     	case 'm':
			cout<<"a*b ="<<a*b<<endl;
			break;
    	case 4:
    	case 'D':
    	case 'd':
		cout<<"a/b ="<<a/b<<endl;
			break;
		default:
			cout<<"wrong choice"<<endl;
			
			return 0;
			   	
	}

	goto stat;
	return 0;
}
