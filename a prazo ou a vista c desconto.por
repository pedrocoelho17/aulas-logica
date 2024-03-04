programa {
  funcao inicio() {
    inteiro formaPgt, parcelas
    real valorFinal, desconto, preco, valorParcela

    escreva("Preço do produto: ")
    leia(preco)   
    escreva("Qual a forma de pagamento?: ")
    escreva("\n 1 - Pagamento a vista")
    escreva("\n 2 - Pagamento a prazo")
    leia(formaPgt)
    
    escreva("Quantidade de parcelas: ")
    leia(parcelas)

    escolha (formaPgt){
      caso 1:
      valorFinal = preco * 0.9
      caso 2: 
      valorFinal = preco
      }

    escreva("Exibindo resultados")
    escreva("\nValor do produto: ", preco)
    escreva("\nForma de pagamento: ", formaPgt)



  }
}
