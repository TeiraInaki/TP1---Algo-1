/******************************************************************************
Completar la funcion Dig_Verif que reciba un n�mero como par�metro y devuelva un d�gito verificador calculado de la siguiente manera:

i.	 Se suma cada d�gito del numero.
ii.	 Si obtengo un n�mero de m�s de 2 d�gitos, vuelvo a sumar cada d�gito del resultado.
iii. Se repite ii. hasta llegar a un resultado de una sola cifra, el cual ser� el d�gito verificador.

Ejemplo: 88578:
i.	 Se realiza la suma 8+8+5+7+8=36.
ii.	 Se suma 3+6=9.
iii. Como el resultado es de una sola cifra paro. El d�gito verificador es 9.

 *******************************************************************************/

#include <stdio.h>

// I�aki Teira - Algoritmos y Programacion I

//INICIO DE MI CODIGO
int sumarDigitos(int num, int suma)
{
    if (num >= 0 && num < 10)
    {
        suma += num;
        return suma;
    }
    else
    {
        suma += num % 10;
        sumarDigitos(num / 10, suma);
    }
}

int Dig_Verif(int Numero)
{
    /* INICIO: INGRESE SU CODIGO ACA */
    int valor = Numero;
    int suma = 0;
    do
    {
        suma = 0;
        suma = sumarDigitos(valor, suma);
        valor = suma;       
    } while (suma >= 10 || suma == 0);
    
    return suma;

    /* FIN: INGRESE SU CODIGO ACA */
}
//FIN DE MI CODIGO


int main()
{

    Dig_Verif(1234);
    // Verificacion 0
    if (Dig_Verif(8) == 8)
        printf("Correcto Verificacion 0\n\n");
    else
        printf("Incorrecto Verificacion 0\n\n");

    // Verificacion 1
    if (Dig_Verif(123) == 6)
        printf("Correcto Verificacion 1\n\n");
    else
        printf("Incorrecto Verificacion 1\n\n");

    // Verificacion 2
    if (Dig_Verif(379) == 1)
        printf("Correcto Verificacion 2\n\n");
    else
        printf("Incorrecto Verificacion 2\n\n");

    // Verificacion 3
    if (Dig_Verif(78) == 6)
        printf("Correcto Verificacion 3\n\n");
    else
        printf("Incorrecto Verificacion 3\n\n");

    // Verificacion 4
    if (Dig_Verif(88578) == 9)
        printf("Correcto Verificacion 4\n\n");
    else
        printf("Incorrecto Verificacion 4\n\n");

    return 0;
}