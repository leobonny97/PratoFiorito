#include <iostream>


using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	struct account{
		char nome[15];
		int saldo;
		account *next;
	} a;
	account *next=&a;
	int terminato=1;
	while(terminato==1){
		cout <<"Inserisci nome: ";
		cin >>next->nome;
		cout <<"Inserisci saldo: ";
		cin >>next->saldo;
		cout <<"Inserire un numero diverso da 1 per terminare: ";
		cin >>terminato;
		if(terminato==1)
		{
			next->next=new struct account;
			next=next->next;
		}
		else
		{
			next->next=NULL;
		}
	}
	next=&a;
	while(next!=NULL)
	{
		cout <<"Nome: " <<next->nome <<endl;
		next=next->next;
	}
}
