#include<iostream>
#include<cstdlib>
#include<unistd.h>
#include<ctime>
#include"fighters.h"
int main(){
std::cout<<"\n\n\t    < VIRTUAL FIGHT >  \n\n";
int pch,g;
int go=0;
int vo=0;
int toss;

srand(time(NULL));
do{
char pbc;
int plyhm=1200;
int patck=50;
int pmatck=200;
int pheal=100;

int ec;
int enemyh;
int dmg=0;
int edmg=0;

int c1,c2,edmg1=0,edmg2=0,a1,a2,ti,e1,e2,t;
std::cout<<"\tPLAY  : Hit 1 and Enter \n";
std::cout<<"\tWATCH : Hit 2 and Enter \n";
std::cout<<"\tEXIT  : Hit 3 and Enter \n";
std::cin>>pch;
switch(pch){
	case 1:{
toss=rand()%2;
if(toss==0){
std::cout<<"Its your turn to fight first\n\n";
int cc=rand()%15+1;

switch(cc){
	case 1:{
	knight co;
	co.intro();
        enemyh=co.enh;
	break;}

	case 2:{
	wizard co;
	co.intro();
	enemyh=co.enh;
	break;}

	case 3:{
	ninja co;
	co.intro();
	enemyh=co.enh;
	break;}
	
	case 4:{
	giant co;
	co.intro();
	enemyh=co.enh;
	break;
	}
	case 5:{
	witch co;
	co.intro();
	enemyh=co.enh;
	break;
	}
	case 6:{
	samurai co;
	co.intro();
	enemyh=co.enh;
	break;
	}
	case 7:{
	robot co;
	co.intro();
	enemyh=co.enh;
	break;
	}
	case 8:{
	archer co;
	co.intro();
	enemyh=co.enh;
	break;
	}
	case 9:{
	zombie co;
	co.intro();
	enemyh=co.enh;
	break;
	}
	case 10:{
	dragon co;
	co.intro();
	enemyh=co.enh;
	break;
	}
	case 11:{
	pirate co;
	co.intro();
	enemyh=co.enh;
	break;
	}		
	case 12:{
	wrestler co;
	co.intro();
	enemyh=co.enh;
	break;
	}
	case 13:{
	bomber co;
	co.intro();
	enemyh=co.enh;
	break;
	}
        case 14:{
	vampire co;
	co.intro();
	enemyh=co.enh;
	break;
	}	
        case 15:{
	hunter co;
	co.intro();
	enemyh=co.enh;
	break;
	}
}

std::cout<<" Player health  : "<<plyhm<<std::endl;
std::cout<<" Enemy  health  : "<<enemyh<<std::endl;
sleep(3);
do{
std::cout<<"What would you like to do?\n";
std::cout<<"attack(a)/mega attack(m)/heal(h)/defend(d)\n";
std::cin>>pbc;

switch(pbc){

	case 'a':{
	std::cout<<"Player attacks the enemy \n";
	enemyh=enemyh-patck;	
	std::cout<<" Player health : "<<plyhm<<std::endl;
	std::cout<<" Enemy  health : "<<enemyh<<std::endl;
	dmg=dmg+patck;
	break;}

	case 'm':{
	if(dmg>=500){
	std::cout<<"You are using your mega attack \n";
	enemyh=enemyh-pmatck;
	std::cout<<" Player health  : "<<plyhm<<std::endl;
	std::cout<<" Enemy  health  : "<<enemyh<<std::endl;
	dmg=0;
        dmg=dmg+patck;
	}else{
std::cout<<" You havent unlocked your mega attack .\nDo some more damage to use it \n";
		continue;}
		 break;}

	case 'h':{
	if(plyhm<600){
		std::cout<<"You choose to heal yourself \n";
	plyhm=plyhm+pheal;
	std::cout<<" Player health  : "<<plyhm<<std::endl;
        std::cout<<" Enemy  health  : "<<enemyh<<std::endl;	}
	break;}

	case 'd':{
      std::cout<<"You cannot use defending ,when you fight first. \n";

	break;}
	
	default:{
	std::cout<<"You have entered a invalid command \n	 You need to type \n a = attack \n h = heal \n m = mega attack \n d = defend \n";}
}
if((plyhm<=0)){go++;
	std::cout<<"Game over ..\n";
	std::cout<<"Your health is 0 \n";
	std::cout<<"Better luck next time \n";
	break;}
	else{if(enemyh<=0){
		vo++;
	std::cout<<"Vicrory..\n";
	std::cout<<"Congratulations you won the fight \n";
	break;
		}}
sleep(2);
 ec=rand()%3+1;
switch(cc){
case 1:{
        knight co;	
	if(ec==1){
	if(edmg>=500){
	plyhm=co.mega(plyhm);
	edmg=0;
	edmg=edmg+40;
	}else{
	plyhm=co.attack(plyhm);
        edmg=edmg+(co.damage());
	}}
	else{
if((ec==2)&&(enemyh<600)){enemyh=co.heal(enemyh);}
else{
if((ec==3)&&((pbc=='a')||(pbc=='m')))enemyh=co.defend(enemyh);
else{
plyhm=co.attack(plyhm);
edmg=edmg+(co.damage());}}
	}
	break;}
case 2:{
        wizard co;	
	if(ec==1){
	if(edmg>=500){
	plyhm=co.mega(plyhm);
	edmg=0;
	edmg=edmg+40;
	}else{
	plyhm=co.attack(plyhm);
	edmg=edmg+(co.damage());
	}}
	else{
if((ec==2)&&(enemyh<600)){enemyh=co.heal(enemyh);}
else{
if((ec==3)&&((pbc=='a')||(pbc=='m')))enemyh=co.defend(enemyh);
else{
plyhm=co.attack(plyhm);
edmg=edmg+(co.damage());}}
	}
break;}

case 3:{
        ninja co;	
	if(ec==1){
	if(edmg>=500){
	plyhm=co.mega(plyhm);
	edmg=0;
	edmg=edmg+40;
	}else{
	plyhm=co.attack(plyhm);
	edmg=edmg+(co.damage());
	}}
	else{
if((ec==2)&&(enemyh<600)){enemyh=co.heal(enemyh);}
else{
if((ec==3)&&((pbc=='a')||(pbc=='m')))enemyh=co.defend(enemyh);
else{
plyhm=co.attack(plyhm);
edmg=edmg+(co.damage());}}
	}
break;}

case 4:{
        giant co;	
	if(ec==1){
	if(edmg>=500){
	plyhm=co.mega(plyhm);
	edmg=0;
	edmg=edmg+40;
	}else{
	plyhm=co.attack(plyhm);
	edmg=edmg+(co.damage());
	}}
	else{
if((ec==2)&&(enemyh<600)){enemyh=co.heal(enemyh);}
else{
if((ec==3)&&((pbc=='a')||(pbc=='m')))enemyh=co.defend(enemyh);
else{
plyhm=co.attack(plyhm);
edmg=edmg+(co.damage());}}
	}
break;}

case 5:{
        witch co;	
	if(ec==1){
	if(edmg>=500){
	plyhm=co.mega(plyhm);
	edmg=0;
	edmg=edmg+40;
	}else{
	plyhm=co.attack(plyhm);
	edmg=edmg+(co.damage());
	}}
	else{
if((ec==2)&&(enemyh<600)){enemyh=co.heal(enemyh);}
else{
if((ec==3)&&((pbc=='a')||(pbc=='m')))enemyh=co.defend(enemyh);
else{
plyhm=co.attack(plyhm);
edmg=edmg+(co.damage());}}
	}
break;}

case 6:{
        samurai co;	
	if(ec==1){
	if(edmg>=500){
	plyhm=co.mega(plyhm);
	edmg=0;
	edmg=edmg+40;
	}else{
	plyhm=co.attack(plyhm);
	edmg=edmg+(co.damage());
	}}
	else{
if((ec==2)&&(enemyh<600)){enemyh=co.heal(enemyh);}
else{
if((ec==3)&&((pbc=='a')||(pbc=='m')))enemyh=co.defend(enemyh);
else{
plyhm=co.attack(plyhm);
edmg=edmg+(co.damage());}}
	}
break;}

case 7:{
        robot co;	
	if(ec==1){
	if(edmg>=500){
	plyhm=co.mega(plyhm);
	edmg=0;
	edmg=edmg+40;
	}else{
	plyhm=co.attack(plyhm);
	edmg=edmg+(co.damage());
	}}
	else{
if((ec==2)&&(enemyh<600)){enemyh=co.heal(enemyh);}
else{
if((ec==3)&&((pbc=='a')||(pbc=='m')))enemyh=co.defend(enemyh);
else{
plyhm=co.attack(plyhm);
edmg=edmg+(co.damage());}}
	}
break;}

case 8:{
        archer co;	
	if(ec==1){
	if(edmg>=500){
	plyhm=co.mega(plyhm);
	edmg=0;
	edmg=edmg+40;
	}else{
	plyhm=co.attack(plyhm);
	edmg=edmg+(co.damage());
	}}
	else{
if((ec==2)&&(enemyh<600)){enemyh=co.heal(enemyh);}
else{
if((ec==3)&&((pbc=='a')||(pbc=='m')))enemyh=co.defend(enemyh);
else{
plyhm=co.attack(plyhm);
edmg=edmg+(co.damage());}}
	}
break;}

case 9:{
        zombie co;	
	if(ec==1){
	if(edmg>=500){
	plyhm=co.mega(plyhm);
	edmg=0;
	edmg=edmg+40;
	}else{
	plyhm=co.attack(plyhm);
	edmg=edmg+(co.damage());
	}}
	else{
if((ec==2)&&(enemyh<600)){enemyh=co.heal(enemyh);}
else{
if((ec==3)&&((pbc=='a')||(pbc=='m')))enemyh=co.defend(enemyh);
else{
plyhm=co.attack(plyhm);
edmg=edmg+(co.damage());}}
	}
break;}

case 10:{
        dragon co;	
	if(ec==1){
	if(edmg>=500){
	plyhm=co.mega(plyhm);
	edmg=0;
	edmg=edmg+40;
	}else{
	plyhm=co.attack(plyhm);
	edmg=edmg+(co.damage());
	}}
	else{
if((ec==2)&&(enemyh<600)){enemyh=co.heal(enemyh);}
else{
if((ec==3)&&((pbc=='a')||(pbc=='m')))enemyh=co.defend(enemyh);
else{
plyhm=co.attack(plyhm);
edmg=edmg+(co.damage());}}
	}
break;}

case 11:{
        pirate co;	
	if(ec==1){
	if(edmg>=500){
	plyhm=co.mega(plyhm);
	edmg=0;
	edmg=edmg+40;
	}else{
	plyhm=co.attack(plyhm);
	edmg=edmg+(co.damage());
	}}
	else{
if((ec==2)&&(enemyh<600)){enemyh=co.heal(enemyh);}
else{
if((ec==3)&&((pbc=='a')||(pbc=='m')))enemyh=co.defend(enemyh);
else{
plyhm=co.attack(plyhm);
edmg=edmg+(co.damage());}}
	}
break;}

case 12:{
        wrestler co;	
	if(ec==1){
	if(edmg>=500){
	plyhm=co.mega(plyhm);
	edmg=0;
	edmg=edmg+40;
	}else{
	plyhm=co.attack(plyhm);
	edmg=edmg+(co.damage());
	}}
	else{
if((ec==2)&&(enemyh<600)){enemyh=co.heal(enemyh);}
else{
if((ec==3)&&((pbc=='a')||(pbc=='m')))enemyh=co.defend(enemyh);
else{
plyhm=co.attack(plyhm);
edmg=edmg+(co.damage());}}
	}
break;}

case 13:{
        bomber co;	
	if(ec==1){
	if(edmg>=500){
	plyhm=co.mega(plyhm);
	edmg=0;
	edmg=edmg+40;
	}else{
	plyhm=co.attack(plyhm);
	edmg=edmg+(co.damage());
	}}
	else{
if((ec==2)&&(enemyh<600)){enemyh=co.heal(enemyh);}
else{
if((ec==3)&&((pbc=='a')||(pbc=='m')))enemyh=co.defend(enemyh);
else{
plyhm=co.attack(plyhm);
edmg=edmg+(co.damage());}}
	}
break;}

case 14:{
        vampire co;	
	if(ec==1){
	if(edmg>=500){
	plyhm=co.mega(plyhm);
	edmg=0;
	edmg=edmg+40;
	}else{
	plyhm=co.attack(plyhm);
	edmg=edmg+(co.damage());
	}}
	else{
if((ec==2)&&(enemyh<600)){enemyh=co.heal(enemyh);}
else{
if((ec==3)&&((pbc=='a')||(pbc=='m')))enemyh=co.defend(enemyh);
else{
plyhm=co.attack(plyhm);
edmg=edmg+(co.damage());}}
	}
break;}

case 15:{
        hunter co;	
	if(ec==1){
	if(edmg>=500){
	plyhm=co.mega(plyhm);
	edmg=0;
	edmg=edmg+40;
	}else{
	plyhm=co.attack(plyhm);
	edmg=edmg+(co.damage());
	}}
	else{
if((ec==2)&&(enemyh<600)){enemyh=co.heal(enemyh);}
else{
if((ec==3)&&((pbc=='a')||(pbc=='m')))enemyh=co.defend(enemyh);
else{
plyhm=co.attack(plyhm);
edmg=edmg+(co.damage());}}
	}
break;}
}

sleep(2);	
std::cout<<" Player health  : "<<plyhm<<std::endl;
std::cout<<" Enemy  health  : "<<enemyh<<std::endl;

	if((plyhm<=0)){go++;
		std::cout<<"Game over ..\n";
		std::cout<<"Your health is 0 \n";
		std::cout<<"Better luck next time \n";
	break;}
	else{if(enemyh<=0){
		vo++;
		std::cout<<"Vicrory..\n";
		std::cout<<"Congratulations you won the fight \n";
			break;;
		}}
	
}while((go==0)||(vo==0));




}
if(toss==1){
go=0,vo=0;
int cc=rand()%15+1;

switch(cc){
	case 1:{
	knight co;
	co.intro();
        enemyh=co.enh;
	break;}

	case 2:{
	wizard co;
	co.intro();
	enemyh=co.enh;
	break;}

	case 3:{
	ninja co;
	co.intro();
	enemyh=co.enh;
	break;}
	       
	case 4:{
	giant co;
	co.intro();
	enemyh=co.enh;
	break;
	}

	case 5:{
	witch co;
	co.intro();
	enemyh=co.enh;
	break;
	}
	case 6:{
	samurai co;
	co.intro();
	enemyh=co.enh;
	break;
	}
	case 7:{
	robot co;
	co.intro();
	enemyh=co.enh;
	break;
	}
	case 8:{
	archer co;
	co.intro();
	enemyh=co.enh;
	break;
	}
	case 9:{
	zombie co;
	co.intro();
	enemyh=co.enh;
	break;
	}
	case 10:{
	dragon co;
	co.intro();
	enemyh=co.enh;
	break;
	}
	case 11:{
	pirate co;
	co.intro();
	enemyh=co.enh;
	break;
	}		
	case 12:{
	wrestler co;
	co.intro();
	enemyh=co.enh;
	break;
	}
	case 13:{
	bomber co;
	co.intro();
	enemyh=co.enh;
	break;
	}
        case 14:{
	vampire co;
	co.intro();
	enemyh=co.enh;
	break;
	}	
        case 15:{
	hunter co;
	co.intro();
	enemyh=co.enh;
	break;
	}
}
std::cout<<"Enemy attacks first"<<std::endl;
std::cout<<" Player health  : "<<plyhm<<std::endl;
std::cout<<" Enemy  health  : "<<enemyh<<std::endl;
do{
sleep(3);
 ec=rand()%3+1;
switch(cc){
case 1:{
        knight co;	
	if(ec==1){
	if(edmg>=500){
	plyhm=co.mega(plyhm);
	edmg=0;
	edmg=edmg+40;
	}else{
	plyhm=co.attack(plyhm);
        edmg=edmg+(co.damage());
	}}
	else{
if((ec==2)&&(enemyh<600)){enemyh=co.heal(enemyh);}
else{
if((ec==3)&&((pbc=='a')||(pbc=='m')))enemyh=co.defend(enemyh);
else{
plyhm=co.attack(plyhm);
edmg=edmg+(co.damage());}}
	}
	break;}
case 2:{
        wizard co;	
	if(ec==1){
	if(edmg>=500){
	plyhm=co.mega(plyhm);
	edmg=0;
	edmg=edmg+40;
	}else{
	plyhm=co.attack(plyhm);
	edmg=edmg+(co.damage());
	}}
	else{
if((ec==2)&&(enemyh<600)){enemyh=co.heal(enemyh);}
else{
if((ec==3)&&((pbc=='a')||(pbc=='m')))enemyh=co.defend(enemyh);
else{
plyhm=co.attack(plyhm);
edmg=edmg+(co.damage());}}
	}
break;}

case 3:{
        ninja co;	
	if(ec==1){
	if(edmg>=500){
	plyhm=co.mega(plyhm);
	edmg=0;
	edmg=edmg+40;
	}else{
	plyhm=co.attack(plyhm);
	edmg=edmg+(co.damage());
	}}
	else{
if((ec==2)&&(enemyh<600)){enemyh=co.heal(enemyh);}
else{
if((ec==3)&&((pbc=='a')||(pbc=='m')))enemyh=co.defend(enemyh);
else{
plyhm=co.attack(plyhm);
edmg=edmg+(co.damage());}}
	}
break;}

case 4:{
        giant co;	
	if(ec==1){
	if(edmg>=500){
	plyhm=co.mega(plyhm);
	edmg=0;
	edmg=edmg+40;
	}else{
	plyhm=co.attack(plyhm);
	edmg=edmg+(co.damage());
	}}
	else{
if((ec==2)&&(enemyh<600)){enemyh=co.heal(enemyh);}
else{
if((ec==3)&&((pbc=='a')||(pbc=='m')))enemyh=co.defend(enemyh);
else{
plyhm=co.attack(plyhm);
edmg=edmg+(co.damage());}}
	}
break;}

case 5:{
        witch co;	
	if(ec==1){
	if(edmg>=500){
	plyhm=co.mega(plyhm);
	edmg=0;
	edmg=edmg+40;
	}else{
	plyhm=co.attack(plyhm);
	edmg=edmg+(co.damage());
	}}
	else{
if((ec==2)&&(enemyh<600)){enemyh=co.heal(enemyh);}
else{
if((ec==3)&&((pbc=='a')||(pbc=='m')))enemyh=co.defend(enemyh);
else{
plyhm=co.attack(plyhm);
edmg=edmg+(co.damage());}}
	}
break;}

case 6:{
        samurai co;	
	if(ec==1){
	if(edmg>=500){
	plyhm=co.mega(plyhm);
	edmg=0;
	edmg=edmg+40;
	}else{
	plyhm=co.attack(plyhm);
	edmg=edmg+(co.damage());
	}}
	else{
if((ec==2)&&(enemyh<600)){enemyh=co.heal(enemyh);}
else{
if((ec==3)&&((pbc=='a')||(pbc=='m')))enemyh=co.defend(enemyh);
else{
plyhm=co.attack(plyhm);
edmg=edmg+(co.damage());}}
	}
break;}

case 7:{
        robot co;	
	if(ec==1){
	if(edmg>=500){
	plyhm=co.mega(plyhm);
	edmg=0;
	edmg=edmg+40;
	}else{
	plyhm=co.attack(plyhm);
	edmg=edmg+(co.damage());
	}}
	else{
if((ec==2)&&(enemyh<600)){enemyh=co.heal(enemyh);}
else{
if((ec==3)&&((pbc=='a')||(pbc=='m')))enemyh=co.defend(enemyh);
else{
plyhm=co.attack(plyhm);
edmg=edmg+(co.damage());}}
	}
break;}

case 8:{
        archer co;	
	if(ec==1){
	if(edmg>=500){
	plyhm=co.mega(plyhm);
	edmg=0;
	edmg=edmg+40;
	}else{
	plyhm=co.attack(plyhm);
	edmg=edmg+(co.damage());
	}}
	else{
if((ec==2)&&(enemyh<600)){enemyh=co.heal(enemyh);}
else{
if((ec==3)&&((pbc=='a')||(pbc=='m')))enemyh=co.defend(enemyh);
else{
plyhm=co.attack(plyhm);
edmg=edmg+(co.damage());}}
	}
break;}

case 9:{
        zombie co;	
	if(ec==1){
	if(edmg>=500){
	plyhm=co.mega(plyhm);
	edmg=0;
	edmg=edmg+40;
	}else{
	plyhm=co.attack(plyhm);
	edmg=edmg+(co.damage());
	}}
	else{
if((ec==2)&&(enemyh<600)){enemyh=co.heal(enemyh);}
else{
if((ec==3)&&((pbc=='a')||(pbc=='m')))enemyh=co.defend(enemyh);
else{
plyhm=co.attack(plyhm);
edmg=edmg+(co.damage());}}
	}
break;}

case 10:{
        dragon co;	
	if(ec==1){
	if(edmg>=500){
	plyhm=co.mega(plyhm);
	edmg=0;
	edmg=edmg+40;
	}else{
	plyhm=co.attack(plyhm);
	edmg=edmg+(co.damage());
	}}
	else{
if((ec==2)&&(enemyh<600)){enemyh=co.heal(enemyh);}
else{
if((ec==3)&&((pbc=='a')||(pbc=='m')))enemyh=co.defend(enemyh);
else{
plyhm=co.attack(plyhm);
edmg=edmg+(co.damage());}}
	}
break;}

case 11:{
        pirate co;	
	if(ec==1){
	if(edmg>=500){
	plyhm=co.mega(plyhm);
	edmg=0;
	edmg=edmg+40;
	}else{
	plyhm=co.attack(plyhm);
	edmg=edmg+(co.damage());
	}}
	else{
if((ec==2)&&(enemyh<600)){enemyh=co.heal(enemyh);}
else{
if((ec==3)&&((pbc=='a')||(pbc=='m')))enemyh=co.defend(enemyh);
else{
plyhm=co.attack(plyhm);
edmg=edmg+(co.damage());}}
	}
break;}

case 12:{
        wrestler co;	
	if(ec==1){
	if(edmg>=500){
	plyhm=co.mega(plyhm);
	edmg=0;
	edmg=edmg+40;
	}else{
	plyhm=co.attack(plyhm);
	edmg=edmg+(co.damage());
	}}
	else{
if((ec==2)&&(enemyh<600)){enemyh=co.heal(enemyh);}
else{
if((ec==3)&&((pbc=='a')||(pbc=='m')))enemyh=co.defend(enemyh);
else{
plyhm=co.attack(plyhm);
edmg=edmg+(co.damage());}}
	}
break;}

case 13:{
        bomber co;	
	if(ec==1){
	if(edmg>=500){
	plyhm=co.mega(plyhm);
	edmg=0;
	edmg=edmg+40;
	}else{
	plyhm=co.attack(plyhm);
	edmg=edmg+(co.damage());
	}}
	else{
if((ec==2)&&(enemyh<600)){enemyh=co.heal(enemyh);}
else{
if((ec==3)&&((pbc=='a')||(pbc=='m')))enemyh=co.defend(enemyh);
else{
plyhm=co.attack(plyhm);
edmg=edmg+(co.damage());}}
	}
break;}

case 14:{
        vampire co;	
	if(ec==1){
	if(edmg>=500){
	plyhm=co.mega(plyhm);
	edmg=0;
	edmg=edmg+40;
	}else{
	plyhm=co.attack(plyhm);
	edmg=edmg+(co.damage());
	}}
	else{
if((ec==2)&&(enemyh<600)){enemyh=co.heal(enemyh);}
else{
if((ec==3)&&((pbc=='a')||(pbc=='m')))enemyh=co.defend(enemyh);
else{
plyhm=co.attack(plyhm);
edmg=edmg+(co.damage());}}
	}
break;}

case 15:{
        hunter co;	
	if(ec==1){
	if(edmg>=500){
	plyhm=co.mega(plyhm);
	edmg=0;
	edmg=edmg+40;
	}else{
	plyhm=co.attack(plyhm);
	edmg=edmg+(co.damage());
	}}
	else{
if((ec==2)&&(enemyh<600)){enemyh=co.heal(enemyh);}
else{
if((ec==3)&&((pbc=='a')||(pbc=='m')))enemyh=co.defend(enemyh);
else{
plyhm=co.attack(plyhm);
edmg=edmg+(co.damage());}}
	}
break;}
	}
sleep(1);
std::cout<<" Player health  : "<<plyhm<<std::endl;
std::cout<<" Enemy  health  : "<<enemyh<<std::endl;

	if((plyhm<=0)){go++;
		std::cout<<"Game over ..\n";
		std::cout<<"Your health is 0 \n";
		std::cout<<"Better luck next time \n";
	break;}
	else{if(enemyh<=0){
		vo++;
		std::cout<<"Vicrory..\n";
		std::cout<<"Congratulations you won the fight \n";
			break;
		}}
sleep(1);
std::cout<<"What would you like to do?\n";
std::cout<<"attack(a)/mega attack(m)/heal(h)/defend(d)\n";
std::cin>>pbc;

switch(pbc){

	case 'a':{
	std::cout<<"Player attacks the enemy \n";
	enemyh=enemyh-patck;	
	std::cout<<" Player health  : "<<plyhm<<std::endl;
	std::cout<<" Enemy  health  : "<<enemyh<<std::endl;
	dmg=dmg+patck;
	break;}

	case 'm':{
	if(dmg>=500){
	std::cout<<"You are using your mega attack \n";
	enemyh=enemyh-pmatck;
	std::cout<<" Player health  : "<<plyhm<<std::endl;
	std::cout<<" Enemy  health  : "<<enemyh<<std::endl;
	dmg=0;
        dmg=dmg+patck;
	}else{
std::cout<<" You havent unlocked your mega attack .\nDo some more damage to use it \n";
		continue;}
		 break;}

	case 'h':{
	if(plyhm<600){
		std::cout<<"You choose to heal yourself \n";
	plyhm=plyhm+pheal;
	std::cout<<" Player health  : "<<plyhm<<std::endl;
        std::cout<<" Enemy  health  : "<<enemyh<<std::endl;	}
	break;}

	case 'd':{
	if((plyhm<1200)&&(ec==1)){
	std::cout<<"You defended the enemy's attack. \n But take a bit of damage"<<std::endl;
	plyhm=plyhm+25;}
	else{
	std::cout<<"You cannot use defending at this point \n";
	}

	break;}
	
	default:{
	std::cout<<"You have entered a invalid command \n	 You need to type \n a = attack \n h = heal \n m = mega attack \n d = defend \n";}
}
if((plyhm<=0)){go++;
	std::cout<<"Game over ..\n";
	std::cout<<"Your health is 0 \n";
	std::cout<<"Better luck next time \n";
	break;}
	else{if(enemyh<=0){
		vo++;
	std::cout<<"Vicrory..\n";
	std::cout<<"Congratulations you won the fight \n";
	break;
		}}

}while((go==0)||(vo++));
sleep(1);
}
break;}

	case 2:{
char chc;
std::cout<<"   Welcome to Virtual Fight T.V. "<<std::endl;
std::cout<<" You can either select two characters to fight with each other or let computer genearte it randomly."<<std::endl;
std::cout<<" Type (i) for your choice or (c) for computer's choice (i/c)"<<std::endl;
std::cin>>chc;
switch(chc){
	case 'i':{
do{
std::cout<<"Select 1st player \n"<<"Enter the number mentioned before your selected player.\n";
std::cout<<" 1) Knight     2) Wizard     3) Ninja     \n 4) Giant      5) Witch      6) Samurai      \n 7) Robot      8) Archer     9) Zombie      \n10) Dragon    11) Pirate    12) Wrestler    \n13) Bomber    14) Vampire   15) Hunter\n";
std::cin>>c1;
if((c1>15)||(c1<1))std::cout<<"Invalid input."<<std::endl;}while((c1<0)||(c1>16));
do{
std::cout<<"Select Player 2 by the same method."<<std::endl;
std::cout<<" 1) Knight     2) Wizard     3) Ninja     \n 4) Giant      5) Witch      6) Samurai      \n 7) Robot      8) Archer     9) Zombie      \n10) Dragon    11) Pirate    12) Wrestler    \n13) Bomber    14) Vampire   15) Hunter\n";
std::cin>>c2;
if((c2>15)||(c2<1))std::cout<<"Invalid input."<<std::endl;}while((c2<1)||(c2>16));

std::cout<<" Player 1 is ";
switch(c1){
	case 1:{
	std::cout<<" KNIGHT."<<std::endl;
	knight co1;
	co1.intro();
        e1=co1.enh;
	break;}

	case 2:{
	std::cout<<" WIZARD."<<std::endl;
	wizard co1;
	co1.intro();
	e1=co1.enh;
	break;}

	case 3:{
        std::cout<<" NINJA."<<std::endl;
	ninja co1;
	co1.intro();
	e1=co1.enh;
	break;}
	       
	case 4:{
	std::cout<<" GIANT."<<std::endl;
	giant co1;
	co1.intro();
	e1=co1.enh;
	break;
	}

	case 5:{
	std::cout<<" WITCH."<<std::endl;
	witch co1;
	co1.intro();
	e1=co1.enh;
	break;
	}
	case 6:{
	std::cout<<" SAMURAI."<<std::endl;
	samurai co1;
	co1.intro();
	e1=co1.enh;
	break;
	}
	case 7:{
	std::cout<<" ROBOT."<<std::endl;
	robot co1;
	co1.intro();
	e1=co1.enh;
	break;
	}
	case 8:{
	std::cout<<" ARCHER."<<std::endl;
	archer co1;
	co1.intro();
	e1=co1.enh;
	break;
	}
	case 9:{
	std::cout<<" ZOMBIE."<<std::endl;
	zombie co1;
	co1.intro();
	e1=co1.enh;
	break;
	}
	case 10:{
	std::cout<<" DRAGON."<<std::endl;
	dragon co1;
	co1.intro();
	e1=co1.enh;
	break;
	}
	case 11:{
        std::cout<<" PIRATE."<<std::endl;
	pirate co1;
	co1.intro();
	e1=co1.enh;
	break;
	}		
	case 12:{
	std::cout<<" WRESTLER."<<std::endl;
	wrestler co1;
	co1.intro();
	e1=co1.enh;
	break;
	}
	case 13:{
	std::cout<<" BOMBER."<<std::endl;
	bomber co1;
	co1.intro();
	e1=co1.enh;
	break;
	}
        case 14:{
	std::cout<<" VAMPIRE."<<std::endl;
	vampire co1;
	co1.intro();
	e1=co1.enh;
	break;
	}	
        case 15:{
	std::cout<<" HUNTER."<<std::endl;
	hunter co1;
	co1.intro();
	e1=co1.enh;
	break;
	}}
std::cout<<"Player two is ";
switch(c2){
	case 1:{
	std::cout<<" KNIGHT ."<<std::endl;
	knight co2;
	co2.intro();
        e2=co2.enh;
	break;}

	case 2:{
	std::cout<<" WIZARD ."<<std::endl;
	wizard co2;
	co2.intro();
	e2=co2.enh;
	break;}

	case 3:{
	std::cout<<" NINJA."<<std::endl;
	ninja co2;
	co2.intro();
	e2=co2.enh;
	break;}
	       
	case 4:{
	std::cout<<" GIANT."<<std::endl;
	giant co2;
	co2.intro();
	e2=co2.enh;
	break;
	}

	case 5:{
	std::cout<<" WITCH."<<std::endl;
	witch co2;
	co2.intro();
	e2=co2.enh;
	break;
	}
	case 6:{
	std::cout<<" SAMURAI."<<std::endl;
	samurai co2;
	co2.intro();
	e2=co2.enh;
	break;
	}
	case 7:{
	std::cout<<" ROBOT."<<std::endl;
	robot co2;
	co2.intro();
	e2=co2.enh;
	break;
	}
	case 8:{
	std::cout<<" ARCHER."<<std::endl;
	archer co2;
	co2.intro();
	e2=co2.enh;
	break;
	}
	case 9:{
	std::cout<<" ZOMBIE."<<std::endl;
	zombie co2;
	co2.intro();
	e2=co2.enh;
	break;
	}
	case 10:{
	std::cout<<" DRAGON."<<std::endl;
	dragon co2;
	co2.intro();
	e2=co2.enh;
	break;
	}
	case 11:{
	std::cout<<" PIRATE."<<std::endl;
	pirate co2;
	co2.intro();
	e2=co2.enh;
	break;
	}		
	case 12:{
	std::cout<<" WRESTLER."<<std::endl;
	wrestler co2;
	co2.intro();
	e2=co2.enh;
	break;
	}
	case 13:{
	std::cout<<" BOMBER."<<std::endl;
	bomber co2;
	co2.intro();
	e2=co2.enh;
	break;
	}
        case 14:{
	std::cout<<" VAMPIRE."<<std::endl;
	vampire co2;
	co2.intro();
	e2=co2.enh;
	break;
	}	
        case 15:{
	std::cout<<" HUNTER."<<std::endl;
	hunter co2;
	co2.intro();
	e2=co2.enh;
	break;
	}}
sleep(3);
t=rand()%2+1;
std::cout<<" Toss time!!"<<std::endl;
switch (t){
case 1:{
std::cout<<" Player 1 will attack first."<<std::endl;
std::cout<<"player 1 h "<<e1<<std::endl<<"player 2 h "<<e2<<std::endl;
sleep(5);
do{
a1=rand()%3+1;
switch(c1){
case 1:{
        knight co1;	
	if(a1==1){
	if(edmg1>=500){
	e2=co1.mega(e2);
	edmg1=0;
	edmg1=edmg1+(co1.damage());;
	}else{
	e2=co1.attack(e2);
	edmg1=edmg1+(co1.damage());}
	}
else{
if((a1==2)&&(e1<600)){e1=co1.heal(e1);}
else{
if(a1==3){
e1=co1.defend(e1);}
else{
e2=co1.attack(e2);
edmg1=edmg1+(co1.damage());}}
}
break;}

case 2:{
        wizard co1;	
	if(a1==1){
	if(edmg1>=500){
	e2=co1.mega(e2);
	edmg1=0;
	edmg1=edmg1+(co1.damage());;
	}else{
	e2=co1.attack(e2);
	edmg1=edmg1+(co1.damage());}
	}
else{
if((a1==2)&&(e1<600)){e1=co1.heal(e1);}
else{
if(a1==3){
e1=co1.defend(e1);}
else{
e2=co1.attack(e2);
edmg1=edmg1+(co1.damage());}}
}
break;}

case 3:{
        ninja co1;	
	if(a1==1){
	if(edmg1>=500){
	e2=co1.mega(e2);
	edmg1=0;
	edmg1=edmg1+(co1.damage());;
	}else{
	e2=co1.attack(e2);
	edmg1=edmg1+(co1.damage());}
	}
else{
if((a1==2)&&(e1<600)){e1=co1.heal(e1);}
else{
if(a1==3){
e1=co1.defend(e1);}
else{
e2=co1.attack(e2);
edmg1=edmg1+(co1.damage());}}
}
break;}
case 4:{
        giant co1;	
	if(a1==1){
	if(edmg1>=500){
	e2=co1.mega(e2);
	edmg1=0;
	edmg1=edmg1+(co1.damage());;
	}else{
	e2=co1.attack(e2);
	edmg1=edmg1+(co1.damage());}
	}
else{
if((a1==2)&&(e1<600)){e1=co1.heal(e1);}
else{
if(a1==3){
e1=co1.defend(e1);}
else{
e2=co1.attack(e2);
edmg1=edmg1+(co1.damage());}}
}
break;}

case 5:{witch co1;	
	if(a1==1){
	if(edmg1>=500){
	e2=co1.mega(e2);
	edmg1=0;
	edmg1=edmg1+(co1.damage());;
	}else{
	e2=co1.attack(e2);
	edmg1=edmg1+(co1.damage());}
	}
else{
if((a1==2)&&(e1<600)){e1=co1.heal(e1);}
else{
if(a1==3){
e1=co1.defend(e1);}
else{
e2=co1.attack(e2);
edmg1=edmg1+(co1.damage());}}
}
break;}

case 6:{
        samurai co1;	
	if(a1==1){
	if(edmg1>=500){
	e2=co1.mega(e2);
	edmg1=0;
	edmg1=edmg1+(co1.damage());;
	}else{
	e2=co1.attack(e2);
	edmg1=edmg1+(co1.damage());}
	}
else{
if((a1==2)&&(e1<600)){e1=co1.heal(e1);}
else{
if(a1==3){
e1=co1.defend(e1);}
else{
e2=co1.attack(e2);
edmg1=edmg1+(co1.damage());}}
}
break;}

case 7:{
        robot co1;	
	if(a1==1){
	if(edmg1>=500){
	e2=co1.mega(e2);
	edmg1=0;
	edmg1=edmg1+(co1.damage());;
	}else{
	e2=co1.attack(e2);
	edmg1=edmg1+(co1.damage());}
	}
else{
if((a1==2)&&(e1<600)){e1=co1.heal(e1);}
else{
if(a1==3){
e1=co1.defend(e1);}
else{
e2=co1.attack(e2);
edmg1=edmg1+(co1.damage());}}
}
break;}

case 8:{
        archer co1;	
	if(a1==1){
	if(edmg1>=500){
	e2=co1.mega(e2);
	edmg1=0;
	edmg1=edmg1+(co1.damage());;
	}else{
	e2=co1.attack(e2);
	edmg1=edmg1+(co1.damage());}
	}
else{
if((a1==2)&&(e1<600)){e1=co1.heal(e1);}
else{
if(a1==3){
e1=co1.defend(e1);}
else{
e2=co1.attack(e2);
edmg1=edmg1+(co1.damage());}}
}
break;}

case 9:{
        zombie co1;	
	if(a1==1){
	if(edmg1>=500){
	e2=co1.mega(e2);
	edmg1=0;
	edmg1=edmg1+(co1.damage());;
	}else{
	e2=co1.attack(e2);
	edmg1=edmg1+(co1.damage());}
	}
else{
if((a1==2)&&(e1<600)){e1=co1.heal(e1);}
else{
if(a1==3){
e1=co1.defend(e1);}
else{
e2=co1.attack(e2);
edmg1=edmg1+(co1.damage());}}
}
break;}

case 10:{
        dragon co1;	
	if(a1==1){
	if(edmg1>=500){
	e2=co1.mega(e2);
	edmg1=0;
	edmg1=edmg1+(co1.damage());;
	}else{
	e2=co1.attack(e2);
	edmg1=edmg1+(co1.damage());}
	}
else{
if((a1==2)&&(e1<600)){e1=co1.heal(e1);}
else{
if(a1==3){
e1=co1.defend(e1);}
else{
e2=co1.attack(e2);
edmg1=edmg1+(co1.damage());}}
}
break;}

case 11:{
        pirate co1;	
	if(a1==1){
	if(edmg1>=500){
	e2=co1.mega(e2);
	edmg1=0;
	edmg1=edmg1+(co1.damage());;
	}else{
	e2=co1.attack(e2);
	edmg1=edmg1+(co1.damage());}
	}
else{
if((a1==2)&&(e1<600)){e1=co1.heal(e1);}
else{
if(a1==3){
e1=co1.defend(e1);}
else{
e2=co1.attack(e2);
edmg1=edmg1+(co1.damage());}}
}
break;}

case 12:{
        wrestler co1;	
	if(a1==1){
	if(edmg1>=500){
	e2=co1.mega(e2);
	edmg1=0;
	edmg1=edmg1+(co1.damage());;
	}else{
	e2=co1.attack(e2);
	edmg1=edmg1+(co1.damage());}
	}
else{
if((a1==2)&&(e1<600)){e1=co1.heal(e1);}
else{
if(a1==3){
e1=co1.defend(e1);}
else{
e2=co1.attack(e2);
edmg1=edmg1+(co1.damage());}}
}
break;}

case 13:{
        bomber co1;	
	if(a1==1){
	if(edmg1>=500){
	e2=co1.mega(e2);
	edmg1=0;
	edmg1=edmg1+(co1.damage());;
	}else{
	e2=co1.attack(e2);
	edmg1=edmg1+(co1.damage());}
	}
else{
if((a1==2)&&(e1<600)){e1=co1.heal(e1);}
else{
if(a1==3){
e1=co1.defend(e1);}
else{
e2=co1.attack(e2);
edmg1=edmg1+(co1.damage());}}
}
break;}

case 14:{
        vampire co1;	
	if(a1==1){
	if(edmg1>=500){
	e2=co1.mega(e2);
	edmg1=0;
	edmg1=edmg1+(co1.damage());;
	}else{
	e2=co1.attack(e2);
	edmg1=edmg1+(co1.damage());}
	}
else{
if((a1==2)&&(e1<600)){e1=co1.heal(e1);}
else{
if(a1==3){
e1=co1.defend(e1);}
else{
e2=co1.attack(e2);
edmg1=edmg1+(co1.damage());}}
}
break;}

case 15:{
        hunter co1;	
	if(a1==1){
	if(edmg1>=500){
	e2=co1.mega(e2);
	edmg1=0;
	edmg1=edmg1+(co1.damage());;
	}else{
	e2=co1.attack(e2);
	edmg1=edmg1+(co1.damage());}
	}
else{
if((a1==2)&&(e1<600)){e1=co1.heal(e1);}
else{
if(a1==3){
e1=co1.defend(e1);}
else{
e2=co1.attack(e2);
edmg1=edmg1+(co1.damage());}}
}
break;}
	}
if((e1<0)||(e2<0))break;
a2=rand()%3+1;
switch(c2){
case 1:{
        knight co2;	
	if(a1==1){
	if(edmg2>=500){
	e1=co2.mega(e1);
	edmg2=0;
	edmg2=edmg2+(co2.damage());;
	}else{
	e1=co2.attack(e1);
	edmg2=edmg2+(co2.damage());}
	}
else{
if((a1==2)&&(e2<600)){e2=co2.heal(e2);}
else{
if(a1==3){
e2=co2.defend(e2);}
else{
e1=co2.attack(e1);
edmg2=edmg2+(co2.damage());}}
}
break;}
case 2:{
        wizard co2;	
	if(a1==1){
	if(edmg2>=500){
	e1=co2.mega(e1);
	edmg2=0;
	edmg2=edmg2+(co2.damage());;
	}else{
	e1=co2.attack(e1);
	edmg2=edmg2+(co2.damage());}
	}
else{
if((a1==2)&&(e2<600)){e2=co2.heal(e2);}
else{
if(a1==3){
e2=co2.defend(e2);}
else{
e1=co2.attack(e1);
edmg2=edmg2+(co2.damage());}}
}
break;}

case 3:{
        ninja co2;	
	if(a1==1){
	if(edmg2>=500){
	e1=co2.mega(e1);
	edmg2=0;
	edmg2=edmg2+(co2.damage());;
	}else{
	e1=co2.attack(e1);
	edmg2=edmg2+(co2.damage());}
	}
else{
if((a1==2)&&(e2<600)){e2=co2.heal(e2);}
else{
if(a1==3){
e2=co2.defend(e2);}
else{
e1=co2.attack(e1);
edmg2=edmg2+(co2.damage());}}
}
break;}

case 4:{
        giant co2;	
	if(a1==1){
	if(edmg2>=500){
	e1=co2.mega(e1);
	edmg2=0;
	edmg2=edmg2+(co2.damage());;
	}else{
	e1=co2.attack(e1);
	edmg2=edmg2+(co2.damage());}
	}
else{
if((a1==2)&&(e2<600)){e2=co2.heal(e2);}
else{
if(a1==3){
e2=co2.defend(e2);}
else{
e1=co2.attack(e1);
edmg2=edmg2+(co2.damage());}}
}
break;}

case 5:{
        witch co2;	
	if(a1==1){
	if(edmg2>=500){
	e1=co2.mega(e1);
	edmg2=0;
	edmg2=edmg2+(co2.damage());;
	}else{
	e1=co2.attack(e1);
	edmg2=edmg2+(co2.damage());}
	}
else{
if((a1==2)&&(e2<600)){e2=co2.heal(e2);}
else{
if(a1==3){
e2=co2.defend(e2);}
else{
e1=co2.attack(e1);
edmg2=edmg2+(co2.damage());}}
}
break;}

case 6:{
        samurai co2;	
	if(a1==1){
	if(edmg2>=500){
	e1=co2.mega(e1);
	edmg2=0;
	edmg2=edmg2+(co2.damage());;
	}else{
	e1=co2.attack(e1);
	edmg2=edmg2+(co2.damage());}
	}
else{
if((a1==2)&&(e2<600)){e2=co2.heal(e2);}
else{
if(a1==3){
e2=co2.defend(e2);}
else{
e1=co2.attack(e1);
edmg2=edmg2+(co2.damage());}}
}
break;}

case 7:{
        robot co2;	
	if(a1==1){
	if(edmg2>=500){
	e1=co2.mega(e1);
	edmg2=0;
	edmg2=edmg2+(co2.damage());;
	}else{
	e1=co2.attack(e1);
	edmg2=edmg2+(co2.damage());}
	}
else{
if((a1==2)&&(e2<600)){e2=co2.heal(e2);}
else{
if(a1==3){
e2=co2.defend(e2);}
else{
e1=co2.attack(e1);
edmg2=edmg2+(co2.damage());}}
}
break;}

case 8:{
        archer co2;	
	if(a1==1){
	if(edmg2>=500){
	e1=co2.mega(e1);
	edmg2=0;
	edmg2=edmg2+(co2.damage());;
	}else{
	e1=co2.attack(e1);
	edmg2=edmg2+(co2.damage());}
	}
else{
if((a1==2)&&(e2<600)){e2=co2.heal(e2);}
else{
if(a1==3){
e2=co2.defend(e2);}
else{
e1=co2.attack(e1);
edmg2=edmg2+(co2.damage());}}
}
break;}

case 9:{
        zombie co2;	
	if(a1==1){
	if(edmg2>=500){
	e1=co2.mega(e1);
	edmg2=0;
	edmg2=edmg2+(co2.damage());;
	}else{
	e1=co2.attack(e1);
	edmg2=edmg2+(co2.damage());}
	}
else{
if((a1==2)&&(e2<600)){e2=co2.heal(e2);}
else{
if(a1==3){
e2=co2.defend(e2);}
else{
e1=co2.attack(e1);
edmg2=edmg2+(co2.damage());}}
}
break;}

case 10:{
        dragon co2;	
	if(a1==1){
	if(edmg2>=500){
	e1=co2.mega(e1);
	edmg2=0;
	edmg2=edmg2+(co2.damage());;
	}else{
	e1=co2.attack(e1);
	edmg2=edmg2+(co2.damage());}
	}
else{
if((a1==2)&&(e2<600)){e2=co2.heal(e2);}
else{
if(a1==3){
e2=co2.defend(e2);}
else{
e1=co2.attack(e1);
edmg2=edmg2+(co2.damage());}}
}
break;}

case 11:{
        pirate co2;	
	if(a1==1){
	if(edmg2>=500){
	e1=co2.mega(e1);
	edmg2=0;
	edmg2=edmg2+(co2.damage());;
	}else{
	e1=co2.attack(e1);
	edmg2=edmg2+(co2.damage());}
	}
else{
if((a1==2)&&(e2<600)){e2=co2.heal(e2);}
else{
if(a1==3){
e2=co2.defend(e2);}
else{
e1=co2.attack(e1);
edmg2=edmg2+(co2.damage());}}
}
break;}

case 12:{
        wrestler co2;	
	if(a1==1){
	if(edmg2>=500){
	e1=co2.mega(e1);
	edmg2=0;
	edmg2=edmg2+(co2.damage());;
	}else{
	e1=co2.attack(e1);
	edmg2=edmg2+(co2.damage());}
	}
else{
if((a1==2)&&(e2<600)){e2=co2.heal(e2);}
else{
if(a1==3){
e2=co2.defend(e2);}
else{
e1=co2.attack(e1);
edmg2=edmg2+(co2.damage());}}
}
break;}

case 13:{
        bomber co2;	
	if(a1==1){
	if(edmg2>=500){
	e1=co2.mega(e1);
	edmg2=0;
	edmg2=edmg2+(co2.damage());;
	}else{
	e1=co2.attack(e1);
	edmg2=edmg2+(co2.damage());}
	}
else{
if((a1==2)&&(e2<600)){e2=co2.heal(e2);}
else{
if(a1==3){
e2=co2.defend(e2);}
else{
e1=co2.attack(e1);
edmg2=edmg2+(co2.damage());}}
}
break;}

case 14:{
        vampire co2;	
	if(a1==1){
	if(edmg2>=500){
	e1=co2.mega(e1);
	edmg2=0;
	edmg2=edmg2+(co2.damage());;
	}else{
	e1=co2.attack(e1);
	edmg2=edmg2+(co2.damage());}
	}
else{
if((a1==2)&&(e2<600)){e2=co2.heal(e2);}
else{
if(a1==3){
e2=co2.defend(e2);}
else{
e1=co2.attack(e1);
edmg2=edmg2+(co2.damage());}}
}
break;}

case 15:{
        hunter co2;	
	if(a1==1){
	if(edmg2>=500){
	e1=co2.mega(e1);
	edmg2=0;
	edmg2=edmg2+(co2.damage());;
	}else{
	e1=co2.attack(e1);
	edmg2=edmg2+(co2.damage());}
	}
else{
if((a1==2)&&(e2<600)){e2=co2.heal(e2);}
else{
if(a1==3){
e2=co2.defend(e2);}
else{
e1=co2.attack(e1);
edmg2=edmg2+(co2.damage());}}
}
break;}
}
std::cout<<"Player 1 "<<e1<<std::endl;
std::cout<<"Player 2 "<<e2<<std::endl;

}while((e1>0)&&(e2>0));
if(e1<=0){std::cout<<"Player 2 wins "<<std::endl;}
else{
if(e2<=0){std::cout<<"Player 1 wins "<<std::endl;}
else {std::cout<<" DRAW "<<std::endl;}}
break;}
case 2:{
std::cout<<"Player 2 will attack first "<<std::endl;
std::cout<<"Player 1 : "<<e1<<std::endl<<"Player 2 : "<<e2<<std::endl;
sleep(3);
do{
a2=rand()%3+1;
switch(c2){
case 1:{
        knight co2;	
	if(a1==1){
	if(edmg2>=500){
	e1=co2.mega(e1);
	edmg2=0;
	edmg2=edmg2+(co2.damage());;
	}else{
	e1=co2.attack(e1);
	edmg2=edmg2+(co2.damage());}
	}
else{
if((a1==2)&&(e2<600)){e2=co2.heal(e2);}
else{
if(a1==3){
e2=co2.defend(e2);}
else{
e1=co2.attack(e1);
edmg2=edmg2+(co2.damage());}}
}
break;}
case 2:{
        wizard co2;	
	if(a1==1){
	if(edmg2>=500){
	e1=co2.mega(e1);
	edmg2=0;
	edmg2=edmg2+(co2.damage());;
	}else{
	e1=co2.attack(e1);
	edmg2=edmg2+(co2.damage());}
	}
else{
if((a1==2)&&(e2<600)){e2=co2.heal(e2);}
else{
if(a1==3){
e2=co2.defend(e2);}
else{
e1=co2.attack(e1);
edmg2=edmg2+(co2.damage());}}
}
break;}

case 3:{
        ninja co2;	
	if(a1==1){
	if(edmg2>=500){
	e1=co2.mega(e1);
	edmg2=0;
	edmg2=edmg2+(co2.damage());;
	}else{
	e1=co2.attack(e1);
	edmg2=edmg2+(co2.damage());}
	}
else{
if((a1==2)&&(e2<600)){e2=co2.heal(e2);}
else{
if(a1==3){
e2=co2.defend(e2);}
else{
e1=co2.attack(e1);
edmg2=edmg2+(co2.damage());}}
}
break;}

case 4:{
        giant co2;	
	if(a1==1){
	if(edmg2>=500){
	e1=co2.mega(e1);
	edmg2=0;
	edmg2=edmg2+(co2.damage());;
	}else{
	e1=co2.attack(e1);
	edmg2=edmg2+(co2.damage());}
	}
else{
if((a1==2)&&(e2<600)){e2=co2.heal(e2);}
else{
if(a1==3){
e2=co2.defend(e2);}
else{
e1=co2.attack(e1);
edmg2=edmg2+(co2.damage());}}
}
break;}

case 5:{
        witch co2;	
	if(a1==1){
	if(edmg2>=500){
	e1=co2.mega(e1);
	edmg2=0;
	edmg2=edmg2+(co2.damage());;
	}else{
	e1=co2.attack(e1);
	edmg2=edmg2+(co2.damage());}
	}
else{
if((a1==2)&&(e2<600)){e2=co2.heal(e2);}
else{
if(a1==3){
e2=co2.defend(e2);}
else{
e1=co2.attack(e1);
edmg2=edmg2+(co2.damage());}}
}
break;}

case 6:{
        samurai co2;	
	if(a1==1){
	if(edmg2>=500){
	e1=co2.mega(e1);
	edmg2=0;
	edmg2=edmg2+(co2.damage());;
	}else{
	e1=co2.attack(e1);
	edmg2=edmg2+(co2.damage());}
	}
else{
if((a1==2)&&(e2<600)){e2=co2.heal(e2);}
else{
if(a1==3){
e2=co2.defend(e2);}
else{
e1=co2.attack(e1);
edmg2=edmg2+(co2.damage());}}
}
break;}

case 7:{
        robot co2;	
	if(a1==1){
	if(edmg2>=500){
	e1=co2.mega(e1);
	edmg2=0;
	edmg2=edmg2+(co2.damage());;
	}else{
	e1=co2.attack(e1);
	edmg2=edmg2+(co2.damage());}
	}
else{
if((a1==2)&&(e2<600)){e2=co2.heal(e2);}
else{
if(a1==3){
e2=co2.defend(e2);}
else{
e1=co2.attack(e1);
edmg2=edmg2+(co2.damage());}}
}
break;}

case 8:{
        archer co2;	
	if(a1==1){
	if(edmg2>=500){
	e1=co2.mega(e1);
	edmg2=0;
	edmg2=edmg2+(co2.damage());;
	}else{
	e1=co2.attack(e1);
	edmg2=edmg2+(co2.damage());}
	}
else{
if((a1==2)&&(e2<600)){e2=co2.heal(e2);}
else{
if(a1==3){
e2=co2.defend(e2);}
else{
e1=co2.attack(e1);
edmg2=edmg2+(co2.damage());}}
}
break;}

case 9:{
        zombie co2;	
	if(a1==1){
	if(edmg2>=500){
	e1=co2.mega(e1);
	edmg2=0;
	edmg2=edmg2+(co2.damage());;
	}else{
	e1=co2.attack(e1);
	edmg2=edmg2+(co2.damage());}
	}
else{
if((a1==2)&&(e2<600)){e2=co2.heal(e2);}
else{
if(a1==3){
e2=co2.defend(e2);}
else{
e1=co2.attack(e1);
edmg2=edmg2+(co2.damage());}}
}
break;}

case 10:{
        dragon co2;	
	if(a1==1){
	if(edmg2>=500){
	e1=co2.mega(e1);
	edmg2=0;
	edmg2=edmg2+(co2.damage());;
	}else{
	e1=co2.attack(e1);
	edmg2=edmg2+(co2.damage());}
	}
else{
if((a1==2)&&(e2<600)){e2=co2.heal(e2);}
else{
if(a1==3){
e2=co2.defend(e2);}
else{
e1=co2.attack(e1);
edmg2=edmg2+(co2.damage());}}
}
break;}

case 11:{
        pirate co2;	
	if(a1==1){
	if(edmg2>=500){
	e1=co2.mega(e1);
	edmg2=0;
	edmg2=edmg2+(co2.damage());;
	}else{
	e1=co2.attack(e1);
	edmg2=edmg2+(co2.damage());}
	}
else{
if((a1==2)&&(e2<600)){e2=co2.heal(e2);}
else{
if(a1==3){
e2=co2.defend(e2);}
else{
e1=co2.attack(e1);
edmg2=edmg2+(co2.damage());}}
}
break;}

case 12:{
        wrestler co2;	
	if(a1==1){
	if(edmg2>=500){
	e1=co2.mega(e1);
	edmg2=0;
	edmg2=edmg2+(co2.damage());;
	}else{
	e1=co2.attack(e1);
	edmg2=edmg2+(co2.damage());}
	}
else{
if((a1==2)&&(e2<600)){e2=co2.heal(e2);}
else{
if(a1==3){
e2=co2.defend(e2);}
else{
e1=co2.attack(e1);
edmg2=edmg2+(co2.damage());}}
}
break;}

case 13:{
        bomber co2;	
	if(a1==1){
	if(edmg2>=500){
	e1=co2.mega(e1);
	edmg2=0;
	edmg2=edmg2+(co2.damage());;
	}else{
	e1=co2.attack(e1);
	edmg2=edmg2+(co2.damage());}
	}
else{
if((a1==2)&&(e2<600)){e2=co2.heal(e2);}
else{
if(a1==3){
e2=co2.defend(e2);}
else{
e1=co2.attack(e1);
edmg2=edmg2+(co2.damage());}}
}
break;}

case 14:{
        vampire co2;	
	if(a1==1){
	if(edmg2>=500){
	e1=co2.mega(e1);
	edmg2=0;
	edmg2=edmg2+(co2.damage());;
	}else{
	e1=co2.attack(e1);
	edmg2=edmg2+(co2.damage());}
	}
else{
if((a1==2)&&(e2<600)){e2=co2.heal(e2);}
else{
if(a1==3){
e2=co2.defend(e2);}
else{
e1=co2.attack(e1);
edmg2=edmg2+(co2.damage());}}
}
break;}

case 15:{
        hunter co2;	
	if(a1==1){
	if(edmg2>=500){
	e1=co2.mega(e1);
	edmg2=0;
	edmg2=edmg2+(co2.damage());;
	}else{
	e1=co2.attack(e1);
	edmg2=edmg2+(co2.damage());}
	}
else{
if((a1==2)&&(e2<600)){e2=co2.heal(e2);}
else{
if(a1==3){
e2=co2.defend(e2);}
else{
e1=co2.attack(e1);
edmg2=edmg2+(co2.damage());}}
}
break;}

}
	if((e1<0)||(e2<0))break;
a1=rand()%3+1;
switch(c1){
case 1:{
        knight co1;	
	if(a1==1){
	if(edmg1>=500){
	e2=co1.mega(e2);
	edmg1=0;
	edmg1=edmg1+(co1.damage());;
	}else{
	e2=co1.attack(e2);
	edmg1=edmg1+(co1.damage());}
	}
else{
if((a1==2)&&(e1<600)){e1=co1.heal(e1);}
else{
if(a1==3){
e1=co1.defend(e1);}
else{
e2=co1.attack(e2);
edmg1=edmg1+(co1.damage());}}
}
break;}

case 2:{
        wizard co1;	
	if(a1==1){
	if(edmg1>=500){
	e2=co1.mega(e2);
	edmg1=0;
	edmg1=edmg1+(co1.damage());;
	}else{
	e2=co1.attack(e2);
	edmg1=edmg1+(co1.damage());}
	}
else{
if((a1==2)&&(e1<600)){e1=co1.heal(e1);}
else{
if(a1==3){
e1=co1.defend(e1);}
else{
e2=co1.attack(e2);
edmg1=edmg1+(co1.damage());}}
}
break;}

case 3:{
        ninja co1;	
	if(a1==1){
	if(edmg1>=500){
	e2=co1.mega(e2);
	edmg1=0;
	edmg1=edmg1+(co1.damage());;
	}else{
	e2=co1.attack(e2);
	edmg1=edmg1+(co1.damage());}
	}
else{
if((a1==2)&&(e1<600)){e1=co1.heal(e1);}
else{
if(a1==3){
e1=co1.defend(e1);}
else{
e2=co1.attack(e2);
edmg1=edmg1+(co1.damage());}}
}
break;}
case 4:{
        giant co1;	
	if(a1==1){
	if(edmg1>=500){
	e2=co1.mega(e2);
	edmg1=0;
	edmg1=edmg1+(co1.damage());;
	}else{
	e2=co1.attack(e2);
	edmg1=edmg1+(co1.damage());}
	}
else{
if((a1==2)&&(e1<600)){e1=co1.heal(e1);}
else{
if(a1==3){
e1=co1.defend(e1);}
else{
e2=co1.attack(e2);
edmg1=edmg1+(co1.damage());}}
}
break;}

case 5:{
        witch co1;	
	if(a1==1){
	if(edmg1>=500){
	e2=co1.mega(e2);
	edmg1=0;
	edmg1=edmg1+(co1.damage());;
	}else{
	e2=co1.attack(e2);
	edmg1=edmg1+(co1.damage());}
	}
else{
if((a1==2)&&(e1<600)){e1=co1.heal(e1);}
else{
if(a1==3){
e1=co1.defend(e1);}
else{
e2=co1.attack(e2);
edmg1=edmg1+(co1.damage());}}
}
break;}

case 6:{
        samurai co1;	
	if(a1==1){
	if(edmg1>=500){
	e2=co1.mega(e2);
	edmg1=0;
	edmg1=edmg1+(co1.damage());;
	}else{
	e2=co1.attack(e2);
	edmg1=edmg1+(co1.damage());}
	}
else{
if((a1==2)&&(e1<600)){e1=co1.heal(e1);}
else{
if(a1==3){
e1=co1.defend(e1);}
else{
e2=co1.attack(e2);
edmg1=edmg1+(co1.damage());}}
}
break;}

case 7:{
        robot co1;	
	if(a1==1){
	if(edmg1>=500){
	e2=co1.mega(e2);
	edmg1=0;
	edmg1=edmg1+(co1.damage());;
	}else{
	e2=co1.attack(e2);
	edmg1=edmg1+(co1.damage());}
	}
else{
if((a1==2)&&(e1<600)){e1=co1.heal(e1);}
else{
if(a1==3){
e1=co1.defend(e1);}
else{
e2=co1.attack(e2);
edmg1=edmg1+(co1.damage());}}
}
break;}

case 8:{
        archer co1;	
	if(a1==1){
	if(edmg1>=500){
	e2=co1.mega(e2);
	edmg1=0;
	edmg1=edmg1+(co1.damage());;
	}else{
	e2=co1.attack(e2);
	edmg1=edmg1+(co1.damage());}
	}
else{
if((a1==2)&&(e1<600)){e1=co1.heal(e1);}
else{
if(a1==3){
e1=co1.defend(e1);}
else{
e2=co1.attack(e2);
edmg1=edmg1+(co1.damage());}}
}
break;}

case 9:{
        zombie co1;	
	if(a1==1){
	if(edmg1>=500){
	e2=co1.mega(e2);
	edmg1=0;
	edmg1=edmg1+(co1.damage());;
	}else{
	e2=co1.attack(e2);
	edmg1=edmg1+(co1.damage());}
	}
else{
if((a1==2)&&(e1<600)){e1=co1.heal(e1);}
else{
if(a1==3){
e1=co1.defend(e1);}
else{
e2=co1.attack(e2);
edmg1=edmg1+(co1.damage());}}
}
break;}

case 10:{
        dragon co1;	
	if(a1==1){
	if(edmg1>=500){
	e2=co1.mega(e2);
	edmg1=0;
	edmg1=edmg1+(co1.damage());;
	}else{
	e2=co1.attack(e2);
	edmg1=edmg1+(co1.damage());}
	}
else{
if((a1==2)&&(e1<600)){e1=co1.heal(e1);}
else{
if(a1==3){
e1=co1.defend(e1);}
else{
e2=co1.attack(e2);
edmg1=edmg1+(co1.damage());}}
}
break;}

case 11:{
        pirate co1;	
	if(a1==1){
	if(edmg1>=500){
	e2=co1.mega(e2);
	edmg1=0;
	edmg1=edmg1+(co1.damage());;
	}else{
	e2=co1.attack(e2);
	edmg1=edmg1+(co1.damage());}
	}
else{
if((a1==2)&&(e1<600)){e1=co1.heal(e1);}
else{
if(a1==3){
e1=co1.defend(e1);}
else{
e2=co1.attack(e2);
edmg1=edmg1+(co1.damage());}}
}
break;}

case 12:{
        wrestler co1;	
	if(a1==1){
	if(edmg1>=500){
	e2=co1.mega(e2);
	edmg1=0;
	edmg1=edmg1+(co1.damage());;
	}else{
	e2=co1.attack(e2);
	edmg1=edmg1+(co1.damage());}
	}
else{
if((a1==2)&&(e1<600)){e1=co1.heal(e1);}
else{
if(a1==3){
e1=co1.defend(e1);}
else{
e2=co1.attack(e2);
edmg1=edmg1+(co1.damage());}}
}
break;}

case 13:{
        bomber co1;	
	if(a1==1){
	if(edmg1>=500){
	e2=co1.mega(e2);
	edmg1=0;
	edmg1=edmg1+(co1.damage());;
	}else{
	e2=co1.attack(e2);
	edmg1=edmg1+(co1.damage());}
	}
else{
if((a1==2)&&(e1<600)){e1=co1.heal(e1);}
else{
if(a1==3){
e1=co1.defend(e1);}
else{
e2=co1.attack(e2);
edmg1=edmg1+(co1.damage());}}
}
break;}

case 14:{
        vampire co1;	
	if(a1==1){
	if(edmg1>=500){
	e2=co1.mega(e2);
	edmg1=0;
	edmg1=edmg1+(co1.damage());;
	}else{
	e2=co1.attack(e2);
	edmg1=edmg1+(co1.damage());}
	}
else{
if((a1==2)&&(e1<600)){e1=co1.heal(e1);}
else{
if(a1==3){
e1=co1.defend(e1);}
else{
e2=co1.attack(e2);
edmg1=edmg1+(co1.damage());}}
}
break;}

case 15:{
        hunter co1;	
	if(a1==1){
	if(edmg1>=500){
	e2=co1.mega(e2);
	edmg1=0;
	edmg1=edmg1+(co1.damage());;
	}else{
	e2=co1.attack(e2);
	edmg1=edmg1+(co1.damage());}
	}
else{
if((a1==2)&&(e1<600)){e1=co1.heal(e1);}
else{
if(a1==3){
e1=co1.defend(e1);}
else{
e2=co1.attack(e2);
edmg1=edmg1+(co1.damage());}}
}
break;}
	}
std::cout<<"Player 1 "<<e1<<std::endl;
std::cout<<"Player 2 "<<e2<<std::endl;

}while((e1>0)&&(e2>0));
if(e1<=0)std::cout<<"Player 2 wins\n";
else{if(e2<=0)std::cout<<"Player 1 wins\n";
else{std::cout<<" Draw \n";
break;}}
break;}}	
break;}
	case 'c':{
c1=rand()%15+1;
c2=rand()%15+1;
edmg1=0,edmg2=0;
std::cout<<" Player 1 is ";
switch(c1){
	case 1:{
	std::cout<<" KNIGHT."<<std::endl;
	knight co1;
	co1.intro();
        e1=co1.enh;
	break;}

	case 2:{
	std::cout<<" WIZARD."<<std::endl;
	wizard co1;
	co1.intro();
	e1=co1.enh;
	break;}

	case 3:{
        std::cout<<" NINJA."<<std::endl;
	ninja co1;
	co1.intro();
	e1=co1.enh;
	break;}
	       
	case 4:{
	std::cout<<" GIANT."<<std::endl;
	giant co1;
	co1.intro();
	e1=co1.enh;
	break;
	}

	case 5:{
	std::cout<<" WITCH."<<std::endl;
	witch co1;
	co1.intro();
	e1=co1.enh;
	break;
	}
	case 6:{
	std::cout<<" SAMURAI."<<std::endl;
	samurai co1;
	co1.intro();
	e1=co1.enh;
	break;
	}
	case 7:{
	std::cout<<" ROBOT."<<std::endl;
	robot co1;
	co1.intro();
	e1=co1.enh;
	break;
	}
	case 8:{
	std::cout<<" ARCHER."<<std::endl;
	archer co1;
	co1.intro();
	e1=co1.enh;
	break;
	}
	case 9:{
	std::cout<<" ZOMBIE."<<std::endl;
	zombie co1;
	co1.intro();
	e1=co1.enh;
	break;
	}
	case 10:{
	std::cout<<" DRAGON."<<std::endl;
	dragon co1;
	co1.intro();
	e1=co1.enh;
	break;
	}
	case 11:{
        std::cout<<" PIRATE."<<std::endl;
	pirate co1;
	co1.intro();
	e1=co1.enh;
	break;
	}		
	case 12:{
	std::cout<<" WRESTLER."<<std::endl;
	wrestler co1;
	co1.intro();
	e1=co1.enh;
	break;
	}
	case 13:{
	std::cout<<" BOMBER."<<std::endl;
	bomber co1;
	co1.intro();
	e1=co1.enh;
	break;
	}
        case 14:{
	std::cout<<" VAMPIRE."<<std::endl;
	vampire co1;
	co1.intro();
	e1=co1.enh;
	break;
	}	
        case 15:{
	std::cout<<" HUNTER."<<std::endl;
	hunter co1;
	co1.intro();
	e1=co1.enh;
	break;
	}}
std::cout<<"Player two is ";
switch(c2){
	case 1:{
	std::cout<<" KNIGHT ."<<std::endl;
	knight co2;
	co2.intro();
        e2=co2.enh;
	break;}

	case 2:{
	std::cout<<" WIZARD ."<<std::endl;
	wizard co2;
	co2.intro();
	e2=co2.enh;
	break;}

	case 3:{
	std::cout<<" NINJA."<<std::endl;
	ninja co2;
	co2.intro();
	e2=co2.enh;
	break;}
	       
	case 4:{
	std::cout<<" GIANT."<<std::endl;
	giant co2;
	co2.intro();
	e2=co2.enh;
	break;
	}

	case 5:{
	std::cout<<" WITCH."<<std::endl;
	witch co2;
	co2.intro();
	e2=co2.enh;
	break;
	}
	case 6:{
	std::cout<<" SAMURAI."<<std::endl;
	samurai co2;
	co2.intro();
	e2=co2.enh;
	break;
	}
	case 7:{
	std::cout<<" ROBOT."<<std::endl;
	robot co2;
	co2.intro();
	e2=co2.enh;
	break;
	}
	case 8:{
	std::cout<<" ARCHER."<<std::endl;
	archer co2;
	co2.intro();
	e2=co2.enh;
	break;
	}
	case 9:{
	std::cout<<" ZOMBIE."<<std::endl;
	zombie co2;
	co2.intro();
	e2=co2.enh;
	break;
	}
	case 10:{
	std::cout<<" DRAGON."<<std::endl;
	dragon co2;
	co2.intro();
	e2=co2.enh;
	break;
	}
	case 11:{
	std::cout<<" PIRATE."<<std::endl;
	pirate co2;
	co2.intro();
	e2=co2.enh;
	break;
	}		
	case 12:{
	std::cout<<" WRESTLER."<<std::endl;
	wrestler co2;
	co2.intro();
	e2=co2.enh;
	break;
	}
	case 13:{
	std::cout<<" BOMBER."<<std::endl;
	bomber co2;
	co2.intro();
	e2=co2.enh;
	break;
	}
        case 14:{
	std::cout<<" VAMPIRE."<<std::endl;
	vampire co2;
	co2.intro();
	e2=co2.enh;
	break;
	}	
        case 15:{
	std::cout<<" HUNTER."<<std::endl;
	hunter co2;
	co2.intro();
	e2=co2.enh;
	break;
	}}
sleep(3);
t=rand()%2+1;
std::cout<<" Toss time!!"<<std::endl;
switch (t){
case 1:{
std::cout<<" Player 1 will attack first."<<std::endl;
std::cout<<"player 1 h "<<e1<<std::endl<<"player 2 h "<<e2<<std::endl;
sleep(5);
do{
a1=rand()%3+1;
switch(c1){
case 1:{
        knight co1;	
	if(a1==1){
	if(edmg1>=500){
	e2=co1.mega(e2);
	edmg1=0;
	edmg1=edmg1+(co1.damage());;
	}else{
	e2=co1.attack(e2);
	edmg1=edmg1+(co1.damage());}
	}
else{
if((a1==2)&&(e1<600)){e1=co1.heal(e1);}
else{
if(a1==3){
e1=co1.defend(e1);}
else{
e2=co1.attack(e2);
edmg1=edmg1+(co1.damage());}}
}
break;}

case 2:{
        wizard co1;	
	if(a1==1){
	if(edmg1>=500){
	e2=co1.mega(e2);
	edmg1=0;
	edmg1=edmg1+(co1.damage());;
	}else{
	e2=co1.attack(e2);
	edmg1=edmg1+(co1.damage());}
	}
else{
if((a1==2)&&(e1<600)){e1=co1.heal(e1);}
else{
if(a1==3){
e1=co1.defend(e1);}
else{
e2=co1.attack(e2);
edmg1=edmg1+(co1.damage());}}
}
break;}

case 3:{
        ninja co1;	
	if(a1==1){
	if(edmg1>=500){
	e2=co1.mega(e2);
	edmg1=0;
	edmg1=edmg1+(co1.damage());;
	}else{
	e2=co1.attack(e2);
	edmg1=edmg1+(co1.damage());}
	}
else{
if((a1==2)&&(e1<600)){e1=co1.heal(e1);}
else{
if(a1==3){
e1=co1.defend(e1);}
else{
e2=co1.attack(e2);
edmg1=edmg1+(co1.damage());}}
}
break;}
case 4:{
        giant co1;	
	if(a1==1){
	if(edmg1>=500){
	e2=co1.mega(e2);
	edmg1=0;
	edmg1=edmg1+(co1.damage());;
	}else{
	e2=co1.attack(e2);
	edmg1=edmg1+(co1.damage());}
	}
else{
if((a1==2)&&(e1<600)){e1=co1.heal(e1);}
else{
if(a1==3){
e1=co1.defend(e1);}
else{
e2=co1.attack(e2);
edmg1=edmg1+(co1.damage());}}
}
break;}

case 5:{
        witch co1;	
	if(a1==1){
	if(edmg1>=500){
	e2=co1.mega(e2);
	edmg1=0;
	edmg1=edmg1+(co1.damage());;
	}else{
	e2=co1.attack(e2);
	edmg1=edmg1+(co1.damage());}
	}
else{
if((a1==2)&&(e1<600)){e1=co1.heal(e1);}
else{
if(a1==3){
e1=co1.defend(e1);}
else{
e2=co1.attack(e2);
edmg1=edmg1+(co1.damage());}}
}
break;}

case 6:{
        samurai co1;	
	if(a1==1){
	if(edmg1>=500){
	e2=co1.mega(e2);
	edmg1=0;
	edmg1=edmg1+(co1.damage());;
	}else{
	e2=co1.attack(e2);
	edmg1=edmg1+(co1.damage());}
	}
else{
if((a1==2)&&(e1<600)){e1=co1.heal(e1);}
else{
if(a1==3){
e1=co1.defend(e1);}
else{
e2=co1.attack(e2);
edmg1=edmg1+(co1.damage());}}
}
break;}

case 7:{
        robot co1;	
	if(a1==1){
	if(edmg1>=500){
	e2=co1.mega(e2);
	edmg1=0;
	edmg1=edmg1+(co1.damage());;
	}else{
	e2=co1.attack(e2);
	edmg1=edmg1+(co1.damage());}
	}
else{
if((a1==2)&&(e1<600)){e1=co1.heal(e1);}
else{
if(a1==3){
e1=co1.defend(e1);}
else{
e2=co1.attack(e2);
edmg1=edmg1+(co1.damage());}}
}
break;}

case 8:{
        archer co1;	
	if(a1==1){
	if(edmg1>=500){
	e2=co1.mega(e2);
	edmg1=0;
	edmg1=edmg1+(co1.damage());;
	}else{
	e2=co1.attack(e2);
	edmg1=edmg1+(co1.damage());}
	}
else{
if((a1==2)&&(e1<600)){e1=co1.heal(e1);}
else{
if(a1==3){
e1=co1.defend(e1);}
else{
e2=co1.attack(e2);
edmg1=edmg1+(co1.damage());}}
}
break;}

case 9:{
        zombie co1;	
	if(a1==1){
	if(edmg1>=500){
	e2=co1.mega(e2);
	edmg1=0;
	edmg1=edmg1+(co1.damage());;
	}else{
	e2=co1.attack(e2);
	edmg1=edmg1+(co1.damage());}
	}
else{
if((a1==2)&&(e1<600)){e1=co1.heal(e1);}
else{
if(a1==3){
e1=co1.defend(e1);}
else{
e2=co1.attack(e2);
edmg1=edmg1+(co1.damage());}}
}
break;}

case 10:{
        dragon co1;	
	if(a1==1){
	if(edmg1>=500){
	e2=co1.mega(e2);
	edmg1=0;
	edmg1=edmg1+(co1.damage());;
	}else{
	e2=co1.attack(e2);
	edmg1=edmg1+(co1.damage());}
	}
else{
if((a1==2)&&(e1<600)){e1=co1.heal(e1);}
else{
if(a1==3){
e1=co1.defend(e1);}
else{
e2=co1.attack(e2);
edmg1=edmg1+(co1.damage());}}
}
break;}

case 11:{
        pirate co1;	
	if(a1==1){
	if(edmg1>=500){
	e2=co1.mega(e2);
	edmg1=0;
	edmg1=edmg1+(co1.damage());;
	}else{
	e2=co1.attack(e2);
	edmg1=edmg1+(co1.damage());}
	}
else{
if((a1==2)&&(e1<600)){e1=co1.heal(e1);}
else{
if(a1==3){
e1=co1.defend(e1);}
else{
e2=co1.attack(e2);
edmg1=edmg1+(co1.damage());}}
}
break;}

case 12:{
        wrestler co1;	
	if(a1==1){
	if(edmg1>=500){
	e2=co1.mega(e2);
	edmg1=0;
	edmg1=edmg1+(co1.damage());;
	}else{
	e2=co1.attack(e2);
	edmg1=edmg1+(co1.damage());}
	}
else{
if((a1==2)&&(e1<600)){e1=co1.heal(e1);}
else{
if(a1==3){
e1=co1.defend(e1);}
else{
e2=co1.attack(e2);
edmg1=edmg1+(co1.damage());}}
}
break;}

case 13:{
        bomber co1;	
	if(a1==1){
	if(edmg1>=500){
	e2=co1.mega(e2);
	edmg1=0;
	edmg1=edmg1+(co1.damage());;
	}else{
	e2=co1.attack(e2);
	edmg1=edmg1+(co1.damage());}
	}
else{
if((a1==2)&&(e1<600)){e1=co1.heal(e1);}
else{
if(a1==3){
e1=co1.defend(e1);}
else{
e2=co1.attack(e2);
edmg1=edmg1+(co1.damage());}}
}
break;}

case 14:{
        vampire co1;	
	if(a1==1){
	if(edmg1>=500){
	e2=co1.mega(e2);
	edmg1=0;
	edmg1=edmg1+(co1.damage());;
	}else{
	e2=co1.attack(e2);
	edmg1=edmg1+(co1.damage());}
	}
else{
if((a1==2)&&(e1<600)){e1=co1.heal(e1);}
else{
if(a1==3){
e1=co1.defend(e1);}
else{
e2=co1.attack(e2);
edmg1=edmg1+(co1.damage());}}
}
break;}

case 15:{
        hunter co1;	
	if(a1==1){
	if(edmg1>=500){
	e2=co1.mega(e2);
	edmg1=0;
	edmg1=edmg1+(co1.damage());;
	}else{
	e2=co1.attack(e2);
	edmg1=edmg1+(co1.damage());}
	}
else{
if((a1==2)&&(e1<600)){e1=co1.heal(e1);}
else{
if(a1==3){
e1=co1.defend(e1);}
else{
e2=co1.attack(e2);
edmg1=edmg1+(co1.damage());}}
}
break;}

	}
if((e1<0)||(e2<0))break;
a2=rand()%3+1;
switch(c2){
case 1:{
        knight co2;	
	if(a1==1){
	if(edmg2>=500){
	e1=co2.mega(e1);
	edmg2=0;
	edmg2=edmg2+(co2.damage());;
	}else{
	e1=co2.attack(e1);
	edmg2=edmg2+(co2.damage());}
	}
else{
if((a1==2)&&(e2<600)){e2=co2.heal(e2);}
else{
if(a1==3){
e2=co2.defend(e2);}
else{
e1=co2.attack(e1);
edmg2=edmg2+(co2.damage());}}
}
break;}
case 2:{
        wizard co2;	
	if(a1==1){
	if(edmg2>=500){
	e1=co2.mega(e1);
	edmg2=0;
	edmg2=edmg2+(co2.damage());;
	}else{
	e1=co2.attack(e1);
	edmg2=edmg2+(co2.damage());}
	}
else{
if((a1==2)&&(e2<600)){e2=co2.heal(e2);}
else{
if(a1==3){
e2=co2.defend(e2);}
else{
e1=co2.attack(e1);
edmg2=edmg2+(co2.damage());}}
}
break;}

case 3:{
        ninja co2;	
	if(a1==1){
	if(edmg2>=500){
	e1=co2.mega(e1);
	edmg2=0;
	edmg2=edmg2+(co2.damage());;
	}else{
	e1=co2.attack(e1);
	edmg2=edmg2+(co2.damage());}
	}
else{
if((a1==2)&&(e2<600)){e2=co2.heal(e2);}
else{
if(a1==3){
e2=co2.defend(e2);}
else{
e1=co2.attack(e1);
edmg2=edmg2+(co2.damage());}}
}
break;}

case 4:{
        giant co2;	
	if(a1==1){
	if(edmg2>=500){
	e1=co2.mega(e1);
	edmg2=0;
	edmg2=edmg2+(co2.damage());;
	}else{
	e1=co2.attack(e1);
	edmg2=edmg2+(co2.damage());}
	}
else{
if((a1==2)&&(e2<600)){e2=co2.heal(e2);}
else{
if(a1==3){
e2=co2.defend(e2);}
else{
e1=co2.attack(e1);
edmg2=edmg2+(co2.damage());}}
}
break;}

case 5:{
        witch co2;	
	if(a1==1){
	if(edmg2>=500){
	e1=co2.mega(e1);
	edmg2=0;
	edmg2=edmg2+(co2.damage());;
	}else{
	e1=co2.attack(e1);
	edmg2=edmg2+(co2.damage());}
	}
else{
if((a1==2)&&(e2<600)){e2=co2.heal(e2);}
else{
if(a1==3){
e2=co2.defend(e2);}
else{
e1=co2.attack(e1);
edmg2=edmg2+(co2.damage());}}
}
break;}

case 6:{
        samurai co2;	
	if(a1==1){
	if(edmg2>=500){
	e1=co2.mega(e1);
	edmg2=0;
	edmg2=edmg2+(co2.damage());;
	}else{
	e1=co2.attack(e1);
	edmg2=edmg2+(co2.damage());}
	}
else{
if((a1==2)&&(e2<600)){e2=co2.heal(e2);}
else{
if(a1==3){
e2=co2.defend(e2);}
else{
e1=co2.attack(e1);
edmg2=edmg2+(co2.damage());}}
}
break;}

case 7:{
        robot co2;	
	if(a1==1){
	if(edmg2>=500){
	e1=co2.mega(e1);
	edmg2=0;
	edmg2=edmg2+(co2.damage());;
	}else{
	e1=co2.attack(e1);
	edmg2=edmg2+(co2.damage());}
	}
else{
if((a1==2)&&(e2<600)){e2=co2.heal(e2);}
else{
if(a1==3){
e2=co2.defend(e2);}
else{
e1=co2.attack(e1);
edmg2=edmg2+(co2.damage());}}
}
break;}

case 8:{
        archer co2;	
	if(a1==1){
	if(edmg2>=500){
	e1=co2.mega(e1);
	edmg2=0;
	edmg2=edmg2+(co2.damage());;
	}else{
	e1=co2.attack(e1);
	edmg2=edmg2+(co2.damage());}
	}
else{
if((a1==2)&&(e2<600)){e2=co2.heal(e2);}
else{
if(a1==3){
e2=co2.defend(e2);}
else{
e1=co2.attack(e1);
edmg2=edmg2+(co2.damage());}}
}
break;}

case 9:{
        zombie co2;	
	if(a1==1){
	if(edmg2>=500){
	e1=co2.mega(e1);
	edmg2=0;
	edmg2=edmg2+(co2.damage());;
	}else{
	e1=co2.attack(e1);
	edmg2=edmg2+(co2.damage());}
	}
else{
if((a1==2)&&(e2<600)){e2=co2.heal(e2);}
else{
if(a1==3){
e2=co2.defend(e2);}
else{
e1=co2.attack(e1);
edmg2=edmg2+(co2.damage());}}
}
break;}

case 10:{
        dragon co2;	
	if(a1==1){
	if(edmg2>=500){
	e1=co2.mega(e1);
	edmg2=0;
	edmg2=edmg2+(co2.damage());;
	}else{
	e1=co2.attack(e1);
	edmg2=edmg2+(co2.damage());}
	}
else{
if((a1==2)&&(e2<600)){e2=co2.heal(e2);}
else{
if(a1==3){
e2=co2.defend(e2);}
else{
e1=co2.attack(e1);
edmg2=edmg2+(co2.damage());}}
}
break;}

case 11:{
        pirate co2;	
	if(a1==1){
	if(edmg2>=500){
	e1=co2.mega(e1);
	edmg2=0;
	edmg2=edmg2+(co2.damage());;
	}else{
	e1=co2.attack(e1);
	edmg2=edmg2+(co2.damage());}
	}
else{
if((a1==2)&&(e2<600)){e2=co2.heal(e2);}
else{
if(a1==3){
e2=co2.defend(e2);}
else{
e1=co2.attack(e1);
edmg2=edmg2+(co2.damage());}}
}
break;}

case 12:{
        wrestler co2;	
	if(a1==1){
	if(edmg2>=500){
	e1=co2.mega(e1);
	edmg2=0;
	edmg2=edmg2+(co2.damage());;
	}else{
	e1=co2.attack(e1);
	edmg2=edmg2+(co2.damage());}
	}
else{
if((a1==2)&&(e2<600)){e2=co2.heal(e2);}
else{
if(a1==3){
e2=co2.defend(e2);}
else{
e1=co2.attack(e1);
edmg2=edmg2+(co2.damage());}}
}
break;}

case 13:{
        bomber co2;	
	if(a1==1){
	if(edmg2>=500){
	e1=co2.mega(e1);
	edmg2=0;
	edmg2=edmg2+(co2.damage());;
	}else{
	e1=co2.attack(e1);
	edmg2=edmg2+(co2.damage());}
	}
else{
if((a1==2)&&(e2<600)){e2=co2.heal(e2);}
else{
if(a1==3){
e2=co2.defend(e2);}
else{
e1=co2.attack(e1);
edmg2=edmg2+(co2.damage());}}
}
break;}

case 14:{
        vampire co2;	
	if(a1==1){
	if(edmg2>=500){
	e1=co2.mega(e1);
	edmg2=0;
	edmg2=edmg2+(co2.damage());;
	}else{
	e1=co2.attack(e1);
	edmg2=edmg2+(co2.damage());}
	}
else{
if((a1==2)&&(e2<600)){e2=co2.heal(e2);}
else{
if(a1==3){
e2=co2.defend(e2);}
else{
e1=co2.attack(e1);
edmg2=edmg2+(co2.damage());}}
}
break;}

case 15:{
        hunter co2;	
	if(a1==1){
	if(edmg2>=500){
	e1=co2.mega(e1);
	edmg2=0;
	edmg2=edmg2+(co2.damage());;
	}else{
	e1=co2.attack(e1);
	edmg2=edmg2+(co2.damage());}
	}
else{
if((a1==2)&&(e2<600)){e2=co2.heal(e2);}
else{
if(a1==3){
e2=co2.defend(e2);}
else{
e1=co2.attack(e1);
edmg2=edmg2+(co2.damage());}}
}
break;}

}
std::cout<<"Player 1 "<<e1<<std::endl;
std::cout<<"Player 2 "<<e2<<std::endl;

}while((e1>0)&&(e2>0));
if(e1<=0){std::cout<<"Player 2 wins "<<std::endl;}
else{
if(e2<=0){std::cout<<"Player 1 wins "<<std::endl;}
else {std::cout<<" DRAW "<<std::endl;}}
break;}
case 2:{
std::cout<<"Player 2 will attack first "<<std::endl;
std::cout<<"Player 1 : "<<e1<<std::endl<<"Player 2 : "<<e2<<std::endl;
sleep(3);
do{
a2=rand()%3+1;
switch(c2){
case 1:{
        knight co2;	
	if(a1==1){
	if(edmg2>=500){
	e1=co2.mega(e1);
	edmg2=0;
	edmg2=edmg2+(co2.damage());;
	}else{
	e1=co2.attack(e1);
	edmg2=edmg2+(co2.damage());}
	}
else{
if((a1==2)&&(e2<600)){e2=co2.heal(e2);}
else{
if(a1==3){
e2=co2.defend(e2);}
else{
e1=co2.attack(e1);
edmg2=edmg2+(co2.damage());}}
}
break;}
case 2:{
        wizard co2;	
	if(a1==1){
	if(edmg2>=500){
	e1=co2.mega(e1);
	edmg2=0;
	edmg2=edmg2+(co2.damage());;
	}else{
	e1=co2.attack(e1);
	edmg2=edmg2+(co2.damage());}
	}
else{
if((a1==2)&&(e2<600)){e2=co2.heal(e2);}
else{
if(a1==3){
e2=co2.defend(e2);}
else{
e1=co2.attack(e1);
edmg2=edmg2+(co2.damage());}}
}
break;}

case 3:{
        ninja co2;	
	if(a1==1){
	if(edmg2>=500){
	e1=co2.mega(e1);
	edmg2=0;
	edmg2=edmg2+(co2.damage());;
	}else{
	e1=co2.attack(e1);
	edmg2=edmg2+(co2.damage());}
	}
else{
if((a1==2)&&(e2<600)){e2=co2.heal(e2);}
else{
if(a1==3){
e2=co2.defend(e2);}
else{
e1=co2.attack(e1);
edmg2=edmg2+(co2.damage());}}
}
break;}

case 4:{
        giant co2;	
	if(a1==1){
	if(edmg2>=500){
	e1=co2.mega(e1);
	edmg2=0;
	edmg2=edmg2+(co2.damage());;
	}else{
	e1=co2.attack(e1);
	edmg2=edmg2+(co2.damage());}
	}
else{
if((a1==2)&&(e2<600)){e2=co2.heal(e2);}
else{
if(a1==3){
e2=co2.defend(e2);}
else{
e1=co2.attack(e1);
edmg2=edmg2+(co2.damage());}}
}
break;}

case 5:{
        witch co2;	
	if(a1==1){
	if(edmg2>=500){
	e1=co2.mega(e1);
	edmg2=0;
	edmg2=edmg2+(co2.damage());;
	}else{
	e1=co2.attack(e1);
	edmg2=edmg2+(co2.damage());}
	}
else{
if((a1==2)&&(e2<600)){e2=co2.heal(e2);}
else{
if(a1==3){
e2=co2.defend(e2);}
else{
e1=co2.attack(e1);
edmg2=edmg2+(co2.damage());}}
}
break;}

case 6:{
        samurai co2;	
	if(a1==1){
	if(edmg2>=500){
	e1=co2.mega(e1);
	edmg2=0;
	edmg2=edmg2+(co2.damage());;
	}else{
	e1=co2.attack(e1);
	edmg2=edmg2+(co2.damage());}
	}
else{
if((a1==2)&&(e2<600)){e2=co2.heal(e2);}
else{
if(a1==3){
e2=co2.defend(e2);}
else{
e1=co2.attack(e1);
edmg2=edmg2+(co2.damage());}}
}
break;}

case 7:{
        robot co2;	
	if(a1==1){
	if(edmg2>=500){
	e1=co2.mega(e1);
	edmg2=0;
	edmg2=edmg2+(co2.damage());;
	}else{
	e1=co2.attack(e1);
	edmg2=edmg2+(co2.damage());}
	}
else{
if((a1==2)&&(e2<600)){e2=co2.heal(e2);}
else{
if(a1==3){
e2=co2.defend(e2);}
else{
e1=co2.attack(e1);
edmg2=edmg2+(co2.damage());}}
}
break;}

case 8:{
        archer co2;	
	if(a1==1){
	if(edmg2>=500){
	e1=co2.mega(e1);
	edmg2=0;
	edmg2=edmg2+(co2.damage());;
	}else{
	e1=co2.attack(e1);
	edmg2=edmg2+(co2.damage());}
	}
else{
if((a1==2)&&(e2<600)){e2=co2.heal(e2);}
else{
if(a1==3){
e2=co2.defend(e2);}
else{
e1=co2.attack(e1);
edmg2=edmg2+(co2.damage());}}
}
break;}

case 9:{
        zombie co2;	
	if(a1==1){
	if(edmg2>=500){
	e1=co2.mega(e1);
	edmg2=0;
	edmg2=edmg2+(co2.damage());;
	}else{
	e1=co2.attack(e1);
	edmg2=edmg2+(co2.damage());}
	}
else{
if((a1==2)&&(e2<600)){e2=co2.heal(e2);}
else{
if(a1==3){
e2=co2.defend(e2);}
else{
e1=co2.attack(e1);
edmg2=edmg2+(co2.damage());}}
}
break;}

case 10:{
        dragon co2;	
	if(a1==1){
	if(edmg2>=500){
	e1=co2.mega(e1);
	edmg2=0;
	edmg2=edmg2+(co2.damage());;
	}else{
	e1=co2.attack(e1);
	edmg2=edmg2+(co2.damage());}
	}
else{
if((a1==2)&&(e2<600)){e2=co2.heal(e2);}
else{
if(a1==3){
e2=co2.defend(e2);}
else{
e1=co2.attack(e1);
edmg2=edmg2+(co2.damage());}}
}
break;}

case 11:{
        pirate co2;	
	if(a1==1){
	if(edmg2>=500){
	e1=co2.mega(e1);
	edmg2=0;
	edmg2=edmg2+(co2.damage());;
	}else{
	e1=co2.attack(e1);
	edmg2=edmg2+(co2.damage());}
	}
else{
if((a1==2)&&(e2<600)){e2=co2.heal(e2);}
else{
if(a1==3){
e2=co2.defend(e2);}
else{
e1=co2.attack(e1);
edmg2=edmg2+(co2.damage());}}
}
break;}

case 12:{
        wrestler co2;	
	if(a1==1){
	if(edmg2>=500){
	e1=co2.mega(e1);
	edmg2=0;
	edmg2=edmg2+(co2.damage());;
	}else{
	e1=co2.attack(e1);
	edmg2=edmg2+(co2.damage());}
	}
else{
if((a1==2)&&(e2<600)){e2=co2.heal(e2);}
else{
if(a1==3){
e2=co2.defend(e2);}
else{
e1=co2.attack(e1);
edmg2=edmg2+(co2.damage());}}
}
break;}

case 13:{
        bomber co2;	
	if(a1==1){
	if(edmg2>=500){
	e1=co2.mega(e1);
	edmg2=0;
	edmg2=edmg2+(co2.damage());;
	}else{
	e1=co2.attack(e1);
	edmg2=edmg2+(co2.damage());}
	}
else{
if((a1==2)&&(e2<600)){e2=co2.heal(e2);}
else{
if(a1==3){
e2=co2.defend(e2);}
else{
e1=co2.attack(e1);
edmg2=edmg2+(co2.damage());}}
}
break;}

case 14:{
        vampire co2;	
	if(a1==1){
	if(edmg2>=500){
	e1=co2.mega(e1);
	edmg2=0;
	edmg2=edmg2+(co2.damage());;
	}else{
	e1=co2.attack(e1);
	edmg2=edmg2+(co2.damage());}
	}
else{
if((a1==2)&&(e2<600)){e2=co2.heal(e2);}
else{
if(a1==3){
e2=co2.defend(e2);}
else{
e1=co2.attack(e1);
edmg2=edmg2+(co2.damage());}}
}
break;}

case 15:{
        hunter co2;	
	if(a1==1){
	if(edmg2>=500){
	e1=co2.mega(e1);
	edmg2=0;
	edmg2=edmg2+(co2.damage());;
	}else{
	e1=co2.attack(e1);
	edmg2=edmg2+(co2.damage());}
	}
else{
if((a1==2)&&(e2<600)){e2=co2.heal(e2);}
else{
if(a1==3){
e2=co2.defend(e2);}
else{
e1=co2.attack(e1);
edmg2=edmg2+(co2.damage());}}
}
break;}

	}
if((e1<0)||(e2<0))break;
a1=rand()%3+1;
switch(c1){
case 1:{
        knight co1;	
	if(a1==1){
	if(edmg1>=500){
	e2=co1.mega(e2);
	edmg1=0;
	edmg1=edmg1+(co1.damage());;
	}else{
	e2=co1.attack(e2);
	edmg1=edmg1+(co1.damage());}
	}
else{
if((a1==2)&&(e1<600)){e1=co1.heal(e1);}
else{
if(a1==3){
e1=co1.defend(e1);}
else{
e2=co1.attack(e2);
edmg1=edmg1+(co1.damage());}}
}
break;}

case 2:{
        wizard co1;	
	if(a1==1){
	if(edmg1>=500){
	e2=co1.mega(e2);
	edmg1=0;
	edmg1=edmg1+(co1.damage());;
	}else{
	e2=co1.attack(e2);
	edmg1=edmg1+(co1.damage());}
	}
else{
if((a1==2)&&(e1<600)){e1=co1.heal(e1);}
else{
if(a1==3){
e1=co1.defend(e1);}
else{
e2=co1.attack(e2);
edmg1=edmg1+(co1.damage());}}
}
break;}

case 3:{
        ninja co1;	
	if(a1==1){
	if(edmg1>=500){
	e2=co1.mega(e2);
	edmg1=0;
	edmg1=edmg1+(co1.damage());;
	}else{
	e2=co1.attack(e2);
	edmg1=edmg1+(co1.damage());}
	}
else{
if((a1==2)&&(e1<600)){e1=co1.heal(e1);}
else{
if(a1==3){
e1=co1.defend(e1);}
else{
e2=co1.attack(e2);
edmg1=edmg1+(co1.damage());}}
}
break;}
case 4:{
        giant co1;	
	if(a1==1){
	if(edmg1>=500){
	e2=co1.mega(e2);
	edmg1=0;
	edmg1=edmg1+(co1.damage());;
	}else{
	e2=co1.attack(e2);
	edmg1=edmg1+(co1.damage());}
	}
else{
if((a1==2)&&(e1<600)){e1=co1.heal(e1);}
else{
if(a1==3){
e1=co1.defend(e1);}
else{
e2=co1.attack(e2);
edmg1=edmg1+(co1.damage());}}
}
break;}

case 5:{
        witch co1;	
	if(a1==1){
	if(edmg1>=500){
	e2=co1.mega(e2);
	edmg1=0;
	edmg1=edmg1+(co1.damage());;
	}else{
	e2=co1.attack(e2);
	edmg1=edmg1+(co1.damage());}
	}
else{
if((a1==2)&&(e1<600)){e1=co1.heal(e1);}
else{
if(a1==3){
e1=co1.defend(e1);}
else{
e2=co1.attack(e2);
edmg1=edmg1+(co1.damage());}}
}
break;}

case 6:{
        samurai co1;	
	if(a1==1){
	if(edmg1>=500){
	e2=co1.mega(e2);
	edmg1=0;
	edmg1=edmg1+(co1.damage());;
	}else{
	e2=co1.attack(e2);
	edmg1=edmg1+(co1.damage());}
	}
else{
if((a1==2)&&(e1<600)){e1=co1.heal(e1);}
else{
if(a1==3){
e1=co1.defend(e1);}
else{
e2=co1.attack(e2);
edmg1=edmg1+(co1.damage());}}
}
break;}

case 7:{
        robot co1;	
	if(a1==1){
	if(edmg1>=500){
	e2=co1.mega(e2);
	edmg1=0;
	edmg1=edmg1+(co1.damage());;
	}else{
	e2=co1.attack(e2);
	edmg1=edmg1+(co1.damage());}
	}
else{
if((a1==2)&&(e1<600)){e1=co1.heal(e1);}
else{
if(a1==3){
e1=co1.defend(e1);}
else{
e2=co1.attack(e2);
edmg1=edmg1+(co1.damage());}}
}
break;}

case 8:{
        archer co1;	
	if(a1==1){
	if(edmg1>=500){
	e2=co1.mega(e2);
	edmg1=0;
	edmg1=edmg1+(co1.damage());;
	}else{
	e2=co1.attack(e2);
	edmg1=edmg1+(co1.damage());}
	}
else{
if((a1==2)&&(e1<600)){e1=co1.heal(e1);}
else{
if(a1==3){
e1=co1.defend(e1);}
else{
e2=co1.attack(e2);
edmg1=edmg1+(co1.damage());}}
}
break;}

case 9:{
        zombie co1;	
	if(a1==1){
	if(edmg1>=500){
	e2=co1.mega(e2);
	edmg1=0;
	edmg1=edmg1+(co1.damage());;
	}else{
	e2=co1.attack(e2);
	edmg1=edmg1+(co1.damage());}
	}
else{
if((a1==2)&&(e1<600)){e1=co1.heal(e1);}
else{
if(a1==3){
e1=co1.defend(e1);}
else{
e2=co1.attack(e2);
edmg1=edmg1+(co1.damage());}}
}
break;}

case 10:{
        dragon co1;	
	if(a1==1){
	if(edmg1>=500){
	e2=co1.mega(e2);
	edmg1=0;
	edmg1=edmg1+(co1.damage());;
	}else{
	e2=co1.attack(e2);
	edmg1=edmg1+(co1.damage());}
	}
else{
if((a1==2)&&(e1<600)){e1=co1.heal(e1);}
else{
if(a1==3){
e1=co1.defend(e1);}
else{
e2=co1.attack(e2);
edmg1=edmg1+(co1.damage());}}
}
break;}

case 11:{
        pirate co1;	
	if(a1==1){
	if(edmg1>=500){
	e2=co1.mega(e2);
	edmg1=0;
	edmg1=edmg1+(co1.damage());;
	}else{
	e2=co1.attack(e2);
	edmg1=edmg1+(co1.damage());}
	}
else{
if((a1==2)&&(e1<600)){e1=co1.heal(e1);}
else{
if(a1==3){
e1=co1.defend(e1);}
else{
e2=co1.attack(e2);
edmg1=edmg1+(co1.damage());}}
}
break;}

case 12:{
        wrestler co1;	
	if(a1==1){
	if(edmg1>=500){
	e2=co1.mega(e2);
	edmg1=0;
	edmg1=edmg1+(co1.damage());;
	}else{
	e2=co1.attack(e2);
	edmg1=edmg1+(co1.damage());}
	}
else{
if((a1==2)&&(e1<600)){e1=co1.heal(e1);}
else{
if(a1==3){
e1=co1.defend(e1);}
else{
e2=co1.attack(e2);
edmg1=edmg1+(co1.damage());}}
}
break;}

case 13:{
        bomber co1;	
	if(a1==1){
	if(edmg1>=500){
	e2=co1.mega(e2);
	edmg1=0;
	edmg1=edmg1+(co1.damage());;
	}else{
	e2=co1.attack(e2);
	edmg1=edmg1+(co1.damage());}
	}
else{
if((a1==2)&&(e1<600)){e1=co1.heal(e1);}
else{
if(a1==3){
e1=co1.defend(e1);}
else{
e2=co1.attack(e2);
edmg1=edmg1+(co1.damage());}}
}
break;}

case 14:{
        vampire co1;	
	if(a1==1){
	if(edmg1>=500){
	e2=co1.mega(e2);
	edmg1=0;
	edmg1=edmg1+(co1.damage());;
	}else{
	e2=co1.attack(e2);
	edmg1=edmg1+(co1.damage());}
	}
else{
if((a1==2)&&(e1<600)){e1=co1.heal(e1);}
else{
if(a1==3){
e1=co1.defend(e1);}
else{
e2=co1.attack(e2);
edmg1=edmg1+(co1.damage());}}
}
break;}

case 15:{
        hunter co1;	
	if(a1==1){
	if(edmg1>=500){
	e2=co1.mega(e2);
	edmg1=0;
	edmg1=edmg1+(co1.damage());;
	}else{
	e2=co1.attack(e2);
	edmg1=edmg1+(co1.damage());}
	}
else{
if((a1==2)&&(e1<600)){e1=co1.heal(e1);}
else{
if(a1==3){
e1=co1.defend(e1);}
else{
e2=co1.attack(e2);
edmg1=edmg1+(co1.damage());}}
}
break;}

	}
std::cout<<"Player 1 "<<e1<<std::endl;
std::cout<<"Player 2 "<<e2<<std::endl;

}while((e1>0)&&(e2>0));
if(e1<=0)std::cout<<"Player 2 wins\n";
else{if(e2<=0)std::cout<<"Player 1 wins\n";
else{std::cout<<" Draw \n";
break;}}
break;}	
}
break;}}break;}
	case 3:{
	std::cout<<"Hope you enjoyed \n";
	break;}
	}
}while(pch!=3);

std::cout<<"Program terminated "<<std::endl;
std::cout<<"Press any key to continue";
std::cin.get();
return 0;
}
