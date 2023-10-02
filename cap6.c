#define ex65
#include <stdio.h>


#ifdef ex61

int num1, num2;


main()
{
    /* 1 - Escreva um programa que receba via teclado 2 numeros inteiros e
    imprima-os no video com o resultado das 4 operacoes aritmeticas. */


    printf("Digite o primeiro numero: \n");
    scanf("%d", &num1);

    printf("\nDigite o segundo numero: \n");
    scanf("%d", &num2);

    printf("A soma dos dois numeros e: %d + %d = %d\n", num1, num2, num1 + num2);

    printf("A subtracao dos dois numeros e: %d - %d = %d\n", num1, num2, num1 - num2);

    printf("A multiplicacao dos dois numeros e: %d * %d = %d\n", num1, num2, num1 * num2);

    printf("A divisao dos dois numeros e: %d / %d = %f\n", num1, num2, (float)num1 / (float)num2);


    printf("\nDigite X para sair  \n");
        char saida;
        while(saida != 'X' && saida != 'x') {
        scanf(" %c", &saida);

            if(saida != 'X' && saida != 'x') {
            printf("Erro, digite novamente  \n");
            }
        }

}
#endif // ex61

#ifdef ex62


int num1, num2;
    int result;

main()
{
    /* 2 - Reescreva o exercicio anterior utilizando operadores de atribuicao
    composta. */


    printf("Digite o primeiro numero: \n");
    scanf("%d", &num1);

    printf("\nDigite o segundo numero: \n");
    scanf("%d", &num2);

    result = num1;

    printf("A soma dos dois numeros e: %d + %d = %d\n", num1, num2, result += num2);

    result = num1;
    printf("A subtracao dos dois numeros e: %d - %d = %d\n", num1, num2, result -= num2);
    result = num1;
    printf("A multiplicacao dos dois numeros e: %d * %d = %d\n", num1, num2, result *= num2);
    result = num1;
    printf("A divisao dos dois numeros e: %d / %d = %f\n", num1, num2, (float)result / (float)num2);
    result = num1;

    printf("\nDigite X para sair  \n");
        char saida;
        while(saida != 'X' && saida != 'x') {
        scanf(" %c", &saida);

            if(saida != 'X' && saida != 'x') {
            printf("Erro, digite novamente  \n");
            }
        }

}

#endif // ex62


#ifdef ex63



int nacd, nacm, naca, d, m, a;
int resa, resm, resd;

main()
{

    /* 3 - Escreva um programa para determinar a idade de uma pessoa, em anos, meses e
    dias, recebendo via teclado a data (dia, mes e ano) do seu nascimento e a
    data (dia, mes e ano) atual. */


    printf("digite o dia do seu nascimento: \n");
    scanf("%d", &nacd);

    printf("digite o mes do seu nascimento: \n");
    scanf("%d", &nacm);

    printf("digite o ano do seu nascimento: \n");
    scanf("%d", &naca);

    printf("digite o dia da data atual: \n");
    scanf("%d", &d);

    printf("digite o mes da data atual: \n");
    scanf("%d", &m);

    printf("digite o ano da data atual: \n");
    scanf("%d", &a);

    if ( m > nacm )
        resa = ( a - naca ) +1;
    else
        if ( m < nacm )
            resa = ( a - naca );
        else
            if( d > nacd )
                resa = ( a - naca ) + 1;
            else
                if( d < nacd )
                    resa = ( a - naca );
                else
                    resa = ( a - naca ) + 1;

    printf(" Sua idade em anos e: %d anos\n", resa);


    if ( m > nacm)
        resm = ((( a - naca) + 1 ) * 12 ) + ( m - nacm);
    else
        if ( m < nacm)
            resm = (( a - naca) * 12 ) + ( nacm - m);
        else
            if ( d > nacd)
                resm = ((( a - naca) + 1 ) * 12 ) + ( m - nacm);
            else
                resm = (( a - naca) * 12 ) + ( nacm - m);

    printf(" Sua idade em meses e: %d meses \n", resm);


    if( m > nacm && d > nacd )
        resd = (((( a - naca) + 1 ) * 12 ) * 30 ) +  (((( m - nacm) + 1) * 12 ) * 30 ) + ( d - nacd);
    else
        if ( m > nacm && d == nacd )
            resd = (((( a - naca) + 1 ) * 12 ) * 30 ) + (((( m - nacm) + 1) * 12 ) * 30 );
        else
            if ( m > nacm && d < nacd )
                resd = (((( a - naca) + 1 ) * 12 ) * 30 ) +  ((( m - nacm) * 12 ) * 30 ) + ( nacd - d );
    else
        if( m < nacm && d > nacd )
            resd = ((( a - naca)  * 12 ) * 30 ) + ((( nacm - m) * 12 ) * 30 ) + ( d - nacd);
        else
            if ( m < nacm && d == nacd )
                resd = ((( a - naca)  * 12 ) * 30 ) + ((( nacm - m) * 12 ) * 30 ) + 1;
            else
                if ( m < nacm && d < nacd )
                    resd = ((( a - naca)  * 12 ) * 30 ) + ((( nacm - m) * 12 ) * 30 ) + ( nacd - d);
    else
        if( m == nacm && d > nacd )
            resd = (((( a - naca) + 1 ) * 12 ) * 30 ) +  (((( m - nacm) + 1) * 12 ) * 30 ) + ( d - nacd);
        else
            if( m == nacm && d == nacd )
                resd = (((( a - naca) + 1 ) * 12 ) * 30 ) +  (((( m - nacm) + 1) * 12 ) * 30 ) ;
            else
                resd = ((( a - naca) * 12 ) * 30 ) +  ((( m - nacm) * 12 ) * 30 ) + ( nacd - d);


    printf(" Sua idade em dias e: %d dias\n", resd);

    printf("\nDigite X para sair  \n");
        char saida;
        while(saida != 'X' && saida != 'x') {
        scanf(" %c", &saida);

            if(saida != 'X' && saida != 'x') {
            printf("Erro, digite novamente  \n");
            }
        }

}

#endif // ex63

#ifdef ex64

int d, m, a;
int dias[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
int i;
long int anod;
int sem;
main()
{
    /* 4 - Escreva um programa que receba via teclado uma data (dia, mes, e ano).
    Determine o dia da semana desta data. */

    printf("digite um ano: \n");
    scanf("%d", &a);
    while ( a < 1 )
    {
        printf( "Digite novamente um Ano maior que 0\n");
        printf("digite um ano: \n");
        scanf("%d", &a);
    }
    /*if ( a % 4 == 0 && a % 100 != 0 && a % 400 == 0)
    {
            printf("digite mes: \n");
            scanf("%d", &m);


    }*/
        printf("digite mes: \n");
            scanf("%d", &m);
        while ( m < 1 || m > 12)
        {
            printf( "Digite novamente um Mes entre 1 e 12\n");
            printf("digite mes: \n");
            scanf("%d", &m);
        }
      printf("digite um dia: \n");
    scanf("%d", &d);


    if( a % 4 == 0 && a % 100 != 0 || a % 400 == 0)
    {
        dias[1] = 29;
    }
    else
    {
    dias[1] = 28;
    }
    while( d < 1 || d > dias[m-1])
    {
    printf( "Digite novamente um dia entre 1 e %d\n", dias[m-1]);
    printf("digite um dia: \n");
    scanf("%d", &d);
    }

        anod = ( ( a - 1 ) * 365 ) + ( a/4 ) - ( a/100) + ( a / 400 );

        for( i = 0; i < m - 1 ; i++)
        {
            if( a % 4 == 0 && a % 100 != 0 || a % 400 == 0)
                {
                    dias[1] = 29;
                }
            else
                {
                    dias[1] = 28;
                }
            anod = anod + dias[i];

        }
        anod = anod + d;

        printf( "a quantidade e: %ld\n", anod);

        sem = anod % 7;

        switch ( sem )
        {
            case 0 :

                printf("O dia da Semana correspondente a data e Domingo! \n");
                break;
            case 1 :
                printf("O dia da Semana correspondente a data e Segunda! \n");
                break;
            case 2 :
                printf("O dia da Semana correspondente a data e Terca! \n");
                break;
            case 3 :
                printf("O dia da Semana correspondente a data e Quarta! \n");
                break;
            case 4 :
                printf("O dia da Semana correspondente a data e Quinta! \n");
                break;
            case 5:
                printf("O dia da Semana correspondente a data e Sexta! \n");
                break;
            case 6 :
                printf("O dia da Semana correspondente a data e Sabado! \n");
                break;
        }

            printf("\nDigite X para sair  \n");
        char saida;
        while(saida != 'X' && saida != 'x')
            {
                scanf(" %c", &saida);

                if(saida != 'X' && saida != 'x') {
                printf("Erro, digite novamente  \n");
                }
            }

    }

#endif // ex64

#ifdef ex65

int a, b;
int i;

main()
{
    /* 5 - Escreva um programa que receba via teclado 2 numeros inteiros e execute
    as operacoes logicas bit a bit AND, OU, OU EXCLUSIVO e imprima-os no
    video no formato decimal e hexadecimal. */

    printf("Digite o primeiro numero: ");
    scanf("%d", &a);
    while( a / 2 > 1)
    {
        i++;
    }

    printf("Digite o segundo numero: ");
    scanf("%d", &b);





}




#endif // ex65
