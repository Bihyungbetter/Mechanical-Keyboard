# Eastern Style Keyboard

## Overview

Eastern Style is a custom 75-key mechanical keyboard built around a Raspberry Pi Pico / RP2040. It has a 5×15 key matrix, per-key SK6812 MINI-E RGB lighting, an EC11 rotary encoder with push switch, and a 128×32 I2C OLED display.

This repository is organized as a build log and submission package. The PCB, firmware, case/plate exports, fabrication outputs, and BOM are included so the project can be reproduced and documented in one place.

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

## Firmware

The board-specific sources are in [`firmware/keyboards/eastern_style`](firmware/keyboards/eastern_style). The ready-to-flash build is [`firmware/eastern_style_default.uf2`](firmware/eastern_style_default.uf2).

The encoder rotates for volume control and its push switch sends mute. Hold the function key to access bootloader, RGB controls, and media controls. To rebuild with QMK, use the `qmk_firmware` checkout and compile the `eastern_style` keyboard with the `default` keymap.

## CAD and manufacturing

The six STEP files in `cad/` came from the supplied `Case and Plate.zip`. The manufacturing package in `production/gerber.zip` contains copper, solder mask, paste, silkscreen, edge cuts, and PTH/NPTH drill outputs.

## Build status

The repository currently contains the design and production files. Photos of assembly and the finished keyboard can be added to this README as the build progresses.

## Credits and licensing

The repository structure is inspired by [Sage_Hackpad](https://github.com/Bihyungbetter/Sage_Hackpad). The Eastern Style design files and documentation are separate work and are provided for personal use unless otherwise stated.
