# Mechanical Keyboard

## Overview

This Mechanical Keyboard is a custom 75-key Alice mechanical keyboard built around a Raspberry Pi Pico / RP2040. It has a 5×15 key matrix, per-key SK6812 MINI-E RGB lighting, an EC11 rotary encoder with push switch, and a 128×32 I2C OLED display. I learned how to stitch together different parts, and I made this in hopes of a more ergonomic keyboard. 

I do plan to make more unique designs and carvings in the CAD, but I want to first get it approved. School starts for me soon, so it's important for me to get this done asap :D. 
## Features

- 75 MX-compatible hot-swap switch positions
- RP2040 controller
- 75 SK6812 MINI-E addressable RGB LEDs
- Rotary encoder with volume control and mute push switch
- 128×32 I2C OLED display
- QMK firmware with a base layer and function/RGB layer

## Repository layout

- `pcb/` — KiCad PCB, schematic, project, and lighting schematic
- `cad/` — STEP exports for the case and plate parts
- `firmware/` — board-specific QMK sources and the compiled UF2
- `production/` — BOM, designators, placement data, IPC netlist, and Gerber/drill ZIP
- `qmk_firmware/` — local QMK checkout used to build the firmware (excluded from the repository; board-specific sources are in `firmware/`)

## Bill of materials

The authoritative BOM is [`production/bom.csv`](production/bom.csv). In summary, the design uses:

- 1 Raspberry Pi Pico
- 75 MX-compatible hot-swap switches and 75 1N4148 diodes
- 75 SK6812 MINI-E LEDs
- 1 EC11 rotary encoder with push switch
- 1 128×32 I2C OLED display
- 15 × 100 nF capacitors, 1 × 100 µF capacitor, and 1 × 330 Ω resistor
- 4 MX stabilizer positions

The BOM also includes purchase rows for 100 hot-swap sockets, 100 EPOMAKER Creamy Jade switches, two 3 mm Poron foam options, 50 stainless case screws, 100 brass heat-set inserts, and a Keychron Hacker Cherry-profile PBT keycap set. Confirm the screw and insert variants before ordering.

## Pictures
<img width="3296" height="2547" alt="Assembly 1" src="https://github.com/user-attachments/assets/00e7176e-95f6-46d2-90ea-345ecab252ed" />
<img width="1026" height="488" alt="image" src="https://github.com/user-attachments/assets/8ec3c58c-74a6-434d-88b6-5adebc86f66e" />


