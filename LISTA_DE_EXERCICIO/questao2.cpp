/*
QUESTÃO 002. Desenvolver uma aplicação de software, utilizando o paradigma de
orientação a objetos, para cadastrar funcionários de uma empresa, calcular o salário
líquido e descontos de acordo com os seguintes requisitos:
 Dados cadastrados: Nome do Funcionário, Salário hora, horas trabalhadas,
número de filhos, enquadramento funcional (5 níveis: 0 a 4).
 Cálculo do salário bruto = salário hora * horas trabalhadas
 Adicional por filho: para cada filho acrescentar 5% limitado a 20%
 Desconto do imposto de renda - seguir a tabela:
TOTAL BRUTO = SALÁRIO BRUTO + ADICIONAL FILHOS % DESCONTO IR
TOTAL BRUTO < R$ 4000.00 0%
4000.00 <= TOTAL BRUTO < 8000.00 15%
8000.00 <= TOTAL BRUTO < 12000.00 22.5%
12000.00 <= TOTAL BRUTO 27.5%
 Desconto IR deve ser aplicado sobre o salário bruto mais adicional filhos.
 Salário líquido = salário bruto + adicional filhos – desconto IR
Desenvolver, pelo menos, uma classe e os métodos pertinentes para atender aos
requisitos apresentados. Obrigatoriamente incorporar construtor, polimorfismo,
métodos get e set, e sobreposição de classe: toString [retornar: nome
funcionário, salário bruto, salário líquido e enquadramento funcional] .
*/
