#include <stdio.h>
#include <stdlib.h>
#define COLUNAS 4
void show(char x[][COLUNAS],int linhas);

void Change(char x[][COLUNAS],int linhas,int *H_P,int *L_P,char Order);

int main()
{


char x[4][4]={{'|','O','X','|'},
              {'|','O','O','|'},
              {'|','K','O','|'},
              {'|','O','O','|'}
};



printf("If you want to quit press q.\n");

char Order='ç';

int side=2;
int height=0;
show(x,4);
while (Order != 'q')
{

printf(" Enter the order :");
scanf(" %c",&Order);

Change(x,4,&side,&height,Order);
/*printf("height: %d\n",height);*/
}

    return 0;
}

void show(char x[][COLUNAS],int linhas)
{

int i,d;
for(i=0;i<linhas;i++)
{
for(d=0;d<linhas;d++)
{
printf("%c",x[i][d]);
}
printf("\n");
}
}

void Change(char x[][COLUNAS],int linhas,int *H_P,int *L_P,char Order)
{

int d=*L_P;
int a=*H_P;

if(Order=='s')
{
x[d][a]='O';
d++;

*L_P=*L_P+1;
x[d][a]='X';
show(x,4);

}
else if(Order=='w')
{
x[d][a]='O';
d--;
*L_P=*L_P-1;
x[d][a]='X';
show(x,4);
}
else if(Order=='a')
{
x[d][a]='O';
a--;
*H_P=*H_P-1;
x[d][a]='X';
show(x,4);
}
else if(Order=='d')
{
x[d][a]='O';
a++;
*H_P=*H_P+1;
x[d][a]='X';
show(x,4);
}
else if(Order=='K')
{
show(x,4);
}
else
{
show(x,4);
printf("Order not recognized.\n");
}

}
