# Midicontroller 

Control Pod from Line6 with Arduino.

## How does it work?

To send commands to Pod you can use Pin 1(TX). The Transmissionspeed is _31250_.


## Transferprotocoll

For every command it has to be send three bytes. 

| State-Byte   | Data-Byte       | Data-Byte     |
| ------------ | --------------- | ------------- |
| Midi-Command | Controller (CC) | Wert (0-127)  |
|  1 001 0000  |    00000000     | 00000000      |


State-Byte consists of:

| 1           | 011       | 0000       |
| ----------- | --------- | ---------- |
| State-Bit   | Commandtype | Midi-Channel |

There are eight commandtypes, but only to relevant.

| Befehl        | Byte       | Dec |      
| ------------- | ---------- | --- |
| ProgramChange | 1 100 0000 | 192 |
| ControlChange | 1 011 0000 | 176 |

## Effects

| Command       | ControllerNr. | Wert    |  
| ------------- | ------------- | ------- |
| BankChange(PC) | 1             | 0 - 127 |
| Stomp (CC)    | 25            | 0 / 127 |
| Mode (CC)     | 50            | 0 / 127 |
| Delay (CC)    | 28            | 0 / 127 |

* CC is ControlChangeCommand 
* PC is ProgramChangeCommand
