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
// Imprime no terminal a frase "Olá, usuário!" Sendo "usuário" o nome informado pelo usuário
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Recebe o nome (string) do usuário
    string nome = get_string("Qual o seu nome? ");
    // Imprime "Olá, "nome do usuário"!"
    printf("Olá, %s!\n", nome);
    return 0;
}
