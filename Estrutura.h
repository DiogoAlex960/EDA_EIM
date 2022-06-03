//Licenciatura Engenharia Informática Médica
//Diogo Alexandre Mendes Simões Nº15328
//Estrutura de Dados Avançadas



#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include<locale.h>
#include<ctype.h>


typedef struct maquina
{
    int maquinaNum;
    int maquinaTempo;
    struct maquina *Seguinte;
    struct maquina *Anterior;
} maquina;

typedef struct operacao
{
    int operacaoNum;
    int jobNum;
    struct maquina *MaquinaHead;
    struct operacao *Seguinte;
    struct operacao *Anterior;
} operacao;

typedef struct job
{
    int jobis;
    int jobNum;
    struct operacao *OperacaoHead;
    struct job *Seguinte;
} job;

int Dado();

job *read();
void write();

void TempoMinimo();
void TempoMaximo();
void TempoMedio();

void ListaJobs();
void ListaOperacao();
void ListaMaquina();

void CriarOperacao();
void RemoverOperacao();
void AlterarOperacao();




void CriarJob();
void RemoverJob();


job *CriarNovoJob();
operacao *CriarNovaOperacao();
maquina *CriarNovaMaquina();

job *HeadJob();
operacao *CabecalhoOperacao();
maquina *CabecalhoMaquina();

job *FinalJob();
operacao *FinalOperacao();
maquina *FinalMaquina();

job *SelecionaJob();
operacao *SelecionaOperacao();
maquina *SelecionaMaquina();
operacao *ProcuraOperacao();

void *RemoveMaquina();
