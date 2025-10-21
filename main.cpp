
#include <iostream>

using namespace std;

int main() {

  int tabu = 1, n = 1, result = 0, usere = 1, menu = 1, input, order, nf,
      res = 1;
  ;

  do {
    cout << "\n==> MENU ARITMÉTICO";
    cout << "\n(1) Acessar Tabuada ";
    cout << "\n(2) Calculo Fatorial";
    cout << "\n(3) Desenvolvedores";
    cout << "\n(4) Sair\n";
    cin >> input;
    cin.clear();
    cin.ignore(10000,'\n');
    switch (input) {
    case 1:
      system("clear"); // Limpa o terminal
      cout << "<==========>TABUADA ONLINE<==========>" << endl;

      cout << "\nDigite a tabuada que você quer saber: ";
      cin >> usere;
      cout << "\nDigite ate que ordem você quer: ";
      cin >> order;
      cout << endl;

      cout << "==========" << endl;

      for (int i = 1; i <= order;
           i++) { // laço de que ira realizar a multiplicação com base na ordem
                  // que o usuario digitar: a variavél "order" é responsavél por
                  // isso.
        result = usere * i;
        cout << i << " x " << usere << " = " << result << endl;
      }
      cout << "==========";
      cout << endl;
      break;
    case 2:
      system("clear"); // Limpa o terminal

      cout << "<==========>CALCULO FATORIAL<==========>" << endl;
      cout << "Digite o número para saber seu calculo fatorial: ";
      cin >> nf;

      system("clear");
      cout << "<==========> CALCULO FATORIAL <==========>" << endl;
      for (int i = 1; i <= nf; i++) {

        res *= i;
        cout << "\nFatorial parcial após multiplicar por " << i << " = " << res
             << endl;
      }

      cout << "\nO resultado do " << nf << "!"
           << " é igual a: " << res << endl;
      break;
    case 3:
      system("clear"); // Limpa o terminal

      cout << "Equipe de desenvolvimento: \n";
      cout << "- Arthur de Queiroz.\n";
      cout << "Mês/Ano: Julho/2023.\n";
      cout << "Projeto: Algoritmos e Programação.\n" << endl;

      break;
    case 4:            // Caso escolha sair
      menu = 0;        // Define o valor do menu para 0 para terminar o programa
      system("clear"); // Limpa o terminal

      break;

    default: // caso o usurario digite um valor não permitido no menu.
      system("clear");
      // Limpar o terminal
      cout
          << "Opção inválida. Por favor, digite uma tecla e tente novamente.\n";

      system("clear");

      break;
    }
  } while (menu == 1);
}
