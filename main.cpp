// Edoc calculator
// You catch Edoc, an Edoc or a Margorp can be transfered for one candy
// you need 12 candies to evolve an Edoc into a Margorp. each evolution earns one candy back and 500xp

#include <iostream>
using namespace std;

int main() {

	int edoc = 0 , candy = 0 , margorp = 0 , xp = 0 , transfer = 0 , choice = 0 , sum = 0, totalXp , test, remainder;

	cout << "How many Edocs have you caught? ";
	cin >> edoc;
	cout << "How much Edoc candy have you found? ";
	cin >> candy;
	cout << "You have " << edoc << " Edocs " << "and " << candy << "what would you like to do with them?\n";

do{
	cout << endl;
	cout << "You have " << edoc << " Edocs " << margorp << " Margorps, and " << candy << " pieces of candy\n";
	cout << "Total XP " << totalXp << endl;
	if(margorp >= 12) {
		cout << "Bonus you can transfer Margorps for candy!\n";
		}
	cout << endl;
	cout << "Choose 1 to transfer Edocs for candy.\n";
	cout << "Choose 2 to use candy to evolve Edocs into Margorps.\n";
	cout << "Choose 3 to transfer Margorps for candy.\n";
	cout << "Choose 4 to quit.\n";
	cin >> choice;
	
	switch(choice)
	{
		case 1:
			cout << " How many Edocs do you wish to transfer for candy? ";
			cin	>> transfer;
			if(transfer <= edoc) {
				candy = candy + transfer;
				edoc = edoc - transfer;
			} else
			cout << "You dont have that many Edocs try again!";
			break;
		case 2:
		test = candy / 12;
		if((candy >= 12) && (edoc >= test)) {

			remainder = candy % 12;
			sum = candy / 12;
			margorp = margorp + sum;
			edoc = edoc - sum;
			xp = sum * 500;
			cout << " you have evolved " << sum << " Edocs to Margorps and earned " << xp << " XP\n";
			candy = sum + remainder;
			totalXp = xp + totalXp;
			cout << " You have " << candy << " pieces of candy remaining.\n";
		}
			break;
		case 3:
			cout << " How many Margorps do you wish to transfer for candy? ";
			cin	>> transfer;
			if(transfer <= margorp) {
				candy = candy + transfer;
				margorp = margorp - transfer;
			} else
			cout << "You dont have that many Margorps try again!";
			break;
		case 4:
			cout << "End of program\n";
			break;
	}		

}while (choice !=4);	

	
return 0;
}