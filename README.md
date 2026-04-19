Projeto C++ - Variáveis 

![C++](https://img.shields.io/badge/C%2B%2B-Programming-blue?style=for-the-badge\&logo=cplusplus)
![Beginner Friendly](https://img.shields.io/badge/Level-Beginner-green?style=for-the-badge)

---

> 💡 **Nota:** Este README faz parte de uma série para iniciantes em C++, explicando passo a passo os conceitos fundamentais da linguagem.

---

##  Sobre o Projeto

Neste projeto vais aprender o que são **variáveis** e como utilizá-las em C++.

 Objetivo:

* Guardar dados em memória
* Trabalhar com diferentes tipos de dados
* Mostrar valores no ecrã

---

## 💻 Código

```cpp id="k2j4p9"
#include <iostream>
using namespace std;

int main() {
    string nome = "Pessoa";
    int idade = 21;
    float altura = 1.65;

    cout << "Nome: " << nome << endl;
    cout << "Idade: " << idade << endl;
    cout << "Altura: " << altura << endl;

    return 0;
}
```

---

##  Explicação do Código

###  O que são variáveis?

Variáveis são espaços na memória usados para guardar dados.

---

###  Tipos de variáveis

```cpp id="z8p4fa"
string nome = "Pessoa";
int idade = 21;
float altura = 1.65;
```

* `string` → texto
* `int` → números inteiros
* `float` → números decimais

---

###  Mostrar valores

```cpp id="2n8l1x"
cout << "Nome: " << nome << endl;
```

Aqui estamos:

* exibindo texto
* juntando com o valor da variável

---

##  Como executar

### 1. Compilar

```bash id="8y7tqk"
g++ aula2.cpp -o aula2
```

### 2. Executar

```bash id="m0r4yx"
./aula2
```

---

##  Resultado esperado

```bash id="3l7nvp"
Nome: Pessoa
Idade: 21
Altura: 1.65
```

---

##  Objetivo Educacional

Com este exemplo aprendeste:

* O que são variáveis
* Tipos de dados básicos
* Como mostrar informação no ecrã

---

## Próximos passos

👉 No próximo dia vais aprender:

* Entrada de dados (`cin`)
* Interação com o utilizador

---

## 👩🏽‍💻 Autora

**Erica Tatiana**
🚀 Desenvolvedora em evolução

---

## ⭐ Apoio

Se este projeto te ajudou, deixa uma ⭐ no repositório!
