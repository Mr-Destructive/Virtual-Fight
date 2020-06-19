#include "fighters.h"
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

void knight::intro(){
cout<<" Trained by the kings of the battlefield,The hero of the arena,\nThe knight makes his way towards you! "<<endl;
cout<<" The knight swings his sword out of the scabbard and swirls it around ,pretending to be ready to dash out!\n"<<endl;
};
int knight::attack(int ph){
cout<<"Knight attacks with his charged sword "<<endl;
ph=ph-atck;
return ph;
}
int knight::heal(int hk){
cout<<"Knight healed himself "<<endl;
hk=hk+healk;
return hk;
}
int knight::mega(int ph){
cout<<"The Knight used his mega attack. "<<endl;
ph=ph-matck;
return ph;
}
int knight::defend(int h){
cout<<"Knight takes shield to your attack and take a small damage. "<<endl;
h=h+dfndk;
return h;
}
int knight::damage(){
int d=atck;
return d;
}



void wizard::intro(){
cout<<"The mythical creature enters the arena.."<<endl;
cout<<"The wizard embers with sizzling fire in hands.🔥"<<endl;
}
int wizard::attack(int ph){
cout<<"Wizard throws furious fireballs at you "<<endl;
srand(time(NULL));
ph=ph-atck*(rand()%2+1);
return ph;
}
int wizard::heal(int hk){
cout<<" wizard castes healing spell on himself "<<endl;
srand(time(NULL));
hk=hk+healk*(rand()%3+1);
return hk;
}
int wizard::mega(int ph){
cout<<"The wizard castes a dark spell in the form of his mega attack"<<endl;
ph=ph-matck;
return ph;
}
int wizard::defend(int h){
cout<<"The wizard dodges your attack and just takes a bit damage"<<endl;
h=h+dfndk;
return h;}
int wizard::damage(){
int d=atck;
return d;
}


void ninja::intro(){
cout<<"Trained by the forces of nature ,the ninja challenges you to a fight."<<endl;}
int ninja::attack(int ph){
cout<<"Ninja throws shuriken (ninja stars) towards you "<<endl;
cout<<"Ohh! that was too fast "<<endl;
ph=ph-atck;
return ph;
}
int ninja::mega(int ph){
cout<<"Ninja grabs his ninjatō and quickly moves towards you"<<endl;
cout<<"Anyone can hardly spot his moment"<<endl;
ph=ph-matck;
return ph;
}
int ninja::heal(int hk){
cout<<"Ninja starts to heal himself by performing Kuji-Kuri"<<endl;
hk=hk+healk;
return hk;
}
int ninja::defend(int h){
cout<<"Ninja defends your attack by performing Ninjutsu .\nIts quite effective ,Ninja takes hardly any damage "<<endl;h=h+dfndk;
return h;
}
int ninja::damage(){
int d=atck;
return d;}



void giant::intro(){
cout<<"With Giant footsteps,and monsterous body,The Giant is ready to knock you down."<<endl;}
int giant::attack(int ph){
cout<<"Giant smashes a punch of fist on you,That took you some heft blow!"<<endl;
ph=ph-atck;
return ph;
}
int giant::mega(int ph){
cout<<"The heavy weight bulky Giant just jumps at you,no one can see your condition."<<endl;
cout<<"That was ultra effective damage by giant"<<endl;
ph=ph-matck;
return ph;
}
int giant::heal(int hk){
cout<<"Giant heals himself with smashing some huge amount of food in his mouth"<<endl;
hk=hk+healk;
return hk;
}
int giant::defend(int h){
cout<<"The Giant defended your attack."<<endl;
h=h+dfndk;
return h;
}
int giant::damage(){
int d=atck;
return d;
}
void witch::intro(){
cout<<"The magical spellcasting women enters the       battlefield,The Witch is ready to take you down!"<<endl;}
int witch::attack(int ph){
cout<<"Witch splashes some poisonous potions towards you!"<<endl;
cout<<"You take a lot of damage ."<<endl;
ph=ph-(atck*(rand()%2+1));
cout<<"You are taking stacked damage due to poison."<<endl;
ph=ph-80;
return ph;}
int witch::mega(int ph){
cout<<"Witch castes enchanted spells along with some poisonous and hazardous potions."<<endl<<"It has a toxic effect on your body.You take a great amount of damage."<<endl;
ph=ph-matck;
return ph;}
int witch::heal(int hk){
cout<<"Witch splashes some healing potions and regenerates health"<<endl;
hk=hk+healk;
return hk;}
int witch::defend(int h){
cout<<"The Witch defends your attack by casting  a   shielding spell around her."<<endl;
h=h+dfndk;
return h;}
int witch::damage(){
int d=atck;
return d;
}

void samurai::intro(){
cout<<"With a swinging swords and heavy protective    armour,The Samurai enters the battlefield.";
}
int samurai::attack(int ph){
cout<<"The Samurai dashes forward and smashes  heavy    punches of swords on you"<<endl; 
ph=ph-atck;
return ph;}
int samurai::mega(int ph){
cout<<"The Samurai punches some spears at you and    also shoots firing arrows with his bow."<<endl<<"\nYou take a huge amount of damage."<<endl; 
ph=ph-matck;
return ph;}
int samurai::heal(int hk){
cout<<"The Samurai heals himself with some protective  gears and martial arts ."<<endl;
hk=hk+healk;
return hk;}
int samurai::defend(int h){
cout<<"Samurai defends your attack with his heavy    and protective armour."<<endl;
h=h+dfndk;
return h;}
int samurai::damage(){
int d=atck;
return d;
}

void robot::intro(){
cout<<"With the powers of Artificial Intelligence  , The Robot enters the battlefield and scans    the environment ."<<endl;
}
int robot::attack(int ph){
cout<<"The robot is furious launches missles at you!"<<endl; 
ph=ph-atck;
return ph;}
int robot::mega(int ph){
cout<<"The Robot dashes towards you and electrocutes you."<<endl;
cout<<"You take a hefty damage! "<<endl;
ph=ph-matck;
return ph;}
int robot::heal(int hk){
cout<<"The Robot uses his machine learning capabilities to fix the damage and gains health."<<endl;
hk=hk+healk;
return hk;}
int robot::defend(int h){
cout<<"The Robot defends your attack with his protective shield body of heavy metal."<<endl;
h=h+dfndk;
return h;}
int robot::damage(){
int d=atck;
return d;
}

void archer::intro(){
cout<<"With the power of nature and sharp vision,The Archer symbolize himself with a bow and enters the battlefield!"<<endl;
}
int archer::attack(int ph){
cout<<"The Archer shoots arrows at you ."<<endl;
ph=ph-atck;
return ph;}
int archer::mega(int ph){
cout<<"The archer shoots multiple firey arrows at you,You take a  ton of damage."<<endl;
ph=ph-matck;
return ph;}
int archer::heal(int hk){
cout<<"With some medicinal skills ,The Archer heals himself with some tonic."<<endl;
hk=hk+healk;
return hk;}
int archer::defend(int h){
cout<<"The archer defends your attack  ."<<endl;
h=h+dfndk;
return h;}
int archer::damage(){
int d=atck;
return d;
}


void zombie::intro(){
cout<<"The undead creature has summoned in the battlefield,The Zombie is ready to take you to death."<<endl;}
int zombie::attack(int ph){
cout<<"A weak punch of fist ,The Zombie attacks you. "<<endl;
ph=ph-atck;
return ph;}
int zombie::mega(int ph){
cout<<"The Zombie punches you with more power."<<endl;
ph=ph-matck;
return ph;}
int zombie::heal(int hk){
cout<<"Zombie cannot heal itself."<<endl;
hk=hk+healk;
return hk;}
int zombie::defend(int h){
cout<<"Zombie eassily dodges your attack."<<endl;
h=h+dfndk;
return h;}
int zombie::damage(){
int d=atck;
return d;
}


void dragon::intro(){
cout<<"With the flames of destruction and flaps of  anger,The Mighty Dragon has appeared in the battlefield."<<endl;
}
int dragon::attack(int ph){
cout<<"The Dragon lashed fire flames at you."<<endl;
cout<<"Its does very critical damage to you!"<<endl;
ph=ph-atck;
return ph;}
int dragon::mega(int ph){
cout<<"The dragon tosses you in the air and smashes on the floor with high speed,And the fires many flames towards you."<<endl;
cout<<"Knockout Damage."<<endl;
ph=ph-matck;
return ph;}
int dragon::heal(int hk){
cout<<"The Dragon heals himself with powerful energy with his totem."<<endl;
hk=hk+healk;
return hk;}
int dragon::defend(int h){
cout<<"The dragon easily flies away from your attack."<<endl;
h=h+dfndk;
return h;}
int dragon::damage(){
int d=atck;
return d;
}


void pirate::intro(){
cout<<"With the powers of oceans and anger of storms,The Pirate enters the arena with his weapons."<<endl;
}
int pirate::attack(int ph){
cout<<"The Pirate attacks you with his sword."<<endl;
ph=ph-atck;
return ph;}
int pirate::mega(int ph){
cout<<"The Pirate loads cannonballs in his cannon and launches them towards you,You can barely escape the attack!"<<endl;	
ph=ph-matck;
return ph;}
int pirate::heal(int hk){
cout<<"The Pirate heals himself with drinking some tonics purchased from docks."<<endl;
hk=hk+healk;
return hk;}
int pirate::defend(int h){
cout<<"The Pirate defends your attack by his hook hand to catch your hands."<<endl;
h=h+dfndk;
return h;}
int pirate::damage(){
int d=atck;
return d;
}


void wrestler::intro(){
cout<<"With a weight over 300 pounds and rage in body,The Wrestler enters the battlefield."<<endl; 
}
int wrestler::attack(int ph){
cout<<"The Wrestler punches and kicks you on the ground,You take a ton of damage!"<<endl;
ph=ph-atck;
return ph;}
int wrestler::mega(int ph){
cout<<"The Wrestler lifts you up and smashes on the ground forcefully,You take critical damage."<<endl;
ph=ph-matck;
return ph;}
int wrestler::heal(int hk){
cout<<"Tje Wrestler rests for a while, and succumbs his small injuries ."<<endl;
hk=hk+healk;
return hk;}
int wrestler::defend(int h){
cout<<"The Wrestler sneaks your attacks and hrdly takes any damage."<<endl;
h=h+dfndk;
return h;}
int wrestler::damage(){
int d=atck;
return d;
}

void bomber::intro(){
cout<<"With balls of doom and terror in mind,The Bomber is ready to destroy you in flames."<<endl;
}
int bomber::attack(int ph){
cout<<"The Bomber throws a bomb at you!"<<endl;
ph=ph-atck;
return ph;}
int bomber::mega(int ph){
cout<<"The Bomber throws a lot of explosives at you along with TNT and dynamites."<<endl;
ph=ph-matck;
return ph;}
int bomber::heal(int hk){
cout<<"The Bomber cannot heal himself."<<endl;
hk=hk+healk;
return hk;}
int bomber::defend(int h){
cout<<"The Bomber defends your attacks with dodging around."<<endl;
h=h+dfndk;
return h;}
int bomber::damage(){
int d=atck;
return d;
}

void vampire::intro(){
cout<<"With venom in minds and blood in bites,The Vampiress enter the arena."<<endl;
}
int vampire::attack(int ph){
cout<<"The Vampiress tries to suck blood from you but fails,but she scratches your body with nails and do a bit damage."<<endl;
ph=ph-atck;
return ph;}
int vampire::mega(int ph){
cout<<"The Vampiress sneaks in and bites you and this time she does a ton of damage."<<endl;
ph=ph-matck;
return ph;}
int vampire::heal(int hk){
cout<<"The Vampiress heals herself with leeching some health from you"<<endl;
hk=hk+healk;
return hk;}
int vampire::defend(int h){
cout<<"The Vampiress sneaks your attack and hardly take any damage."<<endl;
h=h+dfndk;
return h;}
int vampire::damage(){
int d=atck;
return d;
}

void hunter::intro(){
cout<<"With guns in hand and beast in mind,The hunter is ready to knock you out of the battlefield."<<endl;
}
int hunter::attack(int ph){
cout<<"The Hunter shoots bullets from the gun and you get injured."<<endl;
ph=ph-atck;
return ph;}
int hunter::mega(int ph){
cout<<"The Hunter shoots a  burst of bullets towards you with very high speed and you are almost knocked down."<<endl;
ph=ph-matck;
return ph;}
int hunter::heal(int hk){
cout<<"The Hunter takes his time to recover from injuries as you thrive with pain of his attack!"<<endl; 
hk=hk+healk;
return hk;}
int hunter::defend(int h){
cout<<"The Hunter defends against your attack by shooting against you !"<<endl;
h=h+dfndk;
return h;}
int hunter::damage(){
int d=atck;
return d;
}
