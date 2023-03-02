#include <iostream>
#include <locale>

using namespace std;
#define MAX 5

int main()
{
    setlocale( LC_ALL, "" );
    int op, vetor[MAX], top = -1, i, add;

          do{
              cout << "\nSelecione uma opcão:";
              cout << "\n(1) - Para, Push (Inserir)";
              cout << "\n(2) - Para, Pop (Remover)";
              cout << "\n(3) - Para, Imprimir Pilha";
              cout << "\n(0) - Para, Sair\n\n";                cin >> op;

              switch(op){
                  case 1:
                      system("cls");
                      cout << "\nDigite o número a ser inserido no vetor:\n";
                      cin >> add;
                      cout << "\nO número " << add << " foi inserido no vetor!\n\n";
                      system("pause");

                      if(top < MAX - 1){
                        top++;
                        vetor[top] = add;
                      }
                        break;
                    case 2:
                        system("cls");
                        cout << "Removendo o último item adicionado no vetor";
                        top--;
                        cout << "\nO número " << add << " foi removido do vetor!\n\n";
                        system("pause");
                        break;
                    case 3:
                        system("cls");
                        cout << "Os valores atuais  são: ";
                        for(i=0;i<=top;i++){
                            cout << vetor[i] << "  ";
                        }
                        cout << "\n";
                        system("pause");
                        break;
                    case 9:
                        cout << "Fim do programa";
                        return 0;
                }
            }while(op != 0);
            return 0;
        }