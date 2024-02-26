programa {
  funcao inicio() {
    //Declaração de variáveis
    inteiro primeiroNumero, segundoNumero, soma, produto, menorValor, maiorValor
    real media

    //Solicitação para o usuário
    escreva("Digite primeiro número: ")
    leia(primeiroNumero)

    escreva("Digite segundo número: ")
    leia(segundoNumero)

    //Realizar cálculos
    media = (primeiroNumero + segundoNumero)/2

    soma = primeiroNumero + segundoNumero

    produto = primeiroNumero * segundoNumero

    se(primeiroNumero > segundoNumero){
      menorValor = segundoNumero
      maiorValor = primeiroNumero
    }
    senao{
      menorValor = primeiroNumero
      maiorValor = segundoNumero
    }

    //Exibindo resultados
    limpa()
    escreva("Exibindo resultados")
    escreva("\nPrimeiro número: ", primeiroNumero)
    escreva("\nSegundo número: ", segundoNumero)
    escreva("\nMédia: ", media)
    escreva("\nSoma: ", soma)
    escreva("\nProduto: ", produto)
    escreva("\nMenor valor: ", menorValor)
    escreva("\nMaior valor: ", maiorValor)
    

   




 
   }



  }
}
