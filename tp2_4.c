#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct
{
    int velocidad;
    int anio;
    int cantidad;
    char *tipo_cpu;
}typedef compu;

void lista(compu *arre, char tipos[6][10]);
void vieja(compu *arre);
void velocidad(compu *arre);
int main(){
    srand(time(NULL));
    compu *arre;
    char tipos[6][10]={"Intel","AMD","Celeron","Athlon","Core","Pentium"};
    arre=malloc(5*sizeof(compu));
    lista(arre,tipos);
    vieja(arre);
    velocidad(arre);
    return(0);
}

void lista(compu *arre, char tipos[6][10]){
    int tip;
    
for (int i = 0; i < 5; i++)
{
    arre->velocidad=1+rand()%3;
    arre->anio=2015+rand()%9;
    arre->cantidad=1+rand()%8;
    tip=0+rand()%6;
    arre->tipo_cpu=tipos[tip];
    printf("Compu %d\n",i+1);
    printf("Velocidad: %d GHz\n",arre->velocidad);
    printf("Anio: %d\n",arre->anio);
    printf("Cantidad: %d\n",arre->cantidad);
    printf("Tipo CPU: ");
    puts(arre->tipo_cpu);
    arre++;
}
}

void vieja(compu *arre){
    int menor=2024, pc;
    for (int i = 0; i < 5; i++)
    {
        if (arre->anio<menor)
        {
            menor=arre->anio;
            pc =i+1;
        }
        *arre++;
    }
    printf("La pc mas vieja es la numero %d\n",pc);
}

void velocidad(compu *arre){
    int mayor=0, pc;
    for (int i = 0; i < 5; i++)
    {
        if (arre->velocidad>mayor)
        {
            mayor=arre->velocidad;
            pc =i+1;
        }
        *arre++;
    }
    printf("La pc mas rapida es la numero %d\n",pc);
}