programa {
  funcao inicio() {
    // Declara��o de vari�veis
    cadeia nome
    inteiro idade
    real primeiraNota, segundaNota, terceiraNota, media
    
    //Solicita��o para o usu�rio
    escreva("Digite seu nome: ")
    leia(nome)

    escreva("Digite sua idade: ")
    leia(idade)

    escreva("Digite sua primeira nota: ")
    leia(primeiraNota)
    
    escreva("Digite sua segunda nota: ")
    leia(segundaNota)

    escreva("Digite sua terceira nota: ")
    leia(terceiraNota)

    //Realizar c�lculos
    media = (primeiraNota + segundaNota + terceiraNota)/3

    //Exibindo resultados para o usu�rio
    escreva("Exibindo resultados")
    escreva("\nNome: ", nome)
    escreva("\nIdade: ", idade)
    escreva("\nPrimeira nota: ", primeiraNota)
    escreva("\nSegunda nota: ", segundaNota)
    escreva("\nTerceira nota: ", terceiraNota)
    escreva("\nM�dia: ", media)

    //Condi��es
    se (media < 7){
    escreva("\nREPROVADO")
    }
    senao{
      escreva("\nAPROVADO")
    }
      
    
    
  }
}
