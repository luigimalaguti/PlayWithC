# Esercizio 5

Si vuole implementare la seguente funzione:

```c
unsigned int fattoriale(unsigned char val)
```

La funzione riceve in input un valore sul quale la funzione dovrà calcolari il fattoriale.

Il fattoriale è una funzione del tipo:

![Latex](https://latex.codecogs.com/gif.latex?f(x)&space;=&space;x!&space;=&space;x&space;\cdot&space;(x&space;-&space;1)&space;\cdot&space;...&space;\cdot&space;2&space;\cdot&space;1)

Domande aggiuntive:

1. Qual è il valore massimo che può assumere val affinchè la funzione fattoriale calcoli correttamente il risultato?
2. Se usassimo double come tipo di ritorno per la funzione, e quindi anche per l'implementazione, quale sarebbe il valore massimo?

Risposte:

1. Come viene mostrato dal codice nel file ```main.c```, un unsigned int riesce a rappresentare i numeri fino al 4.294.967.296, essendo formato da 32 bit, 4 Byte. Di conseguenza il fattoriale massimo che si riesce a rappresentare è 12! = 479.001.600, dato che 13! = 6.227.020.800 è maggiore della capienza massima dell'unsigned int.

2. Nel caso usassimo la signature ```double fattoriale(unsigned char val)```, il valore massimo del fattoriale che risulta calcolabile è differente. Infatti sappiamo che il double è un valore decimale a doppia precisione. Questo vuole dire che rappresenta i valori grazie a 64 bit. Con riferimento allo standard [IEEE 754-1985](https://en.wikipedia.org/wiki/IEEE_754-1985), il double utilizza 52 dei suoi 64 bit per rappresentare la parte decimale di un numero, 1 bit per il segno del numero ed infine i restanti 11 bit per rappresentare la parte intera del numero decimale. Il numero viene calcolato seguendo il calcolo in virgola mobile che non approfondiremo, per chi interessato si guardi lo standard ed il calcolo di numeri in virgola mobile.  
Detto ciò segue che il double può rappresentare numeri da 2.22507E-308 a 1.79769E+308, quindi il valore per il quale è possibile calcolarne il fattoriale è 170.
