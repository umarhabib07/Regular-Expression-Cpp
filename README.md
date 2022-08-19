## Copyright © 2022, Umar Habib, All rights reserved.

# Regular-Expression-Cpp
Regular Expression in C++.  You will Never have been seen Regex in C++ without using libraries.  I have made Regex in C++ only | if | else | loop | with ASCII code.  This program will work like key Events.

## First
### Declared variable
'n' variable is used to take input.
'i' variable is used to control backspace key and 'j'  controls first 'if' block control. Declare empty array of type char.
```cpp
    int n,i=0,j=0;		
	 char name[20]="";
```
## Labels
These labels are used with goto statements
```cpp
   b_name:
   b_Wrong_put:
```
## While loop
Range of name is 20 character So, loop will be executed 20 times.

### If Outer block 


#### If inner 
This block will be executed when we use integer as first character.
```cpp
if(n>=33 && n<=64)
			{
				system("cls");
				cout<<" \t\t  Use integer value After One Character ";				
				goto b_Wrong_put;	
			}
```
#### Else If 
This block will be executed when backspace key is pressed and one index is subtracted from array.
```cpp
else if(n==8)
			{	
				i--;	
				name[i]='\0';           /*    '\0' is use for null value assign to any variable    */															
				system("cls");
				goto b_Wrong_put;
			}
```
#### Else If 
This block will be executed when we press enter without writing anything.
```cpp
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
```
#### Else If 
This will be executed when we use Space in the name.
```cpp
else if(n==32)
			{
				system("cls");
				cout<<" \t\t    Space Not Use In Name ";
				goto b_name;
			}
```
#### Else 
This will be executed when we pass value to array.
```cpp
else						
			{				
				name[i]=n;
				j++;
				i++;
				system("cls");
				goto b_name;	
			}
```


### Else Outer 


#### If 
This will be executed when pass value to array.
```cpp
if(n>=48 && n<=57 || n>=65 && n<=90 || n>=97 && n<=122 )
	{
		name[i]=n;
		i++;
	}
```
#### Else If 
This block will be executed when backspace key is pressed and one index is subtracted from array.
```cpp
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
```
### Else If 
This will be executed when press enter key.
```cpp
else if(n==13)
			{	
				system("cls");					
				break;
			}
```
### Else If
This will be executed when we use Space in the name. 
```cpp
else if(n==32)
			{
				system("cls");
				cout<<" \t\t    Space Not Use In Name ";
				goto b_name;
			}
```
### Else
This block will be executed when we use integer as first character. 
```cpp
else
			{
				system("cls");
				cout<<" \t\t  Only Use Character and integer value After One Character ";
				goto b_Wrong_put;
			}
```

## Output
Name will be shown:
```cpp
cout<<"\n\n\n\n\n\t\t\t\t"<<name;
```
