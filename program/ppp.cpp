#include<iostream>
#include<string>
using namespace std;


class RoundHole {
public:
	int Radius;

	
	void wprowadz(int Radius){
		this->Radius = Radius;		
	}
	
	void dodajEnd();	
	void wypisz();

};

	void RoundHole::wypisz(){
		cout<<"Srednica dziury to: "<<Radius;
	}

	
class peg {
public:
	int len_a;
	int len_b;
	
	void wprowadz(int len_a, int len_b){
		this->len_a = len_a;	
		this->len_b = len_b;		
	}
	
	int dlugoscA(){
		this->len_a = len_a;	
		return len_a;	
	}

	int dlugosB(){
		this->len_b = len_b;	
		return len_b;	
	}
	
};


class adapter {
public:
	int len;
	int radius;
	
	void wprowadz(int len, int radius){
		this->len = len;	
		this->radius = radius;		
	}
	
	int compare(int len, int radius){
		len = len/2;
		
		if(len<radius){
			cout<<"True";
		} else {
			cout<<"False";
		};
	}

	
};



int main(){
	


	
	RoundHole *dziura = new RoundHole;
	peg *klocek = new peg;
	adapter *Adapter = new adapter;
	int a;
	dziura->wprowadz(12);
	dziura->wypisz();
	klocek->wprowadz(5,13);
	a = (klocek->dlugoscA());
	cout<<endl<<a;

		
}
