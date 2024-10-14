#include <iostream>
#include<fstream>
#include<sstream>
#include<conio.h> 
#include<iomanip>
#include <map>
#include <unistd.h>

using namespace std;
void start_menu();
void login();
void main_menu();


int main(int argc, char** argv) {
	start_menu();
	login();
	main_menu();
	

	return 0;
}

void login(){
	string username;
	string password;
	cout << "Enter Username: ";
	cin >> username;
	
	cout << "Enter Password: ";
	cin >> password;
	
	if (username=="admin"&&password=="admin"){
		cout << "Access Granted, Login Sucessful";
	} else {
		cout << "Acess Not Granted, Login Unsucessful\n\n";
		login();
	}
}
void start_menu(){
	int color;
	if(color==color)
		{
            system("color 4");      
        }	
	cout<<"\n";
	cout<<"Hi, Welcome to Amber Bakery...!!!";
	cout<<"\n"<<"\n";

	cout << "    ______|______                                    _______   ______  ______         ______                        ______   _____                   " <<endl;
	cout << "   [_/__/_|_/_/__]           /o      |o          /| o       | o       |      |       o      |      /o      |    /  o        |     |  o     /         " <<endl;
	cout << "  (_______|_______)         /  o     | o        / | o       | o       |      |       o      |     /  o     |   /   o        |     |   o   /          " <<endl;
	cout << "  |       |       |        /    o    |  o      /  | o_______| o______ |______|       o______|    /    o    |__/    o______  |_____|    o /           " <<endl;
	cout << " _|_______|_______|_      /______o   |   o    /   | o       | o       |      o       o      |   /______o   |  o    o        |     o     |            " <<endl;
	cout << "(_________|_________)    /        o  |    o  /    | o       | o       |       o      o      |  /        o  |   o   o        |      o    |            " <<endl;
	cout << "  (_______|________)    /          o |     o/     | o_______| o______ |        o     o______| /          o |    o  o______  |       o   |            " <<endl;
	cout << "          |                                                                                                                                      \n\n " << endl;          

}
void main_menu(){
	int color;
	if(color==color)
		{
            system("color 6");      
        }	
	int num;
	int choice;
	 printf("\n\t\t");
			printf("______________________________________________________ "); 
            printf("\n\t\t");  
            printf("|  Order No.  |   Item Name      |  price |   In Stock|"); 
            printf("\n\t\t");  
            printf("------------------------------------------------------"); 
            printf("\n\t\t");
			cout<<"|      1      |  Birthday Cakes   |  1120 |    23     |"<<endl;
            printf("\n\t\t");
            cout<<"|      2      |  pizza            |  1100 |    13     |"<<endl;
            printf("\n\t\t");
            cout<<"|      3      |  Bread            |  191  |    40     |"<<endl;
			printf("\n\t\t");
            cout<<"|      4      |  Biscuit          |  50   |    50     |"<<endl;
			printf("\n\t\t");
            cout<<"|      5      |  Bun              |  200  |    50     |"<<endl;
			printf("\n\t\t");
            cout<<"|      6      |  Doughnut         |  220  |    30     |"<<endl;
			printf("\n\t\t");
            cout<<"|      7      |  Muffin           |  150  |    30     |"<<endl;
			printf("\n\t\t");
            cout<<"|      8      |  Cupcake          |  100  |    30     |"<<endl;
			cout << "Enter 1, 2, 3, 4, 5, 6, 7 or 8: ";
	        cin >> choice;

            switch (choice)
	{
	case 1: 
		cout << "Birthday Cakes "; break;
	case 2: 
		cout << "pizza "; break;
	case 3: 
		cout << "Bread "; break;
	case 4: 
		cout << "Biscuit "; break;
	case 5: 
		cout << " Bun "; break;
	case 6: 
		cout << "Doughnut "; break;
	case 7: 
		cout << "Muffin "; break;	
	case 8: 
		cout << "Cupcake "; break;
	default: 
		cout << "enter a proper value"; break;
	}

            cout<<"how many do you need? "<<endl;
            cin>>num;








}
