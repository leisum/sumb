#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void pisz();
void v_ksztaltna(int *tab,int n);
void vv_ksztaltna(int *tab,int n);
void rosnaca(int *tab,int n);
void malejaca(int *tab,int n);
void stala(int *tab,int n);
void losowa(int *tab,int n);

int main()
{
	int wybierz=1;
	const int n=101;
	int tab[n];

		while(wybierz != 0)
		{
		cout << "\nwybierz:\n0: koniec wypisywania\n1: wypisanie tablicy v-ksztaltnej\n2: wypisanie tablicy ^-ksztaltnej\n3: wypisanie tablicy stalej\n4: wypisanie tablicy rosnacej\n5: wypisanie tablicy malejacej\n6: wypisanie tablicy losowej\n";
		cout<< "\nJaka tablice chcesz wypisac ? \n";
		cin >> wybierz;
			switch(wybierz)
			{
  			case 0: break;
            case 1: {cout << "tablica v-ksztaltna:\n"; vv_ksztaltna(tab, n);} break;
   			case 2: {cout << "tablica ^-ksztaltna:\n";v_ksztaltna(tab, n);} break;
  			case 3: {cout << "tablica stala:\n";stala(tab, n);} break;
  			case 4: {cout << "tablica rosnaca:\n";rosnaca(tab, n);} break;
  			case 5: {cout << "tablica malejaca:\n";malejaca(tab, n);} break;
  			case 6: {cout << "tablica losowa:\n";losowa(tab, n);}break;
  			default: cout << "Blad wyboru:\n";break;
        }
	  }
return 0;
}
void pisz(int *tab,int n)
{
		for(int i = 0; i < n;   i++)
		{
		cout << tab[i] << " ";
		}
}
void v_ksztaltna(int *tab,int n)
{
	for(int i = 0; i < n; i++)
	{
	tab[i] = i;
		if(i > n/2)
		tab[i] = n-1-i;
	}
	pisz(tab, n);
}
void vv_ksztaltna(int *tab,int n)
{
	for(int i = 0; i < n; i++)
	{
	tab[i] = n-1-i;
		if(i > n/2)
		tab[i] = i;
	}
	pisz(tab, n);
}
void rosnaca(int *tab,int n)
{
	for(int i = 0; i < n; i++)
	{
	tab[i] = i;
	}
	pisz(tab, n);
}
void malejaca(int *tab,int n)
{
	for(int i = 0; i < n; i++)
	{
	tab[i] = n-1-i;
	}
	pisz(tab, n);
}
void stala(int *tab,int n)
{
	for(int i = 0; i < n; i++)
	{
	tab[i] = 1;
	}
	pisz(tab, n);
}
void losowa(int *tab,int n)
{
srand(time(NULL));
	for(int i = 0; i < n; i++)
	{
	tab[i] = (rand()%100)+0;
	}
	pisz(tab, n);
}
