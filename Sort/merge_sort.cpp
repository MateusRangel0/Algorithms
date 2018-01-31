#include<bits/stdc++.h>
#define MAXN 1100

using namespace std;
//vetores que serão usados
int vetor[MAXN], aux[MAXN];
//paramêtros são os indices de inicio e de fim do intervalo
void merge_sort(int ini, int fim) {
    //se for um intervalo de um único elemento, já está ordenado
    if (ini == fim) return;
    //se não, divido o intervalo ao meio e ordeno as duas metades, com recursão
    merge_sort(ini, (ini+fim)/2);
    merge_sort((ini+fim)/2+1, fim);
    //tamanho do vertor que será criado
    int tam = 0;
    //índice do segundo vetor que estou olhando
    int j = (ini+fim)/2+1;
    //percorrendo o primeiro intervalo
    for(int i = ini; i <= (ini + fim)/2; i++) {
        //enquanto o primeiro elenemento nao usado do segundo intervalo for menor que o do primeiro
        while(j <= fim && vetor[j] < vetor[i]) {
            //coloco nele o próximo elemento do segundo intervalo
            aux[tam] = vetor[j];
            //aumento o tamanho do vetor aux
            tam++;
            //passo para o proximo elemento do segundo intervalo
            j++;
        }
        //insiro nele o próximo elemento do primeiro intervalo
        aux[tam] = vetor[i];
        //aumento o tamanho do vetor
        tam++;
    }
    //enquanto ainda tiver elemento no segundo intervalo
    while(j <= fim) {
        //insiro nele o proximo elemento do segundo intervalo
        aux[tam] = vetor[j];
        //passo para o proximo elemento do segundo intervalo
        j++;
        //aumento o tamanho do vetor aux
        tam++;
    }
    //coloco os valores do vetor aux no intervalo que queria ordenar
    for(int i = ini; i <= fim; i++) vetor[i] = aux[i-ini];
}

int main() {
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) scanf("%d", &vetor[i]);
    merge_sort(1, n);
    for(int i = 1; i <= n; i++) printf("%d", vetor[i]);
    printf("\n");
    return 0;
}
