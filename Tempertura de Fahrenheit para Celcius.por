programa {
    inclua biblioteca Matematica --> mat
	funcao inicio() {
		real tempF, tempC
		escreva("Entre com a temperatura em �Fahrenheit: ")
		leia(tempF)
		tempC=(tempF-32)/1.8
		escreva("Fahrenheit: ",tempF,"� | Equivale a ",tempC,"� em Celcius")
	}
}