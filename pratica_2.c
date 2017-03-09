#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include "pratica_2.h"

struct lista
{
    float info;
    struct lista *prox;
};

Lista* lst_cria(void)
{
    return NULL;
}


Lista* lst_insere(Lista *l, float i)
{
    Lista* novo = (Lista*)malloc(sizeof(Lista));
    novo ->info = i;
    novo ->prox = l;
    return novo;
}

void lst_imprime(Lista*l)
{

    Lista*p;
    for(p=l; p!=NULL; p=p->prox)
        printf("\n%.1f\t",p->info);
    printf("\n");

}

Lista* lst_busca(Lista*l, float v)
{
    Lista* p;
    for(p=l; p!=NULL; p=p->prox)
    {
        if(p->info == v)
            return p;
    }
    return NULL;
}

void lst_imprime_elemento(Lista*p)
{


    if(p->prox!=NULL)

        printf("\nO elemento digitado eh:%.2f\t\n",p->info);

    else
    {
        printf("\nEste elemento nao esta na lista\n");

    }
}

void lista_imprime_quant_repetidos(Lista* l, float v)
{

    if(lst_vazia(l))
        return;
    else
    {
        Lista* q;
        int cont = 0;
        if(l!=NULL)
        {
            for(q = l; q!=NULL; q=q->prox)
            {
                if(q->info==v)
                    cont++;
            }
        printf("\nA quantidade de elementos iguais %.2f eh: %d\n",v,cont);
        }
        else
           printf("\nNao existem numero iguais a: %.2f\n",v);
    }


}


void lst_imprime_rec(Lista*l)
{
    if(l == NULL)
        return;
    if(l->prox!=NULL)
    {
        printf("%.2f",l->info);
        return;
    }
    lst_imprime_rec(l->prox);

}

Lista* lst_repetidos(Lista* l, float x)
{
    if(l == NULL)
        return l;

    if(l->info == x)
    {
        int cont = 1;
        Lista * p = l;
        l = l->prox;
        cont++;
        printf("A quantidade de numeros iguais a %.2f eh igual a %d",x,cont);
        free(p);

    }
    else
    {
        l->prox = lst_repetidos(l->prox,x);
    }
     return l;


}

int lst_vazia(Lista*l)
{

    if(l==NULL)
        return 1;
    else
        return 0;
}

void lst_libera(Lista *l)
{
    Lista * p = l;
    while (p != NULL)
    {
        Lista *t = p ->prox;
        free(p);
        p=t;
    }
}



/*Lista* lst_concatena(Lista *l, Lista *l2)
{
    Lista *p;
    for(p = l; p->prox!=NULL;p = p->prox)
    {
    }
        p->prox = l2;
        return l;
}*/
