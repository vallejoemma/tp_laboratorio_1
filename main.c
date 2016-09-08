#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    char seguir='s';
    int opcion=0;
    float num1=0; // Variable del valor A
    float num2=0; // Variable del valor B
    float sumaRes; // Resultado de la suma
    float restaRes; // Resultado de la resta
    float divisionRes; // Resultado de la division
    float multiplicacionRes; // Resultado de la multiplicacion
    float factorialRes; // Resultado del factorial
    float factorialAux; // Auxiliar para validar un error en factorial
    int flagNum1=0; // Bandera para saber si se ingreso el numero A
    int flagNum2=0; // Bandera para saber si se ingreso el numero B
    while(seguir=='s')
    {
        printf("1- Ingresar 1er operando (A=x)\n");
        printf("2- Ingresar 2do operando (B=y)\n");
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operaciones\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1: // Ingresar 1er operando
                num1=getFloat("Ingrese el 1er operando: \n");
                flagNum1=1;
                printf("A=[%.2f]\n",num1);
                break;
            case 2: // Ingresar 2do operando (B=y)
                num2=getFloat("Ingrese el 2do operando: \n");
                flagNum2=1;
                printf("B=[%.2f]\n",num2);
                break;
            case 3: // Calcular la suma (A+B)
                if(flagNum1==1 && flagNum2==1)
                {
                    sumaRes=sumar(num1,num2);
                    printf("A+B=[%.2f]\n",sumaRes);

                }
                else if (flagNum1==0 || flagNum2==0)
                {
                    printf("ERROR,Falta ingresar el algun operando (A) o (B)\n");
                }
                break;
            case 4: // Calcular la resta (A-B)
                if(flagNum1==1 && flagNum2==1)
                {
                    restaRes=restar(num1,num2);

                    printf("A-B=[%.2f]\n",restaRes);

                }
                else if (flagNum1==0 || flagNum2==0)
                {

                    printf("ERROR,Falta ingresar el algun operando (A) o (B)\n");

                }
                break;
            case 5: // Calcular la division (A/B)
                if(flagNum1==1 && flagNum2==1)
                {
                    if (num2==0)
                    {

                        printf("MATH ERROR, Imposible division por 0\n");

                    }
                    else
                    {
                        divisionRes=dividir(num1,num2);

                        printf("A/B=[%.2f]\n",divisionRes);

                    }
                }
                else if (flagNum1==0 || flagNum2==0)
                {

                    printf("ERROR,Falta ingresar el algun operando (A) o (B)\n");

                }
                break;
            case 6: //Calcular la multiplicacion (A*B)
                if(flagNum1==1 && flagNum2==1)
                {
                multiplicacionRes=multiplicar(num1,num2);

                printf("A*B=[%.2f]\n",multiplicacionRes);

                }
                else if (flagNum1==0 || flagNum2==0)
                {

                    printf("ERROR,Falta ingresar el algun operando (A) o (B)\n");

                }
                break;
            case 7: // Calcular el factorial (A!)
                if(flagNum1==1)
                {
                    if (num1>34)
                    {

                        printf("ERROR.Numero demasiado grande\n Por favor ingrese un numero menor a 34 para calcular A!");

                    }
                    else if(num1<0)
                    {

                        printf("MATH ERROR, Ingreso un numero negativo\n");

                    }
                    else
                    {
                        factorialAux= num1-(int)num1;
                        if (factorialAux==0)
                        {
                            factorialRes=factorial(num1);

                            printf("A!=[%.2f]\n",factorialRes);

                        }
                        else
                        {

                            printf("MATH ERROR, Imposible factorial de un numero decimal\n");

                        }
                    }

                }
                else
                {

                    printf("ERROR,Falta ingresar el primer operando (A)\n");

                }
                break;
            case 8: // Calcular todas las operaciones
                if(flagNum1==1 && flagNum2==1)
                {
                    sumaRes=sumar(num1,num2);

                    printf("A+B=[%.2f]\n",sumaRes);

                    restaRes=restar(num1,num2);

                    printf("A-B=[%.2f]\n",restaRes);

                    if (num2==0)
                    {

                        printf("MATH ERROR, Imposible division por 0\n");

                    }
                    else
                    {
                        divisionRes=dividir(num1,num2);

                        printf("A/B=[%.2f]\n",divisionRes);

                    }
                    multiplicacionRes=multiplicar(num1,num2);

                    printf("A*B=[%.2f]\n",multiplicacionRes);

                    if (num1>34)
                    {

                        printf("ERROR,Numero demasiado grande\nPor favor ingrese un numero menor a 34 para calcular A!");

                    }
                    else if(num1<0)
                    {

                        printf("MATH ERROR, Ingreso un numero negativo\n");

                    }
                    else
                    {
                        factorialAux= num1-(int)num1;
                        if (factorialAux==0)
                        {
                            factorialRes=factorial(num1);

                            printf("A!=[%.2f]\n",factorialRes);

                        }
                        else
                        {

                            printf("MATH ERROR, Imposible factorial de un numero decimal\n");

                        }
                    }
                }
                else if (flagNum1==0 || flagNum2==0)
                {

                    printf("ERROR,Falta ingresar el algun operando (A) o (B)\n");

                }
                break;
            case 9:
                seguir = 'n';
                break;
        }
    }

    return 0;
}
