#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int hrsetd1,hrsetd2,hrsetd3;
float notas(float n1,float n2,float n3)
{

    //se as tres notas forem maior que 8
    if( (n1>=7) && (n2>=7) && (n3>=7) )
    {
        hrsetd1=60;
        hrsetd2=60;
        hrsetd3=60;
        //mostrar mesagem que voce esta bem e pode escolher seu ritmo de estudo.
    }
    if( (n1>=7) && (n2>=7) && (n3<7))
    {
        hrsetd1=30;
        hrsetd2=30;
        hrsetd3=120;
        }
    if( (n1>=7) && (n3>=7) && (n2<7))
    {
        hrsetd1=30;
        hrsetd3=30;
        hrsetd2=120;

    }
    if( (n2>=7) && (n3>=7) && (n1<7))
    {
        hrsetd2=30;
        hrsetd3=30;
        hrsetd1=120;
    }
    if( (n1>=7) && (n2<7) && (n3<7))
    {
        hrsetd1=30;
        hrsetd2=75;
        hrsetd3=75;

    }
    if((n1<7) && (n2>=7) && (n3<7))
    {
        hrsetd2=30;
        hrsetd1=75;
        hrsetd3=75;

    }
    if((n1<7) && (n2<7) && (n3>=7))
    {
        hrsetd3=30;
        hrsetd1=75;
        hrsetd2=75;
    }

    if((n1<7) && (n2<7) && (n3<7))
    {
    hrsetd1=60;
    hrsetd2=60;
    hrsetd3=60;
    //deixar mensagem p estudar com mais intensidade, e se poder estudar mais na metearia que voce menos gosta.
    }
}
int main()
{
    int i,j=0;
    char disciplinas[3][50],horasdips[50],horasdips1[50],horasdips2[50];
    float nota[3];

struct
{
    char nome[50],gensino[50],obj[50];
    int idade;
}p;
    setlocale(LC_ALL,"portuguese");
    printf("--------------------BEM VINDO AO PLANEJAMENTO DE ESTUDOS FREE!------------------\n");
    printf("Este programa foi feito para um aluno que est� perdido na sua rotina de estudos\ne deseja melhorar ele,organizando-a com a ajuda do PLANEJAMENTO DE ESTUDOS FREE.");
    printf("\nEst� � uma vers�o teste do programa.\n");
                    int opc;
                    while(opc != 7)

                    {

                    printf("\n-------------------------------------MENU---------------------------------------\n");
                    printf("1 - CADASTRO\n");
                    printf("2 - VISUALIZAR CADASTRO OU ALTERAR CADASTRO.\n");
                    printf("3 - HOR�RIO SEMANAL\n");
                    printf("4 - NOVAS NOTAS (AP�S ESTUDOS DE ACORDO COM O HOR�RIO.\n");
                    printf("5 - MINHA EVOLU��O\n");
                    printf("6 - MEU NOVO HOR�RIO\n");
                    printf("7 - [ENCERRAR] O PLANEJAMENTO DE ESTUDOS FREE.\n");
                       printf("\n--------------------------------------------------------------------------------\n");




                        printf("\n Escolha uma op��o \n");
                        fflush(stdin); //limpeza de buffer

                        scanf("%d",&opc);
                        system("cls");

                        switch(opc)
                        {
                        case 1: //rotina de cadastro


                            printf("\nVoc� entrou na aba de cadastro, agora ter� que preencher alguns\ndados para que obtenha sucesso no seu objetivo.\n");
                            printf(" \nDigite seu nome completo:  ");
                            fflush(stdin);
                            fgets(p.nome,50,stdin);
                            printf(" \nDigite sua idade:  ");
                            fflush(stdin);
                            scanf("%d", &p.idade);
                            printf(" \nDigite seu objetivo:  ");
                            fflush(stdin);
                            fgets(p.obj,50,stdin);
                            fflush(stdin);



                            for(j=0;j<=2;j++){
                            printf(" \nDigite disciplina %d: \n",j+1);
                            fgets(disciplinas[j],50,stdin);
                            fflush(stdin);
                            printf(" \nDigite nota da disciplina %d: ",j+1);
                            scanf("%d", &nota[j]);
                            fflush(stdin);
                            }
//chamar fun��o,com notas indicies
                                        notas(nota[0],nota[1],nota[2]);
                            printf("Voc� pode estudar no turno da manh� ?\n");

                        break;


                        case 2:
                        //rotina de visualiza��o de cadastro visualizacar ate as disiplinas

                        case 3:
                        //mostrar horario v�rios printf

                        break;
                         case 4:
                        //novas notas
                        break;
                         case 5:
                        //evolu��o
                        break;
                         case 6:
                        //novo horario
                        break;

                        default:
                            printf("Voc� digitou uma op��o inv�lida, digite uma op��o valida.");

                        }



                    }


    return 0;
}
