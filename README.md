# Mechanical Keyboard

## Overview

This Mechanical Keyboard is a custom 75-key Alice mechanical keyboard built around a Raspberry Pi Pico / RP2040. It has a 5×15 key matrix, per-key SK6812 MINI-E RGB lighting, an EC11 rotary encoder with push switch, and a 128×32 I2C OLED display. I learned how to stitch together different parts, and I made this in hopes of a more ergonomic keyboard. 

I estimate I need 125$ for funding. Any extra funds will be returned to Hack Club

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

## BOM

| Item | Part / Variant | Qty | Unit (USD) | Total (USD) | Link |
|---|---|---:|---:|---:|---|
| Raspberry Pi Pico | Raspberry Pi SC0915 (RP2040) | 1 | $4.59 | $4.59 | [DigiKey](https://www.digikey.com/en/products/detail/raspberry-pi/SC0915/13624793) |
| 1N4148 diode (DO-35) | onsemi 1N4148TA | 100 | $0.0336 | $3.36 | [DigiKey](https://www.digikey.com/en/products/detail/onsemi/1N4148TA/1532747) |
| Kailh MX hot-swap socket | Kailh CPG151101S11 | 80 | $0.10 | $8.00 | [KBDfans](https://kbdfans.com/products/mechanical-keyboard-switches-kailh-pcb-socket?variant=39678399381643) |
| EPOMAKER Creamy Jade switch | Creamy Jade Switch Set, 100 pcs (5-pin MX linear) | 1 | $19.99 | $19.99 | [EPOMAKER](https://epomaker.com/products/epomaker-creamy-jade-switch-set?variant=49273295831348) |
| SK6812 MINI-E RGB LED | SK-6812 MINI-E RGB LEDs, 25-pack | 4 | $5.99 | $23.96 | [Keebio](https://keeb.io/products/sk-6812-mini-e-rgb-leds-12-pack) |
| 0.91in 128x32 I2C OLED | HiLetgo 0.91in SSD1306 128x32 I2C | 1 | $6.49 | $6.49 | [Amazon](https://www.amazon.com/dp/B01N0KIVUX) |
| EC11 rotary encoder with push switch | Rotary Encoder - EC11, 20mm knurled shaft | 1 | $1.99 | $1.99 | [Keebio](https://keeb.io/products/rotary-encoder-ec11) |
| PCB-mount MX stabilizer | Cherry MX Stabilizer, 2u PCB Mount (2-pack) | 2 | $3.98 | $7.96 | [Keebio](https://keeb.io/products/cherry-mx-stabilizer?variant=39511997382750) |
| 100 nF capacitor (0805) | Samsung CL21B104KBCNNNC | 20 | $0.045 | $0.90 | [DigiKey](https://www.digikey.com/en/products/detail/samsung-electro-mechanics/CL21B104KBCNNNC/3886661) |
| 100 uF capacitor (1206, 10 V) | Murata GRM31CR61A107MEA8L | 2 | $0.55 | $1.10 | [DigiKey](https://www.digikey.com/en/products/detail/murata-electronics/GRM31CR61A107MEA8L/16033775) |
| 330 ohm resistor (0805) | Yageo RC0805FR-07330RL | 10 | $0.034 | $0.34 | [DigiKey](https://www.digikey.com/en/products/detail/yageo/RC0805FR-07330RL/727866) |
| Keycaps | Daylight PBT translucent keycaps, OEM profile, 135 keys - TopPrint White (keycaps only) | 1 | $11.15 | $11.15 | [AliExpress](https://www.aliexpress.us/item/3256810405041338.html) |
| PCB (5 pcs) | JLCPCB 360 x 155 mm, 2-layer, 1.6 mm FR-4 | 1 | $30.90 | $30.90 | [JLCPCB](https://cart.jlcpcb.com/quote) |
| **Total** | | | | **$120.73** | |
