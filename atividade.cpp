#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int numero;

class Pessoa
{
	public:
		char nome;
		int idade;
};

class Funcionario
{
	public:
		char nome;
		float salario;
};

class Retangulo
{
	public:
		float largura;
		float altura;
		
		float area() {
			return largura * altura;
		}
		float perimetro() {
			return 2 *(largura + altura);
		}
		float diagonal() {
			return sqrt((largura * largura)+(altura * altura));
		}

};

class Funcionarioo
{
	public:
		char nome;
		float SalarioBruto;
		float imposto; 
		float porcentagem;
		
		float SalarioLiquido() {
			return SalarioBruto - imposto;
		}
		float AumentarSalario() {
			return (porcentagem * SalarioLiquido()+SalarioLiquido());
		}

};

class Aluno
{
	public:
		char nome;
		float nota1, nota2,nota3;
		
		float NotaFinal() {
			return nota1 + nota2 + nota3;
		}
		float reprovado() {
			if (NotaFinal() < 60.00) {
				return 60.00 - NotaFinal();
			} else {
				return 0.0;
			}
		}
};

int main(int argc, char *argv[])
{
	printf("--Menu--\n\n");
	printf("Selecao das atividades \n\n");
	printf("1- Questao 1\n");
	printf("2- Questao 2\n");
	printf("3- Questao 3\n");
	printf("4- Questao 4\n");
	printf("5- Questao 5\n");
	printf("\nEscolha a questao desejada: \n");
	scanf("%d", &numero);
	switch(numero)
	{
		case 1:
			system("cls");
			
			Pessoa pessoa1;
			Pessoa pessoa2;
			
			printf("Ler os dados de duas pessoas, depois mostrar o nome da pessoa mais velha.\n\n");
			
			printf("\nDados da primeira pessoa: \n");
			printf("Nome:");
			scanf("%s", &pessoa1.nome);
			printf("Idade:");
			scanf("%d", &pessoa1.idade);
			
			printf("\nDados da segunda pessoa: \n");
			printf("Nome:");
			scanf("%s", &pessoa2.nome);
			printf("Idade:");
			scanf("%d", &pessoa2.idade);
			
			if (pessoa1.idade > pessoa2.idade)
			{
				printf("\nPeesoa mais velha e: %s\n\n1", &pessoa1.nome);
			}else
			{
				printf("\nPeesoa mais velha e: %s\n\n", &pessoa2.nome);
			}
			
			break;
		case 2:
			system("cls");
			
			Funcionario funcionario1;
			Funcionario funcionario2;
			float media;
			
			printf("Ler nome e salário de dois funcionários. Depois, mostrar o salário médio dos funcionários.\n\n");
			
			printf("\nDados da primeira pessoa: \n");
			printf("Nome:");
			scanf("%s", &funcionario1.nome);
			printf("Salario:");
			scanf("%f", &funcionario1.salario);
			
			printf("\nDados da segunda pessoa: \n");
			printf("Nome:");
			scanf("%s", &funcionario2.nome);
			printf("Salario:");
			scanf("%f", &funcionario2.salario);
			
			printf("\nSalario medio = %-5.2f\n\n", ((funcionario1.salario+funcionario2.salario)/2));
			
			break;
			
		case 3:
			system("cls");
			
			Retangulo retangulo;
			
			printf("Ler os valores da largura e altura de um retângulo. Em seguida, mostrar na tela o valor de sua área, perímetro e diagonal.\n\n");
			
			printf("Largura:");
			scanf("%f", &retangulo.largura);
			printf("Altura:");
			scanf("%f", &retangulo.altura);
			
			printf("\nArea: %-5.2f", retangulo.area());
			printf("\nPerimetro: %-5.2f", retangulo.perimetro());
			printf("\nPerimetro: %-5.2f", retangulo.diagonal());
			
			break;
			
		case 4:
			system("cls");
			Funcionarioo funcionario;
			
			printf("Ler os dados de um funcionário (nome, salário bruto e imposto). Em seguida, mostrar os dados do funcionário (nome e salário líquido). Em seguida, aumentar o salário do funcionário com base em uma porcentagem dada (somente o salário bruto é afetado pela porcentagem) e mostrar novamente os dados do funcionário.\n\n");
			
			printf("Nome:");
			scanf("%s", &funcionario.nome);
			printf("Salario bruto:");
			scanf("%f", &funcionario.SalarioBruto);
			printf("Imposto:");
			scanf("%f", &funcionario.imposto);
			
			printf("\nFuncionario: %s,R$%-5.2f", &funcionario.nome, funcionario.SalarioLiquido());
			printf("\nDigite a porcentagem para aumentar o salario:");
			scanf("%f", &funcionario.porcentagem);
			
			printf("\Dados atualizados: %s,%-5.2f\n\n", &funcionario.nome, funcionario.AumentarSalario());
			
			break;
		
		case 5:
			system("cls");
			Aluno aluno;
			
			printf("Ler o nome de um aluno e as três notas que ele obteve nos três trimestres do ano (primeiro trimestre vale 30 e o segundo e terceiro valem 35 cada). Ao final, mostrar qual a nota final do aluno no ano. Dizer também se o aluno está APROVADO ou REPROVADO e, em caso negativo, quantos pontos faltam para o aluno obter o mínimo para ser aprovado (que é 60 pontos).\n\n");
			
			printf("Nome:");
			scanf("%s", &funcionario.nome);
			printf("Informe a primeira nota:");
			scanf("%f", &aluno.nota1);
			printf("Informe a segunda nota:");
			scanf("%f", &aluno.nota2);
			printf("Informe a terceira nota:");
			scanf("%f", &aluno.nota3);
			
			printf("\nNOTA FINAL %-5.2f\n", aluno.NotaFinal());
			
			if (aluno.NotaFinal() < 60.00) {
				printf("\nREPROVADO\n");
				printf("FALTARAM %-5.2f PONTOS\n\n", aluno.reprovado());
			}else{
				printf("\nAPROVADO\n\n");
			}
			
			break;
			
		default:
			printf("Opcao invalida\n");
	}
	system("pause");
	return 0;
	
}
