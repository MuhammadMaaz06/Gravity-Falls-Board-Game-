//Gravity falls board game

#include<iostream>
using namespace std;
int main()
{
	//declaring all the required variables
	int column, plays=0;
	char n1='1',n2='2',n3='3',n4='4',n5='5',n6='6',n7='7',n8='8',n9='9';
	char turn='A', player='A';
	
	cout<< "--- BOARD GAME ---"<<endl;
	
	while(true)
	{
		//displaying the board game 
	cout<<" _____________"<<endl;	
	cout<<"| "<<n1<<" |"<<"| "<<n2<<" |"<<"| "<<n3<<" |"<<endl;
	cout<<"| "<<n4<<" |"<<"| "<<n5<<" |"<<"| "<<n6<<" |"<<endl;
	cout<<"| "<<n7<<" |"<<"| "<<n8<<" |"<<"| "<<n9<<" |"<<endl;
	cout<<"***************"<<endl;
	cout<<"PLAYER :"<<player <<" Choose a column between 1-3:" <<endl;
	cin>> column;
	
	if(column<1 || column>3)    	//first condition
	{
		cout<<"INVALID INPUT! choose a number between (1-3):"<<endl;
		continue;
	}
		if(column== 1) 
	{
		
		if( n7!='A' && n7!='B')
	{
		n7 = turn;
	}
	else if( n4!='A' && n4!='B')
	{
		n4 = turn;
	}
	else if( n1!='A' && n1!='B')
	{
		n1 = turn;
	}
	else
	{
		cout<<" This column is full! choose another:"<<endl; //displaying msg 
	}
	}	
		if(column== 2) //second condition
	{
		
		if( n8!='A' && n8!='B')
	{
		n8 = turn;
	}
	else if( n5!='A' && n5!='B')
	{
		n5 = turn;
	}
	else if( n2!='A' && n2!='B')
	{
		n2 = turn;
	}
	else
	{
		cout<<" This column is full! choose another:"<<endl;
	}
	}	
		if(column== 3) //third condition
	{
		
		if( n9!='A' && n9!='B')
	{
		n9 = turn;
	}
	else if( n6!='A' && n6!='B')
	{
		n6 = turn;
	}
	else if( n3!='A' && n3!='B')
	{
		n3 = turn;
	}
	else
	{
		cout<<" This column is full! choose another:"<<endl;
	}
}
plays++; //using it as a counter to check whether the game has a result or a darw 

if((n1==turn&&n2==turn&&n3==turn)||(n4==turn&&n5==turn&&n6==turn)	/*using these conditions to check the result*/
||(n7==turn&&n8==turn&&n9==turn)||(n1==turn&&n4==turn&&n7==turn)	
||(n2==turn&&n5==turn&&n8==turn)||(n3==turn&&n6==turn&&n9==turn)||
(n1==turn&&n5==turn&&n9==turn)||(n3==turn&&n5==turn&&n7==turn))
{
	cout<<" PLAYER  "<<player<<" WON THE GAME!";
	
}
	else if(plays==9)
	{
		cout<<" GAME TIED!"<<endl;
		break;
	}
	if(turn=='A'&& player=='A')		//condition for switching the players after each turn 
	{
		turn = 'B';
		player = 'B';
	}
	else
	{
		turn = 'A';
		player = 'A';
	}
} 
return 0;

}
