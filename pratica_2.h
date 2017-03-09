#ifndef RECURSIVA_H_INCLUDED
#define RECURSIVA_H_INCLUDED

typedef struct lista Lista;


Lista*lst_cria(void);

Lista *lst_insere(Lista *l, float i);

void lst_imprime(Lista*l);

void lst_imprime_elemento(Lista*p);

void lista_imprime_quant_repetidos(Lista* l,float v);

Lista* lst_repetidos(Lista* l, float x);

Lista* lst_concatena(Lista *l, Lista *l2);

Lista* lst_busca(Lista* l, float v);

void lst_imprime_rec(Lista*l);

void lst_libera(Lista *l);

int lst_vazia(Lista*l);


#endif // RECURSIVA_H_INCLUDED
