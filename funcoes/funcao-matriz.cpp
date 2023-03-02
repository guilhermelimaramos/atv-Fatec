#include <iostream>
#include <math.h>



using namespace std;




void carga_vetor (int m[][2])
{
int i,j;
for (i=0;i<2;i++)
for (j=0;j<2;j++)
{
cout << "\nDigite o valor: ";
cin >> m[i][j];
}
cout << "\n\nCarga efetuada com sucesso!\n\n";
system("pause");
}



void imprime_vet (int m[][2])
{
int i,j;
system("cls");
for(i=0;i<2;i++)
{
cout << endl;
for (j=0;j<2;j++)
cout << m[i][j] << "\t";
}
cout << "\n\n\n";
system ("pause");
}




int main()
{
int mat[2][2];
carga_vetor(mat);
imprime_vet(mat);
return 0;
}