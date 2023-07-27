#include<iostream>
#include<math.h>
#include<windows.h>

using namespace std;
HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);

void g() {SetConsoleTextAttribute(h,2);}//green
void wi() {SetConsoleTextAttribute(h,7);}//white

int main()
{//weight selection
	float num,r,w,k=1000;
	int ch;
	
	cout<<"Input your weight= "; cin>>num;
	
	g();
	cout<<"===================================\a\n";
	cout<<"Type of weight \n";
	cout<<"1 for Ton \n";
	cout<<"2 for Kilo Gram \n";
	cout<<"3 for Gram \n";
	cout<<"4 for Mili Gram \n";
	cout<<"====================================\n";
	wi();
	
	cout<<"Choose type of weight= "; cin>>ch;
	
	system ("cls");
	
	switch (ch) {
		case 1: 
			r=num*(k*k*k); cout<<num<<" t\n";
			break;
		case 2: 
			r=num*(k*k); cout<<num<<" kg\n";
			break;
		case 3: 
			r=num*k; cout<<num<<" g\n";
			break;
		default:
			r=num; cout<<num<<" mg\n";
			break;
	}//weight convertion
	
	g();
	cout<<"====================================\a\n";
	cout<<"Type of convertion \n";
	cout<<"1 to Ton \n";
	cout<<"2 to Kilo Gram \n";
	cout<<"3 to Gram \n";
	cout<<"4 to Mili Gram \n";
	cout<<"====================================\n";
	wi();
	
	cout<<"Choose type of convertion= "; cin>>ch;
	cout<<endl;
	
	switch (ch){
		case 1:
			w=r/(k*k*k); cout<<w<<" t\n";
			break;
		case 2:
			w=r/(k*k); cout<<w<<" kg\n";
			break;
		case 3:
			w=r/k; cout<<w<<" g\n";
			break;
		default:
			w=r; cout<<w<<" mg\n";
			break;
	}
	
	g();
	cout<<"\n====================================\a\n";
	cout<<"Notice == e+0x= 10^x / e-0x= 10^-x";
	cout<<"\n====================================\n";
	
	system ("pause") ;
	return 0 ;
}
