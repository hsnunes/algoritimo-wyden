programa {
    inclua biblioteca Matematica --> mat
	funcao inicio() {
		real tempF, tempC
		escreva("Entre com a temperatura em ºFahrenheit: ")
		leia(tempF)
		tempC=(tempF-32)/1.8
        tempC=mat.arredondar(tempC,2)
		escreva("Fahrenheit: ",tempF,"º | Equivale a ",tempC,"º em Celcius")
	}
}