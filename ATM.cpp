#include<iostream>
using namespace std;
double balance1;
int main()
{
	cout<<"\t\t    !! ATM Machine !!"<<endl;
	cout<<"\t\t -------------------------"<<endl;
	cout<<"\t\t -------------------------\n\n"<<endl;
	
	int password;
	int Pincode;
	
	cout<<"Please Enter the pincode:";
	cin>>Pincode;
	
	if(Pincode == 1234)
	{
		cout<<"\n Welcome To You \n";
		for(int i = 0; i<3; i++)
		{
			cout<<"Enter your Password :\n";
			cin>>password;
			
			double balance = 100000; 
			balance1 = balance;
			if(password == 7777)
			{
				for(int x=1; x<10;x++)
				{
					double withdraw, deposite;
					int choice;
					cout<<endl;
					if(x == 1)
					{
						cout<<"\t\t ATM"<<endl;
						cout<<"Choose a Transaction \n\n";
					}
					cout<<"Main Screen \n";
					cout<<"[1] Inquire Balance"<<endl;
					cout<<"[2] Withdraw"<<endl;
					cout<<"[3] Deposite"<<endl;
					cout<<"[4] Quit"<<endl;
					cout<<endl;
					cout<<"Enter Option:";
					cin>>choice;
					
					switch(choice)
					{
						case 1:
							cout<<"Balance Inquiry"<<endl;
							cout<<"Your Current Balance is PESOS "<<balance1<<endl;
							continue;
				        case 2:
				        	cout<<"Withraw"<<endl;
				        	cout<<"Enter amount In pesos :";
				        	cin>>withdraw;
				        	balance1 = balance1 - withdraw;
				        	cout<<"You withdraw pesos "<<withdraw<<endl;
				        	cout<<"Your remaining balance is pesos:"<<balance;
				        	continue;
				        case 3:
				        	cout<<"Deposite"<<endl;
				        	cout<<"Enter amount in pesos:";
				        	cin>>deposite;
				        	balance1 = balance1 + deposite;
				        	cout<<"You deposite pesos : "<<deposite <<endl;
				        	cout<<"Your new Balance is pesos :"<<balance1<<endl;
				        	continue;
				        case 4:
				        	cout<<"Exit"<<endl;
				        	system("cls");
				        	break;
				        	default:
				        		cout<<"Invalid Option"<<endl;
				        		continue;		
					}
					break;
				}
				break;
			}
			else if(i ==2)
			{
				cout<<"Card is captured"<<endl;
			}
			else
			{
				cout<<"Plzzzz Try again";
			}
		}
	}
}


