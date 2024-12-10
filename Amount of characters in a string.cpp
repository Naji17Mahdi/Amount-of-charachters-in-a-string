#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
main()
{
	char ch;
	int na = 0 ;
	int nb = 0 ;
	int n = 0 ;
	
	while ( ( ch = cin.get() ) != '.' )
	{
		
		switch ( ch )
		{
			case 'a' : ++na; break;
			case 'A' : ++na; break;
			case 'b' : ++nb; break;
			case 'B' : ++nb; break;
			default  : ++n;
		}
		
	}
	cout<<"nA & na is : "<<na<<endl;
	cout<<"nB & nb is : "<<nb<<endl;
	cout<<"n is : "<<n<<endl;
}
