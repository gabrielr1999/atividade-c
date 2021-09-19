#ifndef RETANGULO_H_INCLUDED
#define RETANGULO_H_INCLUDED

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

#endif
