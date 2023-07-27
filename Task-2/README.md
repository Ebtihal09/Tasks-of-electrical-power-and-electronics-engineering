# Programming and design of Servo and DC motor circuits
## Servo motor
It is a type of motor that rotates up to 180 degrees, which is used to rotate objects at specific angles and distances.
### Hardware Required
* Arduino UNO R3
*	Servo Motor
*	potentiometer
*	hook-up wires
*	Breadboard
### Circuit
Servo motors have three wires: power, ground, and signal. The power wire is typically red and should be connected to the 5V pin on the Arduino board. The ground wire is typically black and should be connected to a ground pin on the board. The signal pin is orange and should be connected to PWM pin on the board.
### Servo motor -Sweep-
For the Sweep, connect the servo motor to +5V, GND and pin 9.
![Servo motor - Sweep](https://github.com/Ebtihal09/Tasks-of-electrical-power-and-electronics-engineering/assets/124944456/9d832dce-7d1c-4fcb-aaa1-71fe460d4388)
Circuit on the Tincercad: https://www.tinkercad.com/things/jz7qyx3f44n

### Servo motor -Knop-
For the Knob , wire the potentiometer so that its two outer pins are connected to power (+5V) and ground, and its middle pin is connected to A0 on the board. Then, connect the servo motor to +5V, GND and pin 9.
![Servo motor - Knob](https://github.com/Ebtihal09/Tasks-of-electrical-power-and-electronics-engineering/assets/124944456/85c23c18-6d5c-4088-8e1b-f3a7b0d3ad74)
Circuit on the Tincercad: https://www.tinkercad.com/things/gz6FcSsplUo

## DC motor 
It is a type of motor that rotates continuously, where the electrical energy input is converted into mechanical energy, and it has many uses, such as robot wheels.
### Hardware Required
* Arduino UNO R3
* DC motor 
* H-bridge motor driver (L293D)
* 9V Battery
* hook-up wires
### Circuit
The DC motor has two pins, one for negative and another for positive; the negative pin is connected to the OUT1 pin on the H-bridge, and the positive pin is connected to the OUT2 pin on the H-bridge. The battery has two pins, one for negative and another for positive; the negative is connected to the GND pin on the H-bridge; the positive pin is connected to Power1 on the H-bridge; pins Power2 and Enabel1 of the H-bridge are connected to V5 on the Arduino board; and pin GND of the H-bridge is connected to GND of the Arduino board; and pins INT1 and INT2 of the H-bridge are connected to 7 and 6 pins on the Arduino board.

![DC motor ](https://github.com/Ebtihal09/Tasks-of-electrical-power-and-electronics-engineering/assets/124944456/66f6c592-41ab-4525-bb7d-56bf65c7a195)
Circuit on the Tincercad: https://www.tinkercad.com/things/59Eq1kvrOS4

## References
1. https://docs.arduino.cc/learn/electronics/servo-motors
2. https://circuitdigest.com/article/servo-motor-working-and-basics
3. https://byjus.com/physics/dc-motor/





