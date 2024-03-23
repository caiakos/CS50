/**
 * IDENTIFICAÇÃO DO ESTUDANTE:
 * Preencha seus dados e leia a declaração de honestidade abaixo. NÃO APAGUE
 * nenhuma linha deste comentário de seu código!
 *
 *    Nome completo: Caio Drumond de Abreu Rebouças
 *    Matrícula: 202416622
 *    Turma: CC1Mb
 *    Email: caio.reboucas@outlook.com
 *
 * DECLARAÇÃO DE HONESTIDADE ACADÊMICA:
 * Eu afirmo que o código abaixo foi de minha autoria. Também afirmo que não
 * pratiquei nenhuma forma de "cola" ou "plágio" na elaboração do programa,
 * e que não violei nenhuma das normas de integridade acadêmica da disciplina.
 * Estou ciente de que todo código enviado será verificado automaticamente
 * contra plágio e que caso eu tenha praticado qualquer atividade proibida
 * conforme as normas da disciplina, estou sujeito à penalidades conforme
 * definidas pelo professor da disciplina e/ou instituição.
 */


/**
 * Inclusão de bibliotecas:
 */
#include <cs50.h>
#include <stdio.h>


/**
 * Função main:
 */
int main(void)
{
    // Obtém menor número do usuário (no mínimo 1):
    int min;
    do
    {
        min = get_int("Menor número: ");
    }
    while (min < 1);

    // Obtém maior número do usuário (tem que ser maior do que o min):
    int max;
    do
    {
        max = get_int("Maior número: ");
    } 
    while (min >= max);

    // TODO: escreva aqui o código para imprimir todos os números primos dentro
    // da faixa especificada pelo usuário. Pode ser útil utilizar dois loops (um
    // dentro do outro) e algumas estruturas condicionais. O operador módulo
    // também pode ser útil!
    // Verifica e imprime os números primos dentro da faixa especificada
    while (min <= max)
    {
        // Reseta a contagem de divisores
        int c = 0;
        for (int i = 1; i <= min; ++i)
        {
            if (min % i == 0)
            {
                c++;
            }
        }
        if (c == 2)
        {
            // Imprime o número caso só tenha 2 divisores
            printf("%d\n", min);
        }
        min += 1;
    }

    // Finaliza o programa:
    return 0;
}

