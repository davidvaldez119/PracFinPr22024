#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>	

typedef struct nodo
{
   int dato;

   struct nodo *sig;
}nodo; 

//***************************************************
int main(int argc, char *argv[])
{
	printf("hola mundo de mierda \n ");
	printf("\n");
	
	return 0 ;
		
}
nodo* inicLista()
{
return NULL;

}

nodo* crearNodo(int dati)
{
  nodo *aux=(nodo *)malloc(sizeof(nodo));
  aux->dato;
  aux->sig;

  return aux;
}

nodo *agregarPpio(nodo *lista, nodo* nuevo)
{
  if(lista == NULL)
  {
    nuevo=lista;
  }else{
         nuevo->sig=lista;
	 lista= nuevo;
       }
   return lista;

}

nodo * agregarOrdenado(nodo *lista , nodo* nuevo)
{
  if(lista == NULL)
  {
    nuevo=lista;

  }else{
	 if(lista->dato >nuevo->dato)
	 {
		 lista=agregarPpio(lista,nuevo);
	 }else{
		 nodo* ante ;
		 nodo *seg;
		 while ((seg)&&(lista->dato < nuevo->dato))
				 {
                                   ante=seg;
				   seg=seg->sig;

				 }
		       nuevo->sig=seg;
		       ante->sig=nuevo;
                
         	 }

  }  
   return lista;

}


nodo *ArchiToList (nodo *lista)
{
   int aux=0;	
   FILE *arch =fopen("nombreArchi","rb");
   if(arch) {
                while(fread(aux,sizeof(int),arch)>0)
		{
                    nodo*nuevo=crearNodo(aux);
		    lista=agregarPpio(lista,nuevo);

		}
             }fclose;
return lista;
}
