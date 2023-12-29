#include <bits/stdc++.h>

using namespace std;

// Manolo na Fábrica de Celulares

// Manolo conseguiu um novo emprego em uma fábrica de celulares. Sua tarefa na fábrica é simples, ele fica na ponta de uma esteira esperando os componentes dos celulares, assim que ele consegue componentes suficientes para montar algum modelo de celular ele realiza a montagem. Manolo é muito rápido montando os celulares, assim que recebe as peças ele faz a montagem de forma instantânea.

// Diferente modelos de celulares precisam de diferente componentes. Na fábrica que Manolo trabalha são montados 3 modelos diferentes, para montá-los são necessários 5 tipos de componentes diferentes. A lista de modelos e os componentes necessários são os seguintes:

//     Modelo A: Formado pelos componentes de tipo 1, 3 e 5
//     Modelo B: Formado pelos componentes de tipo 1 e 4
//     Modelo C: Formado pelos componentes de tipo 2 e 4

// Caso Manolo consiga montar mais de um modelo de celular com os componentes, ele sempre prefere montar primeiro o Modelo A, depois o Modelo B e por último o Modelo C.

// Após realizar a montagem dos celulares, Manolo ainda precisa entregar um relatório para seu chefe. Como ele está muito focado fazendo as montagens ele pede sua ajuda para criar o relatório.

// Dada a ordem das peças que Manolo recebe, imprima um relatório de quantos celulares de cada tipo Manolo irá montar.
// Entrada

// A primeira linha da entrada é composta por um inteiro NN representando a quantidade de peças que Manolo irá receber.

// A segunda linha da entrada é composta por NN números inteiros C1C1​, C2C2​, ..., CNCN​, onde cada CiCi​ é um número entre 1 e 5 representando o tipo do componente que Manolo vai receber. O primeiro componente que Manolo recebe é o C1C1​ e o último é o CNCN​.
// Saída

// Você deve imprimir um relatório de quantos celulares Manolo consegue montar de cada tipo. Na primeira linha imprima "A: " seguido do número de celulares do tipo A que Manolo conseguiu montar, na segunda da saida imprima a quantidade de celulares do tipo B e na terceira linha a quantidade de celulares do tipo C.

// Para mais detalhes sobre a saída confira o exemplo de saída a seguir.
// Restrições

//     1≤N≤106
//     1≤N≤106

int main()
{
    int n, i = 0, um = 0, dois = 0, tres = 0, quatro = 0, cinco = 0, A = 0, B = 0, C = 0;
    cin >> n;
    int c;
    while (i < n)
    {
        cin >> c;
        if (c == 1)
        {
            um++;
        }
        else if (c == 2)
        {
            dois++;
        }
        else if (c == 3)
        {
            tres++;
        }
        else if (c == 4)
        {
            quatro++;
        }
        else if (c == 5)
        {
            cinco++;
        }
        if (um > 0 && tres > 0 && cinco > 0)
        {
            A++;

            um--;
            tres--;
            cinco--;
        }
        else if (um > 0 && quatro > 0)
        {
            B++;

            um--;
            quatro--;
        }
        else if (dois > 0 && quatro > 0)  // Corrected condition
        {
            C++;

            dois--;  // Corrected: decrement dois instead of um
            quatro--;
        }
        i++;
    }
    cout << "A: " << A << endl;
    cout << "B: " << B << endl;
    cout << "C: " << C << endl;

    return 0;
}