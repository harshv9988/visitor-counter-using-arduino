# visitor-counter-using-arduino
this is an automatic counting system for persons present inside a room and according to that it automatically turns on and off the light and fans present inside a room and also displays the no of persons present in the room on lcd display.
## contributors
Harsh Verma
## componenets used
* Arduino Uno r3
* infrared sensors
* lcd display
* led
* connecting wires
## image of circuit diagram made on eagle cad
![h1](https://user-images.githubusercontent.com/54108949/68573683-39cfac80-048e-11ea-9fab-d4a493ffdf5c.PNG)
## working
So basically arduino is the brain of this system and two infrared sensors connected to it gives it input to perform task.
When someone enters or exit from the room it passes from the frontof the infrared sensors placed on the walls hence detected by the sensor it gives input to arduino which shows ouput(no of person) on the lcd screen.
One sensor is placed on the entry gates and another on the exit gate
According to the number of persons present inside the room it turns off and on the led ,fans presebt in the room.
