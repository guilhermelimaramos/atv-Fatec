#include <iostream>
#include <math.h>

using namespace std;

float delta (float a, float b, float c)
{
return (b*b - 4*a*c);
 }
float x1 (float a, float b, float c)
{
  float aux;
  aux = (((-b) + sqrt((b*b - 4*a*c))) / 2*a );
  return aux;
}

float x2 (float a, float b, float c)
{
  float aux2;
  aux2 = (((-b) - sqrt((b*b - 4*a*c))) / 2*a );
  return aux2;
}



int main() {
float a, b, c;
cout << "Digite o valor de A: " <<endl;
cin >> a;

cout << "Digite o valor de B: " <<endl;
cin >> b;

cout << "Digite o valor de C: " <<endl;
cin >> c;

cout << "O valor de delta é " << delta(a,b,c) <<endl;
cout << "O valor de X1 é : " << x1(a,b,c)<<endl;
cout << "O valor de X2 é : " << x2(a,b,c)<<endl;




return 0;
}