//Abhishek sahu
//to find the length of longest substring

#include<iostream>
#include<string.h>
using namespace std;



int string1(char s[], int strt, int end, char x)
{
	for(int i = strt;i<end;i++)
	{
		if(s[i] == x)
		{
			return 1;
		}
	}

	return 0;
}

int Lenstring(char s[])
{
	int stlen;
	int strt=0, e=0;
	char Temp;	

	int len=0;
	
	stlen = strlen(s);
	
	for(int i=1;i<stlen;i++)
	{
		Temp = s[i];
		e++;
		
		if(string1(s, strt, e, Temp) == 1)
	 		strt++;
	 		
	}

	len = (e-strt)+1;
	
	return len;

}











int main()
{
	char str[50];
	
	
	cout<<"Enter your string: ";
	
	cin >> str;
	
	cout << "length of the longest substring is : " << Lenstring(str) << endl;
	
	return 0;
}

