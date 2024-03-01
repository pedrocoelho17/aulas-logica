programa {
  funcao inicio() {
    // DEclaração de variáveis
    inteiro matricula, anosTrabalho, idade
    inteiro anoNascimento

    // Solicitação para o usuário
    escreva("Digite sua matrícula: ")
    leia(matricula)

    escreva("Digite seu de nascimento: ")
    leia(anoNascimento)

    escreva("Quantos anos de trabalho: ")
    leia(anosTrabalho)

    //Cálculo 
    idade = 2024 - anoNascimento

     // Resultados para o usuário
    limpa()
    escreva("Exibindo resultados")
    escreva("\nMatrícula: ", matricula)
    escreva("\nIdade: ", idade)
    escreva("\nAnos de trabalho: ", anosTrabalho)
    
    se (idade >= 65 ou anosTrabalho >= 30) {
    escreva("\nRequer aposentadoria")
    }senao {
    escreva("\nNão requer aposentadoria")
      }
    }

  }
}
