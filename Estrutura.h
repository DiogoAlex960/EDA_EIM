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

//----------------------------Tempos
void TempoMinimo();
void TempoMaximo();
void TempoMedio();

//----------------------------Jobs
void ListaJobs();
void CriarJob();
void RemoverJob();
job *CriarNovoJob();
job *HeadJob();
job *FinalJob();
job *SelecionaJob();

//----------------------------Operacoes
void ListaOperacao();
void CriarOperacao();
void RemoverOperacao();
void AlterarOperacao();
operacao *CriarNovaOperacao();
operacao *CabecalhoOperacao();
operacao *FinalOperacao();
operacao *SelecionaOperacao();
operacao *ProcuraOperacao();
//----------------------------Maquinas
void ListaMaquina();//Listar Maquinas
maquina *CriarNovaMaquina();//Cria uma nova Maquina
maquina *CabecalhoMaquina();//Maquina no cabecalho Superior
maquina *FinalMaquina();//Maquina no cabecalho Inferior
maquina *SelecionaMaquina();//Selecionar Maquina
void *RemoveMaquina();//Remover Maquina
