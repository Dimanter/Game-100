#include <stdio.h>
#include <iostream>
#include <ctime>
#include <clocale>
using namespace std;

int ProverNik(char p[15])
{
	int i=0,t=0;
	while(i<15)
	{
		if(p[i]==0)
		{
			break;
		}
		if(p[i]=='a' || p[i]=='b' || p[i]=='c' || p[i]=='d' || p[i]=='e' || p[i]=='f' || p[i]=='g' || p[i]=='h' || p[i]=='j' || p[i]=='k' || p[i]=='l' || p[i]=='m' || p[i]=='n' || p[i]=='o')
		{
			
		}
		else
		{
			if(p[i]=='p' || p[i]=='r' || p[i]=='s' || p[i]=='t' || p[i]=='u' || p[i]=='v' || p[i]=='w' || p[i]=='u' || p[i]=='y' || p[i]=='z' || p[i]=='x' || p[i]=='q')
			{
				
			}
			else
			{
				if(p[i]=='A' || p[i]=='B' || p[i]=='C' || p[i]=='D' || p[i]=='E' || p[i]=='F' || p[i]=='G' || p[i]=='H' || p[i]=='J' || p[i]=='K' || p[i]=='L' || p[i]=='M' || p[i]=='N' || p[i]=='O')
				{
					
				}
				else
				{
					if(p[i]=='P' || p[i]=='R' || p[i]=='S' || p[i]=='T' || p[i]=='U' || p[i]=='V' || p[i]=='W' || p[i]=='U' || p[i]=='Y' || p[i]=='Z' || p[i]=='X' || p[i]=='Q')
					{
						
					}
					else
					{
						t++;
					}
				}
			}
		}
		i++;
	}
	if(t==0)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}

void Data(char p[15],int k,int n,int Spich)
{
	cout << "Move - " << p <<endl;
	cout << "The number of matches taken last time - " << k << endl;
	cout << "The number of all matches taken - " << n << endl;
	cout << "The number of matches remaining on the table - " << Spich << endl;
}
void Stat(char p[15],int k,int n)
{
	cout << "The number of matches taken last time - " << k << endl;
	cout << "The number of all matches taken - " << n << endl;
}

int Prover(int k,int Spich)
{
	if(k<11 && k > 0)
	{
		if(k>Spich)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else
	{
		return 1;
	}
}
int Player1(int k1,int &n1,int Spich,char p[15])
{
	n1+=k1;
	if(Spich-k1==0)
	{
		system("clear");
		cout << "Win - " << p << " !!! " << endl;
	}
	Spich-=k1;
	return Spich;
}
int Player2(int k2,int &n2,int Spich,char p[15])
{
	n2+=k2;
	if(Spich-k2==0)
	{
		system("clear");
		cout << "Win - " << p << " !!! " << endl;
	}
	Spich-=k2;
	return Spich;
}

int main()
{
	setlocale(LC_ALL,"Russian");
	srand(time(NULL));
	char p1[15],p2[15];
	int Spich=100,n1=0,n2=0,k1=0,k2=0,flag=0,t1=0,t2=0,h1,h2,x=1;
	while(x)
	{
		system("clear");
		cout << "Enter player name 1" << endl;
		cin >> p1;
	}
	cout << "Enter player name 2" << endl;
	cin >> p2;
	h1=rand()%100;h2=rand()%100;
	if(h1>h2)
	{
		flag=0;
	}
	else
	{
		flag=1;
	}
	while(Spich > 0)
	{
		if(flag%2==0)
		{
			x=1;
			while(x)
			{
				system("clear");
				Data(p1,t1,n1,Spich);
				cout << endl <<"Enter the number of matches you want to take " << endl;
				cin >> k1;
				x=Prover(k1,Spich);
			}
			t1=k1;
			Spich=Player1(k1,n1,Spich,p1);
			flag++;
		}
		else
		{
			x=1;
			while(x)
			{
				system("clear");
				Data(p2,t2,n2,Spich);
				cout<< endl <<"Enter the number of matches you want to take " << endl;
				cin >> k2;
				x=Prover(k2,Spich);
			}
			t2=k2;
			Spich=Player2(k2,n2,Spich,p2);
			flag--;
		}
	}
	cout << endl << "Statistics for - " << p1 << endl;
	Stat(p1,k1,n1);
	cout << endl << "Statistics for - " << p2 << endl;
	Stat(p2,k2,n2);
}
