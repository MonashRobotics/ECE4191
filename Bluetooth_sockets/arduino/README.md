### Arduino bluetooth interfacing using an HC-05 (or HM-10 BLE) bluetooth module

An example of bluetooth communication between an arduino nano connected to an HC-05 bluetooth module and an android terminal app. NB, remember to connect tx1 to rx2 and rx1 to tx2 when linking serial devices 1 and 2, unless you are trying to do a direct pipethrough to the arduino serial monitor. 

This example listens to strings sent to the bluetooth module, and echos them back to the sender. If the string sent is "Sweep", the arduino will trigger a 180 sweep of a servo motor connected to pin 9. As a simple testing program, I used the [serial bluetooth terminal android app](https://play.google.com/store/apps/details?id=de.kai_morich.serial_bluetooth_terminal) to connect to my bluetooth module and send/ receive commands. There are quite a few of these apps around, but this one worked well for me.
