#include<iostream>
#include<vector>
#include<string>


// Function Declaration 
void intro();
void drawgrid();
int getplayerinput(int turn);
void updatedgrid();
bool check_winner();

// Setting up Gobal Variables
std::vector <char> row1(3);
std::vector <char> row2(3);
std::vector <char> row3(3);
 int winner=0;	


int main(){
	
  // initialize var
   int turn=0;
   int player;
	intro();  // Greet User
	
	drawgrid(); // Draws the setup
	
	// Untill the winner is 1 loop getting input
	while(!winner){
	player=getplayerinput(turn);
	winner=check_winner();
	
	
	
	
	turn++;
	}
	// Outputs who won 
	std::cout<< "You are the winner Player " << player <<"\n\n";
	
	
}
//This function just prints title 
void intro(){

	std::cout<< "## WELCOME TO A GAME OF TIC TAC TOE ## \n" ;




}
// This function draws the initial grid
void drawgrid(){


	row1[0]='1';
	row1[1]='2';
	row1[2]='3';

	row2[0]='4';
	row2[1]='5';
	row2[2]='6';

	row3[0]='7';
	row3[1]='8';
	row3[2]='9';

	std::cout<<"\n";
	std::cout<< row1[0] <<"|" << row1[1] << "|" << row1[2] << "|\n";
	std::cout<< row2[0] <<"|" << row2[1] << "|" << row2[2] << "|\n";
	std::cout<< row3[0] <<"|" << row3[1] << "|" << row3[2] << "|\n";
}
// This function updates the grid once player has picked input
void updatedgrid(){


	std::cout<<"\n";
	std::cout<< row1[0] <<"|" << row1[1] << "|" << row1[2] << "|\n";
	std::cout<< row2[0] <<"|" << row2[1] << "|" << row2[2] << "|\n";
	std::cout<< row3[0] <<"|" << row3[1] << "|" << row3[2] << "|\n";

}
// This function takes care of the turn and the player input
int getplayerinput(int turn){

	int player,pickspot;

	if(turn%2==0){
		player=1;
		std::cout<<"\n";
		std::cout<<"Player: "<< player << " Enter a valid number from 1-9: ";
	    std::cin>>pickspot;
	}else if (turn%2!=0)
	{
		player =2;
		std::cout<<"\n";
		std::cout<<"Player: "<< player << " Enter a valid number from 1-9: ";
	    std::cin>>pickspot;
	}




if (player==1){
if(pickspot==1){

	row1[0]='X';

}else if(pickspot==2){
	row1[1]='X';

}else if(pickspot==3){
	row1[2]='X';
}else if(pickspot==4){
	row2[0]='X';
}else if(pickspot==5){
	row2[1]='X';
}else if(pickspot==6){
	row2[2]='X';
}else if(pickspot==7){
	row3[0]='X';
}else if(pickspot==8){
	row1[1]='X';
}else if(pickspot==9){
	row1[2]='X';
}
}else if (player==2){
	if(pickspot==1){

	row1[0]='O';

}else if(pickspot==2){
	row1[1]='O';

}else if(pickspot==3){
	row1[2]='O';
}else if(pickspot==4){
	row2[0]='O';
}else if(pickspot==5){
	row2[1]='O';
}else if(pickspot==6){
	row2[2]='O';
}else if(pickspot==7){
	row3[0]='O';
}else if(pickspot==8){
	row1[1]='O';
}else if(pickspot==9){
	row1[2]='O';
}

}

updatedgrid();
return player;


}
// This function check if the rows matches and returns a bool winner
bool check_winner(){


	if (row1[0] == 'X' && row2[0] == 'X' && row3[0] == 'X') {
				winner = 1;
	} else if (row1[1] == 'X' && row2[1] =='X' && row3[1] =='X') {
				winner = 1;
	} else if (row1[2] == 'X' && row2[2] =='X' && row3[2] =='X') {
				winner = 1;
	} else if (row1[0] == 'X' && row1[1] =='X' && row1[2] =='X') {
				winner = 1;
	} else if (row2[0] == 'X' && row2[1] =='X' && row2[2] =='X') {
				winner = 1;
	} else if (row3[0] == 'X' && row3[1] =='X' && row3[2] =='X') {
				winner = 1;
	} else if (row1[0] == 'X' && row2[1] =='X' && row3[2] =='X') {
				winner = 1;
	} else if (row1[2] == 'X' && row2[1] =='X' && row3[0] =='X') {
				winner = 1;
	} else if (row1[0] == 'O' && row2[0] =='O' && row3[0] =='O') {
				winner = 1;
	} else if (row1[1] == 'O' && row2[1] =='O' && row3[1] =='O') {
				winner = 1;
	} else if (row1[2] == 'O' && row2[2] =='O' && row3[2] =='O') {
				winner = 1;
	} else if (row1[0] == 'O' && row1[1] =='O' && row1[2] =='O') {
				winner = 1;
	} else if (row2[0] == 'O' && row2[1] =='O' && row2[2] =='O') {
				winner = 1;
	} else if (row3[0] == 'O' && row3[1] =='O' && row3[2] =='O') {
				winner = 1;
	} else if (row1[0] == 'O' && row2[1] =='O' && row3[2] =='O') {
				winner = 1;
	} else if (row1[2] == 'O' && row2[1] =='O' && row3[0] =='O') {
				winner = 1;
	}

			return winner;


}



