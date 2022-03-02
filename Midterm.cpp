#include <iostream>
#include <stdlib.h>  
using namespace std;
//Main Function
int main() {
	//Declared Variables
	int PlayerMaximumDamage = 0, PlayerMinimumDamage = 0, AIMaximumDamage = 0, AIMinimumDamage = 0 ;
	int PlayerHealth = 0, AIHealth;
	
	//User Input for Player Maximum Damage
   	cout << "Enter Player Maximum Damage: ";
   	cin >> PlayerMaximumDamage;
   	
   	//User Input for Player Minimum Damage
   	cout << "Enter Player Minimum Damage: ";
   	cin >> PlayerMinimumDamage;
   	
   	//User Input for Player Health
   	cout << "Enter Player Health: ";
   	cin >> PlayerHealth;
   	
   	//User Input for AI Maximum Damage
   	cout << "\nEnter AI Maximum Damage: ";
   	cin >> AIMaximumDamage;
   	
   	//User Input for AI Minimum Damage
   	cout << "Enter AI Minimum Damage: ";
   	cin >> AIMinimumDamage;
   	
   	//User Input for AI Health
   	cout << "Enter AI Health: ";
   	cin >> AIHealth;
	
   	//Condition Statement to know the limit of health of player and AI
   	while (PlayerHealth != 0){
   			
   	int action;
   	//Variable to get the random number from 1 to 3
	int iRand = (rand() % 3) + 1;
	//Formula to get the player and opponent random damaget from minimum and maximum input
	int AIRandomDamage = (rand() % AIMaximumDamage) + AIMinimumDamage;
	int PlayerRandomDamage = (rand() % PlayerMaximumDamage) + PlayerMinimumDamage;
	//Formula to get the 200% of the damage
   	int DoubleAIDamage = AIRandomDamage * 2;
   	int DoublePlayerDamage = PlayerRandomDamage * 2;
   	
   	//Clear Screen
   	system("cls");
   	
   	//Player and Opponent Health
   	cout << "Player HP : " << PlayerHealth << "\t\tOpponent Health : " << AIHealth;
   	cout << "\n\nGame Start !!!\n";
   	
   	//Menu in Choosing the Action
	cout << "\n1 - Attack";
	cout << "\n2 - Defend";
	cout << "\n3 - Wild Attack";
	
	cout << "\n\nPlayer Action : ";
	cin >> action;
	
	//Random Opponent Action
	cout <<"Opponent Action : " << iRand;
	
	//Conditional Statement To know how the damage will be computed
	if(action == 1 && iRand == 1){
		//Formula to Minus the damage in health in both player and Opponent
		PlayerHealth -= AIRandomDamage;
		AIHealth -= PlayerRandomDamage;
		cout << "\nBoth of you receive 100% of the damage.\n\n";
		//Nested Loop it will break if the Opponent health or Player health is lower or equal to zero.
		if(PlayerHealth <= 0 || AIHealth <= 0){
			break;
		}
		system("PAUSE");
	}else if (action == 1 && iRand ==2){
		AIHealth -= PlayerRandomDamage;
		cout << "\n\nDeal 50% damage to opponent\n\n";
		if(PlayerHealth <= 0 || AIHealth <= 0){
			break;
		}
		system("PAUSE");
	}else if (action == 1 && iRand == 3){
		//Formula to get the 100% damage and 200% damage.
		AIHealth -= PlayerRandomDamage;
		PlayerHealth -= DoubleAIDamage;
		cout << "\n\nDeal 100% damage to the opponent. You receive 200% damage from opponent.\n\n";
		if(PlayerHealth <= 0 || AIHealth <= 0){
			break;
		}
		system("PAUSE");
	}else if (action == 2 && iRand == 2){
		cout << "\n\nNothing happens\n\n";
		system("PAUSE");
	}else if (action == 2 && iRand == 3){
		cout << "\n\nOpponent's attack will miss and you counter the opponent with 200% damage.\n\n";
		system("PAUSE");
	}else if (action == 3 && iRand == 3){
		//Formola to get both 200% damage
		PlayerHealth -= DoubleAIDamage;
		AIHealth -= DoublePlayerDamage;
		cout << "\n\nBoth of you receive 200% damage.\n\n";
		system("PAUSE");
	}
	
	}
}
