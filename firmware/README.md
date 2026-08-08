# Firmware

This folder contains the board-specific QMK sources and the compiled UF2 for the Eastern Style keyboard. The complete QMK checkout used for the build is in `../qmk_firmware`.

To flash the supplied build, put the RP2040 into bootloader mode and copy `eastern_style_default.uf2` to the mounted drive. To rebuild, compile the `eastern_style` keyboard with the `default` keymap from the QMK checkout.
