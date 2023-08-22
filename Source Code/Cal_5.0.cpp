#include <iostream>
#include <math.h>
//--C_Ren--
	using namespace std;

void bar () { 
cout << " ================================================================== \n" ;
}

int main() {
	
	int xyz;
	
	do {
		
		int notice = 1 ;
		float in , k=1000 ;
//Intro*******************************
		bar();
		cout << " --C_Ren-- \n" ;
		cout << "\t\t Multi Pupurse Calculator 5.0.b \n\n" ;
		
		bar();
//Mode selection**********************
		int mode ;
		cout << " Notice " << notice << " : Default mode is >> --6-- << \n\n" ;
		cout << "\t Press number --1-- for Wieght \n" ;
		cout << "\t Press number --2-- for Liquid Value \n" ;
		cout << "\t Press number --3-- for Length \n" ;
		cout << "\t Press number --4-- for Suface Area / Square / Plain \n" ;
		cout << "\t Press number --5-- for Valuem / Cube \n" ;	
		cout << "\t Press number --6-- for Compter File Size ( 1byte = 4bits ) \n" ;
		cout << "\n\t\t Choose a mode above: "; cin >> mode ;
		cout << " \n" ;
		
		if (mode > 6) {
			mode = 6 ;
			notice ++;
			cout << " Notice " << notice << " : Default mode is >> --6-- << \n" ;
		}
		
		bar();
		switch (mode) {
//Wieght vvvvvvvvvvvvvvvvvvvvvvvvvvvvv		
			case 1: {
			//Input vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv
				cout << "\n\t --Wieght convertion-- " ;
				cout << "\n\t Input the Wieght: "; cin >> in ;
				int w = in ;
				cout << " \n" ;
			//Type vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv	
				bar();
				notice ++;
				cout << " Notice " << notice << " : Default mode is >> --8-- << \n\n" ;
				cout << "\t --1-- t \t Ton \n" ;
				cout << "\t --2-- kg \t Kio-gram \n" ;
				cout << "\t --3-- Hecto-g \t Hecto-gram \n" ;
				cout << "\t --4-- Hecca-g \t Deca-gram \n" ;
				cout << "\t --5-- g \t Gram \n" ;
				cout << "\t --6-- dg \t Deci-gram \n" ;
				cout << "\t --7-- cg \t Centi-gram \n" ;
				cout << "\t --8-- mg \t Milli-gram \n" ;
				cout << "\n\t\t Type of wieght: "; cin >> mode ;
				cout << " \n" ;
				
				if (mode > 8) {
					mode = 8 ;
					notice ++;
					cout << " Notice " << notice << " : Default mode is >> --8-- << \n" ;
				}
			//Type vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv	
				bar();
				switch (mode) {
					case 1: {
						in = in*k*k*k;
						cout << "\t\t=>\t" << w << " t\n"; 
						break;
					} 
					case 2: {
						in = in*k*k;
						cout << "\t\t=>\t" << w << " kg\n"; 
						break;
					} 
					case 3: {
						in = in*100*k;
						cout << "\t\t=>\t" << w << " hecto-g\n"; 
						break;
					} 
					case 4:{
						in = in*10*k;
						cout << "\t\t=>\t" << w << " deca-g\n"; 
						break;
					} 
					case 5: {
						in = in*k;
						cout << "\t\t=>\t" << w << " g\n";
						break;
					} 
					case 6: {
						in = in*100;
						cout << "\t\t=>\t" << w << " dg\n";
						break;
					}
					case 7: {
						in = in*10;
						cout << "\t\t=>\t" << w << " cg\n";
						break;
					} 
					default : {
						in = in;
						cout << "\t\t=>\t" << w << " mg\n";
						break;
					} 
				}
			//Convert type vvvvvvvvvvvvvvvvvvvvvvvvvvvvvv	
				bar();
				notice ++;
				cout << " Notice " << notice << " : Default mode is >> --8-- << \n\n" ;
				cout << "\t --1-- t \t Ton \n" ;
				cout << "\t --2-- kg \t Kio-gram \n" ;
				cout << "\t --3-- hecto-g \t Hecto-gram \n" ;
				cout << "\t --4-- decca-g \t Deca-gram \n" ;
				cout << "\t --5-- g \t Gram \n" ;
				cout << "\t --6-- dg \t Deci-gram \n" ;
				cout << "\t --7-- cg \t Centi-gram \n" ;
				cout << "\t --8-- mg \t Milli-gram \n" ;
				cout << "\n\t\t Convert to: "; cin >> mode ;
				cout << " \n" ;
				
				if (mode > 8) {
					mode = 8 ;
					notice ++;
					cout << " Notice " << notice << " : Default mode is >> --8-- << \n" ;
				}
			//Convert type vvvvvvvvvvvvvvvvvvvvvvvvvvvvvv	
				bar();
				switch (mode) {
					case 1: {
						in = in/k/k/k;
						cout << "\t\t=>\t" << in << " t\n"; 
						break;
					} 
					case 2: {
						in = in/k/k;
						cout << "\t\t=>\t" << in << " kg\n"; 
						break;
					} 
					case 3: {
						in = in/100/k;
						cout << "\t\t=>\t" << in << " hecto-g\n"; 
						break;
					} 
					case 4:{
						in = in/10/k;
						cout << "\t\t=>\t" << in << " deca-g\n"; 
						break;
					} 
					case 5: {
						in = in/k;
						cout << "\t\t=>\t" << in << " g\n";
						break;
					} 
					case 6: {
						in = in/100;
						cout << "\t\t=>\t" << in << " dg\n";
						break;
					}
					case 7: {
						in = in/10;
						cout << "\t\t=>\t" << in << " cg\n";
						break;
					} 
					default : {
						in = in;
						cout << "\t\t=>\t" << in << " mg\n";
						break;
					} 
				}
				break;
			}
//Liquid Value vvvvvvvvvvvvvvvvvvvvvvv			
			case 2: {
			//Input vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv
				cout << "\n\t --Liquid Value-- " ;
				cout << "\n\t Input the Value: "; cin >> in ;
				int w = in ;
				cout << " \n" ;
			//Type vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv	
				bar();
				notice ++;
				cout << " Notice " << notice << " : Default mode is >> --7-- << \n\n" ;
				cout << "\t --1-- kl \t Kio-litre \n" ;
				cout << "\t --2-- Hecto-l \t Hecto-litre \n" ;
				cout << "\t --3-- Decca-l \t Deca-litre \n" ;
				cout << "\t --4-- l \t Litre \n" ;
				cout << "\t --5-- dl \t Deci-litre \n" ;
				cout << "\t --6-- cl \t Centi-litre \n" ;
				cout << "\t --7-- ml \t Milli-litre \n" ;
				cout << "\n\t\t Type of Value: "; cin >> mode ;
				cout << " \n" ;
				
				if (mode > 7) {
					mode = 7 ;
					notice ++;
					cout << " Notice " << notice << " : Default mode is >> --7-- << \n" ;
				}
			//Type vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv	
				bar();
				switch (mode) {
					case 1: {
						in = in*k*k;
						cout << "\t\t=>\t" << w << " kl\n"; 
						break;
					} 
					case 2: {
						in = in*100*k;
						cout << "\t\t=>\t" << w << " hecto-l\n"; 
						break;
					} 
					case 3:{
						in = in*10*k;
						cout << "\t\t=>\t" << w << " deca-l\n"; 
						break;
					} 
					case 4: {
						in = in*k;
						cout << "\t\t=>\t" << w << " l\n";
						break;
					} 
					case 5: {
						in = in*100;
						cout << "\t\t=>\t" << w << " dl\n";
						break;
					}
					case 6: {
						in = in*10;
						cout << "\t\t=>\t" << w << " cl\n";
						break;
					} 
					default : {
						in = in;
						cout << "\t\t=>\t" << w << " ml\n";
						break;
					} 
				}
			//Convert type vvvvvvvvvvvvvvvvvvvvvvvvvvvvvv	
				bar();
				notice ++;
				cout << " Notice " << notice << " : Default mode is >> --7-- << \n\n" ;
				cout << "\t --1-- kl \t Kio-litre \n" ;
				cout << "\t --2-- Hecto-l \t Hecto-litre \n" ;
				cout << "\t --3-- Decca-l \t Deca-litre \n" ;
				cout << "\t --4-- l \t Litre \n" ;
				cout << "\t --5-- dl \t Deci-litre \n" ;
				cout << "\t --6-- cl \t Centi-litre \n" ;
				cout << "\t --7-- ml \t Milli-litre \n" ;
				cout << "\n\t\t Convert to: "; cin >> mode ;
				cout << " \n" ;
				
				if (mode > 7) {
					mode = 7 ;
					notice ++;
					cout << " Notice " << notice << " : Default mode is >> --7-- << \n" ;
				}
			//Convert type vvvvvvvvvvvvvvvvvvvvvvvvvvvvvv		
				bar();
				switch (mode) {
					case 1: {
						in = in/k/k;
						cout << "\t\t=>\t" << in << " kl\n"; 
						break;
					} 
					case 2: {
						in = in/100/k;
						cout << "\t\t=>\t" << in << " hecto-l\n"; 
						break;
					} 
					case 3:{
						in = in/10/k;
						cout << "\t\t=>\t" << in << " deca-l\n"; 
						break;
					} 
					case 4: {
						in = in/k;
						cout << "\t\t=>\t" << in << " l\n";
						break;
					} 
					case 5: {
						in = in/100;
						cout << "\t\t=>\t" << in << " dl\n";
						break;
					}
					case 6: {
						in = in/10;
						cout << "\t\t=>\t" << in << " cl\n";
						break;
					} 
					default : {
						in = in;
						cout << "\t\t=>\t" << in << " ml\n";
						break;
					} 
				}
				break;
			}
//Length vvvvvvvvvvvvvvvvvvvvvvvvvvvvv	
			case 3: {
			//Input vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv
				cout << "\n\t --Length-- " ;
				cout << "\n\t Input the Length: "; cin >> in ;
				int w = in ;
				cout << " \n" ;
			//Type vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv	
				bar();
				notice ++;
				cout << " Notice " << notice << " : Default mode is >> --7-- << \n\n" ;
				cout << "\t --1-- km \t Kio-metre \n" ;
				cout << "\t --2-- Hecto-m \t Hecto-metre \n" ;
				cout << "\t --3-- Decca-m \t Deca-metre \n" ;
				cout << "\t --4-- m \t Metre \n" ;
				cout << "\t --5-- dm \t Deci-metre \n" ;
				cout << "\t --6-- cm \t Centi-metre \n" ;
				cout << "\t --7-- mm \t Milli-metre \n" ;
				cout << "\n\t\t Type of Length: "; cin >> mode ;
				cout << " \n" ;
				
				if (mode > 7) {
					mode = 7 ;
					notice ++;
					cout << " Notice " << notice << " : Default mode is >> --7-- << \n" ;
				}
			//Type vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv	
				bar();
				switch (mode) {
					case 1: {
						in = in*k*k;
						cout << "\t\t=>\t" << w << " km\n"; 
						break;
					} 
					case 2: {
						in = in*100*k;
						cout << "\t\t=>\t" << w << " hecto-m\n"; 
						break;
					} 
					case 3:{
						in = in*10*k;
						cout << "\t\t=>\t" << w << " deca-m\n"; 
						break;
					} 
					case 4: {
						in = in*k;
						cout << "\t\t=>\t" << w << " m\n";
						break;
					} 
					case 5: {
						in = in*100;
						cout << "\t\t=>\t" << w << " dm\n";
						break;
					}
					case 6: {
						in = in*10;
						cout << "\t\t=>\t" << w << " cm\n";
						break;
					} 
					default : {
						in = in;
						cout << "\t\t=>\t" << w << " mm\n";
						break;
					} 
				}
			//Convert type vvvvvvvvvvvvvvvvvvvvvvvvvvvvvv	
				bar();
				notice ++;
				cout << " Notice " << notice << " : Default mode is >> --7-- << \n\n" ;
				cout << "\t --1-- km \t Kio-metre \n" ;
				cout << "\t --2-- Hecto-m \t Hecto-metre \n" ;
				cout << "\t --3-- Decca-m \t Deca-metre \n" ;
				cout << "\t --4-- m \t Metre \n" ;
				cout << "\t --5-- dm \t Deci-metre \n" ;
				cout << "\t --6-- cm \t Centi-metre \n" ;
				cout << "\t --7-- mm \t Milli-metre \n" ;
				cout << "\n\t\t Convert to: "; cin >> mode ;
				cout << " \n" ;
				
				if (mode > 7) {
					mode = 7 ;
					notice ++;
					cout << " Notice " << notice << " : Default mode is >> --7-- << \n" ;
				}
			//Convert type vvvvvvvvvvvvvvvvvvvvvvvvvvvvvv		
				bar();
				switch (mode) {
					case 1: {
						in = in/k/k;
						cout << "\t\t=>\t" << in << " km\n"; 
						break;
					} 
					case 2: {
						in = in/100/k;
						cout << "\t\t=>\t" << in << " hecto-m\n"; 
						break;
					} 
					case 3:{
						in = in/10/k;
						cout << "\t\t=>\t" << in << " deca-m\n"; 
						break;
					} 
					case 4: {
						in = in/k;
						cout << "\t\t=>\t" << in << " m\n";
						break;
					} 
					case 5: {
						in = in/100;
						cout << "\t\t=>\t" << in << " dm\n";
						break;
					}
					case 6: {
						in = in/10;
						cout << "\t\t=>\t" << in << " cm\n";
						break;
					} 
					default : {
						in = in;
						cout << "\t\t=>\t" << in << " mm\n";
						break;
					} 
				}
				break;
			}
//Suface Area / Square / Plain vvvvvvv	
			case 4: {
				//Input vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv
				cout << "\t y \n\t | \n\t | \t\t --Surface Area / Plain / Square-- \n";
				cout << "\t +------+ \n\t |\t| \n\t +------+------X \n\t" ;
				cout << "\n\t Input the area: "; cin >> in ;
				int w = in ;
				cout << " \n" ;
			//Type vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv	
				bar();
				notice ++;
				cout << " Notice " << notice << " : Default mode is >> --7-- << \n\n" ;
				cout << "\t --1-- km^2 \t Kio-metre-square \n" ;
				cout << "\t --2-- h \t Hecta \t Hecto-metre-square \n" ;
				cout << "\t --3-- Decca-m^2 \t Deca-metre-square \n" ;
				cout << "\t --4-- m^2 \t Metre-square \n" ;
				cout << "\t --5-- dm^2 \t Deci-metre-square \n" ;
				cout << "\t --6-- cm^2 \t Centi-metre-square \n" ;
				cout << "\t --7-- mm^2 \t Milli-metre-square \n" ;
				cout << "\n\t\t Type of area: "; cin >> mode ;
				cout << " \n" ;
				
				if (mode > 7) {
					mode = 7 ;
					notice ++;
					cout << " Notice " << notice << " : Default mode is >> --7-- << \n" ;
				}
			//Type vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv	
				bar();
				switch (mode) {
					case 1: {
						in = in*k*k*k*k;
						cout << "\t\t=>\t" << w << " km^2\n"; 
						break;
					} 
					case 2: {
						in = in*10*k*k*k;
						cout << "\t\t=>\t" << w << " h\n"; 
						break;
					} 
					case 3:{
						in = in*100*k*k;
						cout << "\t\t=>\t" << w << " deca-m^2\n"; 
						break;
					} 
					case 4: {
						in = in*k*k;
						cout << "\t\t=>\t" << w << " m^2\n";
						break;
					} 
					case 5: {
						in = in*10*k;
						cout << "\t\t=>\t" << w << " dm^2\n";
						break;
					}
					case 6: {
						in = in*100;
						cout << "\t\t=>\t" << w << " cm^2\n";
						break;
					} 
					default : {
						in = in;
						cout << "\t\t=>\t" << w << " mm^2\n";
						break;
					} 
				}
			//Convert type vvvvvvvvvvvvvvvvvvvvvvvvvvvvvv	
				bar();
				notice ++;
				cout << " Notice " << notice << " : Default mode is >> --7-- << \n\n" ;
				cout << "\t --1-- km^2 \t Kio-metre-square \n" ;
				cout << "\t --2-- h \t Hecta \t Hecto-metre-square \n" ;
				cout << "\t --3-- Decca-m^2 \t Deca-metre-square \n" ;
				cout << "\t --4-- m^2 \t Metre-square \n" ;
				cout << "\t --5-- dm^2 \t Deci-metre-square \n" ;
				cout << "\t --6-- cm^2 \t Centi-metre-square \n" ;
				cout << "\t --7-- mm^2 \t Milli-metre-square \n" ;
				cout << "\n\t\t Convert to: "; cin >> mode ;
				cout << " \n" ;
				
				if (mode > 7) {
					mode = 7 ;
					notice ++;
					cout << " Notice " << notice << " : Default mode is >> --7-- << \n" ;
				}
			//Type vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv	
				bar();
				switch (mode) {
					case 1: {
						in = in/k/k/k/k;
						cout << "\t\t=>\t" << in << " km^2\n"; 
						break;
					} 
					case 2: {
						in = in/10/k/k/k;
						cout << "\t\t=>\t" << in << " h\n"; 
						break;
					} 
					case 3:{
						in = in/100/k/k;
						cout << "\t\t=>\t" << in << " deca-m^2\n"; 
						break;
					} 
					case 4: {
						in = in/k/k;
						cout << "\t\t=>\t" << in << " m^2\n";
						break;
					} 
					case 5: {
						in = in/10/k;
						cout << "\t\t=>\t" << in << " dm^2\n";
						break;
					}
					case 6: {
						in = in/100;
						cout << "\t\t=>\t" << in << " cm^2\n";
						break;
					} 
					default : {
						in = in;
						cout << "\t\t=>\t" << in << " mm^2\n";
						break;
					} 
				}
				break;
			}
//Valuem vvvvvvvvvvvvvvvvvvvvvvvvvvvvv		
			case 5: {
			//Input vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv
				cout << "\t   z \n\t   | \t\t --Valuem / Cube-- \n\t   |_______x \n";
				cout << "\t  / \n\t / \n\ty" ;
				cout << "\n\t\t Input the valuem: "; cin >> in ;
				int w = in ;
				cout << " \n" ;
			//Type vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv	
				bar();
				notice ++;
				cout << " Notice " << notice << " : Default mode is >> --7-- << \n\n" ;
				cout << "\t --1-- km^3 \t Kio-metre-cube \n" ;
				cout << "\t --2-- Hectam^3 \t Hecto-metre-cube \n" ;
				cout << "\t --3-- Decca-m^3 \t Deca-metre-cube \n" ;
				cout << "\t --4-- m^3 \t Metre-cube \n" ;
				cout << "\t --5-- dm^3 \t Deci-metre-cube \n" ;
				cout << "\t --6-- cm^3 \t Centi-metre-cube \n" ;
				cout << "\t --7-- mm^3 \t Milli-metre-cube \n" ;
				cout << "\n\t\t Type of valuem: "; cin >> mode ;
				cout << " \n" ;
				
				if (mode > 7) {
					mode = 7 ;
					notice ++;
					cout << " Notice " << notice << " : Default mode is >> --7-- << \n" ;
				}
			//Type vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv	
				bar();
				switch (mode) {
					case 1: {
						in = in *k*k*k *k*k*k;
						cout << "\t\t=>\t" << w << " km^2\n"; 
						break;
					} 
					case 2: {
						in = in*k*k *k*k*k;
						cout << "\t\t=>\t" << w << " hecto-m^3\n"; 
						break;
					} 
					case 3:{
						in = in*k *k*k*k;
						cout << "\t\t=>\t" << w << " deca-m^3\n"; 
						break;
					} 
					case 4: {
						in = in *k*k*k;
						cout << "\t\t=>\t" << w << " m^3\n";
						break;
					} 
					case 5: {
						in = in*k*k;
						cout << "\t\t=>\t" << w << " dm^3\n";
						break;
					}
					case 6: {
						in = in*k;
						cout << "\t\t=>\t" << w << " cm^3\n";
						break;
					} 
					default : {
						in = in;
						cout << "\t\t=>\t" << w << " mm^3\n";
						break;
					} 
				}
			//Convert type vvvvvvvvvvvvvvvvvvvvvvvvvvvvvv	
				bar();
				notice ++;
				cout << " Notice " << notice << " : Default mode is >> --7-- << \n\n" ;
				cout << "\t --1-- km^3 \t Kio-metre-cube \n" ;
				cout << "\t --2-- Hectam^3 \t Hecto-metre-cube \n" ;
				cout << "\t --3-- Decca-m^3 \t Deca-metre-cube \n" ;
				cout << "\t --4-- m^3 \t Metre-cube \n" ;
				cout << "\t --5-- dm^3 \t Deci-metre-cube \n" ;
				cout << "\t --6-- cm^3 \t Centi-metre-cube \n" ;
				cout << "\t --7-- mm^3 \t Milli-metre-cube \n" ;
				cout << "\n\t\t Convert to: "; cin >> mode ;
				cout << " \n" ;
				
				if (mode > 7) {
					mode = 7 ;
					notice ++;
					cout << " Notice " << notice << " : Default mode is >> --7-- << \n" ;
				}
			//Type vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv	
				bar();
				switch (mode) {
					case 1: {
						in = in /k/k/k /k/k/k;
						cout << "\t\t=>\t" << in << " km^3\n"; 
						break;
					} 
					case 2: {
						in = in/k/k /k/k/k;
						cout << "\t\t=>\t" << in << " hecto-m^3\n"; 
						break;
					} 
					case 3:{
						in = in/k /k/k/k;
						cout << "\t\t=>\t" << in << " deca-m^3\n"; 
						break;
					} 
					case 4: {
						in = in /k/k/k;
						cout << "\t\t=>\t" << in << " m^3\n";
						break;
					} 
					case 5: {
						in = in/k/k;
						cout << "\t\t=>\t" << in << " dm^3\n";
						break;
					}
					case 6: {
						in = in/k;
						cout << "\t\t=>\t" << in << " cm^3\n";
						break;
					} 
					default : {
						in = in;
						cout << "\t\t=>\t" << in << " mm^3\n";
						break;
					} 
				}
				break;
			}
//--6--Compter File Size vvvvvvvvvvvvv		
			default : {
				//Input vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv
				cout << "\n\t --Compter File Size-- \n";
				cout << "\n\t Input the File Size: "; cin >> in ;
				int w = in ;
				cout << " \n" ;
			//Type vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv	
				bar();
				notice ++;
				cout << " Notice " << notice << " : 1byte = 4bits \n" ;
				notice ++;
				cout << " Notice " << notice << " : Default mode is >> --5-- << \n\n" ;
				cout << "\t --1-- TB \t Tera-byte \n" ;
				cout << "\t --2-- GB \t Giga-byte \n" ;
				cout << "\t --3-- MB \t Mega-byte \n" ;
				cout << "\t --4-- KB \t Kilo-byte \n" ;
				cout << "\t --5-- B \t Byte \n" ;
				cout << "\n\t\t Type of File Size: "; cin >> mode ;
				cout << " \n" ;
				
				if (mode > 5) {
					mode = 5 ;
					notice ++;
					cout << " Notice " << notice << " : Default mode is >> --5-- << \n" ;
				}
			//Type vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv	
				bar();
				switch (mode) {
					case 1: {
						in = in*k *k*k*k;
						cout << "\t\t=>\t" << w << " TB\n"; 
						break;
					} 
					case 2: {
						in = in *k*k*k;
						cout << "\t\t=>\t" << w << " GB\n"; 
						break;
					} 
					case 3:{
						in = in*k*k;
						cout << "\t\t=>\t" << w << " MB\n"; 
						break;
					} 
					case 4: {
						in = in*k;
						cout << "\t\t=>\t" << w << " KB\n";
						break;
					} 
					default : {
						in = in;
						cout << "\t\t=>\t" << w << " B\n";
						break;
					} 
				}
			//Convert type vvvvvvvvvvvvvvvvvvvvvvvvvvvvvv	
				bar();
				notice ++;
				cout << " Notice " << notice << " : 1byte = 4bits \n" ;
				notice ++;
				cout << " Notice " << notice << " : Default mode is >> --5-- << \n\n" ;
				cout << "\t --1-- TB \t Tera-byte \n" ;
				cout << "\t --2-- GB \t Giga-byte \n" ;
				cout << "\t --3-- MB \t Mega-byte \n" ;
				cout << "\t --4-- KB \t Kilo-byte \n" ;
				cout << "\t --5-- B \t Byte \n" ;
				cout << "\n\t\t Convert to: "; cin >> mode ;
				cout << " \n" ;
				
				if (mode > 5) {
					mode = 5 ;
					notice ++;
					cout << " Notice " << notice << " : Default mode is >> --5-- << \n" ;
				}
			//Type vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv	
				bar();
				switch (mode) {
					case 1: {
						in = in/k /k/k/k;
						cout << "\t\t=>\t" << in << " TB\n"; 
						break;
					} 
					case 2: {
						in = in /k/k/k;
						cout << "\t\t=>\t" << in << " GB\n"; 
						break;
					} 
					case 3:{
						in = in/k/k;
						cout << "\t\t=>\t" << in << " MB\n"; 
						break;
					} 
					case 4: {
						in = in/k;
						cout << "\t\t=>\t" << in << " KB\n";
						break;
					} 
					default : {
						in = in;
						cout << "\t\t=>\t" << in << " B\n";
						break;
					} 
				}
				break;
			}
		}
	
	bar();
	notice ++;
	cout << " Notice " << notice << " : 12e+003 = 12x10^3 / 45e-006 = 45x10^-6 \n" ;
		
	cout << "\n\t Press --Any-- number to restart \n\t\t Press number --0-- to close the program " ;
	cin >> xyz ; 
	
	if ( xyz!=0 ) system (" cls ");
	
	} while ( xyz != 0 ) ;
	
	return 0 ;
}