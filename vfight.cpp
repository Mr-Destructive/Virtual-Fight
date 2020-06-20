#include<iostream>
#include<cstdlib>
#include<unistd.h>
#include<ctime>
#include"fighters.h"

void play (int,int);
void watch(int ,int ,int ,int,int);
int fig(int);

int main(){
std::cout<<"\n\n\t    < VIRTUAL FIGHT >  \n\n";
int pch,g,ch,cf,cc;
int plyhm=1200;
int go=0;
int vo=0;
int toss;

srand(time(NULL));
do{
int c1,c2,edmg1=0,edmg2=0,a1,a2,ti,e1,e2,t;
std::cout<<"\tPLAY  : Hit 1 and Enter \n";
std::cout<<"\tWATCH : Hit 2 and Enter \n";
std::cout<<"\tINFO  : Hit 3 and Enter \n";
std::cout<<"\tEXIT  : Hit 4 and Enter \n";
std::cin>>pch;
switch(pch){
	case 1:{
std::cout<<"Would you like to choose your opponent or let the computer choose for you?\n";
std::cin>>ch;
switch(ch){
case 1:{
toss=rand()%2;
if(toss==0){
std::cout<<"Its your turn to fight first\n\n";
cc=rand()%15+1;
cf=fig(cc);
std::cout<<" Player health  : "<<plyhm<<std::endl;
std::cout<<" Enemy  health  : "<<cf<<std::endl;
std::cin.ignore();
play(cc,cf);
}
if(toss==1){
cc =rand()%15+1;
cf =fig(cc);
std::cout<<"Enemy attacks first"<<std::endl;
std::cout<<" Player health  : "<<plyhm<<std::endl;
std::cout<<" Enemy  health  : "<<cf<<std::endl;
std::cin.ignore();
play(cc,cf);

}
break;}

case 2:{
int pe,enmh;
std::cout<<"Select 1st player \n"<<"Enter the number mentioned before your selected player.\n";
std::cout<<" 1) Knight     2) Wizard     3) Ninja     \n 4) Giant      5) Witch      6) Samurai      \n 7) Robot      8) Archer     9) Zombie      \n10) Dragon    11) Pirate    12) Wrestler    \n13) Bomber    14) Vampire   15) Hunter\n";
std::cin>>pe;
enmh=fig(pe);
std::cout<<"TOSS time !\n";
std::cin.ignore();
play(pe,enmh);
break;}}
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
e1=fig(c1);
std::cout<<"Player  2 is ";
e2=fig(c2);
std::cin.ignore();
t=rand()%2+1;
std::cout<<" Toss time!!"<<std::endl;
switch (t){
case 1:{
std::cout<<" Player 1 will attack first."<<std::endl;
std::cout<<"player 1 h "<<e1<<std::endl<<"player 2 h "<<e2<<std::endl;
std::cin.ignore();

watch(c1,c2,e1,e2,t);    //huge function


break;}
case 2:{
std::cout<<"Player 2 will attack first "<<std::endl;
std::cout<<"Player 1 : "<<e1<<std::endl<<"Player 2 : "<<e2<<std::endl;
std::cin.ignore();
watch(c1,c2,e1,e2,t);	
break;}}break;}
	case 'c':{
c1=rand()%15+1;
c2=rand()%15+1;
edmg1=0,edmg2=0;
std::cout<<" Player 1 is ";
e1=fig(c1);
std::cout<<"Player  2 is ";
e2=fig(c2);
std::cin.ignore();
t=rand()%2+1;
std::cout<<" Toss time!!"<<std::endl;
switch (t){
case 1:{
std::cout<<"player 1 h "<<e1<<std::endl<<"player 2 h "<<e2<<std::endl;
std::cin.ignore();

watch(c1,c2,e1,e2,t);

break;}
case 2:{
std::cout<<"Player 2 : "<<e1<<std::endl<<"Player 1 : "<<e2<<std::endl;
std::cin.ignore();

watch(c2,c1,e2,e1,t);	

break;}}break;}}
break;}
case 3:{
char fyn;
int nf;
std::cout<<"Welcome to Info Section.\n";
card();
do{
std::cout<<"Do you want information of any fighter?   (y/n)"<<std::endl;
std::cin>>fyn;
switch(fyn){
	case 'y':{
std::cout<<"Which fighters information do you want?"<<std::endl;
std::cout<<"Select fighter. \n"<<"Enter the number mentioned before your selected fighter.\n";
std::cout<<" 1) Knight     2) Wizard     3) Ninja     \n 4) Giant      5) Witch      6) Samurai      \n 7) Robot      8) Archer     9) Zombie      \n10) Dragon    11) Pirate    12) Wrestler    \n13) Bomber    14) Vampire   15) Hunter\n";
std::cin>>nf;
switch(nf){
	case 1:{
	knight ob;
	ob.card();
	break;}
	case 2:{
	wizard ob;
	ob.card();
	break;}
	case 3:{
	ninja ob;
	ob.card();
	break;}
	case 4:{
	giant ob;
	ob.card();
	break;}
	case 5:{
	witch ob;
	ob.card();
	break;}
	case 6:{
	samurai ob;
	ob.card();
	break;}
	case 7:{
	robot ob;
	ob.card();
	break;}
	case 8:{
        archer ob;
	ob.card();
	break;}
	case 9:{
	zombie ob;
	ob.card();
	break;}
	case 10:{
	dragon ob;
	ob.card();
	break;}
	case 11:{
	pirate ob;
	ob.card();
	break;}
	case 12:{
	wrestler ob;
	ob.card();
	break;}
	case 13:{
	bomber ob;
	ob.card();
	break;}
	case 14:{
	vampire ob;
	ob.card();
	break;}
	case 15:{
	hunter ob;
	ob.card();
	break;}
	}
	 break;}
	case 'n':{break;}
}
}while(fyn!='n');
break;}
case 4:{
	std::cout<<"Hope you enjoyed \n";
	break;}
	}
}while(pch!=4);

std::cout<<"Program terminated "<<std::endl;
std::cout<<"Press any key to continue";
std::cin.get();
return 0;
}

int fig(int com){
int e1;
switch(com){
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
	std::cout<<" VAMPIRESS."<<std::endl;
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
return e1;
}

void watch(int c1,int c2,int e1,int e2,int t){
int g=0,v=0,a1,a2;
int edmg1=0;
int edmg2=0;
srand(time(NULL));
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
if((a1==3)&&(e1<co1.enh)){
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
if((a1==3)&&(e1<co1.enh)){
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
if((a1==3)&&(e1<co1.enh)){
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
if((a1==3)&&(e1<co1.enh)){
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
	edmg1=edmg1+(co1.damage());
	}else{
	e2=co1.attack(e2);
	edmg1=edmg1+(co1.damage());}
	}
else{
if((a1==2)&&(e1<600)){e1=co1.heal(e1);}
else{
if((a1==3)&&(e1<co1.enh)){
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
if((a1==3)&&(e1<co1.enh)){
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
if((a1==3)&&(e1<co1.enh)){
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
if((a1==3)&&(e1<co1.enh)){
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
if((a1==3)&&(e1<co1.enh)){
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
if((a1==3)&&(e1<co1.enh)){
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
if((a1==3)&&(e1<co1.enh)){
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
if((a1==3)&&(e1<co1.enh)){
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
if((a1==3)&&(e1<co1.enh)){
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
if((a1==2)&&(e1<600)){e1=co1.heal(e1);
e2=e2-co1.heal(e1);
}
else{
if((a1==3)&&(e1<co1.enh)){
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
if((a1==3)&&(e1<co1.enh)){
e1=co1.defend(e1);}
else{
e2=co1.attack(e2);
edmg1=edmg1+(co1.damage());}}
}
break;}
}
if(e1<=0){g++;break;}
else{if(e2<=0){v++;break;}
	else{if((e2<=0)&&(e1<=0)){
		v++;g++;break;}}}


int a2=rand()%3+1;
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
if((a1==3)&&(e2<co2.enh)){
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
if((a1==3)&&(e2<co2.enh)){
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
if((a1==3)&&(e2<co2.enh)){
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
if((a1==3)&&(e2<co2.enh)){
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
if((a1==3)&&(e2<co2.enh)){
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
if((a1==3)&&(e2<co2.enh)){
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
if((a1==3)&&(e2<co2.enh)){
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
if((a1==3)&&(e2<co2.enh)){
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
if((a1==3)&&(e2<co2.enh)){
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
if((a1==3)&&(e2<co2.enh)){
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
if((a1==3)&&(e2<co2.enh)){
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
if((a1==3)&&(e2<co2.enh)){
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
if((a1==3)&&(e2<co2.enh)){
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
if((a1==2)&&(e2<600)){e2=co2.heal(e2);
e1=e1-(co2.heal(e2));}
else{
if((a1==3)&&(e2<co2.enh)){
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
if((a1==3)&&(e2<co2.enh)){
e2=co2.defend(e2);}
else{
e1=co2.attack(e1);
edmg2=edmg2+(co2.damage());}}
}
break;}
}
if(e1<=0){g++;break;}
else{if(e2<=0){v++;break;}}
if(t==1){
std::cout<<"Player 1 "<<e1<<std::endl;
std::cout<<"Player 2 "<<e2<<std::endl;
}else{
std::cout<<"Player 2 "<<e1<<std::endl;
std::cout<<"Player 1 "<<e2<<std::endl;
}
}while((g==0)&&(v==0));
if(g>0)std::cout<<"Player 2 wins.\n";
else{if(v>0)std::cout<<"Player 1 wins.\n";
	else{std::cout<<"DRAW \n";}}

}


void play(int cc,int enemyh){
char pbc;
int plyhm=1200,dmg=0,patck=50,pmatck=200,pheal=100,edmg=0;
int go=0,vo=0,ec;
int toss=rand()%2;
if(toss==0){
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
std::cin.ignore();
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
if((ec==2)&&(enemyh<600)){enemyh=co.heal(enemyh);
plyhm=plyhm-(co.heal(enemyh));}
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

std::cin.ignore();	
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
std::cout<<"Enemy attacks first\n";
do{
std::cin.ignore();
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
if((ec==2)&&(enemyh<600)){enemyh=co.heal(enemyh);
plyhm=plyhm-(co.heal(enemyh));}
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
std::cin.ignore();
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
std::cin.ignore();
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
}}
