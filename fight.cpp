#include <iostream>
#include <vector>
#include "Player.h"

int fight(Player *player1,Player *player2);



int main(){
	int flag;
	
	

	//Player player1= Player("nikos",10,2);
	//player2.Player("jules",10,1);
	
	int a, b;
	int c,d;
	std::cout<<"Give health  and damage of player1"<<std::endl;
	std::cin >> a;
	std::cin >> b;
	Player *player1=new Player("player1",a,b);
	
	std::cout<<"Give health  and damage of player2"<<std::endl;
	std::cin >> c;
	std::cin >> d;
	Player *player2=new Player("player2",c,d);
	
	
	flag=fight(player1,player2);


	if (flag==0){
		std::cout<<player1->name <<" wins"<<std::endl;
	}
	else{
		std::cout<<player2->name <<" wins"<<std::endl;

	}
return 0;
}//main closes


int fight(Player *player1,Player *player2){
	int flag=0;//0 player1 hits, 1 player2 hits
	do{
		if (flag==0){
			player2->health=player2->health-player1->damagePerAttack;
			flag=1;
			}//player1 hitscloses
		else{
			player1->health=player1->health-player2->damagePerAttack;
			flag=0;
		}//player2 hit closes

	}
	while(player1->health>0||player2->health>0);

	return flag;
}//closes the function



