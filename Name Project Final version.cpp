
//Copyright © 2022, Umar Habib, All rights reserved.

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n,i=0,j=0;		
	char name[20]="";
	b_name:
	b_Wrong_put:
	cout<<" \n\nPlease Enter Name =";	
	cout<<name;
	while(i<20)
	{
		if(i==0 && j==0)
		{
			n=getche();
			if(n>=33 && n<=64)
			{
				system("cls");
				cout<<" \t\t  Use integer value After One Character ";				
				goto b_Wrong_put;	
			}
			else if(n==8)
			{	
				i--;	
				name[i]='\0';           /*    '\0' is use for null value assign to any variable    */															
				system("cls");
				goto b_Wrong_put;
			}			
			else if(n==13)
			{				
					for(char a='a'; a<='z'; a++)
					{
						if(name[i]==a)
						{
							system("cls");
							break;
						}
					}									
					for(char b='A'; b<='Z'; b++)
					{
						if(name[i]==b)
						{
							system("cls");
							break;
						}							
					}
				system("cls");
				cout<<" \t\t  Don't Empty...! ";				
				goto b_Wrong_put;																											
			}		
			else if(n==32)
			{
				system("cls");
				cout<<" \t\t    Space Not Use In Name ";
				goto b_name;
			}
			else						
			{				
				name[i]=n;
				j++;
				i++;
				system("cls");
				goto b_name;	
			}				
		}
		else
		{
			n=getche();
			if(n>=48 && n<=57 || n>=65 && n<=90 || n>=97 && n<=122 )
			{
				name[i]=n;
				i++;
			}
			else if(n==8)
			{	
				i--;
				if(i==0)
				{
					j=0;	
				}					
				name[i]='\0';           /*    '\0' is use for null value assign to any variable    */															
				system("cls");
				goto b_Wrong_put;
			}
			else if(n==13)
			{	
				system("cls");					
				break;
			}
			else if(n==32)
			{
				system("cls");
				cout<<" \t\t    Space Not Use In Name ";
				goto b_name;
			}
			else
			{
				system("cls");
				cout<<" \t\t  Only Use Character and integer value After One Character ";
				goto b_Wrong_put;
			}	
		}
	}	
	cout<<"\n\n\n\n\n\t\t\t\t"<<name;
	getch();
}

