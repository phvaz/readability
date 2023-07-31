# Readability

O projeto "Readability" é um programa em C que determina o nível de leitura de um texto usando o índice de Coleman-Liau. Esse índice é uma métrica que indica o grau de educação necessário para entender o texto. O programa solicita ao usuário um texto e, em seguida, calcula o número de letras, palavras e frases para aplicar a fórmula do índice de Coleman-Liau.
## Funcionalidades

O programa possui as seguintes funcionalidades:

  1. Leitura de Texto: O usuário pode inserir um texto para ser analisado.
  2. Contagem de Letras: O programa conta o número de letras no texto, excluindo espaços e caracteres especiais.
  3. Contagem de Palavras: O programa conta o número de palavras no texto com base na separação por espaços.
  4. Contagem de Frases: O programa conta o número de frases no texto com base na presença de pontos, pontos de exclamação e pontos de interrogação.
  5. Cálculo do Índice de Coleman-Liau: O programa utiliza a fórmula do índice de Coleman-Liau para calcular o nível de leitura do texto.
  6. Exibição do Resultado: O programa exibe o nível de leitura do texto em termos de série escolar (por exemplo, "Grade 2" ou "Grade 8"). Se o nível for igual ou superior a 16, é exibida a mensagem "Grade 16+" para indicar um nível de leitura de graduação. Se o nível for menor que 1, é exibida a mensagem "Before Grade 1".

## Como Executar
  1. Certifique-se de ter o compilador GCC instalado no seu sistema.
  2. Compile o programa usando o seguinte comando no terminal: gcc -o readability readability.c
  3. Execute o programa digitando: ./readability
  4. Digite o texto que deseja analisar e pressione Enter.
  5. O programa exibirá o nível de leitura do texto de acordo com o índice de Coleman-Liau.
