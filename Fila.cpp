#include <iostream>
#define MAX 10

using namespace std;

int main()
{
int fila[MAX], fim, i, num, op;
fim=-1;
do
{
system("cls");
cout <<" \t M E N U " <<  endl;
cout << "1 - Inserir"<<endl;
cout << "2 - Remover"<<endl;
cout << "3 - Imprimir"<<endl;
cout << "9 - Sair"<<endl<<endl;
cin >> op;


switch (op)
{
case 1 : system("cls");
cout << "\tIserir número na fila "<<endl<<endl;
if (fim<(MAX-1))
{
cout << "Digite o número para inserido: "<<endl;
cin >> num;
fim++;
fila[fim]=num;
cout << "\n\nNúmero inserido com sucesso!\n\n";
}
else
cout << "\n\nImpossivel inserir...\nFila Cheia!\n\n"; 

system("pause");
break;


case 2 : system("cls");
cout << "\tRemover da Fila  "<<endl<<endl<<endl;
if (fim>=0)
{
num=fila[0];
for (i=0;i<fim;i++)
fila[i]=fila[i+1];
fim--;
cout << "Número removido: " << num<<endl;
cout << "Número removido com sucesso!!"<<endl<<endl<<endl;
}
else
cout << "\n\nImpossivel remover...\nFila vazia!\n\n";


system("pause");
break;


case 3 : system("cls");
cout << " \tI m p r i m i r F i l a "<<endl<<endl<<endl;
if (fim<0)
cout << "Fila Vazia!"<<endl<<endl<<endl<<endl;
else
for (i=0;i<=fim;i++)
cout << fila[i] << "\t"<<endl<<endl;
break;
}

}while(op!=9);

return 0;
}