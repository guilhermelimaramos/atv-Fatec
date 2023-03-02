
// Defina abaixo uma struct de nome calculo que armazenará:
// - uma variavel inteira de nome a 
// - uma varável caractere de nome operacao
// - uma variavel inteira de nome b
// - uma variavel inteira de nome resultado 

int fim = -1;

typedef struct{
int a;
int b;
int resultado;
char operacao;
} calculo ;


// Defina um vetor com 5 elementos a partir dessa struct para armazenamento do histórico

calculo historico[5];

// Implemente a função soma:
int soma(int a, int b) {
    // Seu código aqui:
    fim ++;
    historico[fim].a = a;
    historico[fim].b = b;
    historico[fim].operacao = '+';
    historico[fim].resultado = a + b;
    return a + b;
}


// Implemente a função subtracao:
int subtracao(int a, int b) {
    // Seu código aqui:
    fim ++;
    historico[fim].a = a;
    historico[fim].b = b;
    historico[fim].operacao = '-';
    historico[fim].resultado = a - b;
    return a - b;
}


// Implemente a função multiplicacao:
int multiplicacao(int a, int b) {
    // Seu código aqui:
    fim ++;
    historico[fim].a = a;
    historico[fim].b = b;
    historico[fim].operacao = '*';
    historico[fim].resultado = a * b;
    return a * b;
}

// Implemente a função divisao:
int divisao(int a, int b) {
    // Seu código aqui:
    if (b!=0){
    fim ++;
    historico[fim].a = a;
    historico[fim].b = b;
    historico[fim].operacao = '/';
    historico[fim].resultado = a / b;
    return a / b;

    }
    if (b = 0){
      cout << "Numero não pode ser dividido\n";
  }
  return 0;
}

// Implemente a função calculadora:
int calculadora(int a, int b, char operacao) {
    // Seu código aqui:
    switch(operacao){
    case '+':
      soma(a,b);
      break;
    case '-':
      subtracao(a,b);
      break;
    case '*':
      multiplicacao(a,b);
      break;
    case '/':
      divisao(a,b);
      break;
    default:
      cout << "Numero invalido...\n";
  }
  if (fim == 4){
          fim = 3;
  }

    return 0;

}

// Implemente a função limpaHistorico:
int limpaHistorico() {
    // Seu código aqui:
    for(int i = fim; i > -1; i--){
       historico[fim].a = 0;
       historico[fim].b = 0;
       historico[fim].operacao = 0;
       historico[fim].resultado = 0;
    }
fim = -1;

    cout <<"Histórico foi apagado com sucesso..." <<endl;

return 1;
}

// Implemente a função listaHistorico:
string listaHistorico()
{
    // Seu código aqui:
    if(fim == -1){
           cout << "Lista Vazia!";
           return "";
    }
    if(fim != -1){
        for(int i = fim; i > -1; i--){
            cout << historico[i].a << " " << historico[i].operacao << " " << historico[i].b << " = " << historico[i].resultado << "\n";

            }
    }


return "";


}
