# 🧠 Linked List Practice in C / Treino de Lista Ligada em C

[![Language](https://img.shields.io/badge/language-C-blue.svg)](https://en.wikipedia.org/wiki/C_(programming_language))
[![Status](https://img.shields.io/badge/status-learning-success.svg)]()
[![License](https://img.shields.io/badge/license-open-brightgreen.svg)]()

> 🇧🇷 **Treino prático de listas ligadas (linked lists)** em C — incluindo versões **simples** e **duplamente ligadas**.  
> 🇺🇸 **Hands-on practice with linked lists** in C — including **singly** and **doubly linked** list implementations.

---

## 📂 Repository Structure / Estrutura do Repositório

| Folder / Pasta | Description / Descrição |
|----------------|--------------------------|
| **Doubly linked list** | 🇺🇸 Doubly linked list implementation and tests.<br>🇧🇷 Implementação e testes de lista **duplamente ligada**. |
| **Insert node at beginning** | 🇺🇸 Insert a node at the **beginning** of the list.<br>🇧🇷 Inserção de nó no **início** da lista. |
| **Insert a node at n position** | 🇺🇸 Insert a node at a **specific position**.<br>🇧🇷 Inserção de nó em uma **posição específica**. |
| **Delete a node at n position** | 🇺🇸 Delete a node from a **specific position**.<br>🇧🇷 Remoção de nó em uma **posição específica**. |
| **Print_linked_list_with_recursion** | 🇺🇸 Print the list using **recursion**.<br>🇧🇷 Impressão recursiva da lista. |
| **Reverse_liked_list_iterative_method** | 🇺🇸 Reverse the list using an **iterative** approach.<br>🇧🇷 Reversão da lista pelo método **iterativo**. |
| **Reverse_linked_list_recursion** | 🇺🇸 Reverse the list using **recursion**.<br>🇧🇷 Reversão da lista usando **recursão**. |

---

## ⚙️ Features / Funcionalidades

🇺🇸 **Implemented operations:**
- Dynamic node creation with `malloc()`
- Insert:
  - At the beginning
  - At a specific position
  - At the end (in some examples)
- Delete node by position
- Print list iteratively and recursively
- Reverse list (iterative and recursive)
- Doubly linked list with `prev` and `next` pointers

🇧🇷 **Operações implementadas:**
- Criação dinâmica de nós com `malloc()`
- Inserção:
  - No início
  - Em uma posição específica
  - No final (em alguns exemplos)
- Remoção de nó por posição
- Impressão iterativa e recursiva
- Reversão de lista (iterativa e recursiva)
- Lista duplamente ligada com ponteiros `prev` e `next`

---

## 💡 Project Goal / Objetivo do Projeto

🇺🇸  
This repository was created as a personal study project to practice **data structures** in C, with focus on:  
- Working with **double pointers (`t_node **head`)**  
- Understanding the difference between **singly** and **doubly** linked lists  
- Manual **memory management** (`malloc`, `free`)  
- Recursive algorithms on dynamic data structures  

🇧🇷  
Este repositório foi criado como treino pessoal em **estruturas de dados**, com foco em:  
- Uso de **ponteiros duplos (`t_node **head`)**  
- Entendimento da diferença entre listas **simples** e **duplamente ligadas**  
- Prática de **gerenciamento manual de memória** (`malloc`, `free`)  
- Aplicação de **recursão** em estruturas dinâmicas  

---

## 🧩 Node Structure / Estrutura do Nó

```c
typedef struct s_node
{
    int data;
    struct s_node *next;
    struct s_node *prev; // used only in doubly linked lists
} t_node;
