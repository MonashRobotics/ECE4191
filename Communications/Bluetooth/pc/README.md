### Client-server bluetooth communication using sockets

An example of client server communication between two bluetooth capable pcs (I assume these are linux machines). 

The python3.3 socket library handles bluetooth communications in much the same way as ethernet comms. The example scripts in this node demonstrate client server comms. 

To use these you will need to identify the mac address of the bluetooth device on the host (server) pc and enter this in the script. The easiest way to find this is with the `bluetoothctl` command in a linux terminal. This should return a hex address, eg. "AB:AB:AB:CD:CD:CD".

The scripts assume devices are already paired with each other (eg. using the bluetooth pairing option in a gnome desktop environment).



