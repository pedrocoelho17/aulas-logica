programa {
  funcao inicio() {
    //Declara��o de vari�veis
    inteiro primeiroNumero, segundoNumero, soma, produto, menorValor, maiorValor
    real media

    //Solicita��o para o usu�rio
    escreva("Digite primeiro n�mero: ")
    leia(primeiroNumero)

    escreva("Digite segundo n�mero: ")
    leia(segundoNumero)

    //Realizar c�lculos
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
    escreva("\nPrimeiro n�mero: ", primeiroNumero)
    escreva("\nSegundo n�mero: ", segundoNumero)
    escreva("\nM�dia: ", media)
    escreva("\nSoma: ", soma)
    escreva("\nProduto: ", produto)
    escreva("\nMenor valor: ", menorValor)
    escreva("\nMaior valor: ", maiorValor)
    

   




 
   }



  }
}
