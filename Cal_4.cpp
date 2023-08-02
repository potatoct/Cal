#include <iostream>
#include <math.h>
#include <windows.h>

	using namespace std;

	HANDLE h= GetStdHandle ( STD_OUTPUT_HANDLE ) ;

void g () { SetConsoleTextAttribute ( h , 2 ) ; } //green

void wi () { SetConsoleTextAttribute ( h , 7 ) ; } //white

void cy () { SetConsoleTextAttribute ( h , 3 ) ; } //cyan

void re () { SetConsoleTextAttribute ( h , 4 ) ; } //red

void bar () { 
	cy () ; cout << " ============================================ \n" ; wi () ;
}

int main() {
	//weight selection
	float num , r , w , k = 1000 ;
	int a , b , c , d , ch ;
	//							0		1			2					3			4
	const char* name [ 5 ] = { " " , "Wieght: " , "Liquid Value: " , "Valume: " , "Length: " } ;
	int limit = 8 ;
	//								0			1		2				3		4					5			6				7
	const char* meg [ limit ] = { "Ton"		 , "t"	, "Mega-litre"	, "ML"	, "Deca-meter-cubic", "deca m^3", "Mega-meter"	, "Mm" } ;
	const char* kil [ limit ] = { "Kilo-gram", "kg"	, "Kilo-liter"	, "kl"	, "Meter-cubic"		, "m^3"		, "Kilo-meter"	, "km" } ;
	const char* nor [ limit ] = { "Gram"	 , "g"	, "Liter"		, "l"	, "Deci-meter-cubic", "dm^3"	, "Meter"		, "m" } ;
	const char* mil [ limit ] = { "Milli-gram", "mg", "Mili-litre"	, "ml"	, "Centi-meter-cubic", "cm^3"	, "Milli-meter"	, "mm" } ;
	//								0			1		2				3		4					5			6				7
	do {
	bar	() ;
		g () ;
		cout << "\t Multi-Convertor \n" ;
		
	bar	() ;
		cout << " Press number 1 for Wieght \n" ;
		cout << " Press number 2 for Liquid Value \n" ;
		cout << " Press number 3 for Valume \n" ;
		cout << " Press number 4 for Length \n" ;
		
	bar	() ;
		g () ;cout << "\t Input: " ; cin >> b ;
		if (b > 4 ) {
			b = 4 ;
			bar () ;
			re () ; cout << " There is only 4 option \n" ;
		}
		
	bar () ;
		g () ;
		cout << "\t Input your " << name [ b ] ;
		cin >> num ;
	
	bar () ;
	switch ( b ) {
		case 1 : 
			c = 0 ; d = 1 ;
			break;
		case 2 : 
			c = 2 ; d = 3 ;
			break;
		case 3 : 
			c = 4 ; d = 5 ;
			break;
		default : 
			c = 6 ; d = 7 ;
			break;
	}
		cout << "\t Type of " << name [ b ] << endl ;
		cout << " 1 for " << meg [ c ] << " \n" ;
		cout << " 2 for " << kil [ c ] << " \n" ;
		cout << " 3 for " << nor [ c ] << " \n" ;
		cout << " 4 for " << mil [ c ] << " \n" ;
	
	bar () ;
		g () ;
		cout << "\t Choose type of " << name [ b ] ;
		cin >> ch ;
		system ( " cls " ) ;
		
	if (ch > 4 ) {
		bar () ;
		re () ; cout << " There is only 4 option \n" ;
	}
	
	bar () ;
		g () ; 
	switch ( ch ) {
		case 1: 
			r = num * ( k * k * k ) ;
			cout << " \t " << num << meg [ d ] << " \n" ;
			break ;
		case 2: 
			r = num * ( k * k ) ;
			cout << " \t " << num << kil [ d ] << " \n" ;
			break ;
		case 3: 
			r = num * k ;
			cout << " \t " << num << nor [ d ] << " \n" ;
			break;
		default:
			r = num ;
			cout << " \t " << num << mil [ d ] << " \n" ;
			break ;
	}//weight convertion
	
	bar () ;
		cout << "\t Convert to \n" ;
		cout << " 1 for " << meg [ c ] << " \n" ;
		cout << " 2 for " << kil [ c ] << " \n" ;
		cout << " 3 for " << nor [ c ] << " \n" ;
		cout << " 4 for " << mil [ c ] << " \n" ;
	
	bar () ;
		g () ;
		cout << "\t Choose type of convertion: " ; 
		cin >> ch ;
		
	if (ch > 4 ) {
		bar () ;
		re () ; cout << " There is only 4 option \n" ;
		bar () ;
	}
	
	g () ; 
	switch ( ch ) {
		case 1:
			w = r / ( k * k * k ) ;
			cout << " \t " << w << meg [ d ] << " \n" ;
			break ;
		case 2:
			w = r / ( k * k ) ;
			cout << " \t " << w << kil [ d ] << " \n" ;
			break ;
		case 3:
			w = r / k ;
			cout << " \t " << w << nor [ d ] << " \n" ;
			break ;
		default:
			w = r ;
			cout << " \t " << w << mil [ d ] << " \n" ;
			break ;
	}
	
	bar () ;
		cy () ;
		cout << " --Notice-- e+0x = 10^x / e-0x = 10^-x \n" ;
	
	bar () ;
		cout << " Press any number to continue \n" ;
		cout << " Press number 0 to close \n" ;
		g () ; cin >> a ;
	
	system ( " cls " ) ;
	} while ( a != 0 ) ;
	
	return 0 ;
}
