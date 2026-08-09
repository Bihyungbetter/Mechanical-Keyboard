# Production outputs

- `gerber.zip` — Gerber, drill, and drill-map files
- `bom.csv` — bill of materials
- `bom_readable.csv` — human-readable BOM summary
- `designators.csv` — component designators
- `positions.csv` — placement coordinates
- `netlist.ipc` — IPC netlist export

The supplied purchase items are appended to `bom.csv` as `PURCHASE-*` rows. The screw size and heat-set insert thread size still need to be selected from the listing variants before ordering.
