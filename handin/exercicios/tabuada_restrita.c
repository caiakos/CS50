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
// Recebe um número, o início e fim e imprime a tabuada
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Recebe o número, início e fim
    int number = get_int("Você quer a tabuada de qual número? ");
    int start = get_int("Você quer começar a tabuada em qual número? ");
    int end = get_int("Você quer terminar a tabuada em qual número? ");
    if (start>end)
    {
        // Imprime um erro ao receber o número de início maior que fim
        printf("Erro na especificação da tabuada.\n");
    }
    else
        while (start < end+1)
        {
            // Multiplica o número pelo início e soma até o fim
            int r = number * start;
            printf("%i x %i = %i\n", number, start, r);
            start++;
        }
}