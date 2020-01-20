#include <stdio.h>

void main() {
    float circuit_size, minimum_time_seconds, second_minimum_time_seconds; 
    float minimum_time_minutes, second_minimum_time_minutes;

    printf("Entre com o tamanho do circuito (km): ");
    scanf("%f", &circuit_size);
    printf("Entre com o menor tempo (m s.ms): ");
    scanf("%f %f", &minimum_time_minutes, &minimum_time_seconds);
    printf("Entre com o segundo menor tempo (m s.ms): ");
    scanf("%f %f", &second_minimum_time_minutes, &second_minimum_time_seconds);

    float minimum_time_hours = minimum_time_minutes / 60 + minimum_time_seconds / 3600;
    float minimum_speed = circuit_size / minimum_time_hours;

    printf("A velocidade média do primeiro colocado foi %.2f km/h\n", minimum_speed);

    float second_minimum_total_seconds = second_minimum_time_minutes * 60 + second_minimum_time_seconds;
    float minimum_time_total_seconds = minimum_time_hours * 3600;

    printf ("A diferença de tempo entre os carros da primeira fila foi %.2f s\n", second_minimum_total_seconds - minimum_time_total_seconds);
}
