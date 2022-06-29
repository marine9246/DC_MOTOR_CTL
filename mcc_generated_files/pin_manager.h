/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.7
        Device            :  PIC16F1778
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.31 and above
        MPLAB 	          :  MPLAB X 5.45	
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set RA6 procedures
#define RA6_SetHigh()            do { LATAbits.LATA6 = 1; } while(0)
#define RA6_SetLow()             do { LATAbits.LATA6 = 0; } while(0)
#define RA6_Toggle()             do { LATAbits.LATA6 = ~LATAbits.LATA6; } while(0)
#define RA6_GetValue()              PORTAbits.RA6
#define RA6_SetDigitalInput()    do { TRISAbits.TRISA6 = 1; } while(0)
#define RA6_SetDigitalOutput()   do { TRISAbits.TRISA6 = 0; } while(0)
#define RA6_SetPullup()             do { WPUAbits.WPUA6 = 1; } while(0)
#define RA6_ResetPullup()           do { WPUAbits.WPUA6 = 0; } while(0)

// get/set RA7 procedures
#define RA7_SetHigh()            do { LATAbits.LATA7 = 1; } while(0)
#define RA7_SetLow()             do { LATAbits.LATA7 = 0; } while(0)
#define RA7_Toggle()             do { LATAbits.LATA7 = ~LATAbits.LATA7; } while(0)
#define RA7_GetValue()              PORTAbits.RA7
#define RA7_SetDigitalInput()    do { TRISAbits.TRISA7 = 1; } while(0)
#define RA7_SetDigitalOutput()   do { TRISAbits.TRISA7 = 0; } while(0)
#define RA7_SetPullup()             do { WPUAbits.WPUA7 = 1; } while(0)
#define RA7_ResetPullup()           do { WPUAbits.WPUA7 = 0; } while(0)

// get/set LCD aliases
#define LCD_TRIS                 TRISBbits.TRISB1
#define LCD_LAT                  LATBbits.LATB1
#define LCD_PORT                 PORTBbits.RB1
#define LCD_WPU                  WPUBbits.WPUB1
#define LCD_ANS                  ANSELBbits.ANSB1
#define LCD_SetHigh()            do { LATBbits.LATB1 = 1; } while(0)
#define LCD_SetLow()             do { LATBbits.LATB1 = 0; } while(0)
#define LCD_Toggle()             do { LATBbits.LATB1 = ~LATBbits.LATB1; } while(0)
#define LCD_GetValue()           PORTBbits.RB1
#define LCD_SetDigitalInput()    do { TRISBbits.TRISB1 = 1; } while(0)
#define LCD_SetDigitalOutput()   do { TRISBbits.TRISB1 = 0; } while(0)
#define LCD_SetPullup()          do { WPUBbits.WPUB1 = 1; } while(0)
#define LCD_ResetPullup()        do { WPUBbits.WPUB1 = 0; } while(0)
#define LCD_SetAnalogMode()      do { ANSELBbits.ANSB1 = 1; } while(0)
#define LCD_SetDigitalMode()     do { ANSELBbits.ANSB1 = 0; } while(0)

// get/set LED aliases
#define LED_TRIS                 TRISBbits.TRISB4
#define LED_LAT                  LATBbits.LATB4
#define LED_PORT                 PORTBbits.RB4
#define LED_WPU                  WPUBbits.WPUB4
#define LED_OD                   ODCONBbits.ODB4
#define LED_ANS                  ANSELBbits.ANSB4
#define LED_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define LED_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define LED_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define LED_GetValue()           PORTBbits.RB4
#define LED_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define LED_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define LED_SetPullup()          do { WPUBbits.WPUB4 = 1; } while(0)
#define LED_ResetPullup()        do { WPUBbits.WPUB4 = 0; } while(0)
#define LED_SetPushPull()        do { ODCONBbits.ODB4 = 0; } while(0)
#define LED_SetOpenDrain()       do { ODCONBbits.ODB4 = 1; } while(0)
#define LED_SetAnalogMode()      do { ANSELBbits.ANSB4 = 1; } while(0)
#define LED_SetDigitalMode()     do { ANSELBbits.ANSB4 = 0; } while(0)

// get/set S1 aliases
#define S1_TRIS                 TRISBbits.TRISB5
#define S1_LAT                  LATBbits.LATB5
#define S1_PORT                 PORTBbits.RB5
#define S1_WPU                  WPUBbits.WPUB5
#define S1_OD                   ODCONBbits.ODB5
#define S1_ANS                  ANSELBbits.ANSB5
#define S1_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define S1_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define S1_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define S1_GetValue()           PORTBbits.RB5
#define S1_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define S1_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define S1_SetPullup()          do { WPUBbits.WPUB5 = 1; } while(0)
#define S1_ResetPullup()        do { WPUBbits.WPUB5 = 0; } while(0)
#define S1_SetPushPull()        do { ODCONBbits.ODB5 = 0; } while(0)
#define S1_SetOpenDrain()       do { ODCONBbits.ODB5 = 1; } while(0)
#define S1_SetAnalogMode()      do { ANSELBbits.ANSB5 = 1; } while(0)
#define S1_SetDigitalMode()     do { ANSELBbits.ANSB5 = 0; } while(0)

// get/set RC0 procedures
#define RC0_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define RC0_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define RC0_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define RC0_GetValue()              PORTCbits.RC0
#define RC0_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define RC0_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define RC0_SetPullup()             do { WPUCbits.WPUC0 = 1; } while(0)
#define RC0_ResetPullup()           do { WPUCbits.WPUC0 = 0; } while(0)

// get/set RC1 procedures
#define RC1_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define RC1_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define RC1_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define RC1_GetValue()              PORTCbits.RC1
#define RC1_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define RC1_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define RC1_SetPullup()             do { WPUCbits.WPUC1 = 1; } while(0)
#define RC1_ResetPullup()           do { WPUCbits.WPUC1 = 0; } while(0)

// get/set RC3 procedures
#define RC3_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define RC3_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define RC3_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define RC3_GetValue()              PORTCbits.RC3
#define RC3_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define RC3_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define RC3_SetPullup()             do { WPUCbits.WPUC3 = 1; } while(0)
#define RC3_ResetPullup()           do { WPUCbits.WPUC3 = 0; } while(0)
#define RC3_SetAnalogMode()         do { ANSELCbits.ANSC3 = 1; } while(0)
#define RC3_SetDigitalMode()        do { ANSELCbits.ANSC3 = 0; } while(0)

// get/set RC4 procedures
#define RC4_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define RC4_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define RC4_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define RC4_GetValue()              PORTCbits.RC4
#define RC4_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define RC4_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define RC4_SetPullup()             do { WPUCbits.WPUC4 = 1; } while(0)
#define RC4_ResetPullup()           do { WPUCbits.WPUC4 = 0; } while(0)
#define RC4_SetAnalogMode()         do { ANSELCbits.ANSC4 = 1; } while(0)
#define RC4_SetDigitalMode()        do { ANSELCbits.ANSC4 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/