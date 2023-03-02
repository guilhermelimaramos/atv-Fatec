#include <iostream>
#include <math.h>



using namespace std;




void carga_vetor (int *v)
{
int i;
for (i=0;i<10;i++)
{
cout << "\nDigite o valor: ";
cin >> v[i];
}
cout << "\n\nCarga efetuada com sucesso!\n\n";
system("pause");
}



void imprime_vet (int *v)
{
int i;
system("cls");
for(i=0;i<10;i++)
{
cout << v[i] << "\t";
}
cout << "\n\n\n";
system ("pause");
}




int main()
{
int vet[10];
carga_vetor(vet);
imprime_vet(vet);
return 0;
}