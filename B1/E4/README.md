# Esercizio 4

Implementare la funzione con la seguente signature:

```c
char max_pot10(unsigned int val)
```

La funzione riceve in ingresso un valore intero senza segno. La funzione deve calcolare quale sia l'ordine massimo della potenza del 10 che sia interamente contenuto nel valore passato alla funzione stessa.

Esempio con ```val = 12345```:

- 10 è minore di 12345, ordine 1
- 100 è minore di 12345, ordine 2
- 1000 è minore di 12345, ordine 3
- 10000 è minore di 12345, ordine 4
- 100000 non è minore di 12345, ordine 5

La funzione dovrà ritornare l'ordine 4 della potenza del 10 essendo l'ultima potenza minore del valore val.

Inoltre, se l'ordine dovesse risultare 0, la funzione deve ritornare -1.
