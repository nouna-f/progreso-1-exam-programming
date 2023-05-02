#include <stdio.h>

int main() {
    int num, count_neg = 0; // Declaré num y count_neg, inicializando count_neg en 0
    // Ulitice num para almacenar los números introducidos por el usuario y count_neg es un contador para contar cuantos números negativos hay
    
    while (1) { // Utilice while infinito, para parar el programa cuando se introduzca un 0
        printf("Introduce un numero (0 para salir): "); // Pido al usuario que introduzca un número
        scanf("%d", &num); // El programa lee el número introducido y se almacena en num
        
        