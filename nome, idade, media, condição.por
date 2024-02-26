programa {
  funcao inicio() {
    // Declaração de variáveis
    cadeia nome
    inteiro idade
    real primeiraNota, segundaNota, terceiraNota, media
    
    //Solicitação para o usuário
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

    //Realizar cálculos
    media = (primeiraNota + segundaNota + terceiraNota)/3

    //Exibindo resultados para o usuário
    escreva("Exibindo resultados")
    escreva("\nNome: ", nome)
    escreva("\nIdade: ", idade)
    escreva("\nPrimeira nota: ", primeiraNota)
    escreva("\nSegunda nota: ", segundaNota)
    escreva("\nTerceira nota: ", terceiraNota)
    escreva("\nMédia: ", media)

    //Condições
    se (media < 7){
    escreva("\nREPROVADO")
    }
    senao{
      escreva("\nAPROVADO")
    }
      
    
    
  }
}
