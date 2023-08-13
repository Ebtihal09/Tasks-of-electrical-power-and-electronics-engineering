# Sensors 
## Ultrasonic distance sensor
The distance sensor works to measure the distance of large objects (such as a wall or board) from the sensor by reflecting an ultrasonic wave. Where the sensor sends an ultrasonic wave (Ping) to be shocked and reflected to the sensor (Echo). Knowing the speed of sound, the distance it took for the sound to reflect can be calculated.

### Circuit
The sensor has four terminals, the VCC terminal is connected to pin 5v, and the TRIG terminal was connected to pin 9 which is the input from the Arduino, and the ECHO terminal was connected to pin 10 which is the output from the Arduino, finally the GND terminal was connected to GND on the Arduino board.
Led has also been connected, and the goal is for the led to light up when the distance is less than or equal to 80 cm and to turn off when it is greater than 80 cm.

less than or equal to 80 cm:
![image](https://github.com/Ebtihal09/Tasks-of-electrical-power-and-electronics-engineering/assets/124944456/5c6b6750-d8bc-4be8-967a-ffd5b9b6b3a7)

greater than 80 cm:
![image](https://github.com/Ebtihal09/Tasks-of-electrical-power-and-electronics-engineering/assets/124944456/15498754-9a32-4b4e-812a-ee07e2af8ff8)

## PIR sensor
The PIR sensor is a motion detection sensor that uses passive infrared rays to receive, as it measures the infrared rays emitted by objects that fall within its measurement range.

### Circuit
The sensor has three ports, a GND port and it was connected to the ground port of the Arduino, and a VCC port was connected to the V5 port on the Arduino and an output port that gives a digital signal, and it was connected to pin 7 on the Arduino.
The code works as follows: If the object moves, a 1 signal will be output, and when the object stops moving, a 0 signal will be displayed on the serial monitor.

when the object stops moving:
![image](https://github.com/Ebtihal09/Tasks-of-electrical-power-and-electronics-engineering/assets/124944456/4e2bb9bb-010e-40c8-841f-ce3bcb104ea4)

when the object moves:
![image](https://github.com/Ebtihal09/Tasks-of-electrical-power-and-electronics-engineering/assets/124944456/bad33d4f-1b64-4d06-9f52-60815d7bad2c)


## References:
* https://jeem2.com/experiences-and-projects/ultrasonic/
* https://jeem2.com/experiences-and-projects/pir-motion-trackin-senspr/
