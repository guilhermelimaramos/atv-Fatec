#include <iostream>
#define MAX 10



using namespace std;




typedef struct EPilha{
int dados[MAX];
int topo;
}TPilha;




void menu(int *op)
{
system("cls");
cout << "* * * * * M E N U * * * * *\n\n\n";
cout << "\n1 - Push";
cout << "\n2 - Pop";
cout << "\n3 - Imprimir Pilha";
cout << "\n9 - Sair";
cout << "\n\nDigite a sua opcao: ";
cin >> *op;
}



int push (TPilha *p, int e)
{
if (p->topo<(MAX-1))
{
p->topo=p->topo+1;
p->dados[p->topo]=e;
return 0;
}
else
return 1;
}



int pop (TPilha *p)
{
if (p->topo>=0)
{
p->topo=p->topo-1;
return 0;
}
else
return 1;
}



void imprimir (TPilha p)
{
int i;
system("cls");
cout << "* * * * * P I L H A * * * * *\n\n\n";
for (i=p.topo;i>=0;i--)
cout << p.dados[i] << "\n";
cout << "\n\n\n";
system("pause");
}




int main()
{
TPilha pilha;
int op, elemento, flag;
pilha.topo=-1;
do
{
menu(&op);



switch(op)
{
case 1 : system("cls");
cout << "* * * * * P U S H * * * * *\n\n";
cout << "\nDigite o elemento a ser inserido: ";
cin >> elemento;
flag = push(&pilha,elemento);
if (flag==0)
{
cout << "\n\nElemento inserido com sucesso!!\n\n";
}
else
cout << "\n\nImpossivel inserir...\nPilha cheia!\n\n";
cout << "\n\n\n";
system("pause");
break;



case 2 : system("cls");
cout << "* * * * * P O P * * * * *\n\n";
flag = pop(&pilha);
if (flag==0)
{
cout << "\n\nElemento removido com sucesso!!\n\n";
}
else
cout << "\n\nImpossivel remover...\nPilha vazia!\n\n";
cout << "\n\n\n";
system("pause");
break;



case 3 : imprimir(pilha);
break;




}




}while (op!=9);



return 0;
}