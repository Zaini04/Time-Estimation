#include<iostream>//preprocessor directive
using namespace std;//library file
int main()//main function
{//opening braces
	int time;//declare time
	cout<<"Time=";//this print the value written in double quotes
	cin>>time;
	if(time<12)
	{
	cout<<"Good Mornig";//this print the value written in double quotes
}
    else if(time>12)
    cout<<"Good Evening";//this print the value written in double quotes
    else 
    cout<<"Good Night";//this print the value written in double quotes
	return 0;
}//closing braces
