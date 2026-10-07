/* =========================================================
   Proyecto: Encender y apagar 1 LED (parpadeo)
   Microcontrolador: PIC16F877A
   Oscilador: Cristal externo de 20 MHz (modo HS)
   LED conectado en RB0 (pin 33)
   ========================================================= */

void main() {
    TRISB.B0 = 0;      // RB0 como salida
    PORTB.B0 = 0;      // LED apagado al inicio

    while(1) {
        PORTB.B0 = 1;  // Enciende el LED
        Delay_ms(500); // Espera 500 ms

        PORTB.B0 = 0;  // Apaga el LED
        Delay_ms(500); // Espera 500 ms
    }
}