programa {
	funcao inicio() {
		inteiro peso, somaIdade = 0, idade, somaPeso = 0, qtdPessoas = 0
    	escreva("Informe sua Peso: ")
    	leia(peso)
    	escreva("Informe sua idade: ")
    	leia(idade)

		enquanto (peso!=0)
		{
		    
            somaPeso += peso
            somaIdade += idade

    		qtdPessoas ++

    		escreva("Informe sua Peso: ")
    		leia(peso)
    		
    		escreva("Informe sua idade: ")
    		leia(idade)
		    
		}
		
		escreva("Total de Entrevistados: \t", qtdPessoas, "\n")
		escreva("Média dos Pesos: \t", (somaPeso/qtdPessoas), "\n")
		escreva("Media das Idades: \t", (somaIdade/qtdPessoas), "\n" )
	}
}
