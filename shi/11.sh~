#!/bin/bash
rm test.tcl
rm *.gb
rm *.nam
./jb.py
itm ts200.script
sgb2ns ts200.script-0.gb test.tcl
ns nam_show.tcl
nam out.nam
