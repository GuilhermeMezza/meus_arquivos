#include <iostream>
#include <math.h>
using namespace std;
int main(){
    
    cout << "\n**********CALCULADORA**********\n";
    
        retorno2:
    
    int nr;
    float numero1;
    float numero2;
    int refazerOp;
    
    cout << "\n===============================\n";
    cout << "1 - Soma." << endl;
    cout << "2 - Subtração." << endl;
    cout << "3 - Multiplicação." << endl;
    cout << "4 - Divisão." << endl;
    cout << "5 - Potência." << endl;
    cout << "6 - Raíz Quadrada." << endl;
    cout << "===============================\n";
    cout << "Digite o código da operação: ";
    cin >> nr;
    cout << "===============================\n";

    
    
    switch(nr){
        case 1: //SOMA
            
            retorno:
        
        cout << "\n***Você selecionou a operação soma.***";
        cout << "\n\n-> Insira o primeiro número: ";
        cin >> numero1;
        cout << "-> Insira o segundo número:  ";
        cin >> numero2;
        cout << "________________________________";
        cout << "\n\n          Resultado: " << numero1 + numero2;
        
        retorno3:
        
        cout << "\n\n===============================================================================================\n";
        cout << "Deseja refazer essa operação (1), selecionar outra operação (2) ou finalizar o programa (3)? ";
        cin >> refazerOp;
        cout << "===============================================================================================\n";

        
        if(refazerOp==1){
            goto retorno;
        }else if(refazerOp==2){
            goto retorno2;
        }else if(refazerOp==3){
            cout << "\n\nCalculadora desligada.";
            break;
        }else if(refazerOp<0 || refazerOp>3){
            cout << "\nCódigo inválido!";
            goto retorno3;
        }
        
        case 2: //SUBTRAÇÃO
        
        cout << "\n\n***Você selecionou a operação subtração.***";
        cout << "\n\n-> Insira o primeiro número: ";
        cin >> numero1;
        cout << "-> Insira o segundo número:  ";
        cin >> numero2;
        cout << "________________________________";
        cout << "\n\n          Resultado: " << numero1 - numero2;

        cout << "\n\n===============================================================================================\n";
        cout << "Deseja refazer essa operação (1), selecionar outra operação (2) ou finalizar o programa (3)? ";
        cin >> refazerOp;
        cout << "===============================================================================================\n";
       
        if(refazerOp==1){
            goto retorno;
        }else if(refazerOp==2){
            goto retorno2;
        }else if(refazerOp==3){
            cout << "\n\nCalculadora desligada.";
            break;
        }else if(refazerOp<0 || refazerOp>3){
            cout << "\nCódigo inválido!";
            goto retorno3;
        }
        
        case 3: //MULTIPLICAÇÃO
        
        cout << "\n\n***Você selecionou a operação multiplicação.***";
        cout << "\n\n-> Insira o primeiro número: ";
        cin >> numero1;
        cout << "-> Insira o segundo número:  ";
        cin >> numero2;
        cout << "________________________________";
        cout << "\n\n          Resultado: " << numero1 * numero2;

        cout << "\n\n===============================================================================================\n";
        cout << "Deseja refazer essa operação (1), selecionar outra operação (2) ou finalizar o programa (3)? ";
        cin >> refazerOp;
        cout << "===============================================================================================\n";
        
        if(refazerOp==1){
            goto retorno;
        }else if(refazerOp==2){
            goto retorno2;
        }else if(refazerOp==3){
            cout << "\n\nCalculadora desligada.";
            break;
        }else if(refazerOp<0 || refazerOp>3){
            cout << "\nCódigo inválido!";
            goto retorno3;
        }
        
        case 4: //DIVISÃO
        
        cout << "\n\n***Você selecionou a operação divisão.***";
        cout << "\n\n-> Insira o número que deseja didivir: ";
        cin >> numero1;
        cout << "-> Insira o número divisor:  ";
        cin >> numero2;
        cout << "________________________________";
        cout << "\n\n          Resultado: " << numero1 / numero2;
        
        cout << "\n\n===============================================================================================\n";
        cout << "Deseja refazer essa operação (1), selecionar outra operação (2) ou finalizar o programa (3)? ";
        cin >> refazerOp;
        cout << "===============================================================================================\n";
        
        if(refazerOp==1){
            goto retorno;
        }else if(refazerOp==2){
            goto retorno2;
        }else if(refazerOp==3){
            cout << "\n\nCalculadora desligada.";
            break;
        }else if(refazerOp<0 || refazerOp>3){
            cout << "\nCódigo inválido!";
            goto retorno3;
        }
        
        case 5: //POTÊNCIA
        
        cout << "\n\n***Você selecionou a operação potência.***";
        cout << "\n\n-> Insira a base: ";
        cin >> numero1;
        cout << "-> Insira o expoênte: ";
        cin >> numero2;
        cout << "________________________________";
        cout << "\n\n          Resultado: " << pow(numero1,numero2);
        
        cout << "\n\n===============================================================================================\n";
        cout << "Deseja refazer essa operação (1), selecionar outra operação (2) ou finalizar o programa (3)? ";
        cin >> refazerOp;
        cout << "===============================================================================================\n";
        
        if(refazerOp==1){
            goto retorno;
        }else if(refazerOp==2){
            goto retorno2;
        }else if(refazerOp==3){
            cout << "\n\nCalculadora desligada.";
            break;
        }else if(refazerOp<0 || refazerOp>3){
            cout << "\nCódigo inválido!";
            goto retorno3;
        }
        
        case 6: //RAÍZ QUADRADA
        
        cout << "\n\n***Você selecionou a operação raíz quadrada.***";
        cout << "\n\n-> Insira o número: ";
        cin >> numero1;
        cout << "________________________________";
        cout << "\n\n          Resultado: " << sqrt(numero1);
        
        cout << "\n\n===============================================================================================\n";
        cout << "Deseja refazer essa operação (1), selecionar outra operação (2) ou finalizar o programa (3)? ";
        cin >> refazerOp;
        cout << "===============================================================================================\n";
        
        if(refazerOp==1){
            goto retorno;
        }else if(refazerOp==2){
            goto retorno2;
        }else if(refazerOp==3){
            cout << "\nCalculadora desligada.";
            break;
        }else if(refazerOp<0 || refazerOp>3){
            cout << "\nCódigo inválido!";
            goto retorno3;
        }
    }
    
}

