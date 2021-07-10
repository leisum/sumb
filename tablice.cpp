#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int n=100;
int tab[100];
int i;
void pisz()
{
		for(i = 0; i < n;   i++)
		{
		cout << tab[i] << " ";
		}
}
void v_ksztaltna()
{
	for(i = 0; i < n; i++)
	{
	tab[i] = i;
		if(i > n/2)
		tab[i] = n-i;
	}
	pisz();
}
void vv_ksztaltna()
{
	for(i = 0; i < n; i++)
	{
	tab[i] = n-i;
		if(i > n/2)
		tab[i] = i;
	}
	pisz();
}
void rosnaca()
{
	for(i = 0; i < n; i++)
	{
	tab[i] = i;
	}
	pisz();
}
void malejaca()
{
	for(i = 0; i < n; i++)
	{
	tab[i] = n-i;
	}
	pisz();
}
void stala()
{
	for(i = 0; i < n; i++)
	{
	tab[i] = 1;
	}
	pisz();
}
void losowa()
{
srand(time(NULL));
	for(i = 0; i < n; i++)
	{
	tab[i] = (rand()%100)+0;
	}
	pisz();
}
int main()
{
	int wybierz=1;
		while(wybierz != 0)
		{
			cout << "\nwybierz:\n0: koniec wypisywania\n1: wypisanie tablicy ^ksztaltnej\n2: wypisanie tablicy vksztaltnej\n3: wypisanie tablicy stalej\n4: wypisanie tablicy rosnacej\n5: wypisanie tablicy malejacej\n6: wypisanie tablicy losowej\n";
	
		cout<< "\nJaka tablice chcesz wypisac ? \n";
		cin >> wybierz;
			switch(wybierz)
			{
  			case 0: break;
   		  case 1: {cout << "\ntablica ^ksztaltna:\n"; vv_ksztaltna();} break;
 		  	case 2: {cout << "\ntablica vksztaltna:\n";v_ksztaltna();} break;
 		  	case 3: {cout << "\ntablica stala:\n";stala();} break;
  			case 4: {cout << "\ntablica rosnaca:\n";rosnaca();} break;
  			case 5: {cout << "\ntablica malejaca:\n";malejaca();} break;
  			case 6: {cout << "\ntablica losowa:\n";losowa();}break;
  			default: cout << "Blad wyboru:\n";break; 
      }	
	  }
return 0;
}
