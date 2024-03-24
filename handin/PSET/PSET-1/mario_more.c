/* IDENTIFICAÇÃO DO ESTUDANTE:
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

// Comece aqui seu programa.
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Solicita a altura
    int altura;
    do
    {
        altura = get_int("Altura: ");
    }
    while (altura < 1 || altura > 8);
    // Inicia um loop para cada linha
    for (int i = 0; i < altura; i++)
    {
        // Inicia um loop para adicionar o espaço antes da #
        for (int p = altura; p > i + 1; p--)
        {
            printf(" ");
        }
        // Inicia um loop para imprimir a quantidade correta de #
        for (int a = 0; a <= i; a++)
        {
            printf("#");
        }
        // Imprime a coluna do meio
        printf("  ");
        // Imprime a direita da pirâmide
        for (int a = 0; a <= i; a++)
        {
            printf("#");
        }
        // Quebra de linha
        printf("\n");
    }
    return 0;
}
