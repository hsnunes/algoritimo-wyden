programa {
    inclua biblioteca Matematica --> mat
	funcao inicio() {
		real tempF, tempC
		escreva("Entre com a temperatura em �Fahrenheit: ")
		leia(tempF)
		tempC=(tempF-32)/1.8
        tempC=mat.arredondar(tempC,2)
		escreva("Fahrenheit: ",tempF,"� | Equivale a ",tempC,"� em Celcius")
	}
}