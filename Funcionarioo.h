#ifndef FUNCIONARIOO_H_INCLUDED
#define FUNCIONARIOO_H_INCLUDED

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

#endif
