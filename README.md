# Arduino-with-P10-Display
A P10 LED Display Module is the most suitable for designing any size of outdoor or indoor LED display advertisement board. ex: The 32*16 module size means that there are 32 LEDs in each row and 16 LEDs in each column. So there is a total of 512 numbers of LEDs present in each module unit. It can fully control with Arduino microcontroller or similar boards.

## Your Contribution ~

If you are aware about P10 boards then you have to agree with huge role of P10 or similar kinda boards in Advertisements as well, So Basically This Repository is all about different different kinds of animations and creative scripting of codes for simple p10 board in ardunio IDE.
In first we are going to use simplest microcontroller which is "Arduino UNO" in our Project. 

YOUR WORK:
- [x] Just code cool animation programs using your own logic and understanding in C/C++ or other suitable lang. further It will use by us in creating Arduino Sketches . :tada:  

Just try to make logic in similar manner~

```C
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

```
## Through Contribution ~

* Improve your coding skills through this Repo.
* Focus on animating things and objects.
* all your "hacktoberfest-accepted" effort/workdone leads you to the amazing swag T-shirt OR Saving tree initiative.
* Create your creative piece of code in "[filename]".md, "[filename]".txt in seperate folder named P10-Animation.      
 
#### REMEMBER ~

- [P10-animations/example.ino] is only for giving you rough idea of actual p10 board program so go for animation logics through that file.
- Just make only C/C++ or other languages animation program for fun/learning perspective wise. 


# D.I.Y Config
![P10 Config](https://circuitdigest.com/sites/default/files/projectimage_mic/Digital-Notice-Board-using-P10-LED-Matrix-Display-and-Arduino.jpg)
![Working of](http://electrobist.com/wp-content/uploads/2018/08/p10.jpg)
