#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


/*
// Questão 1

int main(){
        int idade;

        cout << "Qual é a sua idade? Digita aí: " << endl;
        cin >> idade;

        if(idade <= 17){
                cout << "Sai daqui, menor de idade!" << endl;
        }

         if(idade >= 18){
                 cout << "Pode entrar na festa!" << endl;
        }

}
*/

/*
// Questão 2

int main(){
        int contagem = 10;

        while(contagem != 0){
                cout << "Contagem regressiva: " << contagem << " segundos restantes!" << endl;
                contagem--;
        }
        cout << "Contagem finalizada!" << endl;
}
*/

/*
// Questão 3

int main(){
        int num;
        int sum = 0;

        while(true){
                cout << "Me manda números pra somar!" << endl;
                cout << "Se quiser sair, digite '0'." << endl;
                cin >> num;

                if(num == 0)
                        break;

                sum += num;
        }

        cout << "O total da soma é: " << sum << endl;

        return 0;
}
*/

/*
// Questão 4

int main(){
        int num;
        int res;

        cout << "Digite um número e eu te mostro a tabuada dele! " << endl;
        cin >> num;

        for(int i = 1; i <= 10; i++){
                res = num * i;

                cout << num << " x " << i << " = " << res <<endl;
        }
}
*/

/*
// Questão 5

int main(){
        int pos = 0;
        int num;

        cout << "Digite 10 números e vou te mostrar quantos são positivos!" << endl;

        for(int i = 0; i < 10; i++){
                cout << "Digite um número: ";
                cin >> num;

                if(num > 0){
                        pos++;
                }
        }

        cout << "Você digitou " << pos << " números positivos." << endl;
}
*/

/*
// Questão 6

int main(){
        float nota;
        float soma_notas = 0;
        float media;
        int quantidade_nota = 0;

        while(true){
                cout << "Digite sua nota: ";
                cin >> nota;

                if(nota > 0){
                        soma_notas += nota;
                        quantidade_nota++;
                }

                if(nota < 0){
                        break;
                }
        }

        media = soma_notas / quantidade_nota;
        cout << "Sua média é: " << media << endl;
}
*/

/*
// Questão 7

int main(){

        for(int i = 1; i <= 50; i++){
                if(i % 2 == 0){
                        cout << "O número " << i << " é par!" << endl;
                }
        }
}
*/

/*
// Questão 8

int main(){
        srand(time(0));

        int num_aleatorio = rand() % 10 + 1;
        int num;

        while(true){
                cout << "Adivinha um número de 1 a 10! Se acertar, você ganha! :)" << endl;
                cin >> num;

                if(num < num_aleatorio){
                        cout << "Tente um pouco mais alto!" << endl;
                }

                if(num > num_aleatorio){
                        cout << "Tente um pouco mais baixo!" << endl;
                }

                if(num == num_aleatorio){
                        break;
                }
        }

        cout << "Parabéns, você acertou! O número era " << num_aleatorio << "!" << endl;
}
*/

/*
// Questão 9

int main(){
        int soma = 0;

        for(int i = 1; i <= 100; i++){
                if(i % 2 != 0){
                        soma += i;
                }
        }

        cout << "A soma de todos os números ímpares de 1 a 100 é: " << soma << endl;
}
*/
