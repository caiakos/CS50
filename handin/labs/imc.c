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
 * Função main
 */
int main(void)
{
    // TODO: escreva aqui o código que solicita o peso da pessoa (em kg).
    // Seu código só deve aceitar valores válidos entre 40,0 e 200,0 kg
    // (inclusive). Se o peso informado não estiver nessa faixa ou se o usuário
    // informar um dado inválido, seu programa deve continuar a solicitar o peso
    // até que ele informe um peso válido.
    float peso;
    do
    {
        peso = get_float("Informe seu peso (kg): ");
    }
    while (peso < 40 || peso > 200);
    // TODO: escreva aqui o código que solicita a altura da pessoa (em m)
    // Seu código só deve aceitar valores válidos entre 1,40 e 2,50 m
    // (inclusive). Se a altura informada não estiver nessa faixa ou se o
    // usuário informar um dado inválido, seu programa deve continuar a
    // solicitar a altura até que ele informe uma altura válida.
    float altura;
    do
    {
        altura = get_float("Informe sua altura (m): ");
    }
    while (altura < 1.4 || altura > 2.5);
    
    // TODO: escreva aqui o código que calcula o IMC e imprime a classificação
    // da obesidade no terminal, conforme as especificações do exercício.
    float imc = peso / (altura * altura);
    string class = "";
    if (imc < 16)
    {
        class = "Magreza grau III";
    }
    else if (16 <= imc && imc < 17)
    {
        class = "Magreza grau II";
    }
    else if (17 <= imc && imc < 18.5)
    {
        class = "Magreza grau I";
    }
    else if (18.5 <= imc && imc < 25)
    {
        class = "Peso adequado";
    }
    else if (25 <= imc && imc < 30)
    {
        class = "Pré-obeso";
    }
    else if (30 <= imc && imc < 35)
    {
        class = "Obesidade grau I";
    }
    else if (35 <= imc && imc < 40)
    {
        class = "Obesidade grau II";
    }
    else if (imc >= 40)
    {
        class = "Obesidade grau III";
    }
    printf("IMC: %.2f; Classificação: %s.\n", imc, class);
    // Termina o programa:
    return 0;
}