## ThermoBuzzer, a Thermosenser to Prevent Over Boiled Pots. 

### What it is
This device integrates a thermosensor, buzzer, and a button, and can make alarms when the temperature (the steam it detects) reaches a certain threshold. 

### Motivation / Inspiration / Problem

One Saturday afternoon my father left the stove, with the water heating up, for almost half an hour until the pot boiled dry and the fire alarm turned on, simply because he forgot the fact that the stove is still on. That moment inspired me to make a change - to build a device that could sense the temperature and alarm people that the burner is still active. 

### How to use it

1. Solder the electrical parts (see BOM) onto the PCB. Insert the PCB into the case and secure using m3 self-tapping screws

2. Insert the battery to start the machine. Slide in the lid and secure using a m3 self-tapping screw

3. Place it near the stoves. 

    Once the temperature continuously reaches 50 degrees (able to modify using a constant), ThermoBuzzer will beep continuously every five minutes until the button is clicked to ensure someone is there.

    Once the temperature reaches 70 degrees (able to modify using a constant), ThermoBuzzer will beep continuously right away until the button is clicked.

4. (Optional) To adjust the temperature threshold, take out the pcb from the case, modify amd reupload the program to the arduino pro mini.

### Code Example
Go checkout the example code in firmware/thermobuzzer.imo and upload it onto the arduino pro mini

For how to upload code onto arduino pro mini using arduino uno, check out 
https://www.instructables.com/How-to-Program-Arduino-Pro-Mini-Using-Arduino-UNO/

### Image of the entire cad
![alt text](images/image-3.png)

### Image of the entire cad (with lid)
![alt text](images/image-4.png)

### Image of the final PCB
![alt text](images/image-2.png)

### Image of the wiring schematic
![alt text](images/image-5.png)


## Product Design

### CAD dimensions
Side + top + base thickness: 2mm
supporting bar: r=4mm, h=4mm
Case height: 2mm base + 4mm supporting bar + 1.6mm board + 15.1mm battery height + 2mm flex + 2mm top

### Circuit Diagram 
![alt text](images/image1.jpg)

### Sub-circuit Description
Diagrams from www.circuitbasics.com. 
#### Temperature sensor (NTC MF11) and Arduino

NTC MF11
The value of the resistor should be roughly equal to the resistance of the thermistor.
![alt text](images/image.png)

#### BME280
Reference links:

BME280
https://randomnerdtutorials.com/bme280-sensor-arduino-pressure-temperature-humidity/

https://docs.cirkitdesigner.com/component/3d8e6da8-841a-47a6-a1aa-0aa902c905e1/aht20bmp280


Code: https://randomnerdtutorials.com/bme280-sensor-arduino-pressure-temperature-humidity/

Arduino Library: adafruit bme280

It supports SPI or I2C communication

| BME280 |	Arduino |
|--|--|
|Vin | 	5V |
|GND |	GND |
|SCL |	A5 |
|SDA |	A4 |

| BME280 |	Arduino |
|--|--|
|SCK (SPI Clock)|	Pin 13|
|SDO (MISO)|	Pin 12|
|SDI (MOSI)|	Pin 11|
|CS (Chip Select)|	Pin 10|


#### Buzzer, Button and Arduino

![alt text](images/image-1.png)

## Requirements (Need future work)
| Req # | Requirements |
|---|---|
| 1.1 | The thermosensor shall be able to measure the temperature accurately for further actions|
| 1.2 | The thermosensor shall be able to beep when the temperature reaches a certain threshold |
| 1.3 | The button should be able to stop the buzzer from beeping |
| 1.4 | The temperature threshold should be adjustable by the user |


### Thanks for checking it out!
Any questions or thoughts, feel free to reach out to atianyi.liang@gmail.com.
