programa {
	funcao inicio() {
		inteiro num, contador = 0
		escreva("Escolha um numero para mostrar sua tabuada: ")
		leia(num)
		enquanto (contador<=10)
		{
		    escreva("*** ==> ", num, " x ", contador, " = ", (num*contador), " *** \n " )
		    contador++
		}
	}
}
