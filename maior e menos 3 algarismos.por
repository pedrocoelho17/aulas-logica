programa {
  funcao inicio() {
    // Declarando variáveis
    inteiro primeiroNumero, segundoNumero, terceiroNumero
    inteiro maiorValor, menorValor

    // Solicitação para o usuário
    escreva("Digite o primeiro número: ")
    leia(primeiroNumero)

    escreva("Digite o segundo número: ")
    leia(segundoNumero)

    escreva("Digite o terceiro número: ")
    leia(terceiroNumero)
    
    // Cálculos
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

    // Resultados para o usuário
    escreva("Exibindo resultados")
    escreva("\nPrimeiro número: ", primeiroNumero)
    escreva("\nSegundo número: ", segundoNumero)
    escreva("\nTerceiro número: ", terceiroNumero)
    escreva("\nMaior valor: ", maiorValor)
    escreva("\nMenor valor: ", menorValor)

    
  }
}
