#include "mcc_generated_files/mcc.h"

/*
                         Main application
 */
void main(void)
{
    // initialize the device
    SYSTEM_Initialize();

    // When using interrupts, you need to set the Global and Peripheral Interrupt Enable bits
    // Use the following macros to:

    // Enable the Global Interrupts
    //INTERRUPT_GlobalInterruptEnable();

    // Enable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptEnable();

    // Disable the Global Interrupts
    //INTERRUPT_GlobalInterruptDisable();

    // Disable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptDisable();
    int i;
    while (1)
    {   
        if(S2_PORT == 1){
            VERDE_LAT = 1;
        __delay_ms(3000);
        
        for(i = 0;i < 5;i++){
            VERDE_LAT = !VERDE_LAT;
            __delay_ms(500);
        }
        AMBAR_LAT = 1;
        __delay_ms(2000);
        AMBAR_LAT = 0;
        
        ROJO_LAT = 1;
        __delay_ms(3000);
        ROJO_LAT = 0;
        }
        else{
            LATA = 0;
        }
    }
}
/**
 End of File
*/