void main() {

    TRISB = 0x00;      // PORTB como salida
    PORTB = 0x00;      // Apagar todos los segmentos al inicio

    while(1) {

        PORTB = 0x3F;  // 0
        Delay_ms(1000);

        PORTB = 0x06;  // 1
        Delay_ms(1000);

        PORTB = 0x5B;  // 2
        Delay_ms(1000);

        PORTB = 0x4F;  // 3
        Delay_ms(1000);

        PORTB = 0x66;  // 4
        Delay_ms(1000);

        PORTB = 0x6D;  // 5
        Delay_ms(1000);

        PORTB = 0x7D;  // 6
        Delay_ms(1000);

        PORTB = 0x07;  // 7
        Delay_ms(1000);

        PORTB = 0x7F;  // 8
        Delay_ms(1000);

        PORTB = 0x6F;  // 9
        Delay_ms(1000);

        PORTB = 0x77;  // A
        Delay_ms(1000);

        PORTB = 0x7C;  // b
        Delay_ms(1000);

        PORTB = 0x39;  // C
        Delay_ms(1000);

        PORTB = 0x5E;  // d
        Delay_ms(1000);

        PORTB = 0x79;  // E
        Delay_ms(1000);

        PORTB = 0x71;  // F
        Delay_ms(1000);
    }
}