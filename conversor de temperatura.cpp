#include <iostream>
using namespace std;
int main(){
    
    cout << "      \n***Conversor de Temperatura***";
    
    int codigo, escolha;
    float celsius, fahrenheit, kelvin;
    
    
    cout << "\n\n==========================================";
    cout << "\n---> Lista de códigos:";
    cout << "\n\n 1 - Celsius para Fahrenheit.";
    cout << "\n 2 - Celsius para Kelvin.";
    cout << "\n 3 - Fahrenheit para Kelvin.";
    cout << "\n 4 - Fahrenheit para Celsius.";
    cout << "\n 5 - Kelvin para Fahrenheit.";
    cout << "\n 6 - Kelvin para Celsius.";
    cout << "\n==========================================";
    retorno2:
    cout << "\n\nDigite o código para fazer a conversão: ";
    cin >> codigo;
    cout << "\n==========================================";    

    switch(codigo){
        
        case 1:
        
        retorno1:
        
        cout << "\nDigite o valor em graus Celsius: ";
        cin >> celsius;
        cout << "\nResultado: " << (celsius * 1.8) + 32 << " graus Fahrenheit.";
        cout << "\n==========================================";
        
        cout << "\nDeseja repetir esta operação(1), fazer outra operação(2) ou encerrar o programa(3)? ";
        cin >> escolha;
        if(escolha == 1){
            goto retorno1;
        }else if(escolha == 2){
            goto retorno2;
        }else if(escolha ==3){
            return 0;
        }
        
        case 2:
        
        retorno4:
        
        cout << "\nDigite o valor em graus Celsius: ";
        cin >> celsius;
        cout << "\nResultado: " << celsius + 273 << " graus Kelvin.";
        cout << "\n==========================================";
        
        cout << "\nDeseja repetir esta operação(1), fazer outra operação(2) ou encerrar o programa(3)? ";
        cin >> escolha;
        if(escolha == 1){
            goto retorno4;
        }else if(escolha == 2){
            goto retorno2;
        }else if(escolha ==3){
            return 0;
        }
        
        case 3:
        
        retorno5:
        
        cout << "\nDigite o valor em graus Fahrenheit: ";
        cin >> fahrenheit;
        cout << "\nResultado: " << (fahrenheit + 459.67) * 5/9 << " graus Kelvin.";
        cout << "\n==========================================";
        
        cout << "\nDeseja repetir esta operação(1), fazer outra operação(2) ou encerrar o programa(3)? ";
        cin >> escolha;
        if(escolha == 1){
            goto retorno5;
        }else if(escolha == 2){
            goto retorno2;
        }else if(escolha ==3){
            return 0;
        }
        
        case 4:
        
        retorno6:
        
        cout << "\nDigite o valor em graus Fahrenheit: ";
        cin >> fahrenheit;
        cout << "\nResultado: " << (5 * fahrenheit - 160)/9 << " graus Celsius.";
        cout << "\n==========================================";
        
        cout << "\nDeseja repetir esta operação(1), fazer outra operação(2) ou encerrar o programa(3)? ";
        cin >> escolha;
        if(escolha == 1){
            goto retorno6;
        }else if(escolha == 2){
            goto retorno2;
        }else if(escolha ==3){
            return 0;
        }
        
        case 5:
        
        retorno7:
        
        cout << "\nDigite o valor em graus Kelvin: ";
        cin >> kelvin;
        cout << "\nResultado: " << (kelvin - 273,15) * 9/5 + 32 << " graus Fahrenheit.";
        cout << "\n==========================================";
        
        cout << "\nDeseja repetir esta operação(1), fazer outra operação(2) ou encerrar o programa(3)? ";
        cin >> escolha;
        if(escolha == 1){
            goto retorno7;
        }else if(escolha == 2){
            goto retorno2;
        }else if(escolha ==3){
            return 0;
        }
        
        case 6:
        
        retorno8:
        
        cout << "\nDigite o valor em graus Kelvin: ";
        cin >> kelvin;
        cout << "\nResultado: " << kelvin - 273 << " graus Celsius.";
        cout << "\n==========================================";
        
        cout << "\nDeseja repetir esta operação(1), fazer outra operação(2) ou encerrar o programa(3)? ";
        cin >> escolha;
        if(escolha == 1){
            goto retorno8;
        }else if(escolha == 2){
            goto retorno2;
        }else if(escolha ==3){
            return 0;
        }
    }    
}
