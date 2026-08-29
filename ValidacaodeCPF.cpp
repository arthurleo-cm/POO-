/*
QUESTÃO 005. Desenvolver uma aplicação de software, utilizando o paradigma de
orientação a objetos, para validar o CPF: validar os dois dígitos verificadores. Regras
para validação dos dígitos verificadores:
Como validar o CPF:
1) O CPF tem 11 dígitos numéricos: "###.###.###-DV"
2) A 9 primeiros dígitos de cadastro + 2 dígitos de verificação (validação)
3) Calculando o primeiro dígito verificador: multiplique os 9 primeiros dígitos, da
direita para a esquerda, por fatores iniciando de 2 a 10, e some os resultados
parciais, como indicado a seguir: considerar como exemplo: "621.209.258-DV":
total1 = 6 * 10 + 2 * 9 + 1 * 8 + 2 * 7 + 0 * 6 + 9 * 5 + 2 * 4 + 5 * 3 + 8 * 2
4) Validação do primeiro dígito verificador (D): Multiplique o total por 10 e divida
por 11, o valor que interessa é o resto: total * 10 / 11
int digito1 = (total1 *10) % 11
Se digito1 for igual a 10, então, digito1 assume o valor 0 (zero)
Se digito1 for igual a D, então este dígito é válido.

5) Calculando o segundo dígito verificador: utilizar o mesmo procedimento
aplicado na etapa (3) considerando os 9 primeiros dígitos e o primeiro dígito
verificador, mas, multiplicado os dígitos, da direita para a esquerda , por fatores
de 2 a 11:
total2 = 6 * 11 + 2 * 10 + 1 * 9 + 2 * 8 + 0 * 7 + 9 * 6 + 2 * 5 + 5 * 4 + 8 * 3 + D *2
6) Validação do segundo dígito verificador (V): Multiplique o total por 10 e divida
por 11, o valor que interessa é o resto: total * 10 / 11
digito2 =(total2 *10) % 11
Se digito2 for igual a 10, então, digito2 assume o valor 0 (zero)
Se digito2 for igual a V, então este dígito é válido.

7) Se a validação dos dois dígitos verificadores forem True, então, o CPF é válido.
Desenvolver, pelo menos, uma classe e os métodos pertinentes para atender aos
requisitos apresentados. Obrigatoriamente incorporar construtor, polimorfismo,
métodos get e set, e sobreposição de classe: toString [retorno: DEFINIR
PADRÃO] .
*/
int main()
{
  
}
