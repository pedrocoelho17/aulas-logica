programa {
  funcao inicio() {
    // Declarando vari�veis
    inteiro primeiroNumero, segundoNumero, terceiroNumero
    inteiro maiorValor, menorValor

    // Solicita��o para o usu�rio
    escreva("Digite o primeiro n�mero: ")
    leia(primeiroNumero)

    escreva("Digite o segundo n�mero: ")
    leia(segundoNumero)

    escreva("Digite o terceiro n�mero: ")
    leia(terceiroNumero)
    
    // C�lculos
    se(primeiroNumero > segundoNumero e primeiroNumero > terceiroNumero) {
      maiorValor = primeiroNumero
    } senao se (segundoNumero > primeiroNumero e segundoNumero > terceiroNumero) {
      maiorValor = segundoNumero
    } senao {
      maiorValor = terceiroNumero
    }

    se(primeiroNumero < segundoNumero e primeiroNumero < terceiroNumero) {
      menorValor = primeiroNumero
    } senao se (segundoNumero < primeiroNumero e segundoNumero < terceiroNumero) {
      menorValor = segundoNumero
    } senao {
      menorValor = terceiroNumero
    }

    // Resultados para o usu�rio
    escreva("Exibindo resultados")
    escreva("\nPrimeiro n�mero: ", primeiroNumero)
    escreva("\nSegundo n�mero: ", segundoNumero)
    escreva("\nTerceiro n�mero: ", terceiroNumero)
    escreva("\nMaior valor: ", maiorValor)
    escreva("\nMenor valor: ", menorValor)

    
  }
}
