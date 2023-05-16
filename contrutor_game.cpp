#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class JogoAdivinhacao {
    
    private: 
      int numerosecreto;  // Variável para armazenar o número secreto
      int tentativas;     // Variável para contar o número de tentativas
    
    public:
      JogoAdivinhacao() {  // Construtor da classe
        
        srand(time(0));  // Inicializa o gerador de números aleatórios com o tempo atual
        numerosecreto = rand() % 100 + 1;  // Gera um número aleatório entre 1 e 100
        tentativas = 0;  // Inicializa o contador de tentativas
      }
      
    void jogar() {
        
      int palpite;
      do {
         cout << "Digite um número entre 1 e 100: ";
         cin >> palpite;
         tentativas++;
         if (palpite > numerosecreto) {
            cout << "O número secreto é menor!" << endl;
         } else if (palpite < numerosecreto) {
             cout << "O número secreto é maior!" << endl;
         } else {
             cout << "Parabéns! Você acertou o número em "
             << tentativas << " tentativas!" << endl;
            }
            
      } while (palpite != numerosecreto);  // Repete o loop até que o palpite seja igual ao número secreto
    }
};

int main() {
    JogoAdivinhacao jogo;  // Cria um objeto da classe JogoAdivinhacao
    jogo.jogar();  // Chama o método jogar() do objeto
    return 0;  // Indica que o programa foi executado com sucesso
}