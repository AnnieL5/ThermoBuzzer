## ThermoBuzzer, a Thermosenser to Prevent Over Boiled Pots. 

This device integrates a thermosensor, buzzer, and a button, and can make alarms when the temperature (the steam it detects) reaches a certain threshold. 

### Motivation / Inspiration / Problem

One Saturday afternoon my father left the stove, with the water heating up, for almost half an hour until the pot boiled dry and the fire alarm turned on, simply because he forgot the fact that the stove is still on. That moment inspired me to make a change - to build a device that could sense the temperature and alarm people that the burner is still active. 

### Todo: 
1. A good README
2. Fully completed design
3. Fallout Zine page.

#### README Todo:

2. Add images! A picture is worth a thousand words. Include:

✓ Screenshots of a full 3D model of your project fully assembled
✓ Screenshots of your PCB with components, if you have one
✓ A clear wiring diagram, if you’re not using a PCB
✓ Anything else that makes it clear what your project is and what it’s for

### How to use it

Todo:
- find a way to calibrate the sensor

Place it near the stoves. 

Once the temperature continuously reaches 50 degrees (able to modify using a constant), ThermoBuzzer will beep continuously every five minutes until the button is clicked to ensure someone is there.

Once the temperature reaches 70 degrees (able to modify using a constant), ThermoBuzzer will beep continuously right away until the button is clicked.

## Product Design
### Circuit Diagram
![alt text](images/image1.jpg)

### Sub-circuit Description
Diagrams from www.circuitbasics.com. 
#### Temperature sensor (NTC MF11) and Arduino

NTC MF11
The value of the resistor should be roughly equal to the resistance of the thermistor.
![alt text](image.png)

#### OR 

BME280
https://randomnerdtutorials.com/bme280-sensor-arduino-pressure-temperature-humidity/

https://docs.cirkitdesigner.com/component/3d8e6da8-841a-47a6-a1aa-0aa902c905e1/aht20bmp280


Code: https://randomnerdtutorials.com/bme280-sensor-arduino-pressure-temperature-humidity/

Arduino Library: adafruit bme280

1. Version 1 - I2C communication

| BME280 |	Arduino |
|--|--|
|Vin | 	5V |
|GND |	GND |
|SCL |	A5 |
|SDA |	A4 |

2. Version 2 - SPI or I2C communication

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

![alt text](image-1.png)

## Requirements (Need future work)
| Req # | Requirements | Comments |
|---|---|---|
| | The thermosensor shall be able to measure the temperature accurately for further actions|
| | The thermosensor shall be able to beep when the temperature reaches a certain threshold |
| | The button should be able to stop the buzzer from beeping |
| | The temperature threshold should be adjustable by the user |

## Appendix

### Appendix A. Definitions, Acronyms, and Abbreviations 


### Appendix B. Schematic 


### Appendix C. Parts List 

| Part Name | Module | Note |
|---|---|---|
| Temperature sensor | NTC MF11 | Other options: DHT11/DHT22 (temperature & humidity), DS18B20 (digital, waterproof option), and TMP36 (analog)|

### Appendix D. References

### Thanks for checking it out!
Any questions or thoughts, feel free to reach out to atianyi.liang@gmail.com.
