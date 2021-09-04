#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 20

/*autora: Beatriz Lima
  ano: 2021
  disciplina: AlgProg2
  */

/*programa que diz em qual idioma deve ser a conversa entre estudantes de intercambio de diferentes países*/
int main()
{
    int n, k;
    int i, j;
    char s[MAX];
    int cont = 0;

    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &k);
        for(j = 0; j < k; j++)
        {
            scanf("%c", &s[j]);
        }
        for(j = 0; j < k; j++)
        {
            if(s[j] == s[j+1])
                cont = 1;
            else
                cont = 0;
        }
        if(cont == 1)
            printf("%c\n", s[j]);
        else
            printf("ingles\n");
    }



    return 0;
}
