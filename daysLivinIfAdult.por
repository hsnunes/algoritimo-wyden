programa
{

    funcao inicio()
    {
        REAL days, years;
        escreava("Informe o numero de dias: ")
        leia(days)
        years = days / 365;
        escreava("Você deve ter ", years ," anos.\n")
        SE (years >= 18)
        {
            escreava("Você é maior de Idade já!\n")
        }
    }
}