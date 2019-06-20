

#include <iostream>
#include <stdio.h>
#include "Pilha.h"
#include "Fila.h"

using namespace std;

int main()
{
	Pilha p1; //cria o objeto P1 da classe Pilha
	Fila f1; //cria o objeto F1 da classe Fila

	int select = 0; // inicializa a variavel de selecao de funcao
	
	while (true) {

		cout << "Digite 1 para executar o codigo da pilha e 2 para o codigo da fila." << endl; // selecao de funcao para teste
		cin >> select;

		if (select == 1) {
			//insere 5 numeros na pilha e mostra quais numeros foram inseridos
			p1.Push(8);
			cout << "Numero inserido: " << p1.Top() << endl;
			p1.Push(4);
			cout << "Numero inserido: " << p1.Top() << endl;
			p1.Push(5);
			cout << "Numero inserido: " << p1.Top() << endl;
			p1.Push(1);
			cout << "Numero inserido: " << p1.Top() << endl;
			p1.Push(100);
			cout << "Numero inserido: " << p1.Top() << endl;

			// retira todos os numeros da pilha
			cout << "O numero retirado e: " << p1.Pop() << endl;
			cout << "O numero retirado e: " << p1.Pop() << endl;
			cout << "O numero retirado e: " << p1.Pop() << endl;
			cout << "O numero no topo e: " << p1.Top() << endl; // mostra o valor no topo da pilha
			cout << "O numero retirado e: " << p1.Pop() << endl;
			cout << "O numero retirado e: " << p1.Pop() << endl;
			cout << "O numero retirado e: " << p1.Pop() << endl; // mostra que ao tentar retirar um numero de uma pilha vazia retorna o valor 0 e o texto pilha vazia.

		}

		else if (select == 2) {
		
			f1.Enqueue(2);
			cout << "O numero enfileirado foi:" << f1.ValorFrente() << endl;
			f1.Enqueue(4);
			cout << "O numero enfileirado foi:" << f1.ValorFrente() << endl;
			f1.Enqueue(6);
			cout << "O numero enfileirado foi:" << f1.ValorFrente() << endl;
			f1.Enqueue(8);
			cout << "O numero enfileirado foi:" << f1.ValorFrente() << endl;
			f1.Enqueue(10);
			cout << "O numero enfileirado foi:" << f1.ValorFrente() << endl;

			cout << "O elemento retirado da fila foi:" << f1.Dequeue() << endl;
			cout << "O elemento retirado da fila foi:" << f1.Dequeue() << endl;
			cout << "O elemento retirado da fila foi:" << f1.Dequeue() << endl;
			cout << "O elemento retirado da fila foi:" << f1.Dequeue() << endl;
			cout << "O elemento retirado da fila foi:" << f1.Dequeue() << endl;
			cout << "O elemento retirado da fila foi:" << f1.Dequeue() << endl;
		}
		
	}

}

