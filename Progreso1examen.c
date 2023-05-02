#include <stdio.h>

int main() {
    int num, count_neg = 0; // Declaré num y count_neg, inicializando count_neg en 0
    // Ulitice num para almacenar los números introducidos por el usuario y count_neg es un contador para contar cuantos números negativos hay
    
    while (1) { // Utilice while infinito, para finalizar/parar el programa cuando se introduzca un 0
        printf("Introduce un numero (0 para salir): "); // Pido al usuario que introduzca un número
        scanf("%d", &num); // El programa lee el número introducido y se almacena en num
        
        if (num == 0) { // Si el número introducido por el usuario es 0, el programa sale del bucle while
            break;
        }
        
        count_neg += (num < 0); // Si un número es negativo, se suma 1 al contador count_neg. 
        // Puse (num < 0) para que se suma 1 al contador solo si el número es negativo.
    }
    
    printf("Cantidad de numeros negativos introducidos: %d\n", count_neg); // Aqui el programa muestra el usuario la cantidad de números negativos introducidos
    
    return 0; // Aqui el programa retorna 0 para indicar que el programa ha finalizado.
}
