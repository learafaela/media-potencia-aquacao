#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;

int main(){
    float valorMediaArray[100]; //todos os valores inseridos para criar uma média
    bool aindaDigitando = true; //verifica se o usuário deseja dar continuidade ao código
    int valoresInseridos = 0; //qualquer valor matemático inserido
    float inserirPotencia; //valor que será elevado (potência)
    float inserirPotencia2; //potência
    char continuar; //define o estado de continuidade de inserção de números
    string escolha; //escolha do cálculo

    cout << "Escolha seu cálculo: (media, potencia, equacao)" << "\n" << endl;
    cin >> escolha;

    while (aindaDigitando == true){
        if (escolha == "media"){
            cout << "Digite um número para inserir na sua média aritmética: " << "\n";
            float valorAinserir;
            cin >> valorAinserir;
            if (valorAinserir >= 1 && valorAinserir < 9){
                valoresInseridos += 1;
                aindaDigitando = true;
                valorMediaArray[valoresInseridos] = valorAinserir; //acresenta o numero no array e a posição é definida com base no valoresInseridos
                cout << "Deseja inserir mais um valor? (0 para sim e 1 para não)" << "\n";
                cin >> continuar;
                while (continuar != '0' && continuar != '1'){
                    cout << "Resposta inválida, digite 0 para sim e 1 para não!" << "\n";
                    cin >> continuar;
                }
                if (continuar == '0'){
                    aindaDigitando = true;
                }
                else if (continuar == '1'){
                    aindaDigitando = false;
                }
            }else if (valorAinserir < 1){
                aindaDigitando = true;
                cout << "Insira um número maior que 0!" << "\n";
            }
        }
        else if (escolha == "potencia"){
            cout << "Digite um número para elevar a potência: " << "\n";
            cin >> inserirPotencia;
            if (inserirPotencia - int(inserirPotencia) == 0){
                cout << "Digite o número da potência: " << "\n";
                cin >> inserirPotencia2;
                 if (inserirPotencia2 - int(inserirPotencia2) == 0){
                    cout << "Executando cálculo... " << "\n" << endl;
                    break;
                }else{
                    aindaDigitando = true;
                    cout << "Digite um número válido! " << "\n" << endl;
                    cin >> inserirPotencia2;
                }
            }else{
                aindaDigitando = true;
                cout << "Digite um número para elevar a potência válido! " << "\n" << endl;
                cin >> inserirPotencia;
            }
        }else if (escolha == "equacao"){
            
        }
        else{
            aindaDigitando = true;
            cout << "Digite um formato de cálculo válido: (media, potencia, equacao)" << "\n" << endl;
            cin >> escolha;
        }
    }
    // calculo
    if (escolha == "media"){
        cout << "Quantidade de valores: " << valoresInseridos << "\n";
        float valoresAsomar;
        float media;
        for (int i = 1; i <= valoresInseridos; ++i)
        {
            cout << "Valor " << valorMediaArray[i] << "\n";
            valorMediaArray[i] += valoresAsomar;
        }
        media = valoresAsomar / valoresInseridos;
        cout << media << "\n";
    }else if(escolha == "potencia"){
        cout << "O resultado da sua potência foi: " << pow(inserirPotencia, inserirPotencia2);
    }
}