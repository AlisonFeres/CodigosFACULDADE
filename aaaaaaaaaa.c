#include <stdio.h> // BIBLIOTECAS
#include <time.h>
// projeto criado para calular quantos quilometros o carro pode percorrer com a distancia informada,
// nesse programa voce insere as infos do seu carro e ele vai te imprimir os resultados, indicando 
// quanto ele percorre com 1/4 2/4 3/4 e tanque cheio de gasolina.
// lembrando que se for menor de 18 anos o programa se encerrara
int main()
{
    int diaNasc, mesNasc, anoNasc;// VARIAVEIS USADAS NO TRABALHGO
    int diaAtual, mesAtual, anoAtual;// VARIAVEIS USADAS NO TRABALHGO
    int idade;// VARIAVEIS USADAS NO TRABALHGO
    int ano;// VARIAVEIS USADAS NO TRABALHGO
    char marca[50], modelo[50];// VARIAVEIS USADAS NO TRABALHGO
    float km_litro, distancia, gasolina_consumida, capacidade_tanque, km_tanque_cheio;// VARIAVEIS USADAS NO TRABALHGO
    float km_percorrida_1_4, km_percorrida_2_4, km_percorrida_3_4;// VARIAVEIS USADAS NO TRABALHGO

    time_t now = time(NULL);   // OBTEM A DATA E HORA ATUAL
    struct tm *dataAtual = localtime(&now);  // Converte a data atual para uma estrutura tm (tempo)
    diaAtual = dataAtual->tm_mday;  // Extrai o dia, mês e ano atual da estrutura tm
    mesAtual = dataAtual->tm_mon + 1;  // Extrai o dia, mês e ano atual da estrutura tm
    anoAtual = dataAtual->tm_year + 1900;  // Extrai o dia, mês e ano atual da estrutura tm

    printf("Informe a data de nascimento (dd/mm/aaaa): ");
    scanf("%d/%d/%d", &diaNasc, &mesNasc, &anoNasc);

    idade = anoAtual - anoNasc;
    if (mesNasc > mesAtual || (mesNasc == mesAtual && diaNasc > diaAtual)) // Verifica se a data de nascimento ocorrerá após a data atual no mesmo ano
// ou se a data de nascimento é no mesmo mês, mas ocorrerá após o dia atual.
// Se sim, significa que a pessoa ainda não completou o aniversário deste ano.
// Nesse caso, decrementamos a idade em 1.
    {
        idade--; 
    }

    if (idade < 18) //VERIFICA SE A IDADE É MENOR QUE 18 ANOS 
    {
        printf("Desculpe, voce e menor de 18 anos. O programa sera encerrado.\n"); // SE A IDADE FOR MENOR QUE 18 ANOS O PROHRAMA IRA SE ENCERRAR
        return 0;
    }

    printf("Sua idade e: %d anos\n\n", idade);
    printf("Temos a confirmacao que voce e maior de idade, agora podemos seguir com a pesquisa.\n\n"); // vc é maior de idade vamos lá para pesquisa 

    printf("Digite a marca do veiculo: ");
    scanf("%s", marca); // variavel do tipo char character

    printf("Digite o modelo do veiculo: ");
    scanf("%s", modelo); // variavel do tipo char character

    printf("Digite o ano do veiculo: ");
    scanf("%d", &ano); // variavel do tipo int 

    printf("Digite a quantidade de km/litro do veiculo: ");
    scanf("%f", &km_litro); //variavel do tipo float

    printf("Digite a distancia percorrida (em km): ");
    scanf("%f", &distancia);//VARIAVEL DO TIPO FLOAT

    printf("Digite a capacidade do tanque de gasolina (em litros): ");
    scanf("%f", &capacidade_tanque);

    gasolina_consumida = distancia / km_litro; // Calcula a quantidade de gasolina consumida com base na distância percorrida e no consumo médio em km/litro.
    km_percorrida_1_4 = (capacidade_tanque * 0.25) * km_litro; // Calcula a distância percorrida com 1/4 do tanque cheio. 
    km_percorrida_2_4 = (capacidade_tanque * 0.5) * km_litro; // Calcula a distância percorrida com 2/4 do tanque cheio.
    km_percorrida_3_4 = (capacidade_tanque * 0.75) * km_litro; // Calcula a distância percorrida com 3/4 do tanque cheio.
    km_tanque_cheio = capacidade_tanque * km_litro; // Calcula a distância máxima que pode ser percorrida com o tanque cheio.


    printf("\n\nMarca: %s\n", marca); // Imprime a marca do veiculo
    printf("Modelo: %s\n", modelo); // Imprime o modelo do veiculo
    printf("Ano: %d\n", ano); // Imprime o ano do veiculo
    printf("Km/litro: %.2f\n", km_litro); 
    printf("Distancia percorrida: %.2f km\n", distancia);
    printf("Gasolina consumida: %.2f litros\n", gasolina_consumida);
    printf("Capacidade do tanque: %.2f litros\n", capacidade_tanque);

    printf("\n\nConsumo de gasolina em diferentes niveis do tanque:\n");
    printf("1/4 do tanque: %.2f litros - %.2f km\n", capacidade_tanque * 0.25, km_percorrida_1_4);
    printf("2/4 do tanque: %.2f litros - %.2f km\n", capacidade_tanque * 0.5, km_percorrida_2_4);
    printf("3/4 do tanque: %.2f litros - %.2f km\n", capacidade_tanque * 0.75, km_percorrida_3_4);
    printf("4/4 do tanque: %.2f litros - %.2f km\n", capacidade_tanque, km_tanque_cheio);

    return 0;
}
