/*
  == Hardware connection ==
    OLED   =>    Arduino
  *1. GND    ->    GND
  *2. VCC    ->    3.3V
  *3. SCL    ->    SCK
  *4. SDA    ->    MOSI
  *5. RES    ->    8 
  *6. DC     ->    9
  *7. CS     ->    10
*/


#include <SPI.h>
#include "er_oled.h"

uint8_t oled_buf[WIDTH * HEIGHT / 8];

void setup() {
  Serial.begin(9600);
  Serial.print("OLED Example\n");

  /* display an image of bitmap matrix */
  er_oled_begin();
  er_oled_bitmap(0, 0, PIC1, 72, 40, oled_buf);
  er_oled_display(oled_buf);
  
}

void loop() {

}
