programa {
  funcao inicio() {
    // DEclara��o de vari�veis
    inteiro matricula, anosTrabalho, idade
    inteiro anoNascimento

    // Solicita��o para o usu�rio
    escreva("Digite sua matr�cula: ")
    leia(matricula)

    escreva("Digite seu de nascimento: ")
    leia(anoNascimento)

    escreva("Quantos anos de trabalho: ")
    leia(anosTrabalho)

    //C�lculo 
    idade = 2024 - anoNascimento

     // Resultados para o usu�rio
    limpa()
    escreva("Exibindo resultados")
    escreva("\nMatr�cula: ", matricula)
    escreva("\nIdade: ", idade)
    escreva("\nAnos de trabalho: ", anosTrabalho)
    
    se (idade >= 65 ou anosTrabalho >= 30) {
    escreva("\nRequer aposentadoria")
    }senao {
    escreva("\nN�o requer aposentadoria")
      }
    }

  }
}
