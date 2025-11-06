# Trabalho de Fundamentos de Teoria da Computação (FTC)

Este projeto contém implementações em linguagem C para conceitos fundamentais de teoria dos conjuntos, abordando operações básicas e análise de relações.

---

## 1. Operações com Teoria de Conjuntos

Implementação de funções em `C` que, com base em dois conjuntos fornecidos, determinam as seguintes operações:

* **União de Conjuntos**
* **Interseção de Conjuntos**
* **Diferença de Conjuntos**

### 📋 Requisitos de Execução

O programa deve ler dois conjuntos digitados pelo usuário e, em seguida, realizar e exibir os resultados das operações solicitadas.

---

## 2. Análise de Relações entre Conjuntos

Implementação de uma função em `C` que, com base em um conjunto e uma relação fornecida, determina se a relação possui as seguintes propriedades:

* **Reflexiva**
* **Simétrica**
* **Transitiva**

### 📋 Requisitos de Execução

O programa deve primeiro ler o conjunto e, em seguida, a relação que será analisada.

---

## 🛠️ Tecnologias Utilizadas

* Linguagem C

## 🚀 Como Compilar e Executar (Sugestão)

1.  **Clone o repositório (se aplicável):**
    ```bash
    git clone [https://github.com/AleSilvaPopov/FTC]
    cd [FTC]
    ```

2.  **Compile os arquivos (exemplo usando `gcc`):**
    ```bash
    # Exemplo para compilar um único arquivo
    gcc -o programa_conjuntos parte1.c -lm
    
    # Exemplo para compilar o outro
    gcc -o programa_relacoes parte2.c -lm
    ```

3.  **Execute o programa:**
    ```bash
    ./programa_conjuntos
    ```
    ou
    ```bash
    ./programa_relacoes
    ```