#include <stdio.h>

int main() {
    int num, count_neg = 0;
    // En este caso, no es necesario inicializar count_neg en cero
    // Utilizo count_neg para contar numeros negativos
    
    do {  // Se utilice do-while para garantizar que se lea al menos un número antes de verificar si el usuario desea salir
        printf("Introduce un numero (0 para salir): ");
        scanf("%d", &num);
        
        if (num < 0) {
            count_neg++;
        }
    } while (num != 0);  // El bucle se repetirá mientras el usuario no introduzca el número cero
    
    printf("Cantidad de numeros negativos introducidos: %d\n", count_neg);
    
    return 0;
}
