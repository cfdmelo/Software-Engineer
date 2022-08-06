Algoritmo "software_locadora_cliente"

Var
Nome : caracter
Idade, ClassificacaoIndicativa: inteiro
Inicio

escreva ("Digite seu nome:")
leia (Nome)
escreva ("Digite sua idade:")
leia (Idade)
escreva ("Classifição indicativa:")
leia (ClassificacaoIndicativa)

Se (Idade <= ClassificacaoIndicativa) entao
escreval ("Este filme não é indicado para sua faixa etária!")
senao
escreval ("Este filme é inicado para sua faixa etária!")

Fimalgoritmo
