#ifndef FIGHTERS_H
#define FIGHTERS_H

class knight{
	private:
	int atck=50;
	int matck=80;
	int dfndk=10;
	int healk=30;
	public:
	int enh =2000;
	void intro();
	int attack(int ph);
	int mega(int ph);
	int defend(int h);
	int heal(int hk);
	int damage();
	void card();	
};
class wizard{
	private:
	int atck=150;
	int matck=300;
	int dfndk=25;
	int healk=200;
	public:
	int enh=1300;
	void intro();
	int attack(int ph);
	int mega(int ph);
	int defend(int h);
	int damage();
	int heal(int hk);
	void card();
};
class ninja{
	private:
	int atck=100;
	int matck=180;
	int dfndk=25;
	int healk=30;
	public:
	int enh=1400;
	void intro();
	int attack(int ph);
	int mega(int ph);
	int defend(int h);
	int damage();
	int heal(int hk);
	void card();
};
class giant{
        int atck=200;
	int matck=400;
	int dfndk=100;
	int healk=40;
	public:
	int enh=2000;
	void intro();
	int attack(int ph);
	int mega(int ph);
        int defend(int h);
        int damage();
        int heal(int hk);
        void card();
};
class witch{
	int atck=120;
	int matck=240;
	int dfndk=40;
	int healk=200;
	public:
	int enh=1200;
	void intro();
	int attack(int ph);
	int mega(int ph);
        int defend(int h);
        int damage();
        int heal(int hk);
        void card();
};
class samurai{
	int atck=75;
	int matck=200;
	int dfndk=20;
	int healk=30;
	public:
	int enh=1500;
	void intro();
        int attack(int);
        int mega(int);                                         int defend(int);
        int damage();
        int heal(int);
        void card();
};
class robot{
	int atck=100;
	int matck=250;
	int dfndk=50;
	int healk=50;
	public:
	int enh=8000;
	void intro();
	int attack(int);
	int mega(int);
	int defend(int);
	int damage();
	int heal(int);
	void card();
};
class archer{
	int atck=60;
	int matck=150;
	int dfndk=100;
	int healk=60;
	public:
	int enh=1500;
	void intro();
	int attack(int);
	int mega(int);
	int defend(int);
	int damage();
	int heal(int);
	void card();
};
class zombie{
	int atck=50;
	int matck=100;
	int dfndk=500;
	int healk=0;
	public:
	int enh=5000;
	void intro();
	int attack(int);
	int mega(int);
	int defend(int);
	int damage();
	int heal(int);
	void card();
};
class dragon{
	int atck=500;
	int matck=1000;
	int dfndk=200;
	int healk=1000;
	public:
	int enh=10000;
	void intro();
	int attack(int);
	int mega(int);
	int defend(int);
	int damage();
	int heal(int);
	void card();
};
class pirate{
	int atck=75;
	int matck=250;
	int dfndk=50;
	int healk=30;
	public:
	int enh=1500;
	void intro();
	int attack(int);
	int mega(int);
	int defend(int);
	int damage();
	int heal(int);
	void card();
};
class wrestler{
	int atck=150;
	int matck=300;
	int dfndk=75;
	int healk=50;
	public:
	int enh=2500;
	void intro();
	int attack(int);
	int mega(int);
	int defend(int);
	int damage();
	int heal(int);
	void card();
}; 
class bomber{
	int atck=250;
	int matck=450;
	int dfndk=30;
	int healk=0;
	public:
	int enh=1200;
	void intro();
	int attack(int);
	int mega(int);
	int defend(int);
	int damage();
	int heal(int);
	void card();
}; 
class vampire{
	int atck=125;
	int matck=300;
	int dfndk=100;
	int healk=100;
	public:
	int enh=1800;
	void intro();
	int attack(int);
	int mega(int);
	int defend(int);
	int damage();
	int heal(int);
	void card();
};
class hunter{
	int atck=120;
	int matck=200;
	int dfndk=20;
	int healk=40;
	public:
	int enh=1500;
	void intro();
	int attack(int);
	int mega(int);
	int defend(int);
	int damage();
	int heal(int);
	void card();
};
#endif
