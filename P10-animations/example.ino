#include <SPI.h>       
#include <DMD.h>    
#include <TimerOne.h>  
#include "SystemFont5x7.h"

#define DISPLAYS_ACROSS 1 //-> Number of P10 panels used, side to side.
#define DISPLAYS_DOWN 1
DMD dmd(DISPLAYS_ACROSS, DISPLAYS_DOWN);

String s,sdis;
char c[1];
int p=0;
char *Text = "";
boolean ret=false;

void ScanDMD() { 
  dmd.scanDisplayBySPI();
}

void setup(void) {
  Timer1.initialize(1000);          
  Timer1.attachInterrupt(ScanDMD);   
  dmd.clearScreen(true);   
  Serial.begin(115200);
}

void loop(void) {
  dmd.selectFont(System5x7);
  
  //----------------------------------------------
  s="HELLO";
  p=0;
  
  for (int i=2; i <= 30; i=i+6) {
    sdis = s.substring(p,p+1);
    sdis.toCharArray(c,2);
    for (int j=-7; j <= 0; j++) {
      dmd.drawString(i,j, c, 1, GRAPHICS_NORMAL);
      delay(50);
    }
    p++;
  }
  //----------------------------------------------
  
  delay(100);
  
  //----------------------------------------------
  s="IN";
  p=0;
  
  for (int i=11; i <= 23; i=i+6) {
    sdis = s.substring(p,p+1);
    sdis.toCharArray(c,2);
    for (int j=17; j >= 9; j--) {
      dmd.drawString(i,j, c, 1, GRAPHICS_NORMAL);
      delay(50);
    }
    p++;
  }
  //----------------------------------------------
  
  delay(1000);
  
  //----------------------------------------------
  for (int i=0; i >= -7; i--) {
    dmd.drawString(4,i, "This", 4, GRAPHICS_NORMAL);
    delay(50);
  }
  //----------------------------------------------
  
  delay(100);
  
  //----------------------------------------------
  for (int i=9; i <= 17; i++) {
    dmd.drawString(11,i, "is", 2, GRAPHICS_NORMAL);
    delay(50);
    dmd.clearScreen(true);
  }
  //----------------------------------------------
  
  delay(500);
  
  //----------------------------------------------
  Text = "World of Creators";
  dmd.drawMarquee(Text,strlen(Text),(32*DISPLAYS_ACROSS)-1,4);
  while(!ret){
    ret=dmd.stepMarquee(-1,0);
    delay(100);
  }
  ret=false;
  //----------------------------------------------
  
  delay(1000);
  
  //----------------------------------------------
  for (int i=0; i <= 16; i++) {
    int b=i-6;
    dmd.drawString(b,4, "b", 1, GRAPHICS_NORMAL);
    int y=32-i;
    dmd.drawString(y,4, "y", 1, GRAPHICS_NORMAL);
    delay(50);
  }
  //----------------------------------------------
  
  delay(500);
  
  //----------------------------------------------
  for (int i=0; i <= 4; i++) {
    dmd.drawString(10,4, "by", 2, GRAPHICS_TOGGLE);
    delay(500);
  }  
  //----------------------------------------------
  
  delay(500);
  
  //----------------------------------------------
  Text = "WELCOME";
  dmd.drawMarquee(Text,strlen(Text),(32*DISPLAYS_ACROSS)-1,4);
  while(!ret){
    ret=dmd.stepMarquee(-1,0);
    delay(100);
  }
  ret=false;
  //----------------------------------------------
  
  delay(500);
}
