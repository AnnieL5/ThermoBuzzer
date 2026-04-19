## Mar. 21

Todo:
 - [ x ] Finish Research Electronics
    - Might not need the capacitor?
 - [ x ] Complete Schematics
    - need to finalize what part to buy -> version
    - Finalize battery

 - Added product design section of README

Tomorrow:
 - [ ] Select electronics - finish BOM
 - [ ] Finalize Schematics
 - [ ] Work on PCB

## 3.23

1. Continue working on parts

For temperature sensor:
- The AHT20 is a budget-friendly humidity/temp sensor
- BME280 adds pressure for a comprehensive, but sometimes self-heating, environmental package. 
- AHT20+BME280/BMP280 combined module leverages the best of both: AHT20's improved humidity accuracy and the Bosch chip’s precision pressure/temp sensing

2. Finalized parts for Arduino and temperature sensor

Tomorrow:
- Verify if the buzzer needs a capacitor

## April 4
Completed
- Buzzer does not need a capacitor
- Changed schematics a bit - compile a sketch that includes both thermosensors
- Started and almost done with footprints
Tomorrow:
- Hopefully finish footprints and work on pcb tomorrow!!

## 4.5
- [x] Researched more in terms of powering the system
   - Switch from arduino nano to arduino pro mini
      - able to power with 3.3v - same as thermosensor
      - power with a AA battery & a step up converter
      
Tomorrow:
- research scale up converter + buzzer

## 4.6
- [ ]Finalize design:
   - arduino pro mini + BME280 + AA battery + power booster

## 4.15
- [ ] continue work on schematics + footprint
   - Update + complete the schematics

Challenge: 
- Could not figure out the footprint for arduino pro mini
   - found one online but couldn't figure out how to import it into the project
   - Tmr: try just copy pasting it in

## 4.16
Completed:
- Three more footprints assigned!!
- Created my first every custom footprint
Learned:
- How to make a Kicad footprint
   1. Create a rectangle
   - Press Alt + 3 to preview
   - To create a custom footprint: search up the datasheet for a part
Challenge:
- Can not find the dimension for the Arduino pro mini
Tomorrow:
- Arduino pro mini!!

## 4.17
Completed:
- Almost done with arduino pro mini footprints!!
Struggle:
- could not past the schematic
Solved with:
- Create the footprint on with the pcb file. Modify later

## 4.18
Completed:
- Finish arduino pro mini footprint
- Finish assigning pin numbers to all -> no error when importing schematic to PCB
- Imported all parts to PCB and arranged them slightly
Struggle:
- Found a footprint for Battery holder 1xAA
   - potentially switch to a pcb battery holder - searching for it on aliexpress 

Potentially I can combine the pcb for this with the Garage door detector (my future project) -> cheaper to manufacture