/**
  Generated Main Source File

  Company:
    Microchip Technology Inc.

  File Name:
    main.c

  Summary:
    This is the main file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  Description:
    This header file provides implementations for driver APIs for all modules selected in the GUI.
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.7
        Device            :  PIC16F1778
        Driver Version    :  2.00
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
/*******************************************************************************
 *  DCモータのPWMによるスピードコントローラー
 *  Duty 0～1023を中央値511（Duty50%)から始め、max値1023まで到達したなら減算
 *  0まで達したら、1023まで加算
 ******************************************************************************/
#include "mcc_generated_files/mcc.h"
#include "lcd_lib.h"
#include <stdio.h>

/*
                         Main application
 */
/*  グローバル変数  */
bool Flag = true;
unsigned int Duty = 511;
char Msg1[] = "DC MOTOR SPD CTL";       //タイトル表示
char Msg2[] = "Duty = XXXX";            //Duty用に配列データ確保

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



    /*  液晶表示器の電源　オフしオンする　*/
    LCD_SetLow(); //LCD電源OFF
    __delay_ms(10);
    LCD_SetHigh(); //LCD電源ON
    lcd_init();
    lcd_cmd(0x80); //1行目指定
    lcd_str(Msg1);

    COG3CON0bits.MD = 2; //正転モード

    while (1) {
        sprintf(Msg2, "Duty = %4d", Duty);
        lcd_cmd(0xC0); //2行目指定
        lcd_str(Msg2);
        __delay_ms(50);

        if (S1_GetValue() == 0) { //S1押下確認
            if (Flag == true) { //Duty UP中か確認
                if (Duty < 1024) { //MAXまで達したか確認
                    LED_SetHigh(); //MAX未満ならPWM出力してDutyUP
                    PWM1_LoadDutyValue(Duty++);
                    __delay_ms(10);
                } else { //MAXまで達したなら
                    Flag = false; //Duty Down指示
                }

            } else { //Duty Down中か確認
                if (Duty > 0) { //Minまで達したか確認
                    LED_SetLow(); //Minより大きければPWM出力してDutyDown
                    PWM1_LoadDutyValue(Duty--);
                    __delay_ms(10);
                } else { //MINまで達したなら
                    Flag = true; //Duty UP指示
                }
            }

        }
    }
}