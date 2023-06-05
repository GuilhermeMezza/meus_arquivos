#include <iostream>
using namespace std;
int main(){
    
    cout << "----------------\n"; 
    cout << "----------------"; 
    cout << "\nCOMPRA INICIADA!\n"; 
    cout << "----------------\n"; 
    cout << "----------------\n\n"; 

    pontoInicial: 

    cout << "-------------------------------------------------------------------------------\n";
    cout << ">>>>>OBS_1: USAR (.) NO LUGAR DE (,) PARA VALORES DECIMAIS.\n"; 
    cout << ">>>>>OBS_2: PARA CALCULAR O TOTAL DIGITE 0 NO VALOR E NA QUANTIDADE DO PRODUTO.\n"; 
    cout << "-------------------------------------------------------------------------------\n"; 
    
    float valorProduto; 
	float qtdProduto; 
	float dinheiroFornecido; 
	int novaCompraSimNao; 
	int quantidade=0; 
	int numero=0; 
	float totalDaCompra = 0; 

    while(true){ 
    
        numero=numero + 1; 
        cout << "\nInforme o valor do produto ("<< numero <<"): R$ "; 
	    cin >> valorProduto; 
	 
	    cout << "Informe a quantidade do produto: "; 
	    cin >> qtdProduto; 
	    
	    quantidade = quantidade + qtdProduto; 
	    
	    float totalParcialDeCadaProduto=valorProduto*qtdProduto; 
	 
	    if(valorProduto==0){
	        break; 
	    }
	    
	    totalDaCompra = totalDaCompra + totalParcialDeCadaProduto; 
        
    }
    
        cout << "\n-------------------------------------------------------------------------------"; 
    
	    cout << "\nTotal da compra: R$ " << totalDaCompra; 
	    
	    cout <<"\nQuantidade de produtos comprados: " << quantidade << " produtos."; 

	    cout << "\n-------------------------------------------------------------------------------"; 
	    
	    cout << "\nDigite o dinheiro fornecido pelo cliente: R$ "; 
	    cin >> dinheiroFornecido; 
	    
	    cout << "-------------------------------------------------------------------------------"; 
	    
	    float troco = dinheiroFornecido - totalDaCompra; 
	    cout << "\nTroco: R$ " << troco; 

	    cout << "\n-------------------------------------------------------------------------------"; 
	    
	    cout << "\n\nCOMPRA FINALIZADA!"; 
	    cout << "\n_______________________________________________________________________________"; 
	    
	    cout << "\n\nDESEJA INICIAR UMA NOVA COMPRA? SE SIM, DIGITE 1. SE NÃO, DIGITE 2: "; 
	    cin >> novaCompraSimNao; 
	    
	    if(novaCompraSimNao==1){ 
	    cout << "\n\n---------------------"; 
	    cout << "\n---------------------"; 
        cout << "\nNOVA COMPRA INICIADA!"; 
	    cout << "\n---------------------"; 
	    cout << "\n---------------------\n\n"; 
	    
        goto pontoInicial; 
        
	    }else if(novaCompraSimNao==2){ 
	        cout << "\n-------------------------------------------------------------------------------"; 
	        cout << "\nObrigado pela compra e volte sempre!"; 
	        return 0; 
	    }
    }











