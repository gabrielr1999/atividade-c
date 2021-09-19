#ifndef ALUNO_H_INCLUDED
#define ALUNO_H_INCLUDED

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

#endif
